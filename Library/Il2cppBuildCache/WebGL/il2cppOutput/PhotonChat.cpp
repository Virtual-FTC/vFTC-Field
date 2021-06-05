#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_tE77F56B5E4FC6EC8E61CFD752A1060D22591C64F;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>
struct Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>
struct Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t95750B1CF3F7626EC7AB30893A86E08F445DD75D;
// System.Collections.Generic.IEqualityComparer`1<ExitGames.Client.Photon.ConnectionProtocol>
struct IEqualityComparer_1_tB6694BA0F084F081E69D4AFB926D7B4EF3F52AED;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022;
// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct KeyCollection_tF9EAA31AD02011CF224AC5D26317900B8583EB82;
// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct KeyCollection_t3A3F2FCB1B6890510C25996A2D66663C49D5DCC6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.ChatChannel>
struct KeyCollection_t976A06A7697C0A8E21488A045925AA8E23AF9600;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16;
// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct ValueCollection_tA74087E21F0C57A528010718B19D7BB97894C855;
// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct ValueCollection_t8FBB8230D034EDE51C64D7C97FBD266DEBC4AA98;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.ChatChannel>
struct ValueCollection_t99E707D20731D66FE5CB6D969290D37796C8602A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E;
// System.Collections.Generic.Dictionary`2/Entry<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>[]
struct EntryU5BU5D_tC0174F9717AD172786A76EA0139D71EB22DD7910;
// System.Collections.Generic.Dictionary`2/Entry<ExitGames.Client.Photon.ConnectionProtocol,System.Type>[]
struct EntryU5BU5D_tC082E73FFF7382AAC981B81E23DD0F2E8A6E7AF5;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.ChatChannel>[]
struct EntryU5BU5D_tF26F72B9D46AF47EF05029237BE5D0410189C9BE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D;
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Photon.Chat.AuthenticationValues
struct AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Photon.Chat.ChannelCreationOptions
struct ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11;
// Photon.Chat.ChannelWellKnownProperties
struct ChannelWellKnownProperties_t59F53E93830782FB6DDB2AFC3F76A84D66851822;
// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8;
// Photon.Chat.ChatChannel
struct ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A;
// Photon.Chat.ChatClient
struct ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF;
// Photon.Chat.ChatEventCode
struct ChatEventCode_t2202D7BECCED5FE88A4F8F75E70BDE66697093F4;
// Photon.Chat.ChatOperationCode
struct ChatOperationCode_t2AE46F42C34F7745F04E04373F6D62D77EC3D8EF;
// Photon.Chat.ChatParameterCode
struct ChatParameterCode_t7122E95EB7C2C474001D425685D32A97EC02CB32;
// Photon.Chat.ChatPeer
struct ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Photon.Chat.ErrorCode
struct ErrorCode_tF5FB48D902FA1A185E7877F9E17236B8CDF5C113;
// ExitGames.Client.Photon.EventData
struct EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Chat.IChatClientListener
struct IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_tFD8C85F2CE3A23131FF2458F70342C068F4FCAD9;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_tC756B3160AA277413B40B4A469A84813EA179E92;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE;
// Photon.Chat.ParameterCode
struct ParameterCode_t6FAB9ABF0A365CA1E0CA1730AC6266790F0C7151;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Diagnostics.StackTrace
struct StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_tFE5D8F8E8E3EB7D6A0267E88F57C044BC1D6398B;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_tF5DA55E699EF2A5544A268C50222433343391405;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t70A79E3448D9AFE4A39588FEF5BF190F1C7FB168;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomAuthenticationType_t06629A8CC1D9753E6E36E5212D5E97E94764A673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerStateValue_t817B14A6AC3A29C60100492571625A352791670A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_t3C6FD0679150AB8D4FC9E648D97B1135C73E8C6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05735D340DC6F0A0F9208712869EFC8065DB1040;
IL2CPP_EXTERN_C String_t* _stringLiteral07445570109C992757EB9C92D1E61BACF9E55F91;
IL2CPP_EXTERN_C String_t* _stringLiteral08300235B75F2A81FD859D756F6AF0606BE4C75F;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5A4CDE2DD8CEA11EF5E3451DD217D6A15AD17D;
IL2CPP_EXTERN_C String_t* _stringLiteral0EC6B861684EFBC6F7D7FAB8ED28E170565B09C6;
IL2CPP_EXTERN_C String_t* _stringLiteral14903F1665F1519144501C7CD4831F50EA3BD6F7;
IL2CPP_EXTERN_C String_t* _stringLiteral1605C9390111B876A1B670691E1A90A58C218D34;
IL2CPP_EXTERN_C String_t* _stringLiteral172E7126E04AAF6726B1FF8DE1B89DC2CE7B19CB;
IL2CPP_EXTERN_C String_t* _stringLiteral1778C9BC36C93CBA913DFA368A05534210106FD0;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE9B3CF5AE017754E39259FE1ECEDCE06CA1CBF;
IL2CPP_EXTERN_C String_t* _stringLiteral1F8B28CFFF704DB3769B10DBB3290A133248008A;
IL2CPP_EXTERN_C String_t* _stringLiteral2443176A6E60D62ADAED633DBC0B0319623F9628;
IL2CPP_EXTERN_C String_t* _stringLiteral28109F85CA80D67F72ADABF892ADE86ECA967B8C;
IL2CPP_EXTERN_C String_t* _stringLiteral32ED8AFB67F5C8CAB439735AE376C0A3A92B5785;
IL2CPP_EXTERN_C String_t* _stringLiteral3A92BECAEC51D53182904975AED07C4B2D68B774;
IL2CPP_EXTERN_C String_t* _stringLiteral3BAD168215B6409DFD378F9C0FBE1D56E09E7BB9;
IL2CPP_EXTERN_C String_t* _stringLiteral42A6CA5262FE7F016760CB20C16434E6FB8F41F9;
IL2CPP_EXTERN_C String_t* _stringLiteral42AFA618414215017E02F8F7EC202AD435873C33;
IL2CPP_EXTERN_C String_t* _stringLiteral4481DFAA44A224ED937CFB9CFFB4AEA2435C0B68;
IL2CPP_EXTERN_C String_t* _stringLiteral46EDC735A64857CCBB54DA3A191D860CD77E4BC6;
IL2CPP_EXTERN_C String_t* _stringLiteral4957F3CE2FF4C82ED66B5502CC44FA8717A4B529;
IL2CPP_EXTERN_C String_t* _stringLiteral54E8D47E4F8EF60373D0CB9FE4B271BF0F317D5C;
IL2CPP_EXTERN_C String_t* _stringLiteral55BE77744B85C109A578D5AB1BBDCE3460B55D03;
IL2CPP_EXTERN_C String_t* _stringLiteral56F4CE3D38299DE86F612B0D25AABE7291C45297;
IL2CPP_EXTERN_C String_t* _stringLiteral610AC17320941C760FFD5A2AAB296394668E096E;
IL2CPP_EXTERN_C String_t* _stringLiteral62A96FA0BD40BECCCDE57B87BAAD7344D196B1AA;
IL2CPP_EXTERN_C String_t* _stringLiteral64F9D94F66B496B12E4135DCB8897AC320C6639C;
IL2CPP_EXTERN_C String_t* _stringLiteral68981F620708F9798BD0661A61FE7446FBE99BB1;
IL2CPP_EXTERN_C String_t* _stringLiteral68D7F8920CC9A5C9EB6CEA86D4BDEC243463A827;
IL2CPP_EXTERN_C String_t* _stringLiteral695E1FE878B0520A6C9E2F883C405378F3C8ED3F;
IL2CPP_EXTERN_C String_t* _stringLiteral6E14C99C5905C97FAA1BAD3AA2BB4F3DA6FA045B;
IL2CPP_EXTERN_C String_t* _stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657;
IL2CPP_EXTERN_C String_t* _stringLiteral73442709295E0907BAB5FF689567842B1B7D4C01;
IL2CPP_EXTERN_C String_t* _stringLiteral74935E070666FF5C1140D9B3C70DF02FD27A7B52;
IL2CPP_EXTERN_C String_t* _stringLiteral7526A376267BC0A823CE3D35016583D70B156712;
IL2CPP_EXTERN_C String_t* _stringLiteral7C82A48E16CE752BFB1F18655003416C01CCB606;
IL2CPP_EXTERN_C String_t* _stringLiteral80E7CF73ABE78832F677B6B12A03A933ED22EDCE;
IL2CPP_EXTERN_C String_t* _stringLiteral84F3409D006A485853CE590C6F1C4AA00ABCA26F;
IL2CPP_EXTERN_C String_t* _stringLiteral85018838CBFFFF831100BA4A581064C1BA9AC7EE;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral906FAEAAB91B0A987113A33F7759502D4DB5D57B;
IL2CPP_EXTERN_C String_t* _stringLiteral9A1A0DEF864EC040A24126B7A194105027A0D5D4;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralA4A3F6514E2CF8783CDAB372E72E9BCD8E42ADA3;
IL2CPP_EXTERN_C String_t* _stringLiteralA568F1240679B09643949E7DF946425D824F0480;
IL2CPP_EXTERN_C String_t* _stringLiteralA79561E1B5A82C6D02201984FF815A7AA4012C74;
IL2CPP_EXTERN_C String_t* _stringLiteralA82892C79BF7C320FA3BFB55413015A1377BBF81;
IL2CPP_EXTERN_C String_t* _stringLiteralA86D8D1F03036F57943C7BD6C7E29797408CE238;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F;
IL2CPP_EXTERN_C String_t* _stringLiteralB521CAB8B7F8FEE2FF3D6340BCAF8DE9F95F9A66;
IL2CPP_EXTERN_C String_t* _stringLiteralB7A0517E53F97847DA11954EC5BB6A0ABEB18E1F;
IL2CPP_EXTERN_C String_t* _stringLiteralC542CF71ADE21664A8CC512222D2769749604E30;
IL2CPP_EXTERN_C String_t* _stringLiteralCA95F4BEB64A322209E2124DA276E04A8779F727;
IL2CPP_EXTERN_C String_t* _stringLiteralCB68C7C4D22B75A2C98587E5B35395233B0F5BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralD0A9AA74760549C6A732B0EC13F9519F26FC67E4;
IL2CPP_EXTERN_C String_t* _stringLiteralD54B5B3649F0373103D67B6B7A8A9F07DB0123C4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1EBF015C0D71167210B0E732686AEE3A3E976B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD847B3D35C89810672FAB55F56E8C4AA9705AC;
IL2CPP_EXTERN_C String_t* _stringLiteralDD40E444A09210A07CFBB05D9F7F4710084F5B77;
IL2CPP_EXTERN_C String_t* _stringLiteralDF6A7CB87243568376528ACED2E19B84FDCE6A7C;
IL2CPP_EXTERN_C String_t* _stringLiteralE1838DC1CF507F5E0B8451D36D23E70F3222CC7F;
IL2CPP_EXTERN_C String_t* _stringLiteralE699C4CC364949CA52ACF808CE9CD98DA290FDF5;
IL2CPP_EXTERN_C String_t* _stringLiteralE9E2E3F5DF3ABF46A5982E73A60F7A768AE2BD7D;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2EDCE0F75D698215106063C4484FB4DE0395E9;
IL2CPP_EXTERN_C String_t* _stringLiteralEA6824010DE96FAEEDC5701C23C1377985B771A8;
IL2CPP_EXTERN_C String_t* _stringLiteralF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C;
IL2CPP_EXTERN_C String_t* _stringLiteralF6F2030C05AC7B710C8B0CB6D94308D4BD9FB5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralF7943DAD13F6480BF6073BD0C327DF2B8C0B5F24;
IL2CPP_EXTERN_C String_t* _stringLiteralF836C8AF47AFF33F1175FF955458D6180A087B6E;
IL2CPP_EXTERN_C String_t* _stringLiteralFADBBFF7D5071017209F0FAF588398FCC772AD53;
IL2CPP_EXTERN_C const RuntimeMethod* ChatClient_SendOutgoingInBackground_mDC079C534FBCA7D310F1C7909A4FC84B5675227E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatPeer_GetNameServerAddress_mEAAD5D9ACA62B947FBBB028C44C9E6358715FC8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC01D0E5B04220494DBF03F43BC035D8587B55CA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0487F7D7DE567C8EDEA89BA3B57A241C61F13851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m1CCA2C565635A36E97FE5C7C3430A7EACFCCAC77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m56E961D2F3E1DC360CA03BFE2CF94A82661E23B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m36882D1020E6E9C3647E028F105F11853B4D0AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m59CDAE2F2CF0AAD9D4955B676C4CA11170DCA699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m5549450D53B621A60D4EA2E9BE09E8E784151603_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4D1EBB08117EE40CFF71BA68433AEBF66BE90CFA 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* ___entries_1;
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
	KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___entries_1)); }
	inline EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t615ACEB7BB0C90B6E4CC324A2EAA23513755256E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___keys_7)); }
	inline KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA998D765590D33F85EB3DE2B7074233953998022 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ___values_8)); }
	inline ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t34CD6712C06BB62D73CFFB44390425C11A63AB16 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC0174F9717AD172786A76EA0139D71EB22DD7910* ___entries_1;
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
	KeyCollection_tF9EAA31AD02011CF224AC5D26317900B8583EB82 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA74087E21F0C57A528010718B19D7BB97894C855 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C, ___entries_1)); }
	inline EntryU5BU5D_tC0174F9717AD172786A76EA0139D71EB22DD7910* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC0174F9717AD172786A76EA0139D71EB22DD7910** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC0174F9717AD172786A76EA0139D71EB22DD7910* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C, ___keys_7)); }
	inline KeyCollection_tF9EAA31AD02011CF224AC5D26317900B8583EB82 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF9EAA31AD02011CF224AC5D26317900B8583EB82 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF9EAA31AD02011CF224AC5D26317900B8583EB82 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C, ___values_8)); }
	inline ValueCollection_tA74087E21F0C57A528010718B19D7BB97894C855 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA74087E21F0C57A528010718B19D7BB97894C855 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA74087E21F0C57A528010718B19D7BB97894C855 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC082E73FFF7382AAC981B81E23DD0F2E8A6E7AF5* ___entries_1;
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
	KeyCollection_t3A3F2FCB1B6890510C25996A2D66663C49D5DCC6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8FBB8230D034EDE51C64D7C97FBD266DEBC4AA98 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542, ___entries_1)); }
	inline EntryU5BU5D_tC082E73FFF7382AAC981B81E23DD0F2E8A6E7AF5* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC082E73FFF7382AAC981B81E23DD0F2E8A6E7AF5** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC082E73FFF7382AAC981B81E23DD0F2E8A6E7AF5* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542, ___keys_7)); }
	inline KeyCollection_t3A3F2FCB1B6890510C25996A2D66663C49D5DCC6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3A3F2FCB1B6890510C25996A2D66663C49D5DCC6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3A3F2FCB1B6890510C25996A2D66663C49D5DCC6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542, ___values_8)); }
	inline ValueCollection_t8FBB8230D034EDE51C64D7C97FBD266DEBC4AA98 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8FBB8230D034EDE51C64D7C97FBD266DEBC4AA98 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8FBB8230D034EDE51C64D7C97FBD266DEBC4AA98 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* ___entries_1;
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
	KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___entries_1)); }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA11A27A435DD770DB701FA3C8559ACA8B4E445E7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___keys_7)); }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ___values_8)); }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF26F72B9D46AF47EF05029237BE5D0410189C9BE* ___entries_1;
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
	KeyCollection_t976A06A7697C0A8E21488A045925AA8E23AF9600 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t99E707D20731D66FE5CB6D969290D37796C8602A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___entries_1)); }
	inline EntryU5BU5D_tF26F72B9D46AF47EF05029237BE5D0410189C9BE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF26F72B9D46AF47EF05029237BE5D0410189C9BE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF26F72B9D46AF47EF05029237BE5D0410189C9BE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___keys_7)); }
	inline KeyCollection_t976A06A7697C0A8E21488A045925AA8E23AF9600 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t976A06A7697C0A8E21488A045925AA8E23AF9600 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t976A06A7697C0A8E21488A045925AA8E23AF9600 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ___values_8)); }
	inline ValueCollection_t99E707D20731D66FE5CB6D969290D37796C8602A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t99E707D20731D66FE5CB6D969290D37796C8602A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t99E707D20731D66FE5CB6D969290D37796C8602A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____slots_8)); }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____slots_8)); }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
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


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Photon.Chat.ChannelCreationOptions
struct ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11  : public RuntimeObject
{
public:
	// System.Boolean Photon.Chat.ChannelCreationOptions::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_1;
	// System.Int32 Photon.Chat.ChannelCreationOptions::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11, ___U3CPublishSubscribersU3Ek__BackingField_1)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_1() const { return ___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_1() { return &___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_1(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11, ___U3CMaxSubscribersU3Ek__BackingField_2)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_2() const { return ___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_2() { return &___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_2(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_2 = value;
	}
};

struct ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_StaticFields
{
public:
	// Photon.Chat.ChannelCreationOptions Photon.Chat.ChannelCreationOptions::Default
	ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_StaticFields, ___Default_0)); }
	inline ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * get_Default_0() const { return ___Default_0; }
	inline ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// Photon.Chat.ChannelWellKnownProperties
struct ChannelWellKnownProperties_t59F53E93830782FB6DDB2AFC3F76A84D66851822  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatChannel
struct ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> Photon.Chat.ChatChannel::Senders
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> Photon.Chat.ChatChannel::Messages
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___Messages_2;
	// System.Int32 Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Int32 Photon.Chat.ChatChannel::ChannelID
	int32_t ___ChannelID_4;
	// System.Boolean Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_5;
	// System.Int32 Photon.Chat.ChatChannel::<LastMsgId>k__BackingField
	int32_t ___U3CLastMsgIdU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> Photon.Chat.ChatChannel::properties
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___properties_7;
	// System.Boolean Photon.Chat.ChatChannel::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_8;
	// System.Int32 Photon.Chat.ChatChannel::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatChannel::Subscribers
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___Subscribers_10;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Senders_1() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___Senders_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_Senders_1() const { return ___Senders_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_Senders_1() { return &___Senders_1; }
	inline void set_Senders_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___Senders_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Senders_1), (void*)value);
	}

	inline static int32_t get_offset_of_Messages_2() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___Messages_2)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_Messages_2() const { return ___Messages_2; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_Messages_2() { return &___Messages_2; }
	inline void set_Messages_2(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___Messages_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Messages_2), (void*)value);
	}

	inline static int32_t get_offset_of_MessageLimit_3() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___MessageLimit_3)); }
	inline int32_t get_MessageLimit_3() const { return ___MessageLimit_3; }
	inline int32_t* get_address_of_MessageLimit_3() { return &___MessageLimit_3; }
	inline void set_MessageLimit_3(int32_t value)
	{
		___MessageLimit_3 = value;
	}

	inline static int32_t get_offset_of_ChannelID_4() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___ChannelID_4)); }
	inline int32_t get_ChannelID_4() const { return ___ChannelID_4; }
	inline int32_t* get_address_of_ChannelID_4() { return &___ChannelID_4; }
	inline void set_ChannelID_4(int32_t value)
	{
		___ChannelID_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsPrivateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___U3CIsPrivateU3Ek__BackingField_5)); }
	inline bool get_U3CIsPrivateU3Ek__BackingField_5() const { return ___U3CIsPrivateU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsPrivateU3Ek__BackingField_5() { return &___U3CIsPrivateU3Ek__BackingField_5; }
	inline void set_U3CIsPrivateU3Ek__BackingField_5(bool value)
	{
		___U3CIsPrivateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLastMsgIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___U3CLastMsgIdU3Ek__BackingField_6)); }
	inline int32_t get_U3CLastMsgIdU3Ek__BackingField_6() const { return ___U3CLastMsgIdU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CLastMsgIdU3Ek__BackingField_6() { return &___U3CLastMsgIdU3Ek__BackingField_6; }
	inline void set_U3CLastMsgIdU3Ek__BackingField_6(int32_t value)
	{
		___U3CLastMsgIdU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_properties_7() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___properties_7)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_properties_7() const { return ___properties_7; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_properties_7() { return &___properties_7; }
	inline void set_properties_7(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___properties_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___U3CPublishSubscribersU3Ek__BackingField_8)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_8() const { return ___U3CPublishSubscribersU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_8() { return &___U3CPublishSubscribersU3Ek__BackingField_8; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_8(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___U3CMaxSubscribersU3Ek__BackingField_9)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_9() const { return ___U3CMaxSubscribersU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_9() { return &___U3CMaxSubscribersU3Ek__BackingField_9; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_9(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_Subscribers_10() { return static_cast<int32_t>(offsetof(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A, ___Subscribers_10)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_Subscribers_10() const { return ___Subscribers_10; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_Subscribers_10() { return &___Subscribers_10; }
	inline void set_Subscribers_10(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___Subscribers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Subscribers_10), (void*)value);
	}
};


// Photon.Chat.ChatEventCode
struct ChatEventCode_t2202D7BECCED5FE88A4F8F75E70BDE66697093F4  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatOperationCode
struct ChatOperationCode_t2AE46F42C34F7745F04E04373F6D62D77EC3D8EF  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatParameterCode
struct ChatParameterCode_t7122E95EB7C2C474001D425685D32A97EC02CB32  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatUserStatus
struct ChatUserStatus_t5BEFC2594A50A48C8849AF8514D6FB6CB01CB84E  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ErrorCode
struct ErrorCode_tF5FB48D902FA1A185E7877F9E17236B8CDF5C113  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.EventData
struct EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.EventData::Code
	uint8_t ___Code_0;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.EventData::Parameters
	ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * ___Parameters_1;
	// System.Byte ExitGames.Client.Photon.EventData::SenderKey
	uint8_t ___SenderKey_2;
	// System.Int32 ExitGames.Client.Photon.EventData::sender
	int32_t ___sender_3;
	// System.Byte ExitGames.Client.Photon.EventData::CustomDataKey
	uint8_t ___CustomDataKey_4;
	// System.Object ExitGames.Client.Photon.EventData::customData
	RuntimeObject * ___customData_5;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC, ___Code_0)); }
	inline uint8_t get_Code_0() const { return ___Code_0; }
	inline uint8_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(uint8_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_Parameters_1() { return static_cast<int32_t>(offsetof(EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC, ___Parameters_1)); }
	inline ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * get_Parameters_1() const { return ___Parameters_1; }
	inline ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 ** get_address_of_Parameters_1() { return &___Parameters_1; }
	inline void set_Parameters_1(ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * value)
	{
		___Parameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_1), (void*)value);
	}

	inline static int32_t get_offset_of_SenderKey_2() { return static_cast<int32_t>(offsetof(EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC, ___SenderKey_2)); }
	inline uint8_t get_SenderKey_2() const { return ___SenderKey_2; }
	inline uint8_t* get_address_of_SenderKey_2() { return &___SenderKey_2; }
	inline void set_SenderKey_2(uint8_t value)
	{
		___SenderKey_2 = value;
	}

	inline static int32_t get_offset_of_sender_3() { return static_cast<int32_t>(offsetof(EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC, ___sender_3)); }
	inline int32_t get_sender_3() const { return ___sender_3; }
	inline int32_t* get_address_of_sender_3() { return &___sender_3; }
	inline void set_sender_3(int32_t value)
	{
		___sender_3 = value;
	}

	inline static int32_t get_offset_of_CustomDataKey_4() { return static_cast<int32_t>(offsetof(EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC, ___CustomDataKey_4)); }
	inline uint8_t get_CustomDataKey_4() const { return ___CustomDataKey_4; }
	inline uint8_t* get_address_of_CustomDataKey_4() { return &___CustomDataKey_4; }
	inline void set_CustomDataKey_4(uint8_t value)
	{
		___CustomDataKey_4 = value;
	}

	inline static int32_t get_offset_of_customData_5() { return static_cast<int32_t>(offsetof(EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC, ___customData_5)); }
	inline RuntimeObject * get_customData_5() const { return ___customData_5; }
	inline RuntimeObject ** get_address_of_customData_5() { return &___customData_5; }
	inline void set_customData_5(RuntimeObject * value)
	{
		___customData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customData_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.OperationResponse::Parameters
	ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE, ___Parameters_3)); }
	inline ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * get_Parameters_3() const { return ___Parameters_3; }
	inline ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_3), (void*)value);
	}
};


// Photon.Chat.ParameterCode
struct ParameterCode_t6FAB9ABF0A365CA1E0CA1730AC6266790F0C7151  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary::paramDict
	NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * ___paramDict_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPools ExitGames.Client.Photon.ParameterDictionary::wrapperPools
	StructWrapperPools_tFE5D8F8E8E3EB7D6A0267E88F57C044BC1D6398B * ___wrapperPools_1;

public:
	inline static int32_t get_offset_of_paramDict_0() { return static_cast<int32_t>(offsetof(ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0, ___paramDict_0)); }
	inline NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * get_paramDict_0() const { return ___paramDict_0; }
	inline NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC ** get_address_of_paramDict_0() { return &___paramDict_0; }
	inline void set_paramDict_0(NonAllocDictionary_2_tDFDF0F2C649517C18068477BC39F83B4ED4964AC * value)
	{
		___paramDict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDict_0), (void*)value);
	}

	inline static int32_t get_offset_of_wrapperPools_1() { return static_cast<int32_t>(offsetof(ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0, ___wrapperPools_1)); }
	inline StructWrapperPools_tFE5D8F8E8E3EB7D6A0267E88F57C044BC1D6398B * get_wrapperPools_1() const { return ___wrapperPools_1; }
	inline StructWrapperPools_tFE5D8F8E8E3EB7D6A0267E88F57C044BC1D6398B ** get_address_of_wrapperPools_1() { return &___wrapperPools_1; }
	inline void set_wrapperPools_1(StructWrapperPools_tFE5D8F8E8E3EB7D6A0267E88F57C044BC1D6398B * value)
	{
		___wrapperPools_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrapperPools_1), (void*)value);
	}
};


// System.Diagnostics.StackTrace
struct StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888  : public RuntimeObject
{
public:
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* ___frames_1;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_2;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_3;

public:
	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888, ___frames_1)); }
	inline StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* get_frames_1() const { return ___frames_1; }
	inline StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(StackFrameU5BU5D_t29238B62C287BAACD78F100511D4023931CEA8A1* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_1), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_2() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888, ___captured_traces_2)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_2() const { return ___captured_traces_2; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_2() { return &___captured_traces_2; }
	inline void set_captured_traces_2(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_2), (void*)value);
	}

	inline static int32_t get_offset_of_debug_info_3() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888, ___debug_info_3)); }
	inline bool get_debug_info_3() const { return ___debug_info_3; }
	inline bool* get_address_of_debug_info_3() { return &___debug_info_3; }
	inline void set_debug_info_3(bool value)
	{
		___debug_info_3 = value;
	}
};

struct StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_StaticFields
{
public:
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_4;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_5;

public:
	inline static int32_t get_offset_of_isAotidSet_4() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_StaticFields, ___isAotidSet_4)); }
	inline bool get_isAotidSet_4() const { return ___isAotidSet_4; }
	inline bool* get_address_of_isAotidSet_4() { return &___isAotidSet_4; }
	inline void set_isAotidSet_4(bool value)
	{
		___isAotidSet_4 = value;
	}

	inline static int32_t get_offset_of_aotid_5() { return static_cast<int32_t>(offsetof(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_StaticFields, ___aotid_5)); }
	inline String_t* get_aotid_5() const { return ___aotid_5; }
	inline String_t** get_address_of_aotid_5() { return &___aotid_5; }
	inline void set_aotid_5(String_t* value)
	{
		___aotid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aotid_5), (void*)value);
	}
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
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


// System.ByteEnum
struct ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.ChatDisconnectCause
struct ChatDisconnectCause_t21D2979506DB2E38EB1398E63610B43A1AE629F4 
{
public:
	// System.Int32 Photon.Chat.ChatDisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChatDisconnectCause_t21D2979506DB2E38EB1398E63610B43A1AE629F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.ChatState
struct ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320 
{
public:
	// System.Int32 Photon.Chat.ChatState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_t5C49A564ABE0D267EB531C2C619ADC3DA2FC3104 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t5C49A564ABE0D267EB531C2C619ADC3DA2FC3104, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.CustomAuthenticationType
struct CustomAuthenticationType_t06629A8CC1D9753E6E36E5212D5E97E94764A673 
{
public:
	// System.Byte Photon.Chat.CustomAuthenticationType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_t06629A8CC1D9753E6E36E5212D5E97E94764A673, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_t7665E3740E87BD205C5A1EB42346E6D97766B6B9 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t7665E3740E87BD205C5A1EB42346E6D97766B6B9, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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

// ExitGames.Client.Photon.DeliveryMode
struct DeliveryMode_tFA111939106923CAEB9567AB89AB00457653A14F 
{
public:
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeliveryMode_tFA111939106923CAEB9567AB89AB00457653A14F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// ExitGames.Client.Photon.PeerStateValue
struct PeerStateValue_t817B14A6AC3A29C60100492571625A352791670A 
{
public:
	// System.Byte ExitGames.Client.Photon.PeerStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PeerStateValue_t817B14A6AC3A29C60100492571625A352791670A, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
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


// ExitGames.Client.Photon.SerializationProtocol
struct SerializationProtocol_t9901098B7130E8E61023BC75AB4B31F643996C65 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t9901098B7130E8E61023BC75AB4B31F643996C65, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct StatusCode_t5971490EE27E4EF5658F6A014DCC016CCCF47514 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_t5971490EE27E4EF5658F6A014DCC016CCCF47514, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.TargetFrameworks
struct TargetFrameworks_t1C236997A2820B4E430BDDB4AC8BAC5FCD3C2102 
{
public:
	// System.Int32 ExitGames.Client.Photon.TargetFrameworks::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetFrameworks_t1C236997A2820B4E430BDDB4AC8BAC5FCD3C2102, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.AuthenticationValues
struct AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6  : public RuntimeObject
{
public:
	// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Chat.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Chat.AuthenticationValues::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthGetParametersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthPostDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6, ___U3CTokenU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}
};


// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatAppSettings::AppIdChat
	String_t* ___AppIdChat_0;
	// System.String Photon.Chat.ChatAppSettings::AppVersion
	String_t* ___AppVersion_1;
	// System.String Photon.Chat.ChatAppSettings::FixedRegion
	String_t* ___FixedRegion_2;
	// System.String Photon.Chat.ChatAppSettings::Server
	String_t* ___Server_3;
	// System.UInt16 Photon.Chat.ChatAppSettings::Port
	uint16_t ___Port_4;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatAppSettings::Protocol
	uint8_t ___Protocol_5;
	// System.Boolean Photon.Chat.ChatAppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_6;
	// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatAppSettings::NetworkLogging
	uint8_t ___NetworkLogging_7;

public:
	inline static int32_t get_offset_of_AppIdChat_0() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___AppIdChat_0)); }
	inline String_t* get_AppIdChat_0() const { return ___AppIdChat_0; }
	inline String_t** get_address_of_AppIdChat_0() { return &___AppIdChat_0; }
	inline void set_AppIdChat_0(String_t* value)
	{
		___AppIdChat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdChat_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppVersion_1() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___AppVersion_1)); }
	inline String_t* get_AppVersion_1() const { return ___AppVersion_1; }
	inline String_t** get_address_of_AppVersion_1() { return &___AppVersion_1; }
	inline void set_AppVersion_1(String_t* value)
	{
		___AppVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of_FixedRegion_2() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___FixedRegion_2)); }
	inline String_t* get_FixedRegion_2() const { return ___FixedRegion_2; }
	inline String_t** get_address_of_FixedRegion_2() { return &___FixedRegion_2; }
	inline void set_FixedRegion_2(String_t* value)
	{
		___FixedRegion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedRegion_2), (void*)value);
	}

	inline static int32_t get_offset_of_Server_3() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___Server_3)); }
	inline String_t* get_Server_3() const { return ___Server_3; }
	inline String_t** get_address_of_Server_3() { return &___Server_3; }
	inline void set_Server_3(String_t* value)
	{
		___Server_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Server_3), (void*)value);
	}

	inline static int32_t get_offset_of_Port_4() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___Port_4)); }
	inline uint16_t get_Port_4() const { return ___Port_4; }
	inline uint16_t* get_address_of_Port_4() { return &___Port_4; }
	inline void set_Port_4(uint16_t value)
	{
		___Port_4 = value;
	}

	inline static int32_t get_offset_of_Protocol_5() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___Protocol_5)); }
	inline uint8_t get_Protocol_5() const { return ___Protocol_5; }
	inline uint8_t* get_address_of_Protocol_5() { return &___Protocol_5; }
	inline void set_Protocol_5(uint8_t value)
	{
		___Protocol_5 = value;
	}

	inline static int32_t get_offset_of_EnableProtocolFallback_6() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___EnableProtocolFallback_6)); }
	inline bool get_EnableProtocolFallback_6() const { return ___EnableProtocolFallback_6; }
	inline bool* get_address_of_EnableProtocolFallback_6() { return &___EnableProtocolFallback_6; }
	inline void set_EnableProtocolFallback_6(bool value)
	{
		___EnableProtocolFallback_6 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_7() { return static_cast<int32_t>(offsetof(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8, ___NetworkLogging_7)); }
	inline uint8_t get_NetworkLogging_7() const { return ___NetworkLogging_7; }
	inline uint8_t* get_address_of_NetworkLogging_7() { return &___NetworkLogging_7; }
	inline void set_NetworkLogging_7(uint8_t value)
	{
		___NetworkLogging_7 = value;
	}
};


// Photon.Chat.ChatClient
struct ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF  : public RuntimeObject
{
public:
	// System.Boolean Photon.Chat.ChatClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_3;
	// System.String Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_4;
	// System.String Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_5;
	// System.String Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_6;
	// Photon.Chat.ChatState Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_7;
	// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_8;
	// System.String Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_9;
	// System.String Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_10;
	// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___U3CAuthValuesU3Ek__BackingField_11;
	// System.Int32 Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_12;
	// System.Int32 Photon.Chat.ChatClient::PrivateChatHistoryLength
	int32_t ___PrivateChatHistoryLength_13;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * ___PublicChannels_14;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * ___PrivateChannels_15;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___PublicChannelsUnsubscribing_16;
	// Photon.Chat.IChatClientListener Photon.Chat.ChatClient::listener
	RuntimeObject* ___listener_17;
	// Photon.Chat.ChatPeer Photon.Chat.ChatClient::chatPeer
	ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * ___chatPeer_18;
	// System.Boolean Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_20;
	// System.Nullable`1<System.Int32> Photon.Chat.ChatClient::statusToSetWhenConnected
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___statusToSetWhenConnected_21;
	// System.Object Photon.Chat.ChatClient::messageToSetWhenConnected
	RuntimeObject * ___messageToSetWhenConnected_22;
	// System.Int32 Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_23;
	// System.Int32 Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_24;
	// System.Boolean Photon.Chat.ChatClient::<UseBackgroundWorkerForSending>k__BackingField
	bool ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CEnableProtocolFallbackU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CEnableProtocolFallbackU3Ek__BackingField_3)); }
	inline bool get_U3CEnableProtocolFallbackU3Ek__BackingField_3() const { return ___U3CEnableProtocolFallbackU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnableProtocolFallbackU3Ek__BackingField_3() { return &___U3CEnableProtocolFallbackU3Ek__BackingField_3; }
	inline void set_U3CEnableProtocolFallbackU3Ek__BackingField_3(bool value)
	{
		___U3CEnableProtocolFallbackU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CNameServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CNameServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameServerAddressU3Ek__BackingField_4() const { return ___U3CNameServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameServerAddressU3Ek__BackingField_4() { return &___U3CNameServerAddressU3Ek__BackingField_4; }
	inline void set_U3CNameServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFrontendAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CFrontendAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CFrontendAddressU3Ek__BackingField_5() const { return ___U3CFrontendAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CFrontendAddressU3Ek__BackingField_5() { return &___U3CFrontendAddressU3Ek__BackingField_5; }
	inline void set_U3CFrontendAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CFrontendAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFrontendAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_chatRegion_6() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___chatRegion_6)); }
	inline String_t* get_chatRegion_6() const { return ___chatRegion_6; }
	inline String_t** get_address_of_chatRegion_6() { return &___chatRegion_6; }
	inline void set_chatRegion_6(String_t* value)
	{
		___chatRegion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatRegion_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CStateU3Ek__BackingField_7)); }
	inline int32_t get_U3CStateU3Ek__BackingField_7() const { return ___U3CStateU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_7() { return &___U3CStateU3Ek__BackingField_7; }
	inline void set_U3CStateU3Ek__BackingField_7(int32_t value)
	{
		___U3CStateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CDisconnectedCauseU3Ek__BackingField_8)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_8() const { return ___U3CDisconnectedCauseU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_8() { return &___U3CDisconnectedCauseU3Ek__BackingField_8; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_8(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CAppVersionU3Ek__BackingField_9)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_9() const { return ___U3CAppVersionU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_9() { return &___U3CAppVersionU3Ek__BackingField_9; }
	inline void set_U3CAppVersionU3Ek__BackingField_9(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CAppIdU3Ek__BackingField_10)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_10() const { return ___U3CAppIdU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_10() { return &___U3CAppIdU3Ek__BackingField_10; }
	inline void set_U3CAppIdU3Ek__BackingField_10(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CAuthValuesU3Ek__BackingField_11)); }
	inline AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * get_U3CAuthValuesU3Ek__BackingField_11() const { return ___U3CAuthValuesU3Ek__BackingField_11; }
	inline AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 ** get_address_of_U3CAuthValuesU3Ek__BackingField_11() { return &___U3CAuthValuesU3Ek__BackingField_11; }
	inline void set_U3CAuthValuesU3Ek__BackingField_11(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_MessageLimit_12() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___MessageLimit_12)); }
	inline int32_t get_MessageLimit_12() const { return ___MessageLimit_12; }
	inline int32_t* get_address_of_MessageLimit_12() { return &___MessageLimit_12; }
	inline void set_MessageLimit_12(int32_t value)
	{
		___MessageLimit_12 = value;
	}

	inline static int32_t get_offset_of_PrivateChatHistoryLength_13() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___PrivateChatHistoryLength_13)); }
	inline int32_t get_PrivateChatHistoryLength_13() const { return ___PrivateChatHistoryLength_13; }
	inline int32_t* get_address_of_PrivateChatHistoryLength_13() { return &___PrivateChatHistoryLength_13; }
	inline void set_PrivateChatHistoryLength_13(int32_t value)
	{
		___PrivateChatHistoryLength_13 = value;
	}

	inline static int32_t get_offset_of_PublicChannels_14() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___PublicChannels_14)); }
	inline Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * get_PublicChannels_14() const { return ___PublicChannels_14; }
	inline Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD ** get_address_of_PublicChannels_14() { return &___PublicChannels_14; }
	inline void set_PublicChannels_14(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * value)
	{
		___PublicChannels_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublicChannels_14), (void*)value);
	}

	inline static int32_t get_offset_of_PrivateChannels_15() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___PrivateChannels_15)); }
	inline Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * get_PrivateChannels_15() const { return ___PrivateChannels_15; }
	inline Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD ** get_address_of_PrivateChannels_15() { return &___PrivateChannels_15; }
	inline void set_PrivateChannels_15(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * value)
	{
		___PrivateChannels_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrivateChannels_15), (void*)value);
	}

	inline static int32_t get_offset_of_PublicChannelsUnsubscribing_16() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___PublicChannelsUnsubscribing_16)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_PublicChannelsUnsubscribing_16() const { return ___PublicChannelsUnsubscribing_16; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_PublicChannelsUnsubscribing_16() { return &___PublicChannelsUnsubscribing_16; }
	inline void set_PublicChannelsUnsubscribing_16(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___PublicChannelsUnsubscribing_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublicChannelsUnsubscribing_16), (void*)value);
	}

	inline static int32_t get_offset_of_listener_17() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___listener_17)); }
	inline RuntimeObject* get_listener_17() const { return ___listener_17; }
	inline RuntimeObject** get_address_of_listener_17() { return &___listener_17; }
	inline void set_listener_17(RuntimeObject* value)
	{
		___listener_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_17), (void*)value);
	}

	inline static int32_t get_offset_of_chatPeer_18() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___chatPeer_18)); }
	inline ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * get_chatPeer_18() const { return ___chatPeer_18; }
	inline ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F ** get_address_of_chatPeer_18() { return &___chatPeer_18; }
	inline void set_chatPeer_18(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * value)
	{
		___chatPeer_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatPeer_18), (void*)value);
	}

	inline static int32_t get_offset_of_didAuthenticate_20() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___didAuthenticate_20)); }
	inline bool get_didAuthenticate_20() const { return ___didAuthenticate_20; }
	inline bool* get_address_of_didAuthenticate_20() { return &___didAuthenticate_20; }
	inline void set_didAuthenticate_20(bool value)
	{
		___didAuthenticate_20 = value;
	}

	inline static int32_t get_offset_of_statusToSetWhenConnected_21() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___statusToSetWhenConnected_21)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_statusToSetWhenConnected_21() const { return ___statusToSetWhenConnected_21; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_statusToSetWhenConnected_21() { return &___statusToSetWhenConnected_21; }
	inline void set_statusToSetWhenConnected_21(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___statusToSetWhenConnected_21 = value;
	}

	inline static int32_t get_offset_of_messageToSetWhenConnected_22() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___messageToSetWhenConnected_22)); }
	inline RuntimeObject * get_messageToSetWhenConnected_22() const { return ___messageToSetWhenConnected_22; }
	inline RuntimeObject ** get_address_of_messageToSetWhenConnected_22() { return &___messageToSetWhenConnected_22; }
	inline void set_messageToSetWhenConnected_22(RuntimeObject * value)
	{
		___messageToSetWhenConnected_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageToSetWhenConnected_22), (void*)value);
	}

	inline static int32_t get_offset_of_msDeltaForServiceCalls_23() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___msDeltaForServiceCalls_23)); }
	inline int32_t get_msDeltaForServiceCalls_23() const { return ___msDeltaForServiceCalls_23; }
	inline int32_t* get_address_of_msDeltaForServiceCalls_23() { return &___msDeltaForServiceCalls_23; }
	inline void set_msDeltaForServiceCalls_23(int32_t value)
	{
		___msDeltaForServiceCalls_23 = value;
	}

	inline static int32_t get_offset_of_msTimestampOfLastServiceCall_24() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___msTimestampOfLastServiceCall_24)); }
	inline int32_t get_msTimestampOfLastServiceCall_24() const { return ___msTimestampOfLastServiceCall_24; }
	inline int32_t* get_address_of_msTimestampOfLastServiceCall_24() { return &___msTimestampOfLastServiceCall_24; }
	inline void set_msTimestampOfLastServiceCall_24(int32_t value)
	{
		___msTimestampOfLastServiceCall_24 = value;
	}

	inline static int32_t get_offset_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF, ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25)); }
	inline bool get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25() const { return ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25() { return &___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25; }
	inline void set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25(bool value)
	{
		___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25 = value;
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

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_17;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_18;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 * ___SocketImplementationConfig_19;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_20;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_21;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_22;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_tE77F56B5E4FC6EC8E61CFD752A1060D22591C64F * ___OnDisconnectMessage_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_26;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitResends
	int32_t ___SequenceDeltaLimitResends_28;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SequenceDeltaLimitSends
	int32_t ___SequenceDeltaLimitSends_29;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_30;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_31;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_32;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_34;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_37;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_38;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_39;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_40;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_42;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_43;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_45;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___RandomizedSequenceNumbers_46;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_47;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_tF5DA55E699EF2A5544A268C50222433343391405 * ___U3CTrafficStatsIncomingU3Ek__BackingField_48;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_tF5DA55E699EF2A5544A268C50222433343391405 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_49;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t70A79E3448D9AFE4A39588FEF5BF190F1C7FB168 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_50;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___trafficStatsStopwatch_51;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_52;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * ___peerBase_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_54;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_55;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_56;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PayloadEncryptionSecret_57;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_58;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_59;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_60;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_61;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_CommandLogSize_4() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___CommandLogSize_4)); }
	inline int32_t get_CommandLogSize_4() const { return ___CommandLogSize_4; }
	inline int32_t* get_address_of_CommandLogSize_4() { return &___CommandLogSize_4; }
	inline void set_CommandLogSize_4(int32_t value)
	{
		___CommandLogSize_4 = value;
	}

	inline static int32_t get_offset_of_TargetFramework_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___TargetFramework_8)); }
	inline int32_t get_TargetFramework_8() const { return ___TargetFramework_8; }
	inline int32_t* get_address_of_TargetFramework_8() { return &___TargetFramework_8; }
	inline void set_TargetFramework_8(int32_t value)
	{
		___TargetFramework_8 = value;
	}

	inline static int32_t get_offset_of_RemoveAppIdFromWebSocketPath_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___RemoveAppIdFromWebSocketPath_10)); }
	inline bool get_RemoveAppIdFromWebSocketPath_10() const { return ___RemoveAppIdFromWebSocketPath_10; }
	inline bool* get_address_of_RemoveAppIdFromWebSocketPath_10() { return &___RemoveAppIdFromWebSocketPath_10; }
	inline void set_RemoveAppIdFromWebSocketPath_10(bool value)
	{
		___RemoveAppIdFromWebSocketPath_10 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___ClientSdkId_11)); }
	inline uint8_t get_ClientSdkId_11() const { return ___ClientSdkId_11; }
	inline uint8_t* get_address_of_ClientSdkId_11() { return &___ClientSdkId_11; }
	inline void set_ClientSdkId_11(uint8_t value)
	{
		___ClientSdkId_11 = value;
	}

	inline static int32_t get_offset_of_UseInitV3_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___UseInitV3_17)); }
	inline bool get_UseInitV3_17() const { return ___UseInitV3_17; }
	inline bool* get_address_of_UseInitV3_17() { return &___UseInitV3_17; }
	inline void set_UseInitV3_17(bool value)
	{
		___UseInitV3_17 = value;
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CSerializationProtocolTypeU3Ek__BackingField_18)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_18() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_18() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_18; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_18(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___SocketImplementationConfig_19)); }
	inline Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 * get_SocketImplementationConfig_19() const { return ___SocketImplementationConfig_19; }
	inline Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 ** get_address_of_SocketImplementationConfig_19() { return &___SocketImplementationConfig_19; }
	inline void set_SocketImplementationConfig_19(Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 * value)
	{
		___SocketImplementationConfig_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CSocketImplementationU3Ek__BackingField_20)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_20() const { return ___U3CSocketImplementationU3Ek__BackingField_20; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_20() { return &___U3CSocketImplementationU3Ek__BackingField_20; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_20(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___DebugOut_21)); }
	inline uint8_t get_DebugOut_21() const { return ___DebugOut_21; }
	inline uint8_t* get_address_of_DebugOut_21() { return &___DebugOut_21; }
	inline void set_DebugOut_21(uint8_t value)
	{
		___DebugOut_21 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CListenerU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_22() const { return ___U3CListenerU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_22() { return &___U3CListenerU3Ek__BackingField_22; }
	inline void set_U3CListenerU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectMessage_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___OnDisconnectMessage_23)); }
	inline Action_1_tE77F56B5E4FC6EC8E61CFD752A1060D22591C64F * get_OnDisconnectMessage_23() const { return ___OnDisconnectMessage_23; }
	inline Action_1_tE77F56B5E4FC6EC8E61CFD752A1060D22591C64F ** get_address_of_OnDisconnectMessage_23() { return &___OnDisconnectMessage_23; }
	inline void set_OnDisconnectMessage_23(Action_1_tE77F56B5E4FC6EC8E61CFD752A1060D22591C64F * value)
	{
		___OnDisconnectMessage_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectMessage_23), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___reuseEventInstance_24)); }
	inline bool get_reuseEventInstance_24() const { return ___reuseEventInstance_24; }
	inline bool* get_address_of_reuseEventInstance_24() { return &___reuseEventInstance_24; }
	inline void set_reuseEventInstance_24(bool value)
	{
		___reuseEventInstance_24 = value;
	}

	inline static int32_t get_offset_of_useByteArraySlicePoolForEvents_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___useByteArraySlicePoolForEvents_25)); }
	inline bool get_useByteArraySlicePoolForEvents_25() const { return ___useByteArraySlicePoolForEvents_25; }
	inline bool* get_address_of_useByteArraySlicePoolForEvents_25() { return &___useByteArraySlicePoolForEvents_25; }
	inline void set_useByteArraySlicePoolForEvents_25(bool value)
	{
		___useByteArraySlicePoolForEvents_25 = value;
	}

	inline static int32_t get_offset_of_wrapIncomingStructs_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___wrapIncomingStructs_26)); }
	inline bool get_wrapIncomingStructs_26() const { return ___wrapIncomingStructs_26; }
	inline bool* get_address_of_wrapIncomingStructs_26() { return &___wrapIncomingStructs_26; }
	inline void set_wrapIncomingStructs_26(bool value)
	{
		___wrapIncomingStructs_26 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___SendInCreationOrder_27)); }
	inline bool get_SendInCreationOrder_27() const { return ___SendInCreationOrder_27; }
	inline bool* get_address_of_SendInCreationOrder_27() { return &___SendInCreationOrder_27; }
	inline void set_SendInCreationOrder_27(bool value)
	{
		___SendInCreationOrder_27 = value;
	}

	inline static int32_t get_offset_of_SequenceDeltaLimitResends_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___SequenceDeltaLimitResends_28)); }
	inline int32_t get_SequenceDeltaLimitResends_28() const { return ___SequenceDeltaLimitResends_28; }
	inline int32_t* get_address_of_SequenceDeltaLimitResends_28() { return &___SequenceDeltaLimitResends_28; }
	inline void set_SequenceDeltaLimitResends_28(int32_t value)
	{
		___SequenceDeltaLimitResends_28 = value;
	}

	inline static int32_t get_offset_of_SequenceDeltaLimitSends_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___SequenceDeltaLimitSends_29)); }
	inline int32_t get_SequenceDeltaLimitSends_29() const { return ___SequenceDeltaLimitSends_29; }
	inline int32_t* get_address_of_SequenceDeltaLimitSends_29() { return &___SequenceDeltaLimitSends_29; }
	inline void set_SequenceDeltaLimitSends_29(int32_t value)
	{
		___SequenceDeltaLimitSends_29 = value;
	}

	inline static int32_t get_offset_of_TrafficRecorder_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___TrafficRecorder_30)); }
	inline RuntimeObject* get_TrafficRecorder_30() const { return ___TrafficRecorder_30; }
	inline RuntimeObject** get_address_of_TrafficRecorder_30() { return &___TrafficRecorder_30; }
	inline void set_TrafficRecorder_30(RuntimeObject* value)
	{
		___TrafficRecorder_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrafficRecorder_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CEnableServerTracingU3Ek__BackingField_31)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_31() const { return ___U3CEnableServerTracingU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_31() { return &___U3CEnableServerTracingU3Ek__BackingField_31; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_31(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___quickResendAttempts_32)); }
	inline uint8_t get_quickResendAttempts_32() const { return ___quickResendAttempts_32; }
	inline uint8_t* get_address_of_quickResendAttempts_32() { return &___quickResendAttempts_32; }
	inline void set_quickResendAttempts_32(uint8_t value)
	{
		___quickResendAttempts_32 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___ChannelCount_33)); }
	inline uint8_t get_ChannelCount_33() const { return ___ChannelCount_33; }
	inline uint8_t* get_address_of_ChannelCount_33() { return &___ChannelCount_33; }
	inline void set_ChannelCount_33(uint8_t value)
	{
		___ChannelCount_33 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___EnableEncryptedFlag_34)); }
	inline bool get_EnableEncryptedFlag_34() const { return ___EnableEncryptedFlag_34; }
	inline bool* get_address_of_EnableEncryptedFlag_34() { return &___EnableEncryptedFlag_34; }
	inline void set_EnableEncryptedFlag_34(bool value)
	{
		___EnableEncryptedFlag_34 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___crcEnabled_35)); }
	inline bool get_crcEnabled_35() const { return ___crcEnabled_35; }
	inline bool* get_address_of_crcEnabled_35() { return &___crcEnabled_35; }
	inline void set_crcEnabled_35(bool value)
	{
		___crcEnabled_35 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___SentCountAllowance_36)); }
	inline int32_t get_SentCountAllowance_36() const { return ___SentCountAllowance_36; }
	inline int32_t* get_address_of_SentCountAllowance_36() { return &___SentCountAllowance_36; }
	inline void set_SentCountAllowance_36(int32_t value)
	{
		___SentCountAllowance_36 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___InitialResendTimeMax_37)); }
	inline int32_t get_InitialResendTimeMax_37() const { return ___InitialResendTimeMax_37; }
	inline int32_t* get_address_of_InitialResendTimeMax_37() { return &___InitialResendTimeMax_37; }
	inline void set_InitialResendTimeMax_37(int32_t value)
	{
		___InitialResendTimeMax_37 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___TimePingInterval_38)); }
	inline int32_t get_TimePingInterval_38() const { return ___TimePingInterval_38; }
	inline int32_t* get_address_of_TimePingInterval_38() { return &___TimePingInterval_38; }
	inline void set_TimePingInterval_38(int32_t value)
	{
		___TimePingInterval_38 = value;
	}

	inline static int32_t get_offset_of_disconnectTimeout_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___disconnectTimeout_39)); }
	inline int32_t get_disconnectTimeout_39() const { return ___disconnectTimeout_39; }
	inline int32_t* get_address_of_disconnectTimeout_39() { return &___disconnectTimeout_39; }
	inline void set_disconnectTimeout_39(int32_t value)
	{
		___disconnectTimeout_39 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CTransportProtocolU3Ek__BackingField_40)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_40() const { return ___U3CTransportProtocolU3Ek__BackingField_40; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_40() { return &___U3CTransportProtocolU3Ek__BackingField_40; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_40(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_mtu_42() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___mtu_42)); }
	inline int32_t get_mtu_42() const { return ___mtu_42; }
	inline int32_t* get_address_of_mtu_42() { return &___mtu_42; }
	inline void set_mtu_42(int32_t value)
	{
		___mtu_42 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CIsSendingOnlyAcksU3Ek__BackingField_43)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_43() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_43; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_43() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_43; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_43(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_45() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___RandomizeSequenceNumbers_45)); }
	inline bool get_RandomizeSequenceNumbers_45() const { return ___RandomizeSequenceNumbers_45; }
	inline bool* get_address_of_RandomizeSequenceNumbers_45() { return &___RandomizeSequenceNumbers_45; }
	inline void set_RandomizeSequenceNumbers_45(bool value)
	{
		___RandomizeSequenceNumbers_45 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_46() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___RandomizedSequenceNumbers_46)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_RandomizedSequenceNumbers_46() const { return ___RandomizedSequenceNumbers_46; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_RandomizedSequenceNumbers_46() { return &___RandomizedSequenceNumbers_46; }
	inline void set_RandomizedSequenceNumbers_46(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___RandomizedSequenceNumbers_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_46), (void*)value);
	}

	inline static int32_t get_offset_of_GcmDatagramEncryption_47() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___GcmDatagramEncryption_47)); }
	inline bool get_GcmDatagramEncryption_47() const { return ___GcmDatagramEncryption_47; }
	inline bool* get_address_of_GcmDatagramEncryption_47() { return &___GcmDatagramEncryption_47; }
	inline void set_GcmDatagramEncryption_47(bool value)
	{
		___GcmDatagramEncryption_47 = value;
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CTrafficStatsIncomingU3Ek__BackingField_48)); }
	inline TrafficStats_tF5DA55E699EF2A5544A268C50222433343391405 * get_U3CTrafficStatsIncomingU3Ek__BackingField_48() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_48; }
	inline TrafficStats_tF5DA55E699EF2A5544A268C50222433343391405 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_48() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_48; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_48(TrafficStats_tF5DA55E699EF2A5544A268C50222433343391405 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CTrafficStatsOutgoingU3Ek__BackingField_49)); }
	inline TrafficStats_tF5DA55E699EF2A5544A268C50222433343391405 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_49() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_49; }
	inline TrafficStats_tF5DA55E699EF2A5544A268C50222433343391405 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_49() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_49; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_49(TrafficStats_tF5DA55E699EF2A5544A268C50222433343391405 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CTrafficStatsGameLevelU3Ek__BackingField_50)); }
	inline TrafficStatsGameLevel_t70A79E3448D9AFE4A39588FEF5BF190F1C7FB168 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_50() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_50; }
	inline TrafficStatsGameLevel_t70A79E3448D9AFE4A39588FEF5BF190F1C7FB168 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_50() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_50; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_50(TrafficStatsGameLevel_t70A79E3448D9AFE4A39588FEF5BF190F1C7FB168 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_51() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___trafficStatsStopwatch_51)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_trafficStatsStopwatch_51() const { return ___trafficStatsStopwatch_51; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_trafficStatsStopwatch_51() { return &___trafficStatsStopwatch_51; }
	inline void set_trafficStatsStopwatch_51(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___trafficStatsStopwatch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_51), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_52() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___trafficStatsEnabled_52)); }
	inline bool get_trafficStatsEnabled_52() const { return ___trafficStatsEnabled_52; }
	inline bool* get_address_of_trafficStatsEnabled_52() { return &___trafficStatsEnabled_52; }
	inline void set_trafficStatsEnabled_52(bool value)
	{
		___trafficStatsEnabled_52 = value;
	}

	inline static int32_t get_offset_of_peerBase_53() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___peerBase_53)); }
	inline PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * get_peerBase_53() const { return ___peerBase_53; }
	inline PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 ** get_address_of_peerBase_53() { return &___peerBase_53; }
	inline void set_peerBase_53(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * value)
	{
		___peerBase_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_53), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_54() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___SendOutgoingLockObject_54)); }
	inline RuntimeObject * get_SendOutgoingLockObject_54() const { return ___SendOutgoingLockObject_54; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_54() { return &___SendOutgoingLockObject_54; }
	inline void set_SendOutgoingLockObject_54(RuntimeObject * value)
	{
		___SendOutgoingLockObject_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_54), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_55() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___DispatchLockObject_55)); }
	inline RuntimeObject * get_DispatchLockObject_55() const { return ___DispatchLockObject_55; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_55() { return &___DispatchLockObject_55; }
	inline void set_DispatchLockObject_55(RuntimeObject * value)
	{
		___DispatchLockObject_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_55), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_56() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___EnqueueLock_56)); }
	inline RuntimeObject * get_EnqueueLock_56() const { return ___EnqueueLock_56; }
	inline RuntimeObject ** get_address_of_EnqueueLock_56() { return &___EnqueueLock_56; }
	inline void set_EnqueueLock_56(RuntimeObject * value)
	{
		___EnqueueLock_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_56), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_57() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___PayloadEncryptionSecret_57)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PayloadEncryptionSecret_57() const { return ___PayloadEncryptionSecret_57; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PayloadEncryptionSecret_57() { return &___PayloadEncryptionSecret_57; }
	inline void set_PayloadEncryptionSecret_57(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PayloadEncryptionSecret_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_57), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_58() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___encryptorType_58)); }
	inline Type_t * get_encryptorType_58() const { return ___encryptorType_58; }
	inline Type_t ** get_address_of_encryptorType_58() { return &___encryptorType_58; }
	inline void set_encryptorType_58(Type_t * value)
	{
		___encryptorType_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_58), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_59() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___Encryptor_59)); }
	inline RuntimeObject* get_Encryptor_59() const { return ___Encryptor_59; }
	inline RuntimeObject** get_address_of_Encryptor_59() { return &___Encryptor_59; }
	inline void set_Encryptor_59(RuntimeObject* value)
	{
		___Encryptor_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountDiscardedU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CCountDiscardedU3Ek__BackingField_60)); }
	inline int32_t get_U3CCountDiscardedU3Ek__BackingField_60() const { return ___U3CCountDiscardedU3Ek__BackingField_60; }
	inline int32_t* get_address_of_U3CCountDiscardedU3Ek__BackingField_60() { return &___U3CCountDiscardedU3Ek__BackingField_60; }
	inline void set_U3CCountDiscardedU3Ek__BackingField_60(int32_t value)
	{
		___U3CCountDiscardedU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaUnreliableNumberU3Ek__BackingField_61() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6, ___U3CDeltaUnreliableNumberU3Ek__BackingField_61)); }
	inline int32_t get_U3CDeltaUnreliableNumberU3Ek__BackingField_61() const { return ___U3CDeltaUnreliableNumberU3Ek__BackingField_61; }
	inline int32_t* get_address_of_U3CDeltaUnreliableNumberU3Ek__BackingField_61() { return &___U3CDeltaUnreliableNumberU3Ek__BackingField_61; }
	inline void set_U3CDeltaUnreliableNumberU3Ek__BackingField_61(int32_t value)
	{
		___U3CDeltaUnreliableNumberU3Ek__BackingField_61 = value;
	}
};

struct PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_15;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_16;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_44;

public:
	inline static int32_t get_offset_of_NoNativeCallbacks_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_StaticFields, ___NoNativeCallbacks_9)); }
	inline bool get_NoNativeCallbacks_9() const { return ___NoNativeCallbacks_9; }
	inline bool* get_address_of_NoNativeCallbacks_9() { return &___NoNativeCallbacks_9; }
	inline void set_NoNativeCallbacks_9(bool value)
	{
		___NoNativeCallbacks_9 = value;
	}

	inline static int32_t get_offset_of_clientVersion_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_StaticFields, ___clientVersion_12)); }
	inline String_t* get_clientVersion_12() const { return ___clientVersion_12; }
	inline String_t** get_address_of_clientVersion_12() { return &___clientVersion_12; }
	inline void set_clientVersion_12(String_t* value)
	{
		___clientVersion_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_12), (void*)value);
	}

	inline static int32_t get_offset_of_checkedNativeLibs_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_StaticFields, ___checkedNativeLibs_13)); }
	inline bool get_checkedNativeLibs_13() const { return ___checkedNativeLibs_13; }
	inline bool* get_address_of_checkedNativeLibs_13() { return &___checkedNativeLibs_13; }
	inline void set_checkedNativeLibs_13(bool value)
	{
		___checkedNativeLibs_13 = value;
	}

	inline static int32_t get_offset_of_useSocketNative_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_StaticFields, ___useSocketNative_14)); }
	inline bool get_useSocketNative_14() const { return ___useSocketNative_14; }
	inline bool* get_address_of_useSocketNative_14() { return &___useSocketNative_14; }
	inline void set_useSocketNative_14(bool value)
	{
		___useSocketNative_14 = value;
	}

	inline static int32_t get_offset_of_useDiffieHellmanCryptoProvider_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_StaticFields, ___useDiffieHellmanCryptoProvider_15)); }
	inline bool get_useDiffieHellmanCryptoProvider_15() const { return ___useDiffieHellmanCryptoProvider_15; }
	inline bool* get_address_of_useDiffieHellmanCryptoProvider_15() { return &___useDiffieHellmanCryptoProvider_15; }
	inline void set_useDiffieHellmanCryptoProvider_15(bool value)
	{
		___useDiffieHellmanCryptoProvider_15 = value;
	}

	inline static int32_t get_offset_of_useEncryptorNative_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_StaticFields, ___useEncryptorNative_16)); }
	inline bool get_useEncryptorNative_16() const { return ___useEncryptorNative_16; }
	inline bool* get_address_of_useEncryptorNative_16() { return &___useEncryptorNative_16; }
	inline void set_useEncryptorNative_16(bool value)
	{
		___useEncryptorNative_16 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_41() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_StaticFields, ___OutgoingStreamBufferSize_41)); }
	inline int32_t get_OutgoingStreamBufferSize_41() const { return ___OutgoingStreamBufferSize_41; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_41() { return &___OutgoingStreamBufferSize_41; }
	inline void set_OutgoingStreamBufferSize_41(int32_t value)
	{
		___OutgoingStreamBufferSize_41 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_44() { return static_cast<int32_t>(offsetof(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_StaticFields, ___AsyncKeyExchange_44)); }
	inline bool get_AsyncKeyExchange_44() const { return ___AsyncKeyExchange_44; }
	inline bool* get_address_of_AsyncKeyExchange_44() { return &___AsyncKeyExchange_44; }
	inline void set_AsyncKeyExchange_44(bool value)
	{
		___AsyncKeyExchange_44 = value;
	}
};


// ExitGames.Client.Photon.SendOptions
struct SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347 
{
public:
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;

public:
	inline static int32_t get_offset_of_DeliveryMode_2() { return static_cast<int32_t>(offsetof(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347, ___DeliveryMode_2)); }
	inline int32_t get_DeliveryMode_2() const { return ___DeliveryMode_2; }
	inline int32_t* get_address_of_DeliveryMode_2() { return &___DeliveryMode_2; }
	inline void set_DeliveryMode_2(int32_t value)
	{
		___DeliveryMode_2 = value;
	}

	inline static int32_t get_offset_of_Encrypt_3() { return static_cast<int32_t>(offsetof(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347, ___Encrypt_3)); }
	inline bool get_Encrypt_3() const { return ___Encrypt_3; }
	inline bool* get_address_of_Encrypt_3() { return &___Encrypt_3; }
	inline void set_Encrypt_3(bool value)
	{
		___Encrypt_3 = value;
	}

	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347, ___Channel_4)); }
	inline uint8_t get_Channel_4() const { return ___Channel_4; }
	inline uint8_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(uint8_t value)
	{
		___Channel_4 = value;
	}
};

struct SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_StaticFields
{
public:
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  ___SendUnreliable_1;

public:
	inline static int32_t get_offset_of_SendReliable_0() { return static_cast<int32_t>(offsetof(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_StaticFields, ___SendReliable_0)); }
	inline SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  get_SendReliable_0() const { return ___SendReliable_0; }
	inline SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347 * get_address_of_SendReliable_0() { return &___SendReliable_0; }
	inline void set_SendReliable_0(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  value)
	{
		___SendReliable_0 = value;
	}

	inline static int32_t get_offset_of_SendUnreliable_1() { return static_cast<int32_t>(offsetof(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_StaticFields, ___SendUnreliable_1)); }
	inline SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  get_SendUnreliable_1() const { return ___SendUnreliable_1; }
	inline SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347 * get_address_of_SendUnreliable_1() { return &___SendUnreliable_1; }
	inline void set_SendUnreliable_1(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  value)
	{
		___SendUnreliable_1 = value;
	}
};

// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// Photon.Chat.ChatPeer
struct ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F  : public PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6
{
public:
	// System.String Photon.Chat.ChatPeer::NameServerHost
	String_t* ___NameServerHost_62;
	// System.UInt16 Photon.Chat.ChatPeer::NameServerPortOverride
	uint16_t ___NameServerPortOverride_64;

public:
	inline static int32_t get_offset_of_NameServerHost_62() { return static_cast<int32_t>(offsetof(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F, ___NameServerHost_62)); }
	inline String_t* get_NameServerHost_62() const { return ___NameServerHost_62; }
	inline String_t** get_address_of_NameServerHost_62() { return &___NameServerHost_62; }
	inline void set_NameServerHost_62(String_t* value)
	{
		___NameServerHost_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_62), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerPortOverride_64() { return static_cast<int32_t>(offsetof(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F, ___NameServerPortOverride_64)); }
	inline uint16_t get_NameServerPortOverride_64() const { return ___NameServerPortOverride_64; }
	inline uint16_t* get_address_of_NameServerPortOverride_64() { return &___NameServerPortOverride_64; }
	inline void set_NameServerPortOverride_64(uint16_t value)
	{
		___NameServerPortOverride_64 = value;
	}
};

struct ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Chat.ChatPeer::ProtocolToNameServerPort
	Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * ___ProtocolToNameServerPort_63;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_63() { return static_cast<int32_t>(offsetof(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_StaticFields, ___ProtocolToNameServerPort_63)); }
	inline Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * get_ProtocolToNameServerPort_63() const { return ___ProtocolToNameServerPort_63; }
	inline Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C ** get_address_of_ProtocolToNameServerPort_63() { return &___ProtocolToNameServerPort_63; }
	inline void set_ProtocolToNameServerPort_63(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * value)
	{
		___ProtocolToNameServerPort_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_63), (void*)value);
	}
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_gshared (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9215D95723C41AEB3C238805171E3D7928C90206_gshared (Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m82BD958A94CEFBFA760455C4A6F4C24F65DD0481_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, uint8_t ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m879CB6850F1B23021370EC6312DF6D3326151B97_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCF5854608E2BF24562AEFE9045E0F672BAD57FE3_gshared (Dictionary_2_tF3A2ED84A24958E105C74C0E6BCAE0EE2F30AE75 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20 (String_t* ___stringToEscape0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m29926F1C8B29FF21D0C2F3A5176A0B9979B69849_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// System.Object Photon.Chat.AuthenticationValues::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthType(Photon.Chat.CustomAuthenticationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_m804B0BCFA927DFB3140B836D79F19A735305B3B2 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_m71BD8B5682E698B1E731FDF88923E47217622427 (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_m50F916CC5D1CB01DB7F4C13C69957F5C9C47C592_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m9342F9FB75BEABCB8CDA10D0F8FD0AD2B07A0ABE (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m5549450D53B621A60D4EA2E9BE09E8E784151603 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097 (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
inline Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611 (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0 (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
inline void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279 (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_mD0477A247F2855FBEAEA02E542D0BBD93EA416A3_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_m3F970011C2E8CA0428035FDBDF8F27F51D35E60E_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mC01D0E5B04220494DBF03F43BC035D8587B55CA4 (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(!0)
inline bool HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m6555927C7F89CFF60E624D43E5818D2F3A6DDE82 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___value0, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_TransportProtocol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_TransportProtocol_mE57006B6BA00BD0F282DBCC21991260C98B02B76_inline (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_PeerState_mDDB57B138B2CDC07A9BC05FD893F3DF698CDF665 (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonPeer_set_TransportProtocol_mFF896C6514F9CA6C7C83A82523D533C3690BD47E_inline (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__ctor_m31252B90B54C7FA381D8E14F5FA9FD3A630F5029 (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SerializationProtocolType(ExitGames.Client.Photon.SerializationProtocol)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonPeer_set_SerializationProtocolType_m6B00E068CEE4EBE7FD6926F5B0C89C817A5756DA_inline (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::.ctor()
inline void Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Photon.Chat.ChatClient::set_ChatRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_m37E6BCF1E50792F17B5216E4CF763016E7A4A23B (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DebugOut_m767895E688A70F2AE0C9D85F320C3BFC8C95B5A9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_TransportProtocol_m70A8BDEC139E7A9174DA533022917CA6A0E908D4 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_EnableProtocolFallback(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_EnableProtocolFallback_m7509562E61E92518A9EA1675E084EBD8E0D364F2_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatAppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatAppSettings_get_IsDefaultNameServer_mB99FC3B65C9E6637EE95320EF5B5DBF0F9A9BD71 (ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Connect_mA52FDED63386DE3529800716953C0070D4216738 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___authValues2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m97E453B89EB457220FF3170F5216556DACBF9183_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m14D98091CE28ABE7175647E1D4A9A6FF20862E98_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_QuickResendAttempts_mA91BF78AD2DBE5038EECB8F90443DAF2DA2E53C7 (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Clear()
inline void Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534 (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
inline void HashSet_1_Clear_m59CDAE2F2CF0AAD9D4955B676C4CA11170DCA699 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1_Clear_mF7FBC7E3AE9E541ED2D5E0000DA5A167A123067F_gshared)(__this, method);
}
// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatClient::get_TransportProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_TransportProtocol_m1524D32B04F55144684C2A594E6C740F9ACFFC50 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_m4BC0C17DC28CFA233CC5E2078DCFB9A3046B507F (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_mB5FB3E44562605753BFC72E14F22FF8609EF452F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_Connect_m0560376B05909F8A69353708FF0B150D5EB85D7F (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m339D1ED46CDD4C32831C1EA88B9A9324F3B1F578_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_m682899F9F65A4909BEC6EEAB500BC53C5797ABCC (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m31B4C1A9EFA78BA1754E2179A328041A77736851 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, const RuntimeMethod*))Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_m0727A81E02E0859790106C7EB566A03E8660386A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_m537F695E6B63DB6A59721F4F73CDEF70714EA646 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SendOptions::set_Reliability(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOptions_set_Reliability_m0608E94DFE9D69BFE6E6F557B09FE58947A87C9A (SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_mABF818667B25DC8DC288E65714333935C5F8C438 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_m1B2EEC37C257B39FD4A81FB705BE193267B741D9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8 (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m126C2C6914498BF8DA7B81CD8B049B3B7EAA08AA (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, String_t* ___key0, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, String_t*, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_mE60D21EE0C58BF37FE440DB095718CAA455276E0 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___userName0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m963B3989F53FDF4D44809B6892426F2DF1587594 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** ___channel2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_mA4A9D83BAA8691B4F6CE243E43BA845DC6F647FD (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_mE7C222704592DB3770C57C07CA347CD9670FF2E0 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_m783F749848C57BE337FE1F2CCDD212C76ED1DB2A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_mD025253B329C8BE3E17DBB1884E19A906A15DFB3 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_m93FB78D0FD4EE297ABC5A46E5D14E3CFB6B28D06 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_mC2DA87D9BC5BFFDE6DBFEE5FDB932ECA49E84992 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m099F22C84F0D33F3B6922F9406D3354F1BE5DCA8 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_mFCC325D3D8794664F80D734B8EE900530B24CCC6 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * ___operationResponse0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_EstablishEncryption_m0C182E5DB068A7016B3BC6FA2D4671281C8B8A8B (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::TryAuthenticateOnNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_TryAuthenticateOnNameServer_m440074A71E9387139A6C89F44128DF4619802ECB (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_m4E005CD5611CE63F801F714BC5FF3282B9A06002 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m2BE1846DFCE4654E59CFD6AF1E9FEC7DA738F76D_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m5213F18EE165B0A7C6B62AD85BE8C15BBF1039C7_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::ConnectToFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectToFrontEnd_mEF90DAE273F5589540D1412A17B00EA173123869 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m7277E1F7BE981C911B55B2CC2FA53F844C640F1B (StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 * __this, bool ___fNeedFileInfo0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerAddress_m75A83C000DF88E71D04D72F36D99558B0C4313AA (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m676338D1653DD111745AE5974E70561154479BDB_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___cause0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_EnableProtocolFallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatClient_get_EnableProtocolFallback_m91D09CEC68589E6E027949CA976116686E460FAF_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_mB87BC70927ABA22AA4DAF4517A27BE97A8F46E36 (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___authValues3, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.ParameterDictionary::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929 (ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel__ctor_m1A1CB2834079A2F041E4905DCE7633E6B5225339 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mED7AE0C11FEE429D113A1CC6CB29ABCCD05E5EE5_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Add(!0,!1)
inline void Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272 (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, String_t* ___key0, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, String_t*, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m4FE8A53CB40B63ED3A5BBC2B9FD5A008BC233B15 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m716C3705D3930DFC682E23F123EFE522CF5E4F06 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___senders0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::TryGetValue(System.Byte,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_TryGetValue_m794DE183A56D8CF325E2FDD586C8197A8DC9BA49 (ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::ReadChannelProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ReadChannelProperties_m6D5006A08AC5C8A8F224CC0F6C5C7F26163BBEB0 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___newProperties0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::AddSubscribers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_AddSubscribers_m1B6065D45D500D14814371DB189FFA5B6E16C37C (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___users0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.EventData::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EventData_get_Item_m0ADAE0EE7467BE978EE9B6AD9CA8E11049CB8AAF (EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Remove(!0)
inline bool Dictionary_2_Remove_m0487F7D7DE567C8EDEA89BA3B57A241C61F13851 (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(!0)
inline bool HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// System.String ExitGames.Client.Photon.OperationResponse::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OperationResponse_ToStringFull_m4CE53A2CBA006B7F379C9CC6148742BDD5E578C7 (OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::ContainsKey(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_ContainsKey_m787CB6FAE6121B97F488A5B0C86073A72CA02AE4 (ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.OperationResponse::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OperationResponse_get_Item_mCBC8842F55E2F5706244B4ACBF5A01F8A5D8981D (OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * __this, uint8_t ___parameterCode0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_mE3866F5C3D8936B3A1434C8F6D1C4A99DAB60D5B_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m323C8CAF9B49E22CDADFB07E62ED49556BDC9B79 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared)(__this, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mE7E9529EC7A3D5F1E32B643BC2607E8745FDFBE1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method);
// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::get_DisconnectedCause()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m5ECA68F6962C394FD66EEA2EDA0C2B7BB46F329A_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method);
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
inline int32_t HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_inline (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m9334D413C53E195C4B0F7E215AF4E04C0B3C1F2D_inline (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_mFB9EF4A61B0B41BCCCF122D6531C00FA9E2CBD17_inline (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
inline void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_mEAAD5D9ACA62B947FBBB028C44C9E6358715FC8E (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_UsedProtocol_mD72784918681E5F34A919A4059A6A7D14FEF377C (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer__ctor_mB11CC353AD0A387651B0CA4DAB07C368CB557F1F (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, RuntimeObject* ___listener0, uint8_t ___protocolType1, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m36882D1020E6E9C3647E028F105F11853B4D0AFA (Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 * __this, uint8_t ___key0, Type_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 *, uint8_t, Type_t *, const RuntimeMethod*))Dictionary_2_set_Item_m9215D95723C41AEB3C238805171E3D7928C90206_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1CCA2C565635A36E97FE5C7C3430A7EACFCCAC77 (Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * __this, uint8_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C *, uint8_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m82BD958A94CEFBFA760455C4A6F4C24F65DD0481_gshared)(__this, ___key0, ___value1, method);
}
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PhotonPeer_get_Listener_m0091F5F5B9495B9461E037010DEAFB5B2CD281B8_inline (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_get_IsEncryptionAvailable_m0EFE58CF8FE3858ED01094F210D998565CB7269B (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m56E961D2F3E1DC360CA03BFE2CF94A82661E23B5 (Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C *, const RuntimeMethod*))Dictionary_2__ctor_m879CB6850F1B23021370EC6312DF6D3326151B97_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66 (Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C *, uint8_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_mCF5854608E2BF24562AEFE9045E0F672BAD57FE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return authType; }
		uint8_t L_0 = __this->get_authType_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return authType; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthType(Photon.Chat.CustomAuthenticationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_m804B0BCFA927DFB3140B836D79F19A735305B3B2 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { authType = value; }
		uint8_t L_0 = ___value0;
		__this->set_authType_0(L_0);
		// set { authType = value; }
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = __this->get_U3CAuthGetParametersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m29926F1C8B29FF21D0C2F3A5176A0B9979B69849 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthGetParametersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CAuthPostDataU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CAuthPostDataU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Object Photon.Chat.AuthenticationValues::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = __this->get_U3CTokenU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m676338D1653DD111745AE5974E70561154479BDB (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m6555927C7F89CFF60E624D43E5818D2F3A6DDE82 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// private CustomAuthenticationType authType = CustomAuthenticationType.None;
		__this->set_authType_0(((int32_t)255));
		// public AuthenticationValues()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m63BF4EEAAFAA1699EFA5986C1E00B7CF1B70FE3E (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	{
		// private CustomAuthenticationType authType = CustomAuthenticationType.None;
		__this->set_authType_0(((int32_t)255));
		// public AuthenticationValues(string userId)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.UserId = userId;
		String_t* L_0 = ___userId0;
		AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_m841F63ADE9C4DB95F87F37102BF49E2B4C88AEDA (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___stringData0, const RuntimeMethod* method)
{
	AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * G_B2_0 = NULL;
	AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * G_B3_1 = NULL;
	{
		// this.AuthPostData = (string.IsNullOrEmpty(stringData)) ? null : stringData;
		String_t* L_0 = ___stringData0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_2 = ___stringData0;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_mC064F254C9CA309B7A2F70B5E044E39C50B17F1E (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteData0, const RuntimeMethod* method)
{
	{
		// this.AuthPostData = byteData;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___byteData0;
		AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline(__this, (RuntimeObject *)(RuntimeObject *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_m0481CB7CD338BC31BBD25DA0D5BDFEAD742DBEC6 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictData0, const RuntimeMethod* method)
{
	{
		// this.AuthPostData = dictData;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___dictData0;
		AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_AddAuthParameter_mA17C5D3F70EC602CF0678A0A8C4DAA873BB72E0C (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4481DFAA44A224ED937CFB9CFFB4AEA2435C0B68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// string ampersand = string.IsNullOrEmpty(this.AuthGetParameters) ? "" : "&";
		String_t* L_0;
		L_0 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001a:
	{
		V_0 = G_B3_0;
		// this.AuthGetParameters = string.Format("{0}{1}{2}={3}", this.AuthGetParameters, ampersand, System.Uri.EscapeDataString(key), System.Uri.EscapeDataString(value));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		String_t* L_4;
		L_4 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		String_t* L_6 = V_0;
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		String_t* L_8 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20(L_8, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_7;
		String_t* L_11 = ___value1;
		String_t* L_12;
		L_12 = Uri_EscapeDataString_m65EC321EA46B682D20E13D00DA17B846BB5CDF20(L_11, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13;
		L_13 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral4481DFAA44A224ED937CFB9CFFB4AEA2435C0B68, L_10, /*hidden argument*/NULL);
		AuthenticationValues_set_AuthGetParameters_m29926F1C8B29FF21D0C2F3A5176A0B9979B69849_inline(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_ToString_mF43FA0CFF8B8F6EE87C1EA6419EDF6CB17891387 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAuthenticationType_t06629A8CC1D9753E6E36E5212D5E97E94764A673_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral610AC17320941C760FFD5A2AAB296394668E096E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("AuthenticationValues Type: {3} UserId: {0}, GetParameters: {1} Token available: {2}", this.UserId, this.AuthGetParameters, this.Token != null, this.AuthType);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2;
		L_2 = AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_1;
		String_t* L_4;
		L_4 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		RuntimeObject * L_6;
		L_6 = AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline(__this, /*hidden argument*/NULL);
		bool L_7 = ((bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0));
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		uint8_t L_10;
		L_10 = AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8(__this, /*hidden argument*/NULL);
		uint8_t L_11 = L_10;
		RuntimeObject * L_12 = Box(CustomAuthenticationType_t06629A8CC1D9753E6E36E5212D5E97E94764A673_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13;
		L_13 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral610AC17320941C760FFD5A2AAB296394668E096E, L_9, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		String_t* L_14 = V_0;
		return L_14;
	}
}
// Photon.Chat.AuthenticationValues Photon.Chat.AuthenticationValues::CopyTo(Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * AuthenticationValues_CopyTo_mA352FE6ACDAA107E24FB53BDED19CBA74B021C38 (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___copy0, const RuntimeMethod* method)
{
	AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * V_0 = NULL;
	{
		// copy.AuthType = this.AuthType;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0 = ___copy0;
		uint8_t L_1;
		L_1 = AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8(__this, /*hidden argument*/NULL);
		AuthenticationValues_set_AuthType_m804B0BCFA927DFB3140B836D79F19A735305B3B2(L_0, L_1, /*hidden argument*/NULL);
		// copy.AuthGetParameters = this.AuthGetParameters;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_2 = ___copy0;
		String_t* L_3;
		L_3 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(__this, /*hidden argument*/NULL);
		AuthenticationValues_set_AuthGetParameters_m29926F1C8B29FF21D0C2F3A5176A0B9979B69849_inline(L_2, L_3, /*hidden argument*/NULL);
		// copy.AuthPostData = this.AuthPostData;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_4 = ___copy0;
		RuntimeObject * L_5;
		L_5 = AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05_inline(__this, /*hidden argument*/NULL);
		AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline(L_4, L_5, /*hidden argument*/NULL);
		// copy.UserId = this.UserId;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_6 = ___copy0;
		String_t* L_7;
		L_7 = AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline(__this, /*hidden argument*/NULL);
		AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1_inline(L_6, L_7, /*hidden argument*/NULL);
		// return copy;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_8 = ___copy0;
		V_0 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_9 = V_0;
		return L_9;
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
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_mFB9EF4A61B0B41BCCCF122D6531C00FA9E2CBD17 (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_PublishSubscribers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_PublishSubscribers_m602D914B3706794A819282AB99C8C190A03AB4DD (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m9334D413C53E195C4B0F7E215AF4E04C0B3C1F2D (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_MaxSubscribers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_MaxSubscribers_mF30012A1DA3F0B719E59FEA2795509DB5B63A975 (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_m71BD8B5682E698B1E731FDF88923E47217622427 (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__cctor_m71A51B8B0C9B6DB639C73D969F26F475E749EB22 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ChannelCreationOptions Default = new ChannelCreationOptions();
		ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * L_0 = (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 *)il2cpp_codegen_object_new(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var);
		ChannelCreationOptions__ctor_m71BD8B5682E698B1E731FDF88923E47217622427(L_0, /*hidden argument*/NULL);
		((ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Photon.Chat.ChannelWellKnownProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelWellKnownProperties__ctor_m6F0F51978EED3DA954EC23724BE0C035A591E8E0 (ChannelWellKnownProperties_t59F53E93830782FB6DDB2AFC3F76A84D66851822 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Chat.ChatAppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatAppSettings_get_IsDefaultNameServer_mB99FC3B65C9E6637EE95320EF5B5DBF0F9A9BD71 (ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsDefaultNameServer { get { return string.IsNullOrEmpty(this.Server); } }
		String_t* L_0 = __this->get_Server_3();
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public bool IsDefaultNameServer { get { return string.IsNullOrEmpty(this.Server); } }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String Photon.Chat.ChatAppSettings::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatAppSettings_get_AppId_m0276D2EF130D3A40FDF8C7FEB611EB02FBD96A99 (ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return this.AppIdChat; }
		String_t* L_0 = __this->get_AppIdChat_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.AppIdChat; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.ChatAppSettings::set_AppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppSettings_set_AppId_m9B01F33A6C07F16C53063E7F58D95033263D21A2 (ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { this.AppIdChat = value; }
		String_t* L_0 = ___value0;
		__this->set_AppIdChat_0(L_0);
		// set { this.AppIdChat = value; }
		return;
	}
}
// System.Void Photon.Chat.ChatAppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppSettings__ctor_mB018BA348E40BC01698E9538829063968FF23FBB (ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * __this, const RuntimeMethod* method)
{
	{
		// public ConnectionProtocol Protocol = ConnectionProtocol.Udp;
		__this->set_Protocol_5(0);
		// public bool EnableProtocolFallback = true;
		__this->set_EnableProtocolFallback_6((bool)1);
		// public DebugLevel NetworkLogging = DebugLevel.ERROR;
		__this->set_NetworkLogging_7(1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Chat.ChatChannel::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_get_IsPrivate_m9980869BAA0C174DE23CA8A05BD75C40704E84CC (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = __this->get_U3CIsPrivateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mED7AE0C11FEE429D113A1CC6CB29ABCCD05E5EE5 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPrivateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MessageCount_m73F8FF01C69533376AAE764DDA6D1D5D84A732F3 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public int MessageCount { get { return this.Messages.Count; } }
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = __this->get_Messages_2();
		int32_t L_1;
		L_1 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_0, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public int MessageCount { get { return this.Messages.Count; } }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_LastMsgId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_LastMsgId_mE8B5E96AF53DBCC36B749C19BF213117B0BA309C (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = __this->get_U3CLastMsgIdU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_m50F916CC5D1CB01DB7F4C13C69957F5C9C47C592 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLastMsgIdU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_mD0477A247F2855FBEAEA02E542D0BBD93EA416A3 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_m3F970011C2E8CA0428035FDBDF8F27F51D35E60E (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel__ctor_m1A1CB2834079A2F041E4905DCE7633E6B5225339 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly List<string> Senders = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_Senders_1(L_0);
		// public readonly List<object> Messages = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_1, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		__this->set_Messages_2(L_1);
		// public readonly HashSet<string> Subscribers = new HashSet<string>();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_2 = (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *)il2cpp_codegen_object_new(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818(L_2, /*hidden argument*/HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		__this->set_Subscribers_10(L_2);
		// public ChatChannel(string name)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_3 = ___name0;
		__this->set_Name_0(L_3);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m4FE8A53CB40B63ED3A5BBC2B9FD5A008BC233B15 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.Add(sender);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_Senders_1();
		String_t* L_1 = ___sender0;
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_1, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// this.Messages.Add(message);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get_Messages_2();
		RuntimeObject * L_3 = ___message1;
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_2, L_3, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		// this.LastMsgId = msgId;
		int32_t L_4 = ___msgId2;
		ChatChannel_set_LastMsgId_m50F916CC5D1CB01DB7F4C13C69957F5C9C47C592_inline(__this, L_4, /*hidden argument*/NULL);
		// this.TruncateMessages();
		ChatChannel_TruncateMessages_m9342F9FB75BEABCB8CDA10D0F8FD0AD2B07A0ABE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m716C3705D3930DFC682E23F123EFE522CF5E4F06 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___senders0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.AddRange(senders);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_Senders_1();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___senders0;
		List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C(L_0, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var);
		// this.Messages.AddRange(messages);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = __this->get_Messages_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___messages1;
		List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9(L_2, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_RuntimeMethod_var);
		// this.LastMsgId = lastMsgId;
		int32_t L_4 = ___lastMsgId2;
		ChatChannel_set_LastMsgId_m50F916CC5D1CB01DB7F4C13C69957F5C9C47C592_inline(__this, L_4, /*hidden argument*/NULL);
		// this.TruncateMessages();
		ChatChannel_TruncateMessages_m9342F9FB75BEABCB8CDA10D0F8FD0AD2B07A0ABE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m9342F9FB75BEABCB8CDA10D0F8FD0AD2B07A0ABE (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m5549450D53B621A60D4EA2E9BE09E8E784151603_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.MessageLimit <= 0 || this.Messages.Count <= this.MessageLimit)
		int32_t L_0 = __this->get_MessageLimit_3();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_Messages_2();
		int32_t L_2;
		L_2 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_1, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		int32_t L_3 = __this->get_MessageLimit_3();
		G_B3_0 = ((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		goto IL_0059;
	}

IL_002a:
	{
		// int excessCount = this.Messages.Count - this.MessageLimit;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = __this->get_Messages_2();
		int32_t L_6;
		L_6 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_5, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		int32_t L_7 = __this->get_MessageLimit_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
		// this.Senders.RemoveRange(0, excessCount);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = __this->get_Senders_1();
		int32_t L_9 = V_0;
		List_1_RemoveRange_m5549450D53B621A60D4EA2E9BE09E8E784151603(L_8, 0, L_9, /*hidden argument*/List_1_RemoveRange_m5549450D53B621A60D4EA2E9BE09E8E784151603_RuntimeMethod_var);
		// this.Messages.RemoveRange(0, excessCount);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_10 = __this->get_Messages_2();
		int32_t L_11 = V_0;
		List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA(L_10, 0, L_11, /*hidden argument*/List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::ClearMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ClearMessages_mF2AE4786E9BD034ABCCD6C24024964AE67C5AECD (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.Clear();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_Senders_1();
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_0, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		// this.Messages.Clear();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = __this->get_Messages_2();
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_1, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Photon.Chat.ChatChannel::ToStringMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatChannel_ToStringMessages_m1426C56E45AF154515CAB3C69014464EADA41860 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// StringBuilder txt = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < this.Messages.Count; i++)
		V_1 = 0;
		goto IL_003a;
	}

IL_000b:
	{
		// txt.AppendLine(string.Format("{0}: {1}", this.Senders[i], this.Messages[i]));
		StringBuilder_t * L_1 = V_0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = __this->get_Senders_1();
		int32_t L_3 = V_1;
		String_t* L_4;
		L_4 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = __this->get_Messages_2();
		int32_t L_6 = V_1;
		RuntimeObject * L_7;
		L_7 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, L_4, L_7, /*hidden argument*/NULL);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_1, L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < this.Messages.Count; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003a:
	{
		// for (int i = 0; i < this.Messages.Count; i++)
		int32_t L_11 = V_1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_12 = __this->get_Messages_2();
		int32_t L_13;
		L_13 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_12, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_000b;
		}
	}
	{
		// return txt.ToString();
		StringBuilder_t * L_15 = V_0;
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		V_3 = L_16;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		String_t* L_17 = V_3;
		return L_17;
	}
}
// System.Void Photon.Chat.ChatChannel::ReadChannelProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ReadChannelProperties_m6D5006A08AC5C8A8F224CC0F6C5C7F26163BBEB0 (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___newProperties0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B3_0 = 0;
	{
		// if (newProperties != null && newProperties.Count > 0)
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_0 = ___newProperties0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_1 = ___newProperties0;
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0103;
		}
	}
	{
		// if (this.properties == null)
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_4 = __this->get_properties_7();
		V_2 = (bool)((((RuntimeObject*)(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// this.properties = new Dictionary<object, object>(newProperties.Count);
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_6 = ___newProperties0;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA(L_6, /*hidden argument*/Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_8 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)il2cpp_codegen_object_new(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097(L_8, L_7, /*hidden argument*/Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_RuntimeMethod_var);
		__this->set_properties_7(L_8);
	}

IL_0038:
	{
		// foreach (var pair in newProperties)
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_9 = ___newProperties0;
		Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  L_10;
		L_10 = Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F(L_9, /*hidden argument*/Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0090;
		}

IL_0042:
		{
			// foreach (var pair in newProperties)
			KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11;
			L_11 = Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_inline((Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_RuntimeMethod_var);
			V_4 = L_11;
			// if (pair.Value == null)
			RuntimeObject * L_12;
			L_12 = KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var);
			V_5 = (bool)((((RuntimeObject*)(RuntimeObject *)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_13 = V_5;
			if (!L_13)
			{
				goto IL_0073;
			}
		}

IL_005c:
		{
			// this.properties.Remove(pair.Key);
			Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_14 = __this->get_properties_7();
			RuntimeObject * L_15;
			L_15 = KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var);
			bool L_16;
			L_16 = Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611(L_14, L_15, /*hidden argument*/Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_RuntimeMethod_var);
			goto IL_008f;
		}

IL_0073:
		{
			// this.properties[pair.Key] = pair.Value;
			Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_17 = __this->get_properties_7();
			RuntimeObject * L_18;
			L_18 = KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_RuntimeMethod_var);
			RuntimeObject * L_19;
			L_19 = KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_inline((KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_RuntimeMethod_var);
			Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A(L_17, L_18, L_19, /*hidden argument*/Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var);
		}

IL_008f:
		{
		}

IL_0090:
		{
			// foreach (var pair in newProperties)
			bool L_20;
			L_20 = Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0((Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0042;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xAA, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279((Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_RuntimeMethod_var);
		IL2CPP_END_FINALLY(155)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAA, IL_00aa)
	}

IL_00aa:
	{
		// if (this.properties.TryGetValue(ChannelWellKnownProperties.PublishSubscribers, out temp))
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_21 = __this->get_properties_7();
		uint8_t L_22 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_23 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_22);
		bool L_24;
		L_24 = Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C(L_21, L_23, (RuntimeObject **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_RuntimeMethod_var);
		V_6 = L_24;
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00d6;
		}
	}
	{
		// this.PublishSubscribers = (bool)temp;
		RuntimeObject * L_26 = V_1;
		ChatChannel_set_PublishSubscribers_mD0477A247F2855FBEAEA02E542D0BBD93EA416A3_inline(__this, ((*(bool*)((bool*)UnBox(L_26, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// if (this.properties.TryGetValue(ChannelWellKnownProperties.MaxSubscribers, out temp))
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_27 = __this->get_properties_7();
		uint8_t L_28 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_29 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_28);
		bool L_30;
		L_30 = Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C(L_27, L_29, (RuntimeObject **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_RuntimeMethod_var);
		V_7 = L_30;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_0102;
		}
	}
	{
		// this.MaxSubscribers = (int)temp;
		RuntimeObject * L_32 = V_1;
		ChatChannel_set_MaxSubscribers_m3F970011C2E8CA0428035FDBDF8F27F51D35E60E_inline(__this, ((*(int32_t*)((int32_t*)UnBox(L_32, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_0102:
	{
	}

IL_0103:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::AddSubscribers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_AddSubscribers_m1B6065D45D500D14814371DB189FFA5B6E16C37C (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___users0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (users == null)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___users0;
		V_0 = (bool)((((RuntimeObject*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_002f;
	}

IL_000c:
	{
		// for (int i = 0; i < users.Length; i++)
		V_1 = 0;
		goto IL_0025;
	}

IL_0010:
	{
		// this.Subscribers.Add(users[i]);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_2 = __this->get_Subscribers_10();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___users0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_2, L_6, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		// for (int i = 0; i < users.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0025:
	{
		// for (int i = 0; i < users.Length; i++)
		int32_t L_9 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = ___users0;
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0010;
		}
	}

IL_002f:
	{
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
// System.Boolean Photon.Chat.ChatClient::get_EnableProtocolFallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_EnableProtocolFallback_m91D09CEC68589E6E027949CA976116686E460FAF (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = __this->get_U3CEnableProtocolFallbackU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_EnableProtocolFallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_EnableProtocolFallback_m7509562E61E92518A9EA1675E084EBD8E0D364F2 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CEnableProtocolFallbackU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_NameServerAddress_mFD60FA50656EB21933745288D5DDE67E3CAE8577 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = __this->get_U3CNameServerAddressU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_mB5FB3E44562605753BFC72E14F22FF8609EF452F (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameServerAddressU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = __this->get_U3CFrontendAddressU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_mE3866F5C3D8936B3A1434C8F6D1C4A99DAB60D5B (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFrontendAddressU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_ChatRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_ChatRegion_mA84787C704F9D905B11A083A799A8980F2954C69 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return this.chatRegion; }
		String_t* L_0 = __this->get_chatRegion_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.chatRegion; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::set_ChatRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_m37E6BCF1E50792F17B5216E4CF763016E7A4A23B (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatRegion = value; }
		String_t* L_0 = ___value0;
		__this->set_chatRegion_6(L_0);
		// set { this.chatRegion = value; }
		return;
	}
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_7(L_0);
		return;
	}
}
// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::get_DisconnectedCause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m5ECA68F6962C394FD66EEA2EDA0C2B7BB46F329A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDisconnectedCauseU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return this.State == ChatState.ConnectedToFrontEnd && this.HasPeer; }
		int32_t L_0;
		L_0 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		// get { return this.State == ChatState.ConnectedToFrontEnd && this.HasPeer; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::CanChatInChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_CanChatInChannel_mB9E4BA49A67F28B5A8C0423D484F98D9731FC1D3 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC01D0E5B04220494DBF03F43BC035D8587B55CA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return this.CanChat && this.PublicChannels.ContainsKey(channelName) && !this.PublicChannelsUnsubscribing.Contains(channelName);
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_1 = __this->get_PublicChannels_14();
		String_t* L_2 = ___channelName0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mC01D0E5B04220494DBF03F43BC035D8587B55CA4(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mC01D0E5B04220494DBF03F43BC035D8587B55CA4_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_4 = __this->get_PublicChannelsUnsubscribing_16();
		String_t* L_5 = ___channelName0;
		bool L_6;
		L_6 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_4, L_5, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 0;
	}

IL_0029:
	{
		V_0 = (bool)G_B4_0;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.chatPeer != null; }
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_18();
		V_0 = (bool)((!(((RuntimeObject*)(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// get { return this.chatPeer != null; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.Chat.ChatClient::get_AppVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m5213F18EE165B0A7C6B62AD85BE8C15BBF1039C7 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m14D98091CE28ABE7175647E1D4A9A6FF20862E98 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppVersionU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m2BE1846DFCE4654E59CFD6AF1E9FEC7DA738F76D (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m97E453B89EB457220FF3170F5216556DACBF9183 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_10(L_0);
		return;
	}
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___value0, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// return (this.AuthValues != null) ? this.AuthValues.UserId : null;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0;
		L_0 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0017;
	}

IL_000c:
	{
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_1;
		L_1 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m323C8CAF9B49E22CDADFB07E62ED49556BDC9B79 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.AuthValues == null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0;
		L_0 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// this.AuthValues = new AuthenticationValues();
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_2 = (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)il2cpp_codegen_object_new(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m6555927C7F89CFF60E624D43E5818D2F3A6DDE82(L_2, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45_inline(__this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// this.AuthValues.UserId = value;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_3;
		L_3 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___value0;
		AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1_inline(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m339D1ED46CDD4C32831C1EA88B9A9324F3B1F578 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = __this->get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_UseBackgroundWorkerForSending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UseBackgroundWorkerForSending_m6C66D938C6AA39C08472E42C6F1E1CA5AD1584FF (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25(L_0);
		return;
	}
}
// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatClient::get_TransportProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_TransportProtocol_m1524D32B04F55144684C2A594E6C740F9ACFFC50 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return this.chatPeer.TransportProtocol; }
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_18();
		uint8_t L_1;
		L_1 = PhotonPeer_get_TransportProtocol_mE57006B6BA00BD0F282DBCC21991260C98B02B76_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.chatPeer.TransportProtocol; }
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_TransportProtocol_m70A8BDEC139E7A9174DA533022917CA6A0E908D4 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerStateValue_t817B14A6AC3A29C60100492571625A352791670A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral172E7126E04AAF6726B1FF8DE1B89DC2CE7B19CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55BE77744B85C109A578D5AB1BBDCE3460B55D03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1EBF015C0D71167210B0E732686AEE3A3E976B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint8_t V_1 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	RuntimeObject* G_B6_2 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject* G_B5_2 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	RuntimeObject* G_B7_3 = NULL;
	{
		// if (this.chatPeer == null || this.chatPeer.PeerState != PeerStateValue.Disconnected)
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_18();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_18();
		uint8_t L_2;
		L_2 = PhotonPeer_get_PeerState_mDDB57B138B2CDC07A9BC05FD893F3DF698CDF665(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Can't set TransportProtocol. Disconnect first! " + ((this.chatPeer != null) ? "PeerState: " + this.chatPeer.PeerState : "The chatPeer is null."));
		RuntimeObject* L_4 = __this->get_listener_17();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_5 = __this->get_chatPeer_18();
		G_B5_0 = _stringLiteralDA1EBF015C0D71167210B0E732686AEE3A3E976B;
		G_B5_1 = 2;
		G_B5_2 = L_4;
		if (L_5)
		{
			G_B6_0 = _stringLiteralDA1EBF015C0D71167210B0E732686AEE3A3E976B;
			G_B6_1 = 2;
			G_B6_2 = L_4;
			goto IL_003a;
		}
	}
	{
		G_B7_0 = _stringLiteral55BE77744B85C109A578D5AB1BBDCE3460B55D03;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_005d;
	}

IL_003a:
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_6 = __this->get_chatPeer_18();
		uint8_t L_7;
		L_7 = PhotonPeer_get_PeerState_mDDB57B138B2CDC07A9BC05FD893F3DF698CDF665(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		RuntimeObject * L_8 = Box(PeerStateValue_t817B14A6AC3A29C60100492571625A352791670A_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		V_1 = *(uint8_t*)UnBox(L_8);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral172E7126E04AAF6726B1FF8DE1B89DC2CE7B19CB, L_9, /*hidden argument*/NULL);
		G_B7_0 = L_10;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_005d:
	{
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, G_B7_3, G_B7_2, L_11);
		// return;
		goto IL_0077;
	}

IL_006a:
	{
		// this.chatPeer.TransportProtocol = value;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_12 = __this->get_chatPeer_18();
		uint8_t L_13 = ___value0;
		PhotonPeer_set_TransportProtocol_mFF896C6514F9CA6C7C83A82523D533C3690BD47E_inline(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> Photon.Chat.ChatClient::get_SocketImplementationConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 * ChatClient_get_SocketImplementationConfig_mA336404014AD311FCC260C77D9D350D476682A82 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 * V_0 = NULL;
	{
		// get { return this.chatPeer.SocketImplementationConfig; }
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_18();
		Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 * L_1 = ((PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 *)L_0)->get_SocketImplementationConfig_19();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.chatPeer.SocketImplementationConfig; }
		Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::.ctor(Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient__ctor_mEFED4E016C50D5EE65A2F930A7A5B6C2FA28966D (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF836C8AF47AFF33F1175FF955458D6180A087B6E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string chatRegion = "EU";
		__this->set_chatRegion_6(_stringLiteralF836C8AF47AFF33F1175FF955458D6180A087B6E);
		// public int PrivateChatHistoryLength = -1;
		__this->set_PrivateChatHistoryLength_13((-1));
		// private readonly IChatClientListener listener = null;
		__this->set_listener_17((RuntimeObject*)NULL);
		// public ChatPeer chatPeer = null;
		__this->set_chatPeer_18((ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F *)NULL);
		// private int msDeltaForServiceCalls = 50;
		__this->set_msDeltaForServiceCalls_23(((int32_t)50));
		// public ChatClient(IChatClientListener listener, ConnectionProtocol protocol = ConnectionProtocol.Udp)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.listener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->set_listener_17(L_0);
		// this.State = ChatState.Uninitialized;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 0, /*hidden argument*/NULL);
		// this.chatPeer = new ChatPeer(this, protocol);
		uint8_t L_1 = ___protocol1;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_2 = (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F *)il2cpp_codegen_object_new(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var);
		ChatPeer__ctor_m31252B90B54C7FA381D8E14F5FA9FD3A630F5029(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->set_chatPeer_18(L_2);
		// this.chatPeer.SerializationProtocolType = SerializationProtocol.GpBinaryV18;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_3 = __this->get_chatPeer_18();
		PhotonPeer_set_SerializationProtocolType_m6B00E068CEE4EBE7FD6926F5B0C89C817A5756DA_inline(L_3, 1, /*hidden argument*/NULL);
		// this.PublicChannels = new Dictionary<string, ChatChannel>();
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_4 = (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *)il2cpp_codegen_object_new(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E(L_4, /*hidden argument*/Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E_RuntimeMethod_var);
		__this->set_PublicChannels_14(L_4);
		// this.PrivateChannels = new Dictionary<string, ChatChannel>();
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_5 = (Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD *)il2cpp_codegen_object_new(Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E(L_5, /*hidden argument*/Dictionary_2__ctor_mF18DE73031B9FDA93E68F9894CF34C576031A71E_RuntimeMethod_var);
		__this->set_PrivateChannels_15(L_5);
		// this.PublicChannelsUnsubscribing = new HashSet<string>();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_6 = (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *)il2cpp_codegen_object_new(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818(L_6, /*hidden argument*/HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		__this->set_PublicChannelsUnsubscribing_16(L_6);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectUsingSettings(Photon.Chat.ChatAppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectUsingSettings_m80242F8205D8533C5392EEC4FE11B7664ACAB173 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * ___appSettings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BAD168215B6409DFD378F9C0FBE1D56E09E7BB9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (appSettings == null)
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_0 = ___appSettings0;
		V_0 = (bool)((((RuntimeObject*)(ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "ConnectUsingSettings failed. The appSettings can't be null.'");
		RuntimeObject* L_2 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral3BAD168215B6409DFD378F9C0FBE1D56E09E7BB9);
		// return false;
		V_1 = (bool)0;
		goto IL_00b7;
	}

IL_0023:
	{
		// if (!string.IsNullOrEmpty(appSettings.FixedRegion))
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_3 = ___appSettings0;
		String_t* L_4 = L_3->get_FixedRegion_2();
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// this.ChatRegion = appSettings.FixedRegion;
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_7 = ___appSettings0;
		String_t* L_8 = L_7->get_FixedRegion_2();
		ChatClient_set_ChatRegion_m37E6BCF1E50792F17B5216E4CF763016E7A4A23B(__this, L_8, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// this.DebugOut = appSettings.NetworkLogging;
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_9 = ___appSettings0;
		uint8_t L_10 = L_9->get_NetworkLogging_7();
		ChatClient_set_DebugOut_m767895E688A70F2AE0C9D85F320C3BFC8C95B5A9(__this, L_10, /*hidden argument*/NULL);
		// this.TransportProtocol = appSettings.Protocol;
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_11 = ___appSettings0;
		uint8_t L_12 = L_11->get_Protocol_5();
		ChatClient_set_TransportProtocol_m70A8BDEC139E7A9174DA533022917CA6A0E908D4(__this, L_12, /*hidden argument*/NULL);
		// this.EnableProtocolFallback = appSettings.EnableProtocolFallback;
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_13 = ___appSettings0;
		bool L_14 = L_13->get_EnableProtocolFallback_6();
		ChatClient_set_EnableProtocolFallback_m7509562E61E92518A9EA1675E084EBD8E0D364F2_inline(__this, L_14, /*hidden argument*/NULL);
		// if (!appSettings.IsDefaultNameServer)
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_15 = ___appSettings0;
		bool L_16;
		L_16 = ChatAppSettings_get_IsDefaultNameServer_mB99FC3B65C9E6637EE95320EF5B5DBF0F9A9BD71(L_15, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		// this.chatPeer.NameServerHost = appSettings.Server;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_18 = __this->get_chatPeer_18();
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_19 = ___appSettings0;
		String_t* L_20 = L_19->get_Server_3();
		L_18->set_NameServerHost_62(L_20);
		// this.chatPeer.NameServerPortOverride = appSettings.Port;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_21 = __this->get_chatPeer_18();
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_22 = ___appSettings0;
		uint16_t L_23 = L_22->get_Port_4();
		L_21->set_NameServerPortOverride_64(L_23);
	}

IL_009c:
	{
		// return this.Connect(appSettings.AppIdChat, appSettings.AppVersion, this.AuthValues);
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_24 = ___appSettings0;
		String_t* L_25 = L_24->get_AppIdChat_0();
		ChatAppSettings_tC09074621647F01C35C1373F86530BBC8D9DF2C8 * L_26 = ___appSettings0;
		String_t* L_27 = L_26->get_AppVersion_1();
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_28;
		L_28 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		bool L_29;
		L_29 = ChatClient_Connect_mA52FDED63386DE3529800716953C0070D4216738(__this, L_25, L_27, L_28, /*hidden argument*/NULL);
		V_1 = L_29;
		goto IL_00b7;
	}

IL_00b7:
	{
		// }
		bool L_30 = V_1;
		return L_30;
	}
}
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Connect_mA52FDED63386DE3529800716953C0070D4216738 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___authValues2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatClient_SendOutgoingInBackground_mDC079C534FBCA7D310F1C7909A4FC84B5675227E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m59CDAE2F2CF0AAD9D4955B676C4CA11170DCA699_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t3C6FD0679150AB8D4FC9E648D97B1135C73E8C6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA95F4BEB64A322209E2124DA276E04A8779F727);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF6A7CB87243568376528ACED2E19B84FDCE6A7C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		// this.chatPeer.TimePingInterval = 3000;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_18();
		((PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 *)L_0)->set_TimePingInterval_38(((int32_t)3000));
		// this.DisconnectedCause = ChatDisconnectCause.None;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, 0, /*hidden argument*/NULL);
		// if (authValues != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_1 = ___authValues2;
		V_1 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// this.AuthValues = authValues;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_3 = ___authValues2;
		ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// this.AppId = appId;
		String_t* L_4 = ___appId0;
		ChatClient_set_AppId_m97E453B89EB457220FF3170F5216556DACBF9183_inline(__this, L_4, /*hidden argument*/NULL);
		// this.AppVersion = appVersion;
		String_t* L_5 = ___appVersion1;
		ChatClient_set_AppVersion_m14D98091CE28ABE7175647E1D4A9A6FF20862E98_inline(__this, L_5, /*hidden argument*/NULL);
		// this.didAuthenticate = false;
		__this->set_didAuthenticate_20((bool)0);
		// this.chatPeer.QuickResendAttempts = 2;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_6 = __this->get_chatPeer_18();
		PhotonPeer_set_QuickResendAttempts_mA91BF78AD2DBE5038EECB8F90443DAF2DA2E53C7(L_6, (uint8_t)2, /*hidden argument*/NULL);
		// this.chatPeer.SentCountAllowance = 7;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_7 = __this->get_chatPeer_18();
		((PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 *)L_7)->set_SentCountAllowance_36(7);
		// this.PublicChannels.Clear();
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_8 = __this->get_PublicChannels_14();
		Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534(L_8, /*hidden argument*/Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534_RuntimeMethod_var);
		// this.PrivateChannels.Clear();
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_9 = __this->get_PrivateChannels_15();
		Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534(L_9, /*hidden argument*/Dictionary_2_Clear_mFEAFAF81695656BEE9F9FBAA786EA97B44B9E534_RuntimeMethod_var);
		// this.PublicChannelsUnsubscribing.Clear();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_10 = __this->get_PublicChannelsUnsubscribing_16();
		HashSet_1_Clear_m59CDAE2F2CF0AAD9D4955B676C4CA11170DCA699(L_10, /*hidden argument*/HashSet_1_Clear_m59CDAE2F2CF0AAD9D4955B676C4CA11170DCA699_RuntimeMethod_var);
		// if (this.TransportProtocol == ConnectionProtocol.Tcp || this.TransportProtocol == ConnectionProtocol.Udp)
		uint8_t L_11;
		L_11 = ChatClient_get_TransportProtocol_m1524D32B04F55144684C2A594E6C740F9ACFFC50(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		uint8_t L_12;
		L_12 = ChatClient_get_TransportProtocol_m1524D32B04F55144684C2A594E6C740F9ACFFC50(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_0094;
	}

IL_0093:
	{
		G_B5_0 = 1;
	}

IL_0094:
	{
		V_2 = (bool)G_B5_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "WebGL requires WebSockets. Switching TransportProtocol to WebSocketSecure.");
		RuntimeObject* L_14 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_14, 2, _stringLiteralCA95F4BEB64A322209E2124DA276E04A8779F727);
		// this.TransportProtocol = ConnectionProtocol.WebSocketSecure;
		ChatClient_set_TransportProtocol_m70A8BDEC139E7A9174DA533022917CA6A0E908D4(__this, 5, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		// this.NameServerAddress = this.chatPeer.NameServerAddress;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_15 = __this->get_chatPeer_18();
		String_t* L_16;
		L_16 = ChatPeer_get_NameServerAddress_m4BC0C17DC28CFA233CC5E2078DCFB9A3046B507F(L_15, /*hidden argument*/NULL);
		ChatClient_set_NameServerAddress_mB5FB3E44562605753BFC72E14F22FF8609EF452F_inline(__this, L_16, /*hidden argument*/NULL);
		// bool isConnecting = this.chatPeer.Connect();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_17 = __this->get_chatPeer_18();
		bool L_18;
		L_18 = ChatPeer_Connect_m0560376B05909F8A69353708FF0B150D5EB85D7F(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// if (isConnecting)
		bool L_19 = V_0;
		V_3 = L_19;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_00e1;
		}
	}
	{
		// this.State = ChatState.ConnectingToNameServer;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 1, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		// if (this.UseBackgroundWorkerForSending)
		bool L_21;
		L_21 = ChatClient_get_UseBackgroundWorkerForSending_m339D1ED46CDD4C32831C1EA88B9A9324F3B1F578_inline(__this, /*hidden argument*/NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_010c;
		}
	}
	{
		// SupportClass.StartBackgroundCalls(this.SendOutgoingInBackground, this.msDeltaForServiceCalls, "ChatClient Service Thread");
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_23 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_23, __this, (intptr_t)((intptr_t)ChatClient_SendOutgoingInBackground_mDC079C534FBCA7D310F1C7909A4FC84B5675227E_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		int32_t L_24 = __this->get_msDeltaForServiceCalls_23();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t3C6FD0679150AB8D4FC9E648D97B1135C73E8C6D_il2cpp_TypeInfo_var);
		uint8_t L_25;
		L_25 = SupportClass_StartBackgroundCalls_m682899F9F65A4909BEC6EEAB500BC53C5797ABCC(L_23, L_24, _stringLiteralDF6A7CB87243568376528ACED2E19B84FDCE6A7C, /*hidden argument*/NULL);
	}

IL_010c:
	{
		// return isConnecting;
		bool L_26 = V_0;
		V_5 = L_26;
		goto IL_0111;
	}

IL_0111:
	{
		// }
		bool L_27 = V_5;
		return L_27;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectAndSetStatus(System.String,System.String,Photon.Chat.AuthenticationValues,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectAndSetStatus_mB4E90C929D58952EC3652E77D9432CF97E5FCA48 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___authValues2, int32_t ___status3, RuntimeObject * ___message4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// statusToSetWhenConnected = status;
		int32_t L_0 = ___status3;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		__this->set_statusToSetWhenConnected_21(L_1);
		// messageToSetWhenConnected = message;
		RuntimeObject * L_2 = ___message4;
		__this->set_messageToSetWhenConnected_22(L_2);
		// return Connect(appId, appVersion, authValues);
		String_t* L_3 = ___appId0;
		String_t* L_4 = ___appVersion1;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_5 = ___authValues2;
		bool L_6;
		L_6 = ChatClient_Connect_mA52FDED63386DE3529800716953C0070D4216738(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void Photon.Chat.ChatClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Service_mF7621BB2972BE88B2FB7C3A730A6F60738D737BC (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	{
		goto IL_0005;
	}

IL_0003:
	{
	}

IL_0005:
	{
		// while (this.HasPeer && this.chatPeer.DispatchIncomingCommands())
		bool L_0;
		L_0 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_18();
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands() */, L_1);
		G_B5_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B5_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B5_0;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0003;
		}
	}
	{
		// if (!this.UseBackgroundWorkerForSending)
		bool L_4;
		L_4 = ChatClient_get_UseBackgroundWorkerForSending_m339D1ED46CDD4C32831C1EA88B9A9324F3B1F578_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// if (Environment.TickCount - this.msTimestampOfLastServiceCall > this.msDeltaForServiceCalls || this.msTimestampOfLastServiceCall == 0)
		int32_t L_6;
		L_6 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		int32_t L_7 = __this->get_msTimestampOfLastServiceCall_24();
		int32_t L_8 = __this->get_msDeltaForServiceCalls_23();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))) > ((int32_t)L_8)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_9 = __this->get_msTimestampOfLastServiceCall_24();
		G_B10_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B10_0 = 1;
	}

IL_004d:
	{
		V_2 = (bool)G_B10_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		// this.msTimestampOfLastServiceCall = Environment.TickCount;
		int32_t L_11;
		L_11 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		__this->set_msTimestampOfLastServiceCall_24(L_11);
		goto IL_0061;
	}

IL_005f:
	{
	}

IL_0061:
	{
		// while (this.HasPeer && this.chatPeer.SendOutgoingCommands())
		bool L_12;
		L_12 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_13 = __this->get_chatPeer_18();
		bool L_14;
		L_14 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_13);
		G_B16_0 = ((int32_t)(L_14));
		goto IL_0077;
	}

IL_0076:
	{
		G_B16_0 = 0;
	}

IL_0077:
	{
		V_3 = (bool)G_B16_0;
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_005f;
		}
	}
	{
	}

IL_007c:
	{
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendOutgoingInBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendOutgoingInBackground_mDC079C534FBCA7D310F1C7909A4FC84B5675227E (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		goto IL_0005;
	}

IL_0003:
	{
	}

IL_0005:
	{
		// while (this.HasPeer && this.chatPeer.SendOutgoingCommands())
		bool L_0;
		L_0 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_18();
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_1);
		G_B5_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B5_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B5_0;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0003;
		}
	}
	{
		// return this.State != ChatState.Disconnected;
		int32_t L_4;
		L_4 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002f:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Photon.Chat.ChatClient::SendAcksOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_SendAcksOnly_m43122F72ACF42947DA050A50D710358567A0F711 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (this.HasPeer) this.chatPeer.SendAcksOnly();
		bool L_0;
		L_0 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (this.HasPeer) this.chatPeer.SendAcksOnly();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_2 = __this->get_chatPeer_18();
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly() */, L_2);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.HasPeer && this.chatPeer.PeerState != PeerStateValue.Disconnected)
		bool L_0;
		L_0 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_1 = __this->get_chatPeer_18();
		uint8_t L_2;
		L_2 = PhotonPeer_get_PeerState_mDDB57B138B2CDC07A9BC05FD893F3DF698CDF665(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// this.State = ChatState.Disconnecting;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, ((int32_t)10), /*hidden argument*/NULL);
		// this.DisconnectedCause = cause;
		int32_t L_4 = ___cause0;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, L_4, /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_5 = __this->get_chatPeer_18();
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_5);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::StopThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_StopThread_m986F54C1B0D2049C356D2C84EBE5BEC7C6A10F7C (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (this.HasPeer)
		bool L_0;
		L_0 = ChatClient_get_HasPeer_mA15DE1F3C79C61B708397969A0BC63DA2D3C5181(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.chatPeer.StopThread();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_2 = __this->get_chatPeer_18();
		VirtActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PhotonPeer::StopThread() */, L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m7D2550E13A3078152307F894FE3E2F34BBDA32DC (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.Subscribe(channels, 0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___channels0;
		bool L_1;
		L_1 = ChatClient_Subscribe_m31B4C1A9EFA78BA1754E2179A328041A77736851(__this, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m46616D5803D260E29FFEB498412279142076F3E8 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___lastMsgIds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2443176A6E60D62ADAED633DBC0B0319623F9628);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32ED8AFB67F5C8CAB439735AE376C0A3A92B5785);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE699C4CC364949CA52ACF808CE9CD98DA290FDF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7943DAD13F6480BF6073BD0C327DF2B8C0B5F24);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B21_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2;
		L_2 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral32ED8AFB67F5C8CAB439735AE376C0A3A92B5785);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_003a:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = ___channels0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = ___channels0;
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B7_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8;
		L_8 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Subscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_10 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral2443176A6E60D62ADAED633DBC0B0319623F9628);
	}

IL_0072:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_0079:
	{
		// for (int i = 0; i < channels.Length; i++)
		V_6 = 0;
		goto IL_00cf;
	}

IL_007e:
	{
		// if (string.IsNullOrEmpty(channels[i]))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ___channels0;
		int32_t L_12 = V_6;
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15;
		L_15 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_14, /*hidden argument*/NULL);
		V_7 = L_15;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00c8;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_17;
		L_17 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_00c1;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Subscribe can't be called with a null or empty channel name at index {0}.", i));
		RuntimeObject* L_19 = __this->get_listener_17();
		int32_t L_20 = V_6;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE699C4CC364949CA52ACF808CE9CD98DA290FDF5, L_22, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_19, 1, L_23);
	}

IL_00c1:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_00c8:
	{
		// for (int i = 0; i < channels.Length; i++)
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00cf:
	{
		// for (int i = 0; i < channels.Length; i++)
		int32_t L_25 = V_6;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = ___channels0;
		V_9 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))? 1 : 0);
		bool L_27 = V_9;
		if (L_27)
		{
			goto IL_007e;
		}
	}
	{
		// if (lastMsgIds == null || lastMsgIds.Length != channels.Length)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = ___lastMsgIds1;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = ___lastMsgIds1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = ___channels0;
		G_B21_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B21_0 = 1;
	}

IL_00ed:
	{
		V_10 = (bool)G_B21_0;
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_011e;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_32;
		L_32 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_011a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe can't be called when \"lastMsgIds\" array is null or does not have the same length as \"channels\" array.");
		RuntimeObject* L_34 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_34, 1, _stringLiteralF7943DAD13F6480BF6073BD0C327DF2B8C0B5F24);
	}

IL_011a:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_011e:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object>
		// {
		//     { ChatParameterCode.Channels, channels },
		//     { ChatParameterCode.MsgIds,  lastMsgIds},
		//     { ChatParameterCode.HistoryLength, -1 } // server will decide how many messages to send to client
		// };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_35 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_35, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_36 = L_35;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = ___channels0;
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_36, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_37, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_38 = L_36;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = ___lastMsgIds1;
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_38, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_39, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_40 = L_38;
		int32_t L_41 = (-1);
		RuntimeObject * L_42 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_41);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_40, (uint8_t)((int32_t)14), L_42, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_40;
		// return this.chatPeer.SendOperation(ChatOperationCode.Subscribe, opParameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_43 = __this->get_chatPeer_18();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_44 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  L_45 = ((SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var))->get_SendReliable_0();
		bool L_46;
		L_46 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_43, (uint8_t)0, L_44, L_45);
		V_3 = L_46;
		goto IL_015b;
	}

IL_015b:
	{
		// }
		bool L_47 = V_3;
		return L_47;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m31B4C1A9EFA78BA1754E2179A328041A77736851 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2443176A6E60D62ADAED633DBC0B0319623F9628);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32ED8AFB67F5C8CAB439735AE376C0A3A92B5785);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2;
		L_2 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral32ED8AFB67F5C8CAB439735AE376C0A3A92B5785);
	}

IL_0033:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_007d;
	}

IL_0037:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = ___channels0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = ___channels0;
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		V_3 = (bool)G_B7_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8;
		L_8 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Subscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_10 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral2443176A6E60D62ADAED633DBC0B0319623F9628);
	}

IL_006d:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_007d;
	}

IL_0071:
	{
		// return this.SendChannelOperation(channels, (byte)ChatOperationCode.Subscribe, messagesFromHistory);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ___channels0;
		int32_t L_12 = ___messagesFromHistory1;
		bool L_13;
		L_13 = ChatClient_SendChannelOperation_m0727A81E02E0859790106C7EB566A03E8660386A(__this, L_11, (uint8_t)0, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean Photon.Chat.ChatClient::Unsubscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Unsubscribe_m931E28CF74EE5E21271BEA2E61D09731CA9560FE (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64F9D94F66B496B12E4135DCB8897AC320C6639C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral906FAEAAB91B0A987113A33F7759502D4DB5D57B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2;
		L_2 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Unsubscribe called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral906FAEAAB91B0A987113A33F7759502D4DB5D57B);
	}

IL_0033:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00ab;
	}

IL_0037:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = ___channels0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = ___channels0;
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		V_3 = (bool)G_B7_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8;
		L_8 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Unsubscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_10 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral64F9D94F66B496B12E4135DCB8897AC320C6639C);
	}

IL_006d:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00ab;
	}

IL_0071:
	{
		// foreach (string ch in channels)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ___channels0;
		V_5 = L_11;
		V_6 = 0;
		goto IL_0097;
	}

IL_007a:
	{
		// foreach (string ch in channels)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_5;
		int32_t L_13 = V_6;
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_7 = L_15;
		// this.PublicChannelsUnsubscribing.Add(ch);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_16 = __this->get_PublicChannelsUnsubscribing_16();
		String_t* L_17 = V_7;
		bool L_18;
		L_18 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_16, L_17, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0097:
	{
		// foreach (string ch in channels)
		int32_t L_20 = V_6;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = V_5;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_007a;
		}
	}
	{
		// return this.SendChannelOperation(channels, ChatOperationCode.Unsubscribe, 0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = ___channels0;
		bool L_23;
		L_23 = ChatClient_SendChannelOperation_m0727A81E02E0859790106C7EB566A03E8660386A(__this, L_22, (uint8_t)1, 0, /*hidden argument*/NULL);
		V_2 = L_23;
		goto IL_00ab;
	}

IL_00ab:
	{
		// }
		bool L_24 = V_2;
		return L_24;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessage_m247CDA8EF348813EFD3337E0A13B4652E55AF7A1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.publishMessage(channelName, message, true, forwardAsWebhook);
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3;
		L_3 = ChatClient_publishMessage_m537F695E6B63DB6A59721F4F73CDEF70714EA646(__this, L_0, L_1, (bool)1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessageUnreliable(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessageUnreliable_mAB6BF06C38E4BCC7D79C436A5F88E4B7DE66D320 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.publishMessage(channelName, message, false, forwardAsWebhook);
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3;
		L_3 = ChatClient_publishMessage_m537F695E6B63DB6A59721F4F73CDEF70714EA646(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_m537F695E6B63DB6A59721F4F73CDEF70714EA646 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E8D47E4F8EF60373D0CB9FE4B271BF0F317D5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB521CAB8B7F8FEE2FF3D6340BCAF8DE9F95F9A66);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2;
		L_2 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "PublishMessage called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral54E8D47E4F8EF60373D0CB9FE4B271BF0F317D5C);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00ce;
	}

IL_003a:
	{
		// if (string.IsNullOrEmpty(channelName) || message == null)
		String_t* L_5 = ___channelName0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject * L_7 = ___message1;
		G_B7_0 = ((((RuntimeObject*)(RuntimeObject *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B7_0 = 1;
	}

IL_0049:
	{
		V_4 = (bool)G_B7_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_9;
		L_9 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "PublishMessage parameters must be non-null and not empty.");
		RuntimeObject* L_11 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_11, 2, _stringLiteralB521CAB8B7F8FEE2FF3D6340BCAF8DE9F95F9A66);
	}

IL_0076:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00ce;
	}

IL_007a:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { (byte)ChatParameterCode.Channel, channelName },
		//         { (byte)ChatParameterCode.Message, message }
		//     };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_12 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_12, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_13 = L_12;
		String_t* L_14 = ___channelName0;
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_13, (uint8_t)1, L_14, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_15 = L_13;
		RuntimeObject * L_16 = ___message1;
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_15, (uint8_t)3, L_16, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_15;
		// if (forwardAsWebhook)
		bool L_17 = ___forwardAsWebhook3;
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00ab;
		}
	}
	{
		// parameters.Add(ChatParameterCode.WebFlags, (byte)0x1);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_19 = V_0;
		uint8_t L_20 = ((uint8_t)1);
		RuntimeObject * L_21 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_20);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_19, (uint8_t)((int32_t)21), L_21, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_00ab:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Publish, parameters, new SendOptions() { Reliability = reliable });
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_22 = __this->get_chatPeer_18();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_23 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347 ));
		bool L_24 = ___reliable2;
		SendOptions_set_Reliability_m0608E94DFE9D69BFE6E6F557B09FE58947A87C9A((SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347 *)(&V_7), L_24, /*hidden argument*/NULL);
		SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  L_25 = V_7;
		bool L_26;
		L_26 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_22, (uint8_t)2, L_23, L_25);
		V_3 = L_26;
		goto IL_00ce;
	}

IL_00ce:
	{
		// }
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m442DE32D062B33965506D4F3C85CF2FAE5AF9A5A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SendPrivateMessage(target, message, false, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3;
		L_3 = ChatClient_SendPrivateMessage_mABF818667B25DC8DC288E65714333935C5F8C438(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_mABF818667B25DC8DC288E65714333935C5F8C438 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.sendPrivateMessage(target, message, encrypt, true, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4;
		L_4 = ChatClient_sendPrivateMessage_m1B2EEC37C257B39FD4A81FB705BE193267B741D9(__this, L_0, L_1, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessageUnreliable(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessageUnreliable_mF5C8E4311B7B4B748074432DC90F5F2FEDCB5A2B (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.sendPrivateMessage(target, message, encrypt, false, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4;
		L_4 = ChatClient_sendPrivateMessage_m1B2EEC37C257B39FD4A81FB705BE193267B741D9(__this, L_0, L_1, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_m1B2EEC37C257B39FD4A81FB705BE193267B741D9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14903F1665F1519144501C7CD4831F50EA3BD6F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A92BECAEC51D53182904975AED07C4B2D68B774);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2;
		L_2 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "SendPrivateMessage called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral3A92BECAEC51D53182904975AED07C4B2D68B774);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00db;
	}

IL_003a:
	{
		// if (string.IsNullOrEmpty(target) || message == null)
		String_t* L_5 = ___target0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject * L_7 = ___message1;
		G_B7_0 = ((((RuntimeObject*)(RuntimeObject *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B7_0 = 1;
	}

IL_0049:
	{
		V_4 = (bool)G_B7_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_9;
		L_9 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "SendPrivateMessage parameters must be non-null and not empty.");
		RuntimeObject* L_11 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_11, 2, _stringLiteral14903F1665F1519144501C7CD4831F50EA3BD6F7);
	}

IL_0076:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00db;
	}

IL_007a:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.UserId, target },
		//         { ChatParameterCode.Message, message }
		//     };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_12 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_12, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_13 = L_12;
		String_t* L_14 = ___target0;
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_13, (uint8_t)((int32_t)225), L_14, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_15 = L_13;
		RuntimeObject * L_16 = ___message1;
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_15, (uint8_t)3, L_16, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_15;
		// if (forwardAsWebhook)
		bool L_17 = ___forwardAsWebhook4;
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00af;
		}
	}
	{
		// parameters.Add(ChatParameterCode.WebFlags, (byte)0x1);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_19 = V_0;
		uint8_t L_20 = ((uint8_t)1);
		RuntimeObject * L_21 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_20);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_19, (uint8_t)((int32_t)21), L_21, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_00af:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.SendPrivate, parameters, new SendOptions() { Reliability = reliable, Encrypt = encrypt });
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_22 = __this->get_chatPeer_18();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_23 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347 ));
		bool L_24 = ___reliable3;
		SendOptions_set_Reliability_m0608E94DFE9D69BFE6E6F557B09FE58947A87C9A((SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347 *)(&V_7), L_24, /*hidden argument*/NULL);
		bool L_25 = ___encrypt2;
		(&V_7)->set_Encrypt_3(L_25);
		SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  L_26 = V_7;
		bool L_27;
		L_27 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_22, (uint8_t)3, L_23, L_26);
		V_3 = L_27;
		goto IL_00db;
	}

IL_00db:
	{
		// }
		bool L_28 = V_3;
		return L_28;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m126C2C6914498BF8DA7B81CD8B049B3B7EAA08AA (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral695E1FE878B0520A6C9E2F883C405378F3C8ED3F);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2;
		L_2 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "SetOnlineStatus called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral695E1FE878B0520A6C9E2F883C405378F3C8ED3F);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0086;
	}

IL_0037:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Status, status },
		//     };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_5 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_5, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_6 = L_5;
		int32_t L_7 = ___status0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_6, (uint8_t)((int32_t)10), L_9, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_6;
		// if (skipMessage)
		bool L_10 = ___skipMessage2;
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// parameters[ChatParameterCode.SkipMessage] = true;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_12 = V_0;
		bool L_13 = ((bool)1);
		RuntimeObject * L_14 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_13);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_12, (uint8_t)((int32_t)12), L_14, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		goto IL_0071;
	}

IL_0066:
	{
		// parameters[ChatParameterCode.Message] = message;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_15 = V_0;
		RuntimeObject * L_16 = ___message1;
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_15, (uint8_t)3, L_16, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
	}

IL_0071:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.UpdateStatus, parameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_17 = __this->get_chatPeer_18();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  L_19 = ((SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var))->get_SendReliable_0();
		bool L_20;
		L_20 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_17, (uint8_t)5, L_18, L_19);
		V_3 = L_20;
		goto IL_0086;
	}

IL_0086:
	{
		// }
		bool L_21 = V_3;
		return L_21;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mBF8152457350416C6A534018CF7F3ECECD1F02DD (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___status0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SetOnlineStatus(status, null, true);
		int32_t L_0 = ___status0;
		bool L_1;
		L_1 = ChatClient_SetOnlineStatus_m126C2C6914498BF8DA7B81CD8B049B3B7EAA08AA(__this, L_0, NULL, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mE7E9529EC7A3D5F1E32B643BC2607E8745FDFBE1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SetOnlineStatus(status, message, false);
		int32_t L_0 = ___status0;
		RuntimeObject * L_1 = ___message1;
		bool L_2;
		L_2 = ChatClient_SetOnlineStatus_m126C2C6914498BF8DA7B81CD8B049B3B7EAA08AA(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::AddFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AddFriends_mC7942016F23662064DC38F90F32128C14C65CEEE (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46EDC735A64857CCBB54DA3A191D860CD77E4BC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62A96FA0BD40BECCCDE57B87BAAD7344D196B1AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC542CF71ADE21664A8CC512222D2769749604E30);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2;
		L_2 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "AddFriends called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral62A96FA0BD40BECCCDE57B87BAAD7344D196B1AA);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00fd;
	}

IL_003a:
	{
		// if (friends == null || friends.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = ___friends0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = ___friends0;
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B7_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8;
		L_8 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "AddFriends can't be called for empty or null list.");
		RuntimeObject* L_10 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_10, 2, _stringLiteralC542CF71ADE21664A8CC512222D2769749604E30);
	}

IL_0072:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00fd;
	}

IL_0079:
	{
		// if (friends.Length > FriendRequestListMax)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ___friends0;
		V_6 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))) > ((int32_t)((int32_t)1024)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_00d8;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13;
		L_13 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_00d4;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "AddFriends max list size exceeded: " + friends.Length + " > " + FriendRequestListMax);
		RuntimeObject* L_15 = __this->get_listener_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = ___friends0;
		V_8 = ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)));
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_8), /*hidden argument*/NULL);
		V_8 = ((int32_t)1024);
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_8), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral46EDC735A64857CCBB54DA3A191D860CD77E4BC6, L_17, _stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657, L_18, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_15, 2, L_19);
	}

IL_00d4:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00fd;
	}

IL_00d8:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Friends, friends },
		//     };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_20 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_20, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_21 = L_20;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = ___friends0;
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_21, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_22, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_21;
		// return this.chatPeer.SendOperation(ChatOperationCode.AddFriends, parameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_23 = __this->get_chatPeer_18();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  L_25 = ((SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var))->get_SendReliable_0();
		bool L_26;
		L_26 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_23, (uint8_t)6, L_24, L_25);
		V_3 = L_26;
		goto IL_00fd;
	}

IL_00fd:
	{
		// }
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Boolean Photon.Chat.ChatClient::RemoveFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_RemoveFriends_mC49F6EA1B53506D6A8619B4CD1C50ED46D21E04D (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05735D340DC6F0A0F9208712869EFC8065DB1040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E14C99C5905C97FAA1BAD3AA2BB4F3DA6FA045B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4A3F6514E2CF8783CDAB372E72E9BCD8E42ADA3);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0;
		L_0 = ChatClient_get_CanChat_m926CE782638ABF20F28452ACE710B91A6EA1A1C9(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2;
		L_2 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "RemoveFriends called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_4, 1, _stringLiteralA4A3F6514E2CF8783CDAB372E72E9BCD8E42ADA3);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00fd;
	}

IL_003a:
	{
		// if (friends == null || friends.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = ___friends0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = ___friends0;
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B7_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8;
		L_8 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "RemoveFriends can't be called for empty or null list.");
		RuntimeObject* L_10 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral05735D340DC6F0A0F9208712869EFC8065DB1040);
	}

IL_0072:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00fd;
	}

IL_0079:
	{
		// if (friends.Length > FriendRequestListMax)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = ___friends0;
		V_6 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))) > ((int32_t)((int32_t)1024)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_00d8;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13;
		L_13 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_00d4;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "RemoveFriends max list size exceeded: " + friends.Length + " > " + FriendRequestListMax);
		RuntimeObject* L_15 = __this->get_listener_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = ___friends0;
		V_8 = ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)));
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_8), /*hidden argument*/NULL);
		V_8 = ((int32_t)1024);
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_8), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral6E14C99C5905C97FAA1BAD3AA2BB4F3DA6FA045B, L_17, _stringLiteral717DA9E2386BEADCFFB33AE09B063FCD2EE1A657, L_18, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_15, 2, L_19);
	}

IL_00d4:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00fd;
	}

IL_00d8:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Friends, friends },
		//     };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_20 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_20, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_21 = L_20;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = ___friends0;
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_21, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_22, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_21;
		// return this.chatPeer.SendOperation(ChatOperationCode.RemoveFriends, parameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_23 = __this->get_chatPeer_18();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  L_25 = ((SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var))->get_SendReliable_0();
		bool L_26;
		L_26 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_23, (uint8_t)7, L_24, L_25);
		V_3 = L_26;
		goto IL_00fd;
	}

IL_00fd:
	{
		// }
		bool L_27 = V_3;
		return L_27;
	}
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_mE60D21EE0C58BF37FE440DB095718CAA455276E0 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___userName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("{0}:{1}", this.UserId, userName);
		String_t* L_0;
		L_0 = ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___userName0;
		String_t* L_2;
		L_2 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m963B3989F53FDF4D44809B6892426F2DF1587594 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!isPrivate)
		bool L_0 = ___isPrivate1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return this.PublicChannels.TryGetValue(channelName, out channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_2 = __this->get_PublicChannels_14();
		String_t* L_3 = ___channelName0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_4 = ___channel2;
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_2, L_3, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)L_4, /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_002b;
	}

IL_001a:
	{
		// return this.PrivateChannels.TryGetValue(channelName, out channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_6 = __this->get_PrivateChannels_15();
		String_t* L_7 = ___channelName0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_8 = ___channel2;
		bool L_9;
		L_9 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_6, L_7, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)L_8, /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_mED491B02E74F700084FEDCE962D2E0BFFBBEF5F5 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channelName0, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool found = false;
		V_0 = (bool)0;
		// found = this.PublicChannels.TryGetValue(channelName, out channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_0 = __this->get_PublicChannels_14();
		String_t* L_1 = ___channelName0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_2 = ___channel1;
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_0, L_1, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		V_0 = L_3;
		// if (found) return true;
		bool L_4 = V_0;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		// if (found) return true;
		V_2 = (bool)1;
		goto IL_002c;
	}

IL_001a:
	{
		// found = this.PrivateChannels.TryGetValue(channelName, out channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_6 = __this->get_PrivateChannels_15();
		String_t* L_7 = ___channelName0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_8 = ___channel1;
		bool L_9;
		L_9 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_6, L_7, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)L_8, /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		V_0 = L_9;
		// return found;
		bool L_10 = V_0;
		V_2 = L_10;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetPrivateChannelByUser(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetPrivateChannelByUser_m1F89B66602C9FC00827829E5DAA3965F9D51DC4B (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___userId0, ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** ___channel1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// channel = null;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_0 = ___channel1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (string.IsNullOrEmpty(userId))
		String_t* L_1 = ___userId0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0027;
	}

IL_0013:
	{
		// string channelName = this.GetPrivateChannelNameByUser(userId);
		String_t* L_4 = ___userId0;
		String_t* L_5;
		L_5 = ChatClient_GetPrivateChannelNameByUser_mE60D21EE0C58BF37FE440DB095718CAA455276E0(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// return this.TryGetChannel(channelName, true, out channel);
		String_t* L_6 = V_0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A ** L_7 = ___channel1;
		bool L_8;
		L_8 = ChatClient_TryGetChannel_m963B3989F53FDF4D44809B6892426F2DF1587594(__this, L_6, (bool)1, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DebugOut_m767895E688A70F2AE0C9D85F320C3BFC8C95B5A9 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatPeer.DebugOut = value; }
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_18();
		uint8_t L_1 = ___value0;
		((PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 *)L_0)->set_DebugOut_21(L_1);
		// set { this.chatPeer.DebugOut = value; }
		return;
	}
}
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return this.chatPeer.DebugOut; }
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_0 = __this->get_chatPeer_18();
		uint8_t L_1 = ((PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 *)L_0)->get_DebugOut_21();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.chatPeer.DebugOut; }
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_mA6D5E806F0996EC926D3AA4CD59A2FBD509F15F1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, uint8_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.listener.DebugReturn(level, message);
		RuntimeObject* L_0 = __this->get_listener_17();
		uint8_t L_1 = ___level0;
		String_t* L_2 = ___message1;
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m3C63C66C427880CB9F4816DD32420105550348F1 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		// switch (eventData.Code)
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_0 = ___eventData0;
		uint8_t L_1 = L_0->get_Code_0();
		V_1 = L_1;
		uint8_t L_2 = V_1;
		V_0 = L_2;
		uint8_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_0080;
			}
			case 2:
			{
				goto IL_0044;
			}
			case 3:
			{
				goto IL_0080;
			}
			case 4:
			{
				goto IL_004e;
			}
			case 5:
			{
				goto IL_0058;
			}
			case 6:
			{
				goto IL_0062;
			}
			case 7:
			{
				goto IL_0080;
			}
			case 8:
			{
				goto IL_006c;
			}
			case 9:
			{
				goto IL_0076;
			}
		}
	}
	{
		goto IL_0080;
	}

IL_003a:
	{
		// this.HandleChatMessagesEvent(eventData);
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_4 = ___eventData0;
		ChatClient_HandleChatMessagesEvent_mA4A9D83BAA8691B4F6CE243E43BA845DC6F647FD(__this, L_4, /*hidden argument*/NULL);
		// break;
		goto IL_0080;
	}

IL_0044:
	{
		// this.HandlePrivateMessageEvent(eventData);
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_5 = ___eventData0;
		ChatClient_HandlePrivateMessageEvent_mE7C222704592DB3770C57C07CA347CD9670FF2E0(__this, L_5, /*hidden argument*/NULL);
		// break;
		goto IL_0080;
	}

IL_004e:
	{
		// this.HandleStatusUpdate(eventData);
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_6 = ___eventData0;
		ChatClient_HandleStatusUpdate_m783F749848C57BE337FE1F2CCDD212C76ED1DB2A(__this, L_6, /*hidden argument*/NULL);
		// break;
		goto IL_0080;
	}

IL_0058:
	{
		// this.HandleSubscribeEvent(eventData);
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_7 = ___eventData0;
		ChatClient_HandleSubscribeEvent_mD025253B329C8BE3E17DBB1884E19A906A15DFB3(__this, L_7, /*hidden argument*/NULL);
		// break;
		goto IL_0080;
	}

IL_0062:
	{
		// this.HandleUnsubscribeEvent(eventData);
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_8 = ___eventData0;
		ChatClient_HandleUnsubscribeEvent_m93FB78D0FD4EE297ABC5A46E5D14E3CFB6B28D06(__this, L_8, /*hidden argument*/NULL);
		// break;
		goto IL_0080;
	}

IL_006c:
	{
		// this.HandleUserSubscribedEvent(eventData);
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_9 = ___eventData0;
		ChatClient_HandleUserSubscribedEvent_mC2DA87D9BC5BFFDE6DBFEE5FDB932ECA49E84992(__this, L_9, /*hidden argument*/NULL);
		// break;
		goto IL_0080;
	}

IL_0076:
	{
		// this.HandleUserUnsubscribedEvent(eventData);
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_10 = ___eventData0;
		ChatClient_HandleUserUnsubscribedEvent_m099F22C84F0D33F3B6922F9406D3354F1BE5DCA8(__this, L_10, /*hidden argument*/NULL);
		// break;
		goto IL_0080;
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m288512FB7F6FA51301AB2B851210890915D6E863 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56F4CE3D38299DE86F612B0D25AABE7291C45297);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A1A0DEF864EC040A24126B7A194105027A0D5D4);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B8_0 = 0;
	{
		// switch (operationResponse.OperationCode)
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_0 = ___operationResponse0;
		uint8_t L_1 = L_0->get_OperationCode_0();
		V_1 = L_1;
		uint8_t L_2 = V_1;
		V_0 = L_2;
		uint8_t L_3 = V_0;
		if ((!(((uint32_t)L_3) > ((uint32_t)3))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		uint8_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)230))))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0027;
	}

IL_001a:
	{
		// this.HandleAuthResponse(operationResponse);
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_5 = ___operationResponse0;
		ChatClient_HandleAuthResponse_mFCC325D3D8794664F80D734B8EE900530B24CCC6(__this, L_5, /*hidden argument*/NULL);
		// break;
		goto IL_00af;
	}

IL_0027:
	{
		// if ((operationResponse.ReturnCode != 0) && (this.DebugOut >= DebugLevel.ERROR))
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_6 = ___operationResponse0;
		int16_t L_7 = L_6->get_ReturnCode_1();
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		uint8_t L_8;
		L_8 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_8) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 0;
	}

IL_003e:
	{
		V_2 = (bool)G_B8_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_00ad;
		}
	}
	{
		// if (operationResponse.ReturnCode == -2)
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_10 = ___operationResponse0;
		int16_t L_11 = L_10->get_ReturnCode_1();
		V_3 = (bool)((((int32_t)L_11) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Chat Operation {0} unknown on server. Check your AppId and make sure it's for a Chat application.", operationResponse.OperationCode));
		RuntimeObject* L_13 = __this->get_listener_17();
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_14 = ___operationResponse0;
		uint8_t L_15 = L_14->get_OperationCode_0();
		uint8_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral9A1A0DEF864EC040A24126B7A194105027A0D5D4, L_17, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_13, 1, L_18);
		goto IL_00ac;
	}

IL_0077:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Chat Operation {0} failed (Code: {1}). Debug Message: {2}", operationResponse.OperationCode, operationResponse.ReturnCode, operationResponse.DebugMessage));
		RuntimeObject* L_19 = __this->get_listener_17();
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_20 = ___operationResponse0;
		uint8_t L_21 = L_20->get_OperationCode_0();
		uint8_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_22);
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_24 = ___operationResponse0;
		int16_t L_25 = L_24->get_ReturnCode_1();
		int16_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_26);
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_28 = ___operationResponse0;
		String_t* L_29 = L_28->get_DebugMessage_2();
		String_t* L_30;
		L_30 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral56F4CE3D38299DE86F612B0D25AABE7291C45297, L_23, L_27, L_29, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_19, 1, L_30);
	}

IL_00ac:
	{
	}

IL_00ad:
	{
		// break;
		goto IL_00af;
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_mB49A1CA9B94D292A44B6DAF343ABA831973B3A8A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___statusCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EC6B861684EFBC6F7D7FAB8ED28E170565B09C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1605C9390111B876A1B670691E1A90A58C218D34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68D7F8920CC9A5C9EB6CEA86D4BDEC243463A827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74935E070666FF5C1140D9B3C70DF02FD27A7B52);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * G_B29_0 = NULL;
	ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * G_B30_1 = NULL;
	int32_t G_B41_0 = 0;
	int32_t G_B52_0 = 0;
	{
		// switch (statusCode)
		int32_t L_0 = ___statusCode0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)1022))))
		{
			case 0:
			{
				goto IL_0279;
			}
			case 1:
			{
				goto IL_0279;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0153;
			}
			case 4:
			{
				goto IL_02b4;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)1039))))
		{
			case 0:
			{
				goto IL_02b4;
			}
			case 1:
			{
				goto IL_02dc;
			}
			case 2:
			{
				goto IL_02be;
			}
			case 3:
			{
				goto IL_025a;
			}
			case 4:
			{
				goto IL_02c8;
			}
			case 5:
			{
				goto IL_02d2;
			}
			case 6:
			{
				goto IL_0317;
			}
			case 7:
			{
				goto IL_0317;
			}
			case 8:
			{
				goto IL_0317;
			}
			case 9:
			{
				goto IL_0147;
			}
			case 10:
			{
				goto IL_0279;
			}
		}
	}
	{
		goto IL_0317;
	}

IL_0064:
	{
		// if (!this.chatPeer.IsProtocolSecure)
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_4 = __this->get_chatPeer_18();
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure() */, L_4);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00b4;
		}
	}
	{
		// if (!this.chatPeer.EstablishEncryption())
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_7 = __this->get_chatPeer_18();
		bool L_8;
		L_8 = PhotonPeer_EstablishEncryption_m0C182E5DB068A7016B3BC6FA2D4671281C8B8A8B(L_7, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00b1;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_10;
		L_10 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_00b0;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Error establishing encryption");
		RuntimeObject* L_12 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_12, 1, _stringLiteral74935E070666FF5C1140D9B3C70DF02FD27A7B52);
	}

IL_00b0:
	{
	}

IL_00b1:
	{
		goto IL_00bd;
	}

IL_00b4:
	{
		// this.TryAuthenticateOnNameServer();
		ChatClient_TryAuthenticateOnNameServer_m440074A71E9387139A6C89F44128DF4619802ECB(__this, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// if (this.State == ChatState.ConnectingToNameServer)
		int32_t L_13;
		L_13 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)1))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00ea;
		}
	}
	{
		// this.State = ChatState.ConnectedToNameServer;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 2, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_15 = __this->get_listener_17();
		int32_t L_16;
		L_16 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_15, L_16);
		goto IL_0142;
	}

IL_00ea:
	{
		// else if (this.State == ChatState.ConnectingToFrontEnd)
		int32_t L_17;
		L_17 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)6))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0142;
		}
	}
	{
		// if (!this.AuthenticateOnFrontEnd())
		bool L_19;
		L_19 = ChatClient_AuthenticateOnFrontEnd_m4E005CD5611CE63F801F714BC5FF3282B9A06002(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_0141;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_21;
		L_21 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_0140;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Error authenticating on frontend! Check log output, AuthValues and if you're connected. State: {0}", this.State));
		RuntimeObject* L_23 = __this->get_listener_17();
		int32_t L_24;
		L_24 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		int32_t L_25 = L_24;
		RuntimeObject * L_26 = Box(ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1605C9390111B876A1B670691E1A90A58C218D34, L_26, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_23, 1, L_27);
	}

IL_0140:
	{
	}

IL_0141:
	{
	}

IL_0142:
	{
		// break;
		goto IL_0317;
	}

IL_0147:
	{
		// this.TryAuthenticateOnNameServer();
		ChatClient_TryAuthenticateOnNameServer_m440074A71E9387139A6C89F44128DF4619802ECB(__this, /*hidden argument*/NULL);
		// break;
		goto IL_0317;
	}

IL_0153:
	{
		// switch (this.State)
		int32_t L_28;
		L_28 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		V_11 = L_28;
		int32_t L_29 = V_11;
		V_10 = L_29;
		int32_t L_30 = V_10;
		if ((((int32_t)L_30) == ((int32_t)4)))
		{
			goto IL_01c1;
		}
	}
	{
		goto IL_0166;
	}

IL_0166:
	{
		int32_t L_31 = V_10;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)10))))
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_016e;
	}

IL_016e:
	{
		int32_t L_32 = V_10;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)12))))
		{
			goto IL_0176;
		}
	}
	{
		goto IL_01cf;
	}

IL_0176:
	{
		// this.EnableProtocolFallback = false;        // the client does a fallback only one time
		ChatClient_set_EnableProtocolFallback_m7509562E61E92518A9EA1675E084EBD8E0D364F2_inline(__this, (bool)0, /*hidden argument*/NULL);
		// this.chatPeer.NameServerPortOverride = 0;   // resets a value in the peer only (as we change the protocol, the port has to change, too)
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_33 = __this->get_chatPeer_18();
		L_33->set_NameServerPortOverride_64((uint16_t)0);
		// this.chatPeer.TransportProtocol = (this.chatPeer.TransportProtocol == ConnectionProtocol.Tcp) ? ConnectionProtocol.Udp : ConnectionProtocol.Tcp;
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_34 = __this->get_chatPeer_18();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_35 = __this->get_chatPeer_18();
		uint8_t L_36;
		L_36 = PhotonPeer_get_TransportProtocol_mE57006B6BA00BD0F282DBCC21991260C98B02B76_inline(L_35, /*hidden argument*/NULL);
		G_B28_0 = L_34;
		if ((((int32_t)L_36) == ((int32_t)1)))
		{
			G_B29_0 = L_34;
			goto IL_01a1;
		}
	}
	{
		G_B30_0 = 1;
		G_B30_1 = G_B28_0;
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
	}

IL_01a2:
	{
		PhotonPeer_set_TransportProtocol_mFF896C6514F9CA6C7C83A82523D533C3690BD47E_inline(G_B30_1, G_B30_0, /*hidden argument*/NULL);
		// this.Connect(this.AppId, this.AppVersion, null);
		String_t* L_37;
		L_37 = ChatClient_get_AppId_m2BE1846DFCE4654E59CFD6AF1E9FEC7DA738F76D_inline(__this, /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = ChatClient_get_AppVersion_m5213F18EE165B0A7C6B62AD85BE8C15BBF1039C7_inline(__this, /*hidden argument*/NULL);
		bool L_39;
		L_39 = ChatClient_Connect_mA52FDED63386DE3529800716953C0070D4216738(__this, L_37, L_38, (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)NULL, /*hidden argument*/NULL);
		// return;
		goto IL_0317;
	}

IL_01c1:
	{
		// this.ConnectToFrontEnd();
		bool L_40;
		L_40 = ChatClient_ConnectToFrontEnd_mEF90DAE273F5589540D1412A17B00EA173123869(__this, /*hidden argument*/NULL);
		// return;
		goto IL_0317;
	}

IL_01cd:
	{
		// break;
		goto IL_0214;
	}

IL_01cf:
	{
		// string stacktrace = string.Empty;
		String_t* L_41 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_9 = L_41;
		// stacktrace = new System.Diagnostics.StackTrace(true).ToString();
		StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 * L_42 = (StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888 *)il2cpp_codegen_object_new(StackTrace_t43C03122C6B2AAF0DCCF684B2D5FA6E673F02888_il2cpp_TypeInfo_var);
		StackTrace__ctor_m7277E1F7BE981C911B55B2CC2FA53F844C640F1B(L_42, (bool)1, /*hidden argument*/NULL);
		String_t* L_43;
		L_43 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		V_9 = L_43;
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Got a unexpected Disconnect in ChatState: {0}. Server: {1} Trace: {2}", this.State, this.chatPeer.ServerAddress, stacktrace));
		RuntimeObject* L_44 = __this->get_listener_17();
		int32_t L_45;
		L_45 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		int32_t L_46 = L_45;
		RuntimeObject * L_47 = Box(ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var, &L_46);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_48 = __this->get_chatPeer_18();
		String_t* L_49;
		L_49 = PhotonPeer_get_ServerAddress_m75A83C000DF88E71D04D72F36D99558B0C4313AA(L_48, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		String_t* L_51;
		L_51 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral0EC6B861684EFBC6F7D7FAB8ED28E170565B09C6, L_47, L_49, L_50, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_44, 2, L_51);
		// break;
		goto IL_0214;
	}

IL_0214:
	{
		// if (this.AuthValues != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_52;
		L_52 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		V_12 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)L_52) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0232;
		}
	}
	{
		// this.AuthValues.Token = null; // when leaving the server, invalidate the secret (but not the auth values)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_54;
		L_54 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		AuthenticationValues_set_Token_m676338D1653DD111745AE5974E70561154479BDB_inline(L_54, NULL, /*hidden argument*/NULL);
	}

IL_0232:
	{
		// this.State = ChatState.Disconnected;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, ((int32_t)11), /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(ChatState.Disconnected);
		RuntimeObject* L_55 = __this->get_listener_17();
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_55, ((int32_t)11));
		// this.listener.OnDisconnected();
		RuntimeObject* L_56 = __this->get_listener_17();
		InterfaceActionInvoker0::Invoke(1 /* System.Void Photon.Chat.IChatClientListener::OnDisconnected() */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_56);
		// break;
		goto IL_0317;
	}

IL_025a:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "This connection was rejected due to the apps CCU limit.");
		RuntimeObject* L_57 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_57, 1, _stringLiteral68D7F8920CC9A5C9EB6CEA86D4BDEC243463A827);
		// this.Disconnect(ChatDisconnectCause.MaxCcuReached);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0317;
	}

IL_0279:
	{
		// this.DisconnectedCause = ChatDisconnectCause.ExceptionOnConnect;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, 1, /*hidden argument*/NULL);
		// if (this.EnableProtocolFallback && this.State == ChatState.ConnectingToNameServer)
		bool L_58;
		L_58 = ChatClient_get_EnableProtocolFallback_m91D09CEC68589E6E027949CA976116686E460FAF_inline(__this, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0294;
		}
	}
	{
		int32_t L_59;
		L_59 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		G_B41_0 = ((((int32_t)L_59) == ((int32_t)1))? 1 : 0);
		goto IL_0295;
	}

IL_0294:
	{
		G_B41_0 = 0;
	}

IL_0295:
	{
		V_13 = (bool)G_B41_0;
		bool L_60 = V_13;
		if (!L_60)
		{
			goto IL_02a8;
		}
	}
	{
		// this.State = ChatState.ConnectWithFallbackProtocol;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_02b2;
	}

IL_02a8:
	{
		// this.Disconnect(ChatDisconnectCause.ExceptionOnConnect);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 1, /*hidden argument*/NULL);
	}

IL_02b2:
	{
		// break;
		goto IL_0317;
	}

IL_02b4:
	{
		// this.Disconnect(ChatDisconnectCause.Exception);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 6, /*hidden argument*/NULL);
		// break;
		goto IL_0317;
	}

IL_02be:
	{
		// this.Disconnect(ChatDisconnectCause.ServerTimeout);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 4, /*hidden argument*/NULL);
		// break;
		goto IL_0317;
	}

IL_02c8:
	{
		// this.Disconnect(ChatDisconnectCause.DisconnectByServerLogic);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 2, /*hidden argument*/NULL);
		// break;
		goto IL_0317;
	}

IL_02d2:
	{
		// this.Disconnect(ChatDisconnectCause.DisconnectByServerReasonUnknown);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 3, /*hidden argument*/NULL);
		// break;
		goto IL_0317;
	}

IL_02dc:
	{
		// this.DisconnectedCause = ChatDisconnectCause.ClientTimeout;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, 5, /*hidden argument*/NULL);
		// if (this.EnableProtocolFallback && this.State == ChatState.ConnectingToNameServer)
		bool L_61;
		L_61 = ChatClient_get_EnableProtocolFallback_m91D09CEC68589E6E027949CA976116686E460FAF_inline(__this, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_02f7;
		}
	}
	{
		int32_t L_62;
		L_62 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		G_B52_0 = ((((int32_t)L_62) == ((int32_t)1))? 1 : 0);
		goto IL_02f8;
	}

IL_02f7:
	{
		G_B52_0 = 0;
	}

IL_02f8:
	{
		V_14 = (bool)G_B52_0;
		bool L_63 = V_14;
		if (!L_63)
		{
			goto IL_030b;
		}
	}
	{
		// this.State = ChatState.ConnectWithFallbackProtocol;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0315;
	}

IL_030b:
	{
		// this.Disconnect(ChatDisconnectCause.ClientTimeout);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, 5, /*hidden argument*/NULL);
	}

IL_0315:
	{
		// break;
		goto IL_0317;
	}

IL_0317:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::TryAuthenticateOnNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_TryAuthenticateOnNameServer_m440074A71E9387139A6C89F44128DF4619802ECB (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1778C9BC36C93CBA913DFA368A05534210106FD0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!this.didAuthenticate)
		bool L_0 = __this->get_didAuthenticate_20();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		// this.didAuthenticate = this.chatPeer.AuthenticateOnNameServer(this.AppId, this.AppVersion, this.chatRegion, this.AuthValues);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_2 = __this->get_chatPeer_18();
		String_t* L_3;
		L_3 = ChatClient_get_AppId_m2BE1846DFCE4654E59CFD6AF1E9FEC7DA738F76D_inline(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = ChatClient_get_AppVersion_m5213F18EE165B0A7C6B62AD85BE8C15BBF1039C7_inline(__this, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_chatRegion_6();
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_6;
		L_6 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		bool L_7;
		L_7 = ChatPeer_AuthenticateOnNameServer_mB87BC70927ABA22AA4DAF4517A27BE97A8F46E36(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->set_didAuthenticate_20(L_7);
		// if (!this.didAuthenticate)
		bool L_8 = __this->get_didAuthenticate_20();
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_007b;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_10;
		L_10 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Error calling OpAuthenticate! Did not work on NameServer. Check log output, AuthValues and if you're connected. State: {0}", this.State));
		RuntimeObject* L_12 = __this->get_listener_17();
		int32_t L_13;
		L_13 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1778C9BC36C93CBA913DFA368A05534210106FD0, L_15, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_12, 1, L_16);
	}

IL_007a:
	{
	}

IL_007b:
	{
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_m0727A81E02E0859790106C7EB566A03E8660386A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { (byte)ChatParameterCode.Channels, channels } };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_0 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_0, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_1 = L_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___channels0;
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_1, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_2, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_0 = L_1;
		// if (historyLength != 0)
		int32_t L_3 = ___historyLength2;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// opParameters.Add((byte)ChatParameterCode.HistoryLength, historyLength);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_5 = V_0;
		int32_t L_6 = ___historyLength2;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_5, (uint8_t)((int32_t)14), L_8, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_0029:
	{
		// return this.chatPeer.SendOperation(operation, opParameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_9 = __this->get_chatPeer_18();
		uint8_t L_10 = ___operation1;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  L_12 = ((SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var))->get_SendReliable_0();
		bool L_13;
		L_13 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_9, L_10, L_11, L_12);
		V_2 = L_13;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_mE7C222704592DB3770C57C07CA347CD9670FF2E0 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		// object message = (object)eventData.Parameters[(byte)ChatParameterCode.Message];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_0 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_1 = L_0->get_Parameters_1();
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_1, (uint8_t)3, /*hidden argument*/NULL);
		V_0 = L_2;
		// string sender = (string)eventData.Parameters[(byte)ChatParameterCode.Sender];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_3 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_4 = L_3->get_Parameters_1();
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_4, (uint8_t)5, /*hidden argument*/NULL);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// int msgId = (int)eventData.Parameters[ChatParameterCode.MsgId];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_6 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_7 = L_6->get_Parameters_1();
		RuntimeObject * L_8;
		L_8 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_7, (uint8_t)8, /*hidden argument*/NULL);
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_8, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		// if (this.UserId != null && this.UserId.Equals(sender))
		String_t* L_9;
		L_9 = ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_10;
		L_10 = ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30(__this, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_10, L_11, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_12));
		goto IL_0049;
	}

IL_0048:
	{
		G_B3_0 = 0;
	}

IL_0049:
	{
		V_5 = (bool)G_B3_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		// string target = (string)eventData.Parameters[(byte)ChatParameterCode.UserId];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_14 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_15 = L_14->get_Parameters_1();
		RuntimeObject * L_16;
		L_16 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_15, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_6 = ((String_t*)CastclassSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var));
		// channelName = this.GetPrivateChannelNameByUser(target);
		String_t* L_17 = V_6;
		String_t* L_18;
		L_18 = ChatClient_GetPrivateChannelNameByUser_mE60D21EE0C58BF37FE440DB095718CAA455276E0(__this, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		goto IL_007d;
	}

IL_0073:
	{
		// channelName = this.GetPrivateChannelNameByUser(sender);
		String_t* L_19 = V_1;
		String_t* L_20;
		L_20 = ChatClient_GetPrivateChannelNameByUser_mE60D21EE0C58BF37FE440DB095718CAA455276E0(__this, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
	}

IL_007d:
	{
		// if (!this.PrivateChannels.TryGetValue(channelName, out channel))
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_21 = __this->get_PrivateChannels_15();
		String_t* L_22 = V_3;
		bool L_23;
		L_23 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_21, L_22, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00c9;
		}
	}
	{
		// channel = new ChatChannel(channelName);
		String_t* L_25 = V_3;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_26 = (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A *)il2cpp_codegen_object_new(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m1A1CB2834079A2F041E4905DCE7633E6B5225339(L_26, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		// channel.IsPrivate = true;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_27 = V_4;
		ChatChannel_set_IsPrivate_mED7AE0C11FEE429D113A1CC6CB29ABCCD05E5EE5_inline(L_27, (bool)1, /*hidden argument*/NULL);
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_28 = V_4;
		int32_t L_29 = __this->get_MessageLimit_12();
		L_28->set_MessageLimit_3(L_29);
		// this.PrivateChannels.Add(channel.Name, channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_30 = __this->get_PrivateChannels_15();
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_31 = V_4;
		String_t* L_32 = L_31->get_Name_0();
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_33 = V_4;
		Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272(L_30, L_32, L_33, /*hidden argument*/Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272_RuntimeMethod_var);
	}

IL_00c9:
	{
		// channel.Add(sender, message, msgId);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_34 = V_4;
		String_t* L_35 = V_1;
		RuntimeObject * L_36 = V_0;
		int32_t L_37 = V_2;
		ChatChannel_Add_m4FE8A53CB40B63ED3A5BBC2B9FD5A008BC233B15(L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
		// this.listener.OnPrivateMessage(sender, message, channelName);
		RuntimeObject* L_38 = __this->get_listener_17();
		String_t* L_39 = V_1;
		RuntimeObject * L_40 = V_0;
		String_t* L_41 = V_3;
		InterfaceActionInvoker3< String_t*, RuntimeObject *, String_t* >::Invoke(5 /* System.Void Photon.Chat.IChatClientListener::OnPrivateMessage(System.String,System.Object,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_38, L_39, L_40, L_41);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_mA4A9D83BAA8691B4F6CE243E43BA845DC6F647FD (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA79561E1B5A82C6D02201984FF815A7AA4012C74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0A9AA74760549C6A732B0EC13F9519F26FC67E4);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// object[] messages = (object[])eventData.Parameters[(byte)ChatParameterCode.Messages];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_0 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_1 = L_0->get_Parameters_1();
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_1, (uint8_t)2, /*hidden argument*/NULL);
		V_0 = ((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)Castclass((RuntimeObject*)L_2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var));
		// string[] senders = (string[])eventData.Parameters[(byte)ChatParameterCode.Senders];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_3 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_4 = L_3->get_Parameters_1();
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_4, (uint8_t)4, /*hidden argument*/NULL);
		V_1 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_5, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// string channelName = (string)eventData.Parameters[(byte)ChatParameterCode.Channel];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_6 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_7 = L_6->get_Parameters_1();
		RuntimeObject * L_8;
		L_8 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_7, (uint8_t)1, /*hidden argument*/NULL);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
		// int lastMsgId = (int)eventData.Parameters[ChatParameterCode.MsgId];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_9 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_10 = L_9->get_Parameters_1();
		RuntimeObject * L_11;
		L_11 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_10, (uint8_t)8, /*hidden argument*/NULL);
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_11, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		// if (!this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_12 = __this->get_PublicChannels_14();
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_12, L_13, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0094;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_16;
		L_16 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0092;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Channel " + channelName + " for incoming message event not found.");
		RuntimeObject* L_18 = __this->get_listener_17();
		String_t* L_19 = V_2;
		String_t* L_20;
		L_20 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD0A9AA74760549C6A732B0EC13F9519F26FC67E4, L_19, _stringLiteralA79561E1B5A82C6D02201984FF815A7AA4012C74, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_18, 2, L_20);
	}

IL_0092:
	{
		// return;
		goto IL_00ae;
	}

IL_0094:
	{
		// channel.Add(senders, messages, lastMsgId);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_21 = V_4;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = V_0;
		int32_t L_24 = V_3;
		ChatChannel_Add_m716C3705D3930DFC682E23F123EFE522CF5E4F06(L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		// this.listener.OnGetMessages(channelName, senders, messages);
		RuntimeObject* L_25 = __this->get_listener_17();
		String_t* L_26 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = V_0;
		InterfaceActionInvoker3< String_t*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Void Photon.Chat.IChatClientListener::OnGetMessages(System.String,System.String[],System.Object[]) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_25, L_26, L_27, L_28);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_mD025253B329C8BE3E17DBB1884E19A906A15DFB3 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_12 = NULL;
	bool V_13 = false;
	{
		// string[] channelsInResponse = (string[])eventData.Parameters[ChatParameterCode.Channels];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_0 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_1 = L_0->get_Parameters_1();
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_1, (uint8_t)0, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_2, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// bool[] results = (bool[])eventData.Parameters[ChatParameterCode.SubscribeResults];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_3 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_4 = L_3->get_Parameters_1();
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_4, (uint8_t)((int32_t)15), /*hidden argument*/NULL);
		V_1 = ((BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)Castclass((RuntimeObject*)L_5, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var));
		// for (int i = 0; i < channelsInResponse.Length; i++)
		V_2 = 0;
		goto IL_00ff;
	}

IL_002d:
	{
		// if (results[i])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = (bool)L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00fa;
		}
	}
	{
		// string channelName = channelsInResponse[i];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		// if (!this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_15 = __this->get_PublicChannels_14();
		String_t* L_16 = V_4;
		bool L_17;
		L_17 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_15, L_16, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0083;
		}
	}
	{
		// channel = new ChatChannel(channelName);
		String_t* L_19 = V_4;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_20 = (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A *)il2cpp_codegen_object_new(ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m1A1CB2834079A2F041E4905DCE7633E6B5225339(L_20, L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_21 = V_5;
		int32_t L_22 = __this->get_MessageLimit_12();
		L_21->set_MessageLimit_3(L_22);
		// this.PublicChannels.Add(channel.Name, channel);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_23 = __this->get_PublicChannels_14();
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_24 = V_5;
		String_t* L_25 = L_24->get_Name_0();
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_26 = V_5;
		Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272(L_23, L_25, L_26, /*hidden argument*/Dictionary_2_Add_m1ADC1047B7845C7D7508196B912131301AA1B272_RuntimeMethod_var);
	}

IL_0083:
	{
		// if (eventData.Parameters.TryGetValue(ChatParameterCode.Properties, out temp))
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_27 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_28 = L_27->get_Parameters_1();
		bool L_29;
		L_29 = ParameterDictionary_TryGetValue_m794DE183A56D8CF325E2FDD586C8197A8DC9BA49(L_28, (uint8_t)((int32_t)22), (RuntimeObject **)(&V_6), /*hidden argument*/NULL);
		V_8 = L_29;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00ad;
		}
	}
	{
		// Dictionary<object, object> channelProperties = temp as Dictionary<object, object>;
		RuntimeObject * L_31 = V_6;
		V_9 = ((Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)IsInstClass((RuntimeObject*)L_31, Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var));
		// channel.ReadChannelProperties(channelProperties);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_32 = V_5;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_33 = V_9;
		ChatChannel_ReadChannelProperties_m6D5006A08AC5C8A8F224CC0F6C5C7F26163BBEB0(L_32, L_33, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		// if (channel.PublishSubscribers) // or maybe remove check & always add anyway?
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_34 = V_5;
		bool L_35;
		L_35 = ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E_inline(L_34, /*hidden argument*/NULL);
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00cf;
		}
	}
	{
		// channel.Subscribers.Add(this.UserId);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_37 = V_5;
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_38 = L_37->get_Subscribers_10();
		String_t* L_39;
		L_39 = ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30(__this, /*hidden argument*/NULL);
		bool L_40;
		L_40 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_38, L_39, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
	}

IL_00cf:
	{
		// if (eventData.Parameters.TryGetValue(ChatParameterCode.ChannelSubscribers, out temp))
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_41 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_42 = L_41->get_Parameters_1();
		bool L_43;
		L_43 = ParameterDictionary_TryGetValue_m794DE183A56D8CF325E2FDD586C8197A8DC9BA49(L_42, (uint8_t)((int32_t)23), (RuntimeObject **)(&V_6), /*hidden argument*/NULL);
		V_11 = L_43;
		bool L_44 = V_11;
		if (!L_44)
		{
			goto IL_00f9;
		}
	}
	{
		// string[] subscribers = temp as string[];
		RuntimeObject * L_45 = V_6;
		V_12 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_45, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// channel.AddSubscribers(subscribers);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_46 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = V_12;
		ChatChannel_AddSubscribers_m1B6065D45D500D14814371DB189FFA5B6E16C37C(L_46, L_47, /*hidden argument*/NULL);
	}

IL_00f9:
	{
	}

IL_00fa:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		int32_t L_48 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00ff:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		int32_t L_49 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = V_0;
		V_13 = (bool)((((int32_t)L_49) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))? 1 : 0);
		bool L_51 = V_13;
		if (L_51)
		{
			goto IL_002d;
		}
	}
	{
		// this.listener.OnSubscribed(channelsInResponse, results);
		RuntimeObject* L_52 = __this->get_listener_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = V_0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_54 = V_1;
		InterfaceActionInvoker2< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* >::Invoke(6 /* System.Void Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_52, L_53, L_54);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_m93FB78D0FD4EE297ABC5A46E5D14E3CFB6B28D06 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0487F7D7DE567C8EDEA89BA3B57A241C61F13851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		// string[] channelsInRequest = (string[])eventData[ChatParameterCode.Channels];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_0 = ___eventData0;
		RuntimeObject * L_1;
		L_1 = EventData_get_Item_m0ADAE0EE7467BE978EE9B6AD9CA8E11049CB8AAF(L_0, (uint8_t)0, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)L_1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var));
		// for (int i = 0; i < channelsInRequest.Length; i++)
		V_1 = 0;
		goto IL_0036;
	}

IL_0012:
	{
		// string channelName = channelsInRequest[i];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// this.PublicChannels.Remove(channelName);
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_6 = __this->get_PublicChannels_14();
		String_t* L_7 = V_2;
		bool L_8;
		L_8 = Dictionary_2_Remove_m0487F7D7DE567C8EDEA89BA3B57A241C61F13851(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m0487F7D7DE567C8EDEA89BA3B57A241C61F13851_RuntimeMethod_var);
		// this.PublicChannelsUnsubscribing.Remove(channelName);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_9 = __this->get_PublicChannelsUnsubscribing_16();
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645(L_9, L_10, /*hidden argument*/HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var);
		// for (int i = 0; i < channelsInRequest.Length; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = 0; i < channelsInRequest.Length; i++)
		int32_t L_13 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_0;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0012;
		}
	}
	{
		// this.listener.OnUnsubscribed(channelsInRequest);
		RuntimeObject* L_16 = __this->get_listener_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = V_0;
		InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(7 /* System.Void Photon.Chat.IChatClientListener::OnUnsubscribed(System.String[]) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_16, L_17);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_mFCC325D3D8794664F80D734B8EE900530B24CCC6 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42AFA618414215017E02F8F7EC202AD435873C33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7526A376267BC0A823CE3D35016583D70B156712);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD40E444A09210A07CFBB05D9F7F4710084F5B77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1838DC1CF507F5E0B8451D36D23E70F3222CC7F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int16_t V_11 = 0;
	int16_t V_12 = 0;
	bool V_13 = false;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0;
		L_0 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.INFO, operationResponse.ToStringFull() + " on: " + this.chatPeer.NameServerAddress);
		RuntimeObject* L_2 = __this->get_listener_17();
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_3 = ___operationResponse0;
		String_t* L_4;
		L_4 = OperationResponse_ToStringFull_m4CE53A2CBA006B7F379C9CC6148742BDD5E578C7(L_3, /*hidden argument*/NULL);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_5 = __this->get_chatPeer_18();
		String_t* L_6;
		L_6 = ChatPeer_get_NameServerAddress_m4BC0C17DC28CFA233CC5E2078DCFB9A3046B507F(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_4, _stringLiteral42AFA618414215017E02F8F7EC202AD435873C33, L_6, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 3, L_7);
	}

IL_003b:
	{
		// if (operationResponse.ReturnCode == 0)
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_8 = ___operationResponse0;
		int16_t L_9 = L_8->get_ReturnCode_1();
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_01f1;
		}
	}
	{
		// if (this.State == ChatState.ConnectedToNameServer)
		int32_t L_11;
		L_11 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)2))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_017d;
		}
	}
	{
		// this.State = ChatState.Authenticated;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 4, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_13 = __this->get_listener_17();
		int32_t L_14;
		L_14 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_13, L_14);
		// if (operationResponse.Parameters.ContainsKey(ParameterCode.Secret))
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_15 = ___operationResponse0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_16 = L_15->get_Parameters_3();
		bool L_17;
		L_17 = ParameterDictionary_ContainsKey_m787CB6FAE6121B97F488A5B0C86073A72CA02AE4(L_16, (uint8_t)((int32_t)221), /*hidden argument*/NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00eb;
		}
	}
	{
		// if (this.AuthValues == null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_19;
		L_19 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)L_19) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a9;
		}
	}
	{
		// this.AuthValues = new AuthenticationValues();
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_21 = (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)il2cpp_codegen_object_new(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m6555927C7F89CFF60E624D43E5818D2F3A6DDE82(L_21, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45_inline(__this, L_21, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// this.AuthValues.Token = operationResponse[ParameterCode.Secret] as string;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_22;
		L_22 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_23 = ___operationResponse0;
		RuntimeObject * L_24;
		L_24 = OperationResponse_get_Item_mCBC8842F55E2F5706244B4ACBF5A01F8A5D8981D(L_23, (uint8_t)((int32_t)221), /*hidden argument*/NULL);
		AuthenticationValues_set_Token_m676338D1653DD111745AE5974E70561154479BDB_inline(L_22, ((String_t*)IsInstSealed((RuntimeObject*)L_24, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// this.FrontendAddress = (string)operationResponse[ParameterCode.Address];
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_25 = ___operationResponse0;
		RuntimeObject * L_26;
		L_26 = OperationResponse_get_Item_mCBC8842F55E2F5706244B4ACBF5A01F8A5D8981D(L_25, (uint8_t)((int32_t)230), /*hidden argument*/NULL);
		ChatClient_set_FrontendAddress_mE3866F5C3D8936B3A1434C8F6D1C4A99DAB60D5B_inline(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_26, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_27 = __this->get_chatPeer_18();
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_27);
		goto IL_0113;
	}

IL_00eb:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_28;
		L_28 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_0112;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "No secret in authentication response.");
		RuntimeObject* L_30 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_30, 1, _stringLiteralE1838DC1CF507F5E0B8451D36D23E70F3222CC7F);
	}

IL_0112:
	{
	}

IL_0113:
	{
		// if (operationResponse.Parameters.ContainsKey(ParameterCode.UserId))
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_31 = ___operationResponse0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_32 = L_31->get_Parameters_3();
		bool L_33;
		L_33 = ParameterDictionary_ContainsKey_m787CB6FAE6121B97F488A5B0C86073A72CA02AE4(L_32, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_017a;
		}
	}
	{
		// string incomingId = operationResponse.Parameters[ParameterCode.UserId] as string;
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_35 = ___operationResponse0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_36 = L_35->get_Parameters_3();
		RuntimeObject * L_37;
		L_37 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_36, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_7 = ((String_t*)IsInstSealed((RuntimeObject*)L_37, String_t_il2cpp_TypeInfo_var));
		// if (!string.IsNullOrEmpty(incomingId))
		String_t* L_38 = V_7;
		bool L_39;
		L_39 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_38, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0179;
		}
	}
	{
		// this.UserId = incomingId;
		String_t* L_41 = V_7;
		ChatClient_set_UserId_m323C8CAF9B49E22CDADFB07E62ED49556BDC9B79(__this, L_41, /*hidden argument*/NULL);
		// this.listener.DebugReturn(DebugLevel.INFO, string.Format("Received your UserID from server. Updating local value to: {0}", this.UserId));
		RuntimeObject* L_42 = __this->get_listener_17();
		String_t* L_43;
		L_43 = ChatClient_get_UserId_m6129426E848D896DFB00CC86C7158E8349BEEE30(__this, /*hidden argument*/NULL);
		String_t* L_44;
		L_44 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralDD40E444A09210A07CFBB05D9F7F4710084F5B77, L_43, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_42, 3, L_44);
	}

IL_0179:
	{
	}

IL_017a:
	{
		goto IL_01eb;
	}

IL_017d:
	{
		// else if (this.State == ChatState.ConnectingToFrontEnd)
		int32_t L_45;
		L_45 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_45) == ((int32_t)6))? 1 : 0);
		bool L_46 = V_9;
		if (!L_46)
		{
			goto IL_01eb;
		}
	}
	{
		// this.State = ChatState.ConnectedToFrontEnd;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 7, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_47 = __this->get_listener_17();
		int32_t L_48;
		L_48 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_47, L_48);
		// this.listener.OnConnected();
		RuntimeObject* L_49 = __this->get_listener_17();
		InterfaceActionInvoker0::Invoke(2 /* System.Void Photon.Chat.IChatClientListener::OnConnected() */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_49);
		// if (statusToSetWhenConnected.HasValue)
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_50 = __this->get_address_of_statusToSetWhenConnected_21();
		bool L_51;
		L_51 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)L_50, /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		V_10 = L_51;
		bool L_52 = V_10;
		if (!L_52)
		{
			goto IL_01ea;
		}
	}
	{
		// SetOnlineStatus(statusToSetWhenConnected.Value, messageToSetWhenConnected);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_53 = __this->get_address_of_statusToSetWhenConnected_21();
		int32_t L_54;
		L_54 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)L_53, /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		RuntimeObject * L_55 = __this->get_messageToSetWhenConnected_22();
		bool L_56;
		L_56 = ChatClient_SetOnlineStatus_mE7E9529EC7A3D5F1E32B643BC2607E8745FDFBE1(__this, L_54, L_55, /*hidden argument*/NULL);
		// statusToSetWhenConnected = null;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_57 = __this->get_address_of_statusToSetWhenConnected_21();
		il2cpp_codegen_initobj(L_57, sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
	}

IL_01ea:
	{
	}

IL_01eb:
	{
		goto IL_02c9;
	}

IL_01f1:
	{
		// switch (operationResponse.ReturnCode)
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_58 = ___operationResponse0;
		int16_t L_59 = L_58->get_ReturnCode_1();
		V_12 = L_59;
		int16_t L_60 = V_12;
		V_11 = L_60;
		int16_t L_61 = V_11;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)-3))))
		{
			goto IL_025e;
		}
	}
	{
		goto IL_0206;
	}

IL_0206:
	{
		int16_t L_62 = V_11;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_62, (int32_t)((int32_t)32753))))
		{
			case 0:
			{
				goto IL_0269;
			}
			case 1:
			{
				goto IL_0274;
			}
			case 2:
			{
				goto IL_023e;
			}
			case 3:
			{
				goto IL_0249;
			}
			case 4:
			{
				goto IL_0254;
			}
		}
	}
	{
		goto IL_0229;
	}

IL_0229:
	{
		int16_t L_63 = V_11;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)32767))))
		{
			goto IL_0234;
		}
	}
	{
		goto IL_0274;
	}

IL_0234:
	{
		// this.DisconnectedCause = ChatDisconnectCause.InvalidAuthentication;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, 7, /*hidden argument*/NULL);
		// break;
		goto IL_0274;
	}

IL_023e:
	{
		// this.DisconnectedCause = ChatDisconnectCause.CustomAuthenticationFailed;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, ((int32_t)11), /*hidden argument*/NULL);
		// break;
		goto IL_0274;
	}

IL_0249:
	{
		// this.DisconnectedCause = ChatDisconnectCause.InvalidRegion;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0274;
	}

IL_0254:
	{
		// this.DisconnectedCause = ChatDisconnectCause.MaxCcuReached;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0274;
	}

IL_025e:
	{
		// this.DisconnectedCause = ChatDisconnectCause.OperationNotAllowedInCurrentState;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0274;
	}

IL_0269:
	{
		// this.DisconnectedCause = ChatDisconnectCause.AuthenticationTicketExpired;
		ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline(__this, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_0274;
	}

IL_0274:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_64;
		L_64 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_13 = (bool)((((int32_t)((((int32_t)L_64) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_13;
		if (!L_65)
		{
			goto IL_02bb;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("{0} ClientState: {1} ServerAddress: {2}", operationResponse.ToStringFull(), this.State, this.chatPeer.ServerAddress));
		RuntimeObject* L_66 = __this->get_listener_17();
		OperationResponse_t6170A2ED84B688F26C20F91688BAB3B7CA2B92FE * L_67 = ___operationResponse0;
		String_t* L_68;
		L_68 = OperationResponse_ToStringFull_m4CE53A2CBA006B7F379C9CC6148742BDD5E578C7(L_67, /*hidden argument*/NULL);
		int32_t L_69;
		L_69 = ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline(__this, /*hidden argument*/NULL);
		int32_t L_70 = L_69;
		RuntimeObject * L_71 = Box(ChatState_t84626C964F669E4DA3290BFDFB98260D43A42320_il2cpp_TypeInfo_var, &L_70);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_72 = __this->get_chatPeer_18();
		String_t* L_73;
		L_73 = PhotonPeer_get_ServerAddress_m75A83C000DF88E71D04D72F36D99558B0C4313AA(L_72, /*hidden argument*/NULL);
		String_t* L_74;
		L_74 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral7526A376267BC0A823CE3D35016583D70B156712, L_68, L_71, L_73, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_66, 1, L_74);
	}

IL_02bb:
	{
		// this.Disconnect(this.DisconnectedCause);
		int32_t L_75;
		L_75 = ChatClient_get_DisconnectedCause_m5ECA68F6962C394FD66EEA2EDA0C2B7BB46F329A_inline(__this, /*hidden argument*/NULL);
		ChatClient_Disconnect_mDE625B3D4D8E41F5E0F7FD7FD809A1D2F59D9BB1(__this, L_75, /*hidden argument*/NULL);
	}

IL_02c9:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_m783F749848C57BE337FE1F2CCDD212C76ED1DB2A (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// string user = (string)eventData.Parameters[ChatParameterCode.Sender];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_0 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_1 = L_0->get_Parameters_1();
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_1, (uint8_t)5, /*hidden argument*/NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// int status = (int)eventData.Parameters[ChatParameterCode.Status];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_3 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_4 = L_3->get_Parameters_1();
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_4, (uint8_t)((int32_t)10), /*hidden argument*/NULL);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		// object message = null;
		V_2 = NULL;
		// bool gotMessage = eventData.Parameters.ContainsKey(ChatParameterCode.Message);
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_6 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_7 = L_6->get_Parameters_1();
		bool L_8;
		L_8 = ParameterDictionary_ContainsKey_m787CB6FAE6121B97F488A5B0C86073A72CA02AE4(L_7, (uint8_t)3, /*hidden argument*/NULL);
		V_3 = L_8;
		// if (gotMessage)
		bool L_9 = V_3;
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		// message = eventData.Parameters[ChatParameterCode.Message];
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_11 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_12 = L_11->get_Parameters_1();
		RuntimeObject * L_13;
		L_13 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_12, (uint8_t)3, /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_004b:
	{
		// this.listener.OnStatusUpdate(user, status, gotMessage, message);
		RuntimeObject* L_14 = __this->get_listener_17();
		String_t* L_15 = V_0;
		int32_t L_16 = V_1;
		bool L_17 = V_3;
		RuntimeObject * L_18 = V_2;
		InterfaceActionInvoker4< String_t*, int32_t, bool, RuntimeObject * >::Invoke(8 /* System.Void Photon.Chat.IChatClientListener::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_14, L_15, L_16, L_17, L_18);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectToFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectToFrontEnd_mEF90DAE273F5589540D1412A17B00EA173123869 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73442709295E0907BAB5FF689567842B1B7D4C01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C82A48E16CE752BFB1F18655003416C01CCB606);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86D8D1F03036F57943C7BD6C7E29797408CE238);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA95F4BEB64A322209E2124DA276E04A8779F727);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	{
		// this.State = ChatState.ConnectingToFrontEnd;
		ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline(__this, 6, /*hidden argument*/NULL);
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0;
		L_0 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.INFO, "Connecting to frontend " + this.FrontendAddress);
		RuntimeObject* L_2 = __this->get_listener_17();
		String_t* L_3;
		L_3 = ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA_inline(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7C82A48E16CE752BFB1F18655003416C01CCB606, L_3, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_2, 3, L_4);
	}

IL_0038:
	{
		// if (this.TransportProtocol == ConnectionProtocol.Tcp || this.TransportProtocol == ConnectionProtocol.Udp)
		uint8_t L_5;
		L_5 = ChatClient_get_TransportProtocol_m1524D32B04F55144684C2A594E6C740F9ACFFC50(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_6;
		L_6 = ChatClient_get_TransportProtocol_m1524D32B04F55144684C2A594E6C740F9ACFFC50(__this, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B5_0 = 1;
	}

IL_004d:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "WebGL requires WebSockets. Switching TransportProtocol to WebSocketSecure.");
		RuntimeObject* L_8 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_8, 2, _stringLiteralCA95F4BEB64A322209E2124DA276E04A8779F727);
		// this.TransportProtocol = ConnectionProtocol.WebSocketSecure;
		ChatClient_set_TransportProtocol_m70A8BDEC139E7A9174DA533022917CA6A0E908D4(__this, 5, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// if (!this.chatPeer.Connect(this.FrontendAddress, ChatAppName))
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_9 = __this->get_chatPeer_18();
		String_t* L_10;
		L_10 = ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA_inline(__this, /*hidden argument*/NULL);
		bool L_11;
		L_11 = VirtFuncInvoker4< bool, String_t*, String_t*, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String,System.Object,System.Object) */, L_9, L_10, _stringLiteral73442709295E0907BAB5FF689567842B1B7D4C01, NULL, NULL);
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00c1;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_13;
		L_13 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00bc;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Connecting to frontend {0} failed.", this.FrontendAddress));
		RuntimeObject* L_15 = __this->get_listener_17();
		String_t* L_16;
		L_16 = ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA_inline(__this, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralA86D8D1F03036F57943C7BD6C7E29797408CE238, L_16, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_15, 1, L_17);
	}

IL_00bc:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_00c6;
	}

IL_00c1:
	{
		// return true;
		V_4 = (bool)1;
		goto IL_00c6;
	}

IL_00c6:
	{
		// }
		bool L_18 = V_4;
		return L_18;
	}
}
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_m4E005CD5611CE63F801F714BC5FF3282B9A06002 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42A6CA5262FE7F016760CB20C16434E6FB8F41F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68981F620708F9798BD0661A61FE7446FBE99BB1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (this.AuthValues != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0;
		L_0 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00af;
		}
	}
	{
		// if (this.AuthValues.Token == null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_2;
		L_2 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_3;
		L_3 = AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_5;
		L_5 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Can't authenticate on front end server. Secret (AuthValues.Token) is not set");
		RuntimeObject* L_7 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_7, 1, _stringLiteral42A6CA5262FE7F016760CB20C16434E6FB8F41F9);
	}

IL_0049:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0050:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { (byte)ChatParameterCode.Secret, this.AuthValues.Token } };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_8 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_8, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_9 = L_8;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_10;
		L_10 = ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline(__this, /*hidden argument*/NULL);
		RuntimeObject * L_11;
		L_11 = AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline(L_10, /*hidden argument*/NULL);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_9, (uint8_t)((int32_t)221), L_11, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		V_4 = L_9;
		// if (this.PrivateChatHistoryLength > -1)
		int32_t L_12 = __this->get_PrivateChatHistoryLength_13();
		V_5 = (bool)((((int32_t)L_12) > ((int32_t)(-1)))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0095;
		}
	}
	{
		// opParameters[(byte)ChatParameterCode.HistoryLength] = this.PrivateChatHistoryLength;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_14 = V_4;
		int32_t L_15 = __this->get_PrivateChatHistoryLength_13();
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_14, (uint8_t)((int32_t)14), L_17, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
	}

IL_0095:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Authenticate, opParameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_18 = __this->get_chatPeer_18();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_19 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  L_20 = ((SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var))->get_SendReliable_0();
		bool L_21;
		L_21 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_18, (uint8_t)((int32_t)230), L_19, L_20);
		V_3 = L_21;
		goto IL_00da;
	}

IL_00af:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_22;
		L_22 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00d6;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Can't authenticate on front end server. Authentication Values are not set");
		RuntimeObject* L_24 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_24, 1, _stringLiteral68981F620708F9798BD0661A61FE7446FBE99BB1);
	}

IL_00d6:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		// }
		bool L_25 = V_3;
		return L_25;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m099F22C84F0D33F3B6922F9406D3354F1BE5DCA8 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA82892C79BF7C320FA3BFB55413015A1377BBF81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD54B5B3649F0373103D67B6B7A8A9F07DB0123C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6F2030C05AC7B710C8B0CB6D94308D4BD9FB5DF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// string channelName = eventData.Parameters[ChatParameterCode.Channel] as string;
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_0 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_1 = L_0->get_Parameters_1();
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_1, (uint8_t)1, /*hidden argument*/NULL);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// string userId = eventData.Parameters[ChatParameterCode.UserId] as string;
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_3 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_4 = L_3->get_Parameters_1();
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_4, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_6 = __this->get_PublicChannels_14();
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_6, L_7, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00c4;
		}
	}
	{
		// if (!channel.PublishSubscribers)
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_10 = V_2;
		bool L_11;
		L_11 = ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E_inline(L_10, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13;
		L_13 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" for incoming UserUnsubscribed (\"{1}\") event does not have PublishSubscribers enabled.", channelName, userId));
		RuntimeObject* L_15 = __this->get_listener_17();
		String_t* L_16 = V_0;
		String_t* L_17 = V_1;
		String_t* L_18;
		L_18 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA82892C79BF7C320FA3BFB55413015A1377BBF81, L_16, L_17, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_15, 2, L_18);
	}

IL_007c:
	{
	}

IL_007d:
	{
		// if (!channel.Subscribers.Remove(userId)) // user not found!
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_19 = V_2;
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_20 = L_19->get_Subscribers_10();
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645(L_20, L_21, /*hidden argument*/HashSet_1_Remove_m994AC4F7EA74E59112C68B41887A450F6957E645_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00c1;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_24;
		L_24 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00c0;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" does not contain unsubscribed user \"{1}\".", channelName, userId));
		RuntimeObject* L_26 = __this->get_listener_17();
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29;
		L_29 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralF6F2030C05AC7B710C8B0CB6D94308D4BD9FB5DF, L_27, L_28, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_26, 2, L_29);
	}

IL_00c0:
	{
	}

IL_00c1:
	{
		goto IL_00f3;
	}

IL_00c4:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_30;
		L_30 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00f2;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" not found for incoming UserUnsubscribed (\"{1}\") event.", channelName, userId));
		RuntimeObject* L_32 = __this->get_listener_17();
		String_t* L_33 = V_0;
		String_t* L_34 = V_1;
		String_t* L_35;
		L_35 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralD54B5B3649F0373103D67B6B7A8A9F07DB0123C4, L_33, L_34, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_32, 2, L_35);
	}

IL_00f2:
	{
	}

IL_00f3:
	{
		// this.listener.OnUserUnsubscribed(channelName, userId);
		RuntimeObject* L_36 = __this->get_listener_17();
		String_t* L_37 = V_0;
		String_t* L_38 = V_1;
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Photon.Chat.IChatClientListener::OnUserUnsubscribed(System.String,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_36, L_37, L_38);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_mC2DA87D9BC5BFFDE6DBFEE5FDB932ECA49E84992 (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28109F85CA80D67F72ADABF892ADE86ECA967B8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4957F3CE2FF4C82ED66B5502CC44FA8717A4B529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85018838CBFFFF831100BA4A581064C1BA9AC7EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFADBBFF7D5071017209F0FAF588398FCC772AD53);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B12_0 = 0;
	{
		// string channelName = eventData.Parameters[ChatParameterCode.Channel] as string;
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_0 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_1 = L_0->get_Parameters_1();
		RuntimeObject * L_2;
		L_2 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_1, (uint8_t)1, /*hidden argument*/NULL);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// string userId = eventData.Parameters[ChatParameterCode.UserId] as string;
		EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * L_3 = ___eventData0;
		ParameterDictionary_tD2F3AFD11B465E04A28DB2DCE9960A81DC0F77E0 * L_4 = L_3->get_Parameters_1();
		RuntimeObject * L_5;
		L_5 = ParameterDictionary_get_Item_m7ACE73ADC9E8D9762ED9B633747ED855BF867929(L_4, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_t3424F20EBBE197B30666A118115FB999A98118FD * L_6 = __this->get_PublicChannels_14();
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB(L_6, L_7, (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m66F99511032071670469DE1F8ED4E09E7A1BA8DB_RuntimeMethod_var);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0134;
		}
	}
	{
		// if (!channel.PublishSubscribers)
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_10 = V_2;
		bool L_11;
		L_11 = ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E_inline(L_10, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13;
		L_13 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" for incoming UserSubscribed (\"{1}\") event does not have PublishSubscribers enabled.", channelName, userId));
		RuntimeObject* L_15 = __this->get_listener_17();
		String_t* L_16 = V_0;
		String_t* L_17 = V_1;
		String_t* L_18;
		L_18 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral85018838CBFFFF831100BA4A581064C1BA9AC7EE, L_16, L_17, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_15, 2, L_18);
	}

IL_007c:
	{
	}

IL_007d:
	{
		// if (!channel.Subscribers.Add(userId)) // user came back from the dead ?
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_19 = V_2;
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_20 = L_19->get_Subscribers_10();
		String_t* L_21 = V_1;
		bool L_22;
		L_22 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_20, L_21, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_24;
		L_24 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00c0;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" already contains newly subscribed user \"{1}\".", channelName, userId));
		RuntimeObject* L_26 = __this->get_listener_17();
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29;
		L_29 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral28109F85CA80D67F72ADABF892ADE86ECA967B8C, L_27, L_28, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_26, 2, L_29);
	}

IL_00c0:
	{
		goto IL_0131;
	}

IL_00c3:
	{
		// else if (channel.MaxSubscribers > 0 && channel.Subscribers.Count > channel.MaxSubscribers)
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_30 = V_2;
		int32_t L_31;
		L_31 = ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C_inline(L_30, /*hidden argument*/NULL);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_32 = V_2;
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_33 = L_32->get_Subscribers_10();
		int32_t L_34;
		L_34 = HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_inline(L_33, /*hidden argument*/HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_35 = V_2;
		int32_t L_36;
		L_36 = ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C_inline(L_35, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_34) > ((int32_t)L_36))? 1 : 0);
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B12_0 = 0;
	}

IL_00e2:
	{
		V_8 = (bool)G_B12_0;
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_0131;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_38;
		L_38 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_38) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_9;
		if (!L_39)
		{
			goto IL_0130;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\"'s MaxSubscribers exceeded. count={1} > MaxSubscribers={2}.", channelName, channel.Subscribers.Count, channel.MaxSubscribers));
		RuntimeObject* L_40 = __this->get_listener_17();
		String_t* L_41 = V_0;
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_42 = V_2;
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_43 = L_42->get_Subscribers_10();
		int32_t L_44;
		L_44 = HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_inline(L_43, /*hidden argument*/HashSet_1_get_Count_m9D187F4067695F929DC13902AFECBF0114C0B2A0_RuntimeMethod_var);
		int32_t L_45 = L_44;
		RuntimeObject * L_46 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_45);
		ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * L_47 = V_2;
		int32_t L_48;
		L_48 = ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C_inline(L_47, /*hidden argument*/NULL);
		int32_t L_49 = L_48;
		RuntimeObject * L_50 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_49);
		String_t* L_51;
		L_51 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral4957F3CE2FF4C82ED66B5502CC44FA8717A4B529, L_41, L_46, L_50, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_40, 2, L_51);
	}

IL_0130:
	{
	}

IL_0131:
	{
		goto IL_0163;
	}

IL_0134:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_52;
		L_52 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)((((int32_t)L_52) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0162;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" not found for incoming UserSubscribed (\"{1}\") event.", channelName, userId));
		RuntimeObject* L_54 = __this->get_listener_17();
		String_t* L_55 = V_0;
		String_t* L_56 = V_1;
		String_t* L_57;
		L_57 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralFADBBFF7D5071017209F0FAF588398FCC772AD53, L_55, L_56, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_54, 2, L_57);
	}

IL_0162:
	{
	}

IL_0163:
	{
		// this.listener.OnUserSubscribed(channelName, userId);
		RuntimeObject* L_58 = __this->get_listener_17();
		String_t* L_59 = V_0;
		String_t* L_60 = V_1;
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Photon.Chat.IChatClientListener::OnUserSubscribed(System.String,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_58, L_59, L_60);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String,System.Int32,System.Int32,Photon.Chat.ChannelCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_mC614066BD08A258D5A0495FA86F98FC2E06C2C4E (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___channel0, int32_t ___lastMsgId1, int32_t ___messagesFromHistory2, ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07445570109C992757EB9C92D1E61BACF9E55F91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5A4CDE2DD8CEA11EF5E3451DD217D6A15AD17D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD847B3D35C89810672FAB55F56E8C4AA9705AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9E2E3F5DF3ABF46A5982E73A60F7A768AE2BD7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2EDCE0F75D698215106063C4484FB4DE0395E9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * V_2 = NULL;
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_19 = NULL;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t G_B17_0 = 0;
	int32_t G_B38_0 = 0;
	{
		// if (creationOptions == null)
		ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * L_0 = ___creationOptions3;
		V_4 = (bool)((((RuntimeObject*)(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// creationOptions = ChannelCreationOptions.Default;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var);
		ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * L_2 = ((ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11_il2cpp_TypeInfo_var))->get_Default_0();
		___creationOptions3 = L_2;
	}

IL_0015:
	{
		// int maxSubscribers = creationOptions.MaxSubscribers;
		ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * L_3 = ___creationOptions3;
		int32_t L_4;
		L_4 = ChannelCreationOptions_get_MaxSubscribers_m9334D413C53E195C4B0F7E215AF4E04C0B3C1F2D_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// bool publishSubscribers = creationOptions.PublishSubscribers;
		ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * L_5 = ___creationOptions3;
		bool L_6;
		L_6 = ChannelCreationOptions_get_PublishSubscribers_mFB9EF4A61B0B41BCCCF122D6531C00FA9E2CBD17_inline(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (maxSubscribers < 0)
		int32_t L_7 = V_0;
		V_5 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_9;
		L_9 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Cannot set MaxSubscribers < 0.");
		RuntimeObject* L_11 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_11, 1, _stringLiteralDCD847B3D35C89810672FAB55F56E8C4AA9705AC);
	}

IL_0056:
	{
		// return false;
		V_7 = (bool)0;
		goto IL_0239;
	}

IL_005e:
	{
		// if (lastMsgId < 0)
		int32_t L_12 = ___lastMsgId1;
		V_8 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0097;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_14;
		L_14 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_008f;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "lastMsgId cannot be < 0.");
		RuntimeObject* L_16 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_16, 1, _stringLiteral0B5A4CDE2DD8CEA11EF5E3451DD217D6A15AD17D);
	}

IL_008f:
	{
		// return false;
		V_7 = (bool)0;
		goto IL_0239;
	}

IL_0097:
	{
		// if (messagesFromHistory < -1)
		int32_t L_17 = ___messagesFromHistory2;
		V_10 = (bool)((((int32_t)L_17) < ((int32_t)(-1)))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00cc;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_19;
		L_19 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_11;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "messagesFromHistory < -1, setting it to -1");
		RuntimeObject* L_21 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_21, 2, _stringLiteral07445570109C992757EB9C92D1E61BACF9E55F91);
	}

IL_00c8:
	{
		// messagesFromHistory = -1;
		___messagesFromHistory2 = (-1);
	}

IL_00cc:
	{
		// if (lastMsgId > 0 && messagesFromHistory == 0)
		int32_t L_22 = ___lastMsgId1;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_23 = ___messagesFromHistory2;
		G_B17_0 = ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B17_0 = 0;
	}

IL_00d7:
	{
		V_12 = (bool)G_B17_0;
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_0108;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_25;
		L_25 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_13 = (bool)((((int32_t)((((int32_t)L_25) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_13;
		if (!L_26)
		{
			goto IL_0104;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "lastMsgId will be ignored because messagesFromHistory == 0");
		RuntimeObject* L_27 = __this->get_listener_17();
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_27, 2, _stringLiteralEA2EDCE0F75D698215106063C4484FB4DE0395E9);
	}

IL_0104:
	{
		// lastMsgId = 0;
		___lastMsgId1 = 0;
	}

IL_0108:
	{
		// Dictionary<object, object> properties = null;
		V_2 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)NULL;
		// if (publishSubscribers)
		bool L_28 = V_1;
		V_14 = L_28;
		bool L_29 = V_14;
		if (!L_29)
		{
			goto IL_0176;
		}
	}
	{
		// if (maxSubscribers > DefaultMaxSubscribers)
		int32_t L_30 = V_0;
		V_15 = (bool)((((int32_t)L_30) > ((int32_t)((int32_t)100)))? 1 : 0);
		bool L_31 = V_15;
		if (!L_31)
		{
			goto IL_0158;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_32;
		L_32 = ChatClient_get_DebugOut_m841CA04A71FA5747C24DACCD1B63CAD9510E4DC0(__this, /*hidden argument*/NULL);
		V_16 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_16;
		if (!L_33)
		{
			goto IL_0150;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR,
		//     string.Format("Cannot set MaxSubscribers > {0} when PublishSubscribers == true.", DefaultMaxSubscribers));
		RuntimeObject* L_34 = __this->get_listener_17();
		int32_t L_35 = ((int32_t)100);
		RuntimeObject * L_36 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE9E2E3F5DF3ABF46A5982E73A60F7A768AE2BD7D, L_36, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_tA617592DD7DA2D048444C95B23037728F8B7A73F_il2cpp_TypeInfo_var, L_34, 1, L_37);
	}

IL_0150:
	{
		// return false;
		V_7 = (bool)0;
		goto IL_0239;
	}

IL_0158:
	{
		// properties = new Dictionary<object, object>();
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_38 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)il2cpp_codegen_object_new(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F(L_38, /*hidden argument*/Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var);
		V_2 = L_38;
		// properties[ChannelWellKnownProperties.PublishSubscribers] = true;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_39 = V_2;
		uint8_t L_40 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_41 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_40);
		bool L_42 = ((bool)1);
		RuntimeObject * L_43 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_42);
		Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A(L_39, L_41, L_43, /*hidden argument*/Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var);
	}

IL_0176:
	{
		// if (maxSubscribers > 0)
		int32_t L_44 = V_0;
		V_17 = (bool)((((int32_t)L_44) > ((int32_t)0))? 1 : 0);
		bool L_45 = V_17;
		if (!L_45)
		{
			goto IL_01ab;
		}
	}
	{
		// if (properties == null)
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_46 = V_2;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)L_46) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_47 = V_18;
		if (!L_47)
		{
			goto IL_0193;
		}
	}
	{
		// properties = new Dictionary<object, object>();
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_48 = (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D *)il2cpp_codegen_object_new(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F(L_48, /*hidden argument*/Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_RuntimeMethod_var);
		V_2 = L_48;
	}

IL_0193:
	{
		// properties[ChannelWellKnownProperties.MaxSubscribers] = maxSubscribers;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_49 = V_2;
		uint8_t L_50 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_51 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_50);
		int32_t L_52 = V_0;
		int32_t L_53 = L_52;
		RuntimeObject * L_54 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_53);
		Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A(L_49, L_51, L_54, /*hidden argument*/Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_RuntimeMethod_var);
	}

IL_01ab:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { ChatParameterCode.Channels, new[] { channel } } };
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_55 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_55, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		V_19 = L_55;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_56 = V_19;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = L_57;
		String_t* L_59 = ___channel0;
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_59);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_56, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_58, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_60 = V_19;
		V_3 = L_60;
		// if (messagesFromHistory != 0)
		int32_t L_61 = ___messagesFromHistory2;
		V_20 = (bool)((!(((uint32_t)L_61) <= ((uint32_t)0)))? 1 : 0);
		bool L_62 = V_20;
		if (!L_62)
		{
			goto IL_01e3;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.HistoryLength, messagesFromHistory);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_63 = V_3;
		int32_t L_64 = ___messagesFromHistory2;
		int32_t L_65 = L_64;
		RuntimeObject * L_66 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_65);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_63, (uint8_t)((int32_t)14), L_66, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_01e3:
	{
		// if (lastMsgId > 0)
		int32_t L_67 = ___lastMsgId1;
		V_21 = (bool)((((int32_t)L_67) > ((int32_t)0))? 1 : 0);
		bool L_68 = V_21;
		if (!L_68)
		{
			goto IL_0202;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.MsgIds, new[] { lastMsgId });
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_69 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = L_70;
		int32_t L_72 = ___lastMsgId1;
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_72);
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_69, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_71, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_0202:
	{
		// if (properties != null && properties.Count > 0)
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_73 = V_2;
		if (!L_73)
		{
			goto IL_0210;
		}
	}
	{
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_74 = V_2;
		int32_t L_75;
		L_75 = Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA(L_74, /*hidden argument*/Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_RuntimeMethod_var);
		G_B38_0 = ((((int32_t)L_75) > ((int32_t)0))? 1 : 0);
		goto IL_0211;
	}

IL_0210:
	{
		G_B38_0 = 0;
	}

IL_0211:
	{
		V_22 = (bool)G_B38_0;
		bool L_76 = V_22;
		if (!L_76)
		{
			goto IL_0223;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.Properties, properties);
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_77 = V_3;
		Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * L_78 = V_2;
		Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947(L_77, (uint8_t)((int32_t)22), L_78, /*hidden argument*/Dictionary_2_Add_m04D7B45C09D541A866F16C53B53A0D18A755C947_RuntimeMethod_var);
	}

IL_0223:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Subscribe, opParameters, SendOptions.SendReliable);
		ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * L_79 = __this->get_chatPeer_18();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_80 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var);
		SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  L_81 = ((SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347_il2cpp_TypeInfo_var))->get_SendReliable_0();
		bool L_82;
		L_82 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_79, (uint8_t)0, L_80, L_81);
		V_7 = L_82;
		goto IL_0239;
	}

IL_0239:
	{
		// }
		bool L_83 = V_7;
		return L_83;
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
// System.Void Photon.Chat.ChatEventCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEventCode__ctor_m0F45D36EB0218B157F64A471A41328753B2FD5D0 (ChatEventCode_t2202D7BECCED5FE88A4F8F75E70BDE66697093F4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ChatOperationCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatOperationCode__ctor_m728A6F4440D3232E8E99B5D58A330BB856C3116B (ChatOperationCode_t2AE46F42C34F7745F04E04373F6D62D77EC3D8EF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ChatParameterCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatParameterCode__ctor_m8FFAFC45471B6FBD120D939AEDD41C64057F0E47 (ChatParameterCode_t7122E95EB7C2C474001D425685D32A97EC02CB32 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_m4BC0C17DC28CFA233CC5E2078DCFB9A3046B507F (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string NameServerAddress { get { return this.GetNameServerAddress(); } }
		String_t* L_0;
		L_0 = ChatPeer_GetNameServerAddress_mEAAD5D9ACA62B947FBBB028C44C9E6358715FC8E(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string NameServerAddress { get { return this.GetNameServerAddress(); } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_get_IsProtocolSecure_m396FFE6A6EA9E25A4611B45C069B5E9D26F93437 (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// virtual internal bool IsProtocolSecure { get { return this.UsedProtocol == ConnectionProtocol.WebSocketSecure; } }
		uint8_t L_0;
		L_0 = PhotonPeer_get_UsedProtocol_mD72784918681E5F34A919A4059A6A7D14FEF377C(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// virtual internal bool IsProtocolSecure { get { return this.UsedProtocol == ConnectionProtocol.WebSocketSecure; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__ctor_m31252B90B54C7FA381D8E14F5FA9FD3A630F5029 (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA568F1240679B09643949E7DF946425D824F0480);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string NameServerHost = "ns.exitgames.com";
		__this->set_NameServerHost_62(_stringLiteralA568F1240679B09643949E7DF946425D824F0480);
		// public ChatPeer(IPhotonPeerListener listener, ConnectionProtocol protocol) : base(listener, protocol)
		RuntimeObject* L_0 = ___listener0;
		uint8_t L_1 = ___protocol1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6_il2cpp_TypeInfo_var);
		PhotonPeer__ctor_mB11CC353AD0A387651B0CA4DAB07C368CB557F1F(__this, L_0, L_1, /*hidden argument*/NULL);
		// this.ConfigUnitySockets();
		ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m36882D1020E6E9C3647E028F105F11853B4D0AFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F8B28CFFF704DB3769B10DBB3290A133248008A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB68C7C4D22B75A2C98587E5B35395233B0F5BF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// Type websocketType = null;
		V_0 = (Type_t *)NULL;
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, PhotonWebSocket", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0;
		L_0 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, _stringLiteralCB68C7C4D22B75A2C98587E5B35395233B0F5BF6, (bool)0, ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C_RuntimeMethod_var);
		V_0 = L_0;
		// if (websocketType == null)
		Type_t * L_1 = V_0;
		bool L_2;
		L_2 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, (Type_t *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, Assembly-CSharp-firstpass", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, _stringLiteral1F8B28CFFF704DB3769B10DBB3290A133248008A, (bool)0, ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0028:
	{
		// if (websocketType == null)
		Type_t * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, Assembly-CSharp", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, _stringLiteralF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C, (bool)0, ChatPeer_ConfigUnitySockets_m65C6D7120E9DFCD3383CBE2CD9BB4D61B666178C_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_0041:
	{
		// if (websocketType != null)
		Type_t * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_9, (Type_t *)NULL, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// this.SocketImplementationConfig[ConnectionProtocol.WebSocket] = websocketType;
		Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 * L_12 = ((PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 *)__this)->get_SocketImplementationConfig_19();
		Type_t * L_13 = V_0;
		Dictionary_2_set_Item_m36882D1020E6E9C3647E028F105F11853B4D0AFA(L_12, 4, L_13, /*hidden argument*/Dictionary_2_set_Item_m36882D1020E6E9C3647E028F105F11853B4D0AFA_RuntimeMethod_var);
		// this.SocketImplementationConfig[ConnectionProtocol.WebSocketSecure] = websocketType;
		Dictionary_2_t513886010C00C6007419FD860F4F5AF243C31542 * L_14 = ((PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 *)__this)->get_SocketImplementationConfig_19();
		Type_t * L_15 = V_0;
		Dictionary_2_set_Item_m36882D1020E6E9C3647E028F105F11853B4D0AFA(L_14, 5, L_15, /*hidden argument*/Dictionary_2_set_Item_m36882D1020E6E9C3647E028F105F11853B4D0AFA_RuntimeMethod_var);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_mEAAD5D9ACA62B947FBBB028C44C9E6358715FC8E (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1CCA2C565635A36E97FE5C7C3430A7EACFCCAC77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE9B3CF5AE017754E39259FE1ECEDCE06CA1CBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80E7CF73ABE78832F677B6B12A03A933ED22EDCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA6824010DE96FAEEDC5701C23C1377985B771A8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	uint8_t V_2 = 0;
	uint8_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		// var protocolPort = 0;
		V_0 = 0;
		// ProtocolToNameServerPort.TryGetValue(this.TransportProtocol, out protocolPort);
		IL2CPP_RUNTIME_CLASS_INIT(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var);
		Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * L_0 = ((ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var))->get_ProtocolToNameServerPort_63();
		uint8_t L_1;
		L_1 = PhotonPeer_get_TransportProtocol_mE57006B6BA00BD0F282DBCC21991260C98B02B76_inline(__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m1CCA2C565635A36E97FE5C7C3430A7EACFCCAC77(L_0, L_1, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1CCA2C565635A36E97FE5C7C3430A7EACFCCAC77_RuntimeMethod_var);
		// if (this.NameServerPortOverride != 0)
		uint16_t L_3 = __this->get_NameServerPortOverride_64();
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, string.Format("Using NameServerPortInAppSettings as port for Name Server: {0}", this.NameServerPortOverride));
		RuntimeObject* L_5;
		L_5 = PhotonPeer_get_Listener_m0091F5F5B9495B9461E037010DEAFB5B2CD281B8_inline(__this, /*hidden argument*/NULL);
		uint16_t L_6 = __this->get_NameServerPortOverride_64();
		uint16_t L_7 = L_6;
		RuntimeObject * L_8 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1AE9B3CF5AE017754E39259FE1ECEDCE06CA1CBF, L_8, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var, L_5, 3, L_9);
		// protocolPort = this.NameServerPortOverride;
		uint16_t L_10 = __this->get_NameServerPortOverride_64();
		V_0 = L_10;
	}

IL_004e:
	{
		// switch (this.TransportProtocol)
		uint8_t L_11;
		L_11 = PhotonPeer_get_TransportProtocol_mE57006B6BA00BD0F282DBCC21991260C98B02B76_inline(__this, /*hidden argument*/NULL);
		V_3 = L_11;
		uint8_t L_12 = V_3;
		V_2 = L_12;
		uint8_t L_13 = V_2;
		switch (L_13)
		{
			case 0:
			{
				goto IL_0077;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_00c5;
			}
			case 3:
			{
				goto IL_00c5;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ab;
			}
		}
	}
	{
		goto IL_00c5;
	}

IL_0077:
	{
		// return string.Format("{0}:{1}", NameServerHost, protocolPort);
		String_t* L_14 = __this->get_NameServerHost_62();
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F, L_14, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		goto IL_00cb;
	}

IL_0091:
	{
		// return string.Format("ws://{0}:{1}", NameServerHost, protocolPort);
		String_t* L_19 = __this->get_NameServerHost_62();
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral80E7CF73ABE78832F677B6B12A03A933ED22EDCE, L_19, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		goto IL_00cb;
	}

IL_00ab:
	{
		// return string.Format("wss://{0}:{1}", NameServerHost, protocolPort);
		String_t* L_24 = __this->get_NameServerHost_62();
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28;
		L_28 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralEA6824010DE96FAEEDC5701C23C1377985B771A8, L_24, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		goto IL_00cb;
	}

IL_00c5:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_29 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m81CEEF1FCB5EFBBAA39071F48BCFBC16AED0C915(L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChatPeer_GetNameServerAddress_mEAAD5D9ACA62B947FBBB028C44C9E6358715FC8E_RuntimeMethod_var)));
	}

IL_00cb:
	{
		// }
		String_t* L_30 = V_4;
		return L_30;
	}
}
// System.Boolean Photon.Chat.ChatPeer::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_Connect_m0560376B05909F8A69353708FF0B150D5EB85D7F (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08300235B75F2A81FD859D756F6AF0606BE4C75F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F3409D006A485853CE590C6F1C4AA00ABCA26F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ((PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 *)__this)->get_DebugOut_21();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "Connecting to nameserver " + this.NameServerAddress);
		RuntimeObject* L_2;
		L_2 = PhotonPeer_get_Listener_m0091F5F5B9495B9461E037010DEAFB5B2CD281B8_inline(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = ChatPeer_get_NameServerAddress_m4BC0C17DC28CFA233CC5E2078DCFB9A3046B507F(__this, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral08300235B75F2A81FD859D756F6AF0606BE4C75F, L_3, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var, L_2, 3, L_4);
	}

IL_0030:
	{
		// return this.Connect(this.NameServerAddress, "NameServer");
		String_t* L_5;
		L_5 = ChatPeer_get_NameServerAddress_m4BC0C17DC28CFA233CC5E2078DCFB9A3046B507F(__this, /*hidden argument*/NULL);
		bool L_6;
		L_6 = VirtFuncInvoker4< bool, String_t*, String_t*, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String,System.Object,System.Object) */, __this, L_5, _stringLiteral84F3409D006A485853CE590C6F1C4AA00ABCA26F, NULL, NULL);
		V_1 = L_6;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_mB87BC70927ABA22AA4DAF4517A27BE97A8F46E36 (ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___authValues3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7A0517E53F97847DA11954EC5BB6A0ABEB18E1F);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ((PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 *)__this)->get_DebugOut_21();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "OpAuthenticate()");
		RuntimeObject* L_2;
		L_2 = PhotonPeer_get_Listener_m0091F5F5B9495B9461E037010DEAFB5B2CD281B8_inline(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var, L_2, 3, _stringLiteralB7A0517E53F97847DA11954EC5BB6A0ABEB18E1F);
	}

IL_0025:
	{
		// var opParameters = new Dictionary<byte, object>();
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_3 = (Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *)il2cpp_codegen_object_new(Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C(L_3, /*hidden argument*/Dictionary_2__ctor_m9F3F1035A447F9664AEA0074FE05B3FBD142A18C_RuntimeMethod_var);
		V_0 = L_3;
		// opParameters[ParameterCode.AppVersion] = appVersion;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_4 = V_0;
		String_t* L_5 = ___appVersion1;
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_4, (uint8_t)((int32_t)220), L_5, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		// opParameters[ParameterCode.ApplicationId] = appId;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_6 = V_0;
		String_t* L_7 = ___appId0;
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_6, (uint8_t)((int32_t)224), L_7, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		// opParameters[ParameterCode.Region] = region;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_8 = V_0;
		String_t* L_9 = ___region2;
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_8, (uint8_t)((int32_t)210), L_9, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		// if (authValues != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_10 = ___authValues3;
		V_2 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0134;
		}
	}
	{
		// if (!string.IsNullOrEmpty(authValues.UserId))
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_12 = ___authValues3;
		String_t* L_13;
		L_13 = AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_13, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		// opParameters[ParameterCode.UserId] = authValues.UserId;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_16 = V_0;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_17 = ___authValues3;
		String_t* L_18;
		L_18 = AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline(L_17, /*hidden argument*/NULL);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_16, (uint8_t)((int32_t)225), L_18, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
	}

IL_0087:
	{
		// if (authValues.AuthType != CustomAuthenticationType.None)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_19 = ___authValues3;
		uint8_t L_20;
		L_20 = AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8(L_19, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_20) == ((int32_t)((int32_t)255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0133;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationType] = (byte) authValues.AuthType;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_22 = V_0;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_23 = ___authValues3;
		uint8_t L_24;
		L_24 = AuthenticationValues_get_AuthType_mB586AA4DAE1DC8EAD415934863BE8DE8F4D8FAC8(L_23, /*hidden argument*/NULL);
		uint8_t L_25 = ((uint8_t)L_24);
		RuntimeObject * L_26 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_25);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_22, (uint8_t)((int32_t)217), L_26, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		// if (authValues.Token != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_27 = ___authValues3;
		RuntimeObject * L_28;
		L_28 = AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline(L_27, /*hidden argument*/NULL);
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_28) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00e1;
		}
	}
	{
		// opParameters[ParameterCode.Secret] = authValues.Token;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_30 = V_0;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_31 = ___authValues3;
		RuntimeObject * L_32;
		L_32 = AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline(L_31, /*hidden argument*/NULL);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_30, (uint8_t)((int32_t)221), L_32, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
		goto IL_0132;
	}

IL_00e1:
	{
		// if (!string.IsNullOrEmpty(authValues.AuthGetParameters))
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_33 = ___authValues3;
		String_t* L_34;
		L_34 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(L_33, /*hidden argument*/NULL);
		bool L_35;
		L_35 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_34, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_010c;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationParams] = authValues.AuthGetParameters;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_37 = V_0;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_38 = ___authValues3;
		String_t* L_39;
		L_39 = AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline(L_38, /*hidden argument*/NULL);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_37, (uint8_t)((int32_t)216), L_39, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
	}

IL_010c:
	{
		// if (authValues.AuthPostData != null)
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_40 = ___authValues3;
		RuntimeObject * L_41;
		L_41 = AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05_inline(L_40, /*hidden argument*/NULL);
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_41) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_42 = V_7;
		if (!L_42)
		{
			goto IL_0131;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationData] = authValues.AuthPostData;
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_43 = V_0;
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_44 = ___authValues3;
		RuntimeObject * L_45;
		L_45 = AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05_inline(L_44, /*hidden argument*/NULL);
		Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8(L_43, (uint8_t)((int32_t)214), L_45, /*hidden argument*/Dictionary_2_set_Item_mB849FA0C527FE68D74401BDDFE0ECD6BDD672DC8_RuntimeMethod_var);
	}

IL_0131:
	{
	}

IL_0132:
	{
	}

IL_0133:
	{
	}

IL_0134:
	{
		// return this.SendOperation(ChatOperationCode.Authenticate, opParameters, new SendOptions() { Reliability = true, Encrypt = this.IsEncryptionAvailable });
		Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A * L_46 = V_0;
		il2cpp_codegen_initobj((&V_8), sizeof(SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347 ));
		SendOptions_set_Reliability_m0608E94DFE9D69BFE6E6F557B09FE58947A87C9A((SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347 *)(&V_8), (bool)1, /*hidden argument*/NULL);
		bool L_47;
		L_47 = PhotonPeer_get_IsEncryptionAvailable_m0EFE58CF8FE3858ED01094F210D998565CB7269B(__this, /*hidden argument*/NULL);
		(&V_8)->set_Encrypt_3(L_47);
		SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  L_48 = V_8;
		bool L_49;
		L_49 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t7DB3847BFAFC9452C96798C33FA6D63A1DFEBF9A *, SendOptions_t4D5D7BE01453DDE6650A16F57850F21C530D2347  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, __this, (uint8_t)((int32_t)230), L_46, L_48);
		V_9 = L_49;
		goto IL_0164;
	}

IL_0164:
	{
		// }
		bool L_50 = V_9;
		return L_50;
	}
}
// System.Void Photon.Chat.ChatPeer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__cctor_mCE93F396A418E158D04A4469E13291B272F0BE59 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m56E961D2F3E1DC360CA03BFE2CF94A82661E23B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<ConnectionProtocol, int> ProtocolToNameServerPort = new Dictionary<ConnectionProtocol, int>() { { ConnectionProtocol.Udp, 5058 }, { ConnectionProtocol.Tcp, 4533 }, { ConnectionProtocol.WebSocket, 9093 }, { ConnectionProtocol.WebSocketSecure, 19093 } }; //, { ConnectionProtocol.RHttp, 6063 } };
		Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * L_0 = (Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C *)il2cpp_codegen_object_new(Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m56E961D2F3E1DC360CA03BFE2CF94A82661E23B5(L_0, /*hidden argument*/Dictionary_2__ctor_m56E961D2F3E1DC360CA03BFE2CF94A82661E23B5_RuntimeMethod_var);
		Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * L_1 = L_0;
		Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66(L_1, 0, ((int32_t)5058), /*hidden argument*/Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66_RuntimeMethod_var);
		Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * L_2 = L_1;
		Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66(L_2, 1, ((int32_t)4533), /*hidden argument*/Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66_RuntimeMethod_var);
		Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * L_3 = L_2;
		Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66(L_3, 4, ((int32_t)9093), /*hidden argument*/Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66_RuntimeMethod_var);
		Dictionary_2_tAE07E0DBE159E7C1B30744462D6CC82B6B786B6C * L_4 = L_3;
		Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66(L_4, 5, ((int32_t)19093), /*hidden argument*/Dictionary_2_Add_m768AB6637759B635E61B52F96C45DD0765B30F66_RuntimeMethod_var);
		((ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t183F524D188B12FB814FB129C4C454478C42158F_il2cpp_TypeInfo_var))->set_ProtocolToNameServerPort_63(L_4);
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
// System.Void Photon.Chat.ErrorCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCode__ctor_mF47997108313812CF829935FB18B0454FE82D652 (ErrorCode_tF5FB48D902FA1A185E7877F9E17236B8CDF5C113 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ParameterCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterCode__ctor_m9D6D0ECD8057C223B8F8BA5FAD86170C329629CC (ParameterCode_t6FAB9ABF0A365CA1E0CA1730AC6266790F0C7151 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m216A1F020CB3604D58CE6D7764D49C526802D1C1_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m56A5C0A1BFEDB9E3354209FA4BA9CFF18B2B93BD_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CAuthPostDataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m13E6F5B6BE032B269BCE4DE2A88A1A3E9CE3F0F8_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = __this->get_U3CAuthGetParametersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m29926F1C8B29FF21D0C2F3A5176A0B9979B69849_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthGetParametersU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m920CB07EAEBA16DBC441A0184C08F02D5C349C86_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_Token_m2CE968F10CB3A0C8A1E8FF3D2F35A29FCD512A56_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = __this->get_U3CTokenU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_mE3653352DEC9C6CB4D794678E9A286D4D331BC05_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CAuthPostDataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_m50F916CC5D1CB01DB7F4C13C69957F5C9C47C592_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLastMsgIdU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_mD0477A247F2855FBEAEA02E542D0BBD93EA416A3_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_m3F970011C2E8CA0428035FDBDF8F27F51D35E60E_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m7C69F7BE3147236F101A8C6ADDFB4188DF96797F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ChatClient_get_AuthValues_mEB126DC8DFF53CA771718875CC585DDF5A49537F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m4A920419C6733DA10641A74350D46A3E6DB5CF45_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * ___value0, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_TransportProtocol_mE57006B6BA00BD0F282DBCC21991260C98B02B76_inline (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CTransportProtocolU3Ek__BackingField_40();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonPeer_set_TransportProtocol_mFF896C6514F9CA6C7C83A82523D533C3690BD47E_inline (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CTransportProtocolU3Ek__BackingField_40(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_State_mD682764B33E0B2973B941CC2B405CCE9CA9623F8_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhotonPeer_set_SerializationProtocolType_m6B00E068CEE4EBE7FD6926F5B0C89C817A5756DA_inline (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSerializationProtocolTypeU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_EnableProtocolFallback_m7509562E61E92518A9EA1675E084EBD8E0D364F2_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CEnableProtocolFallbackU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m365F4104649E647F53097F5FC86E665FB0174BA4_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDisconnectedCauseU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m97E453B89EB457220FF3170F5216556DACBF9183_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m14D98091CE28ABE7175647E1D4A9A6FF20862E98_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppVersionU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_mB5FB3E44562605753BFC72E14F22FF8609EF452F_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameServerAddressU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m339D1ED46CDD4C32831C1EA88B9A9324F3B1F578_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = __this->get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m2BE1846DFCE4654E59CFD6AF1E9FEC7DA738F76D_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m5213F18EE165B0A7C6B62AD85BE8C15BBF1039C7_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m676338D1653DD111745AE5974E70561154479BDB_inline (AuthenticationValues_tA0823C96393DE8F6D8727057A04ABB4FAA98DBC6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatClient_get_EnableProtocolFallback_m91D09CEC68589E6E027949CA976116686E460FAF_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = __this->get_U3CEnableProtocolFallbackU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_mED7AE0C11FEE429D113A1CC6CB29ABCCD05E5EE5_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPrivateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_mB8D57208B004E662F4CE40BF18AF18508FD3F65E_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_mE3866F5C3D8936B3A1434C8F6D1C4A99DAB60D5B_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFrontendAddressU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m5ECA68F6962C394FD66EEA2EDA0C2B7BB46F329A_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_mD50347BDA6B3C4C2B3D6E6EB2F62E71783F881CA_inline (ChatClient_t5E3E39382FC13DF25585EFE46374B01B3BC377DF * __this, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = __this->get_U3CFrontendAddressU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m8F9D3CB5CE7039D330688A56D7233622E6ED751C_inline (ChatChannel_t67E643DD5D48709EF9E6C993A1CCD8BBA131928A * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m9334D413C53E195C4B0F7E215AF4E04C0B3C1F2D_inline (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_mFB9EF4A61B0B41BCCCF122D6531C00FA9E2CBD17_inline (ChannelCreationOptions_tB8008554306A2F062BAE119BAD1A312E469F7B11 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PhotonPeer_get_Listener_m0091F5F5B9495B9461E037010DEAFB5B2CD281B8_inline (PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CListenerU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}

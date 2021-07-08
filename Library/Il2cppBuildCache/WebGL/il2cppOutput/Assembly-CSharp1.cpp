#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t9687E6386547C3E3285183B1A000577B5F93DD4E;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t76C23A7CC17A2EE34A69A1A348CE38C7D8032001;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// AudioManager
struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// ExitGames.Client.Photon.EventData
struct EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameTimer
struct GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t78B1F159B4BE00E602332CE3D56F9D3877745A0A;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_tAD36D5E3B726ED226279CA1695889DBE1EFC83DF;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// ExitGames.Client.Photon.NCommand
struct NCommand_t8BA633E6BDD431280C43CDEA74C4082AC9FC5074;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t2A9AD24D6EB9D2BA1CA682ADAC5D62DAED8FF6AB;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// PlayerControls
struct PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3;
// QuantumTek.QuantumUI.QUI_Bar
struct QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77;
// QuantumTek.QuantumUI.QUI_ElementAnimator
struct QUI_ElementAnimator_t346C37B0A5124B4FBDE72359ECAFCAECB31502D7;
// QuantumTek.QuantumUI.QUI_SceneTransition
struct QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScoreKeeper
struct ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34;
// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926;
// WebSocket
struct WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749;
// WhiteLineGoal
struct WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693;
// MultiUserManager/WebsiteCommands
struct WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E;
// PhotonRoom/CustomPlayer
struct CustomPlayer_tE2B61CF9CD6A7300E674E8F8F9CF2EAA8E916779;
// PlayerControls/IGamePlayActions
struct IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1;
// QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11
struct U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445;
// RobotControllerUdp/RobotPowers
struct RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80;
// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12
struct U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971;
// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_tE9402B38CA5077FD18ACC4CDF5CC63963BA6240B;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// UserManager/WebsiteCommands
struct WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD;
// UserManager/WebsiteScore
struct WebsiteScore_t4A970FD02F287299012DB0C36FD43565828383C8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonSocketState_t0A317E33CE881C4E61BFE7545CB6829B01C83917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_t3C6FD0679150AB8D4FC9E648D97B1135C73E8C6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062C159E09943C99E139190E5A591006A545AA4A;
IL2CPP_EXTERN_C String_t* _stringLiteral0935634EDC60E4C80D1F7F0BFAD7D077B88DFB94;
IL2CPP_EXTERN_C String_t* _stringLiteral09E5E322B9122B1DA98DBB5C7DB34E56DC0BD30C;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D;
IL2CPP_EXTERN_C String_t* _stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3;
IL2CPP_EXTERN_C String_t* _stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23;
IL2CPP_EXTERN_C String_t* _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE9C2D3131ADC412805EFE2994298865FECF402EA;
IL2CPP_EXTERN_C String_t* _stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D_m7A7EEA3812A0DA5E83AA021B0D5F8D9CE18E630F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34_m1BC842C6818527291FBCCDCC52A3EC6FC04EBCD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisRobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80_m105488E0BCA6C178D391F49097A2EF5E44CBCC3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD_m298818A641F8E69A0DC661E6251F1E32E9D64468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisWebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E_m315C34C92C6596274CD6B5932462F3F70B735C5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneAsyncU3Ed__11_System_Collections_IEnumerator_Reset_m5F5E2CC25FFF7440DBD996DEC6F29D32BE64CF3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m81A880D827588FC43EAE12B1320A15F6B7B3172E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_m72024727BB2CBAE2161797E999634554BEFCB902_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// PlayerControls
struct PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionAsset PlayerControls::<asset>k__BackingField
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap PlayerControls::m_GamePlay
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_GamePlay_1;
	// PlayerControls/IGamePlayActions PlayerControls::m_GamePlayActionsCallbackInterface
	RuntimeObject* ___m_GamePlayActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_Shoot
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_Shoot_3;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_Intake
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_Intake_4;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_Spinup
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_Spinup_5;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_Wobble
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_Wobble_6;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_WobbleHigh
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_WobbleHigh_7;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_IncreaseSpin
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_IncreaseSpin_8;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_DecreaseSpin
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_DecreaseSpin_9;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_DriveForward
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_DriveForward_10;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_DriveBack
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_DriveBack_11;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_DriveLeft
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_DriveLeft_12;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_DriveRight
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_DriveRight_13;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_TurnLeft
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_TurnLeft_14;
	// UnityEngine.InputSystem.InputAction PlayerControls::m_GamePlay_TurnRight
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_GamePlay_TurnRight_15;

public:
	inline static int32_t get_offset_of_U3CassetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___U3CassetU3Ek__BackingField_0)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_U3CassetU3Ek__BackingField_0() const { return ___U3CassetU3Ek__BackingField_0; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_U3CassetU3Ek__BackingField_0() { return &___U3CassetU3Ek__BackingField_0; }
	inline void set_U3CassetU3Ek__BackingField_0(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___U3CassetU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassetU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_1() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_1)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_GamePlay_1() const { return ___m_GamePlay_1; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_GamePlay_1() { return &___m_GamePlay_1; }
	inline void set_m_GamePlay_1(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_GamePlay_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlayActionsCallbackInterface_2() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlayActionsCallbackInterface_2)); }
	inline RuntimeObject* get_m_GamePlayActionsCallbackInterface_2() const { return ___m_GamePlayActionsCallbackInterface_2; }
	inline RuntimeObject** get_address_of_m_GamePlayActionsCallbackInterface_2() { return &___m_GamePlayActionsCallbackInterface_2; }
	inline void set_m_GamePlayActionsCallbackInterface_2(RuntimeObject* value)
	{
		___m_GamePlayActionsCallbackInterface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlayActionsCallbackInterface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_Shoot_3() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_Shoot_3)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_Shoot_3() const { return ___m_GamePlay_Shoot_3; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_Shoot_3() { return &___m_GamePlay_Shoot_3; }
	inline void set_m_GamePlay_Shoot_3(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_Shoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_Shoot_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_Intake_4() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_Intake_4)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_Intake_4() const { return ___m_GamePlay_Intake_4; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_Intake_4() { return &___m_GamePlay_Intake_4; }
	inline void set_m_GamePlay_Intake_4(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_Intake_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_Intake_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_Spinup_5() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_Spinup_5)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_Spinup_5() const { return ___m_GamePlay_Spinup_5; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_Spinup_5() { return &___m_GamePlay_Spinup_5; }
	inline void set_m_GamePlay_Spinup_5(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_Spinup_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_Spinup_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_Wobble_6() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_Wobble_6)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_Wobble_6() const { return ___m_GamePlay_Wobble_6; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_Wobble_6() { return &___m_GamePlay_Wobble_6; }
	inline void set_m_GamePlay_Wobble_6(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_Wobble_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_Wobble_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_WobbleHigh_7() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_WobbleHigh_7)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_WobbleHigh_7() const { return ___m_GamePlay_WobbleHigh_7; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_WobbleHigh_7() { return &___m_GamePlay_WobbleHigh_7; }
	inline void set_m_GamePlay_WobbleHigh_7(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_WobbleHigh_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_WobbleHigh_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_IncreaseSpin_8() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_IncreaseSpin_8)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_IncreaseSpin_8() const { return ___m_GamePlay_IncreaseSpin_8; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_IncreaseSpin_8() { return &___m_GamePlay_IncreaseSpin_8; }
	inline void set_m_GamePlay_IncreaseSpin_8(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_IncreaseSpin_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_IncreaseSpin_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_DecreaseSpin_9() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_DecreaseSpin_9)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_DecreaseSpin_9() const { return ___m_GamePlay_DecreaseSpin_9; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_DecreaseSpin_9() { return &___m_GamePlay_DecreaseSpin_9; }
	inline void set_m_GamePlay_DecreaseSpin_9(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_DecreaseSpin_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_DecreaseSpin_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_DriveForward_10() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_DriveForward_10)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_DriveForward_10() const { return ___m_GamePlay_DriveForward_10; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_DriveForward_10() { return &___m_GamePlay_DriveForward_10; }
	inline void set_m_GamePlay_DriveForward_10(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_DriveForward_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_DriveForward_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_DriveBack_11() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_DriveBack_11)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_DriveBack_11() const { return ___m_GamePlay_DriveBack_11; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_DriveBack_11() { return &___m_GamePlay_DriveBack_11; }
	inline void set_m_GamePlay_DriveBack_11(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_DriveBack_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_DriveBack_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_DriveLeft_12() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_DriveLeft_12)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_DriveLeft_12() const { return ___m_GamePlay_DriveLeft_12; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_DriveLeft_12() { return &___m_GamePlay_DriveLeft_12; }
	inline void set_m_GamePlay_DriveLeft_12(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_DriveLeft_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_DriveLeft_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_DriveRight_13() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_DriveRight_13)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_DriveRight_13() const { return ___m_GamePlay_DriveRight_13; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_DriveRight_13() { return &___m_GamePlay_DriveRight_13; }
	inline void set_m_GamePlay_DriveRight_13(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_DriveRight_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_DriveRight_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_TurnLeft_14() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_TurnLeft_14)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_TurnLeft_14() const { return ___m_GamePlay_TurnLeft_14; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_TurnLeft_14() { return &___m_GamePlay_TurnLeft_14; }
	inline void set_m_GamePlay_TurnLeft_14(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_TurnLeft_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_TurnLeft_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_GamePlay_TurnRight_15() { return static_cast<int32_t>(offsetof(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3, ___m_GamePlay_TurnRight_15)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_GamePlay_TurnRight_15() const { return ___m_GamePlay_TurnRight_15; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_GamePlay_TurnRight_15() { return &___m_GamePlay_TurnRight_15; }
	inline void set_m_GamePlay_TurnRight_15(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_GamePlay_TurnRight_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GamePlay_TurnRight_15), (void*)value);
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

// WebSocket
struct WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749  : public RuntimeObject
{
public:
	// System.Uri WebSocket::mUrl
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___mUrl_0;
	// System.String WebSocket::protocols
	String_t* ___protocols_1;
	// System.Int32 WebSocket::m_NativeRef
	int32_t ___m_NativeRef_2;

public:
	inline static int32_t get_offset_of_mUrl_0() { return static_cast<int32_t>(offsetof(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749, ___mUrl_0)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_mUrl_0() const { return ___mUrl_0; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_mUrl_0() { return &___mUrl_0; }
	inline void set_mUrl_0(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___mUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUrl_0), (void*)value);
	}

	inline static int32_t get_offset_of_protocols_1() { return static_cast<int32_t>(offsetof(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749, ___protocols_1)); }
	inline String_t* get_protocols_1() const { return ___protocols_1; }
	inline String_t** get_address_of_protocols_1() { return &___protocols_1; }
	inline void set_protocols_1(String_t* value)
	{
		___protocols_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocols_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_NativeRef_2() { return static_cast<int32_t>(offsetof(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749, ___m_NativeRef_2)); }
	inline int32_t get_m_NativeRef_2() const { return ___m_NativeRef_2; }
	inline int32_t* get_address_of_m_NativeRef_2() { return &___m_NativeRef_2; }
	inline void set_m_NativeRef_2(int32_t value)
	{
		___m_NativeRef_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// MultiUserManager/WebsiteCommands
struct WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E  : public RuntimeObject
{
public:
	// System.Int32 MultiUserManager/WebsiteCommands::position
	int32_t ___position_0;
	// System.Int32 MultiUserManager/WebsiteCommands::robotType
	int32_t ___robotType_1;
	// System.Single MultiUserManager/WebsiteCommands::size
	float ___size_2;
	// System.Single MultiUserManager/WebsiteCommands::wheelSize
	float ___wheelSize_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E, ___position_0)); }
	inline int32_t get_position_0() const { return ___position_0; }
	inline int32_t* get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(int32_t value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_robotType_1() { return static_cast<int32_t>(offsetof(WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E, ___robotType_1)); }
	inline int32_t get_robotType_1() const { return ___robotType_1; }
	inline int32_t* get_address_of_robotType_1() { return &___robotType_1; }
	inline void set_robotType_1(int32_t value)
	{
		___robotType_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E, ___size_2)); }
	inline float get_size_2() const { return ___size_2; }
	inline float* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(float value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_wheelSize_3() { return static_cast<int32_t>(offsetof(WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E, ___wheelSize_3)); }
	inline float get_wheelSize_3() const { return ___wheelSize_3; }
	inline float* get_address_of_wheelSize_3() { return &___wheelSize_3; }
	inline void set_wheelSize_3(float value)
	{
		___wheelSize_3 = value;
	}
};


// PhotonRoom/CustomPlayer
struct CustomPlayer_tE2B61CF9CD6A7300E674E8F8F9CF2EAA8E916779  : public RuntimeObject
{
public:
	// System.Int32 PhotonRoom/CustomPlayer::team
	int32_t ___team_0;
	// System.Int32 PhotonRoom/CustomPlayer::pos
	int32_t ___pos_1;
	// Photon.Realtime.Player PhotonRoom/CustomPlayer::player
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___player_2;

public:
	inline static int32_t get_offset_of_team_0() { return static_cast<int32_t>(offsetof(CustomPlayer_tE2B61CF9CD6A7300E674E8F8F9CF2EAA8E916779, ___team_0)); }
	inline int32_t get_team_0() const { return ___team_0; }
	inline int32_t* get_address_of_team_0() { return &___team_0; }
	inline void set_team_0(int32_t value)
	{
		___team_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(CustomPlayer_tE2B61CF9CD6A7300E674E8F8F9CF2EAA8E916779, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CustomPlayer_tE2B61CF9CD6A7300E674E8F8F9CF2EAA8E916779, ___player_2)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_player_2() const { return ___player_2; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_2), (void*)value);
	}
};


// QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11
struct U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445  : public RuntimeObject
{
public:
	// System.Int32 QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::sceneName
	String_t* ___sceneName_2;
	// QuantumTek.QuantumUI.QUI_SceneTransition QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::<>4__this
	QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402 * ___U3CU3E4__this_3;
	// UnityEngine.AsyncOperation QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::<loadOperation>5__1
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3CloadOperationU3E5__1_4;
	// System.Single QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::<loadProgress>5__2
	float ___U3CloadProgressU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_sceneName_2() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445, ___sceneName_2)); }
	inline String_t* get_sceneName_2() const { return ___sceneName_2; }
	inline String_t** get_address_of_sceneName_2() { return &___sceneName_2; }
	inline void set_sceneName_2(String_t* value)
	{
		___sceneName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445, ___U3CU3E4__this_3)); }
	inline QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloadOperationU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445, ___U3CloadOperationU3E5__1_4)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3CloadOperationU3E5__1_4() const { return ___U3CloadOperationU3E5__1_4; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3CloadOperationU3E5__1_4() { return &___U3CloadOperationU3E5__1_4; }
	inline void set_U3CloadOperationU3E5__1_4(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3CloadOperationU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CloadOperationU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CloadProgressU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445, ___U3CloadProgressU3E5__2_5)); }
	inline float get_U3CloadProgressU3E5__2_5() const { return ___U3CloadProgressU3E5__2_5; }
	inline float* get_address_of_U3CloadProgressU3E5__2_5() { return &___U3CloadProgressU3E5__2_5; }
	inline void set_U3CloadProgressU3E5__2_5(float value)
	{
		___U3CloadProgressU3E5__2_5 = value;
	}
};


// RobotControllerUdp/RobotPowers
struct RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80  : public RuntimeObject
{
public:
	// System.Single RobotControllerUdp/RobotPowers::motor1
	float ___motor1_0;
	// System.Single RobotControllerUdp/RobotPowers::motor2
	float ___motor2_1;
	// System.Single RobotControllerUdp/RobotPowers::motor3
	float ___motor3_2;
	// System.Single RobotControllerUdp/RobotPowers::motor4
	float ___motor4_3;
	// System.Single RobotControllerUdp/RobotPowers::motor5
	float ___motor5_4;
	// System.Single RobotControllerUdp/RobotPowers::motor6
	float ___motor6_5;
	// System.Single RobotControllerUdp/RobotPowers::motor7
	float ___motor7_6;
	// System.Single RobotControllerUdp/RobotPowers::motor8
	float ___motor8_7;

public:
	inline static int32_t get_offset_of_motor1_0() { return static_cast<int32_t>(offsetof(RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80, ___motor1_0)); }
	inline float get_motor1_0() const { return ___motor1_0; }
	inline float* get_address_of_motor1_0() { return &___motor1_0; }
	inline void set_motor1_0(float value)
	{
		___motor1_0 = value;
	}

	inline static int32_t get_offset_of_motor2_1() { return static_cast<int32_t>(offsetof(RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80, ___motor2_1)); }
	inline float get_motor2_1() const { return ___motor2_1; }
	inline float* get_address_of_motor2_1() { return &___motor2_1; }
	inline void set_motor2_1(float value)
	{
		___motor2_1 = value;
	}

	inline static int32_t get_offset_of_motor3_2() { return static_cast<int32_t>(offsetof(RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80, ___motor3_2)); }
	inline float get_motor3_2() const { return ___motor3_2; }
	inline float* get_address_of_motor3_2() { return &___motor3_2; }
	inline void set_motor3_2(float value)
	{
		___motor3_2 = value;
	}

	inline static int32_t get_offset_of_motor4_3() { return static_cast<int32_t>(offsetof(RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80, ___motor4_3)); }
	inline float get_motor4_3() const { return ___motor4_3; }
	inline float* get_address_of_motor4_3() { return &___motor4_3; }
	inline void set_motor4_3(float value)
	{
		___motor4_3 = value;
	}

	inline static int32_t get_offset_of_motor5_4() { return static_cast<int32_t>(offsetof(RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80, ___motor5_4)); }
	inline float get_motor5_4() const { return ___motor5_4; }
	inline float* get_address_of_motor5_4() { return &___motor5_4; }
	inline void set_motor5_4(float value)
	{
		___motor5_4 = value;
	}

	inline static int32_t get_offset_of_motor6_5() { return static_cast<int32_t>(offsetof(RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80, ___motor6_5)); }
	inline float get_motor6_5() const { return ___motor6_5; }
	inline float* get_address_of_motor6_5() { return &___motor6_5; }
	inline void set_motor6_5(float value)
	{
		___motor6_5 = value;
	}

	inline static int32_t get_offset_of_motor7_6() { return static_cast<int32_t>(offsetof(RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80, ___motor7_6)); }
	inline float get_motor7_6() const { return ___motor7_6; }
	inline float* get_address_of_motor7_6() { return &___motor7_6; }
	inline void set_motor7_6(float value)
	{
		___motor7_6 = value;
	}

	inline static int32_t get_offset_of_motor8_7() { return static_cast<int32_t>(offsetof(RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80, ___motor8_7)); }
	inline float get_motor8_7() const { return ___motor8_7; }
	inline float* get_address_of_motor8_7() { return &___motor8_7; }
	inline void set_motor8_7(float value)
	{
		___motor8_7 = value;
	}
};


// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12
struct U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ExitGames.Client.Photon.SocketWebTcp ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>4__this
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * ___U3CU3E4__this_2;
	// System.Byte[] ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<inBuff>5__1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CinBuffU3E5__1_3;
	// System.Exception ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<e>5__2
	Exception_t * ___U3CeU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971, ___U3CU3E4__this_2)); }
	inline SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinBuffU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971, ___U3CinBuffU3E5__1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CinBuffU3E5__1_3() const { return ___U3CinBuffU3E5__1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CinBuffU3E5__1_3() { return &___U3CinBuffU3E5__1_3; }
	inline void set_U3CinBuffU3E5__1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CinBuffU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinBuffU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971, ___U3CeU3E5__2_4)); }
	inline Exception_t * get_U3CeU3E5__2_4() const { return ___U3CeU3E5__2_4; }
	inline Exception_t ** get_address_of_U3CeU3E5__2_4() { return &___U3CeU3E5__2_4; }
	inline void set_U3CeU3E5__2_4(Exception_t * value)
	{
		___U3CeU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__2_4), (void*)value);
	}
};


// UserManager/WebsiteCommands
struct WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD  : public RuntimeObject
{
public:
	// System.Int32 UserManager/WebsiteCommands::position
	int32_t ___position_0;
	// System.Int32 UserManager/WebsiteCommands::robotType
	int32_t ___robotType_1;
	// System.Boolean UserManager/WebsiteCommands::resetField
	bool ___resetField_2;
	// System.Boolean UserManager/WebsiteCommands::startGame
	bool ___startGame_3;
	// System.String UserManager/WebsiteCommands::gameType
	String_t* ___gameType_4;
	// System.String UserManager/WebsiteCommands::gameSetup
	String_t* ___gameSetup_5;
	// System.Single UserManager/WebsiteCommands::size
	float ___size_6;
	// System.Single UserManager/WebsiteCommands::wheelSize
	float ___wheelSize_7;
	// System.Int32 UserManager/WebsiteCommands::cam
	int32_t ___cam_8;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD, ___position_0)); }
	inline int32_t get_position_0() const { return ___position_0; }
	inline int32_t* get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(int32_t value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_robotType_1() { return static_cast<int32_t>(offsetof(WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD, ___robotType_1)); }
	inline int32_t get_robotType_1() const { return ___robotType_1; }
	inline int32_t* get_address_of_robotType_1() { return &___robotType_1; }
	inline void set_robotType_1(int32_t value)
	{
		___robotType_1 = value;
	}

	inline static int32_t get_offset_of_resetField_2() { return static_cast<int32_t>(offsetof(WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD, ___resetField_2)); }
	inline bool get_resetField_2() const { return ___resetField_2; }
	inline bool* get_address_of_resetField_2() { return &___resetField_2; }
	inline void set_resetField_2(bool value)
	{
		___resetField_2 = value;
	}

	inline static int32_t get_offset_of_startGame_3() { return static_cast<int32_t>(offsetof(WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD, ___startGame_3)); }
	inline bool get_startGame_3() const { return ___startGame_3; }
	inline bool* get_address_of_startGame_3() { return &___startGame_3; }
	inline void set_startGame_3(bool value)
	{
		___startGame_3 = value;
	}

	inline static int32_t get_offset_of_gameType_4() { return static_cast<int32_t>(offsetof(WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD, ___gameType_4)); }
	inline String_t* get_gameType_4() const { return ___gameType_4; }
	inline String_t** get_address_of_gameType_4() { return &___gameType_4; }
	inline void set_gameType_4(String_t* value)
	{
		___gameType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameType_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameSetup_5() { return static_cast<int32_t>(offsetof(WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD, ___gameSetup_5)); }
	inline String_t* get_gameSetup_5() const { return ___gameSetup_5; }
	inline String_t** get_address_of_gameSetup_5() { return &___gameSetup_5; }
	inline void set_gameSetup_5(String_t* value)
	{
		___gameSetup_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameSetup_5), (void*)value);
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD, ___size_6)); }
	inline float get_size_6() const { return ___size_6; }
	inline float* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(float value)
	{
		___size_6 = value;
	}

	inline static int32_t get_offset_of_wheelSize_7() { return static_cast<int32_t>(offsetof(WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD, ___wheelSize_7)); }
	inline float get_wheelSize_7() const { return ___wheelSize_7; }
	inline float* get_address_of_wheelSize_7() { return &___wheelSize_7; }
	inline void set_wheelSize_7(float value)
	{
		___wheelSize_7 = value;
	}

	inline static int32_t get_offset_of_cam_8() { return static_cast<int32_t>(offsetof(WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD, ___cam_8)); }
	inline int32_t get_cam_8() const { return ___cam_8; }
	inline int32_t* get_address_of_cam_8() { return &___cam_8; }
	inline void set_cam_8(int32_t value)
	{
		___cam_8 = value;
	}
};


// UserManager/WebsiteScore
struct WebsiteScore_t4A970FD02F287299012DB0C36FD43565828383C8  : public RuntimeObject
{
public:
	// System.String UserManager/WebsiteScore::gameType
	String_t* ___gameType_0;
	// System.Int32 UserManager/WebsiteScore::score
	int32_t ___score_1;

public:
	inline static int32_t get_offset_of_gameType_0() { return static_cast<int32_t>(offsetof(WebsiteScore_t4A970FD02F287299012DB0C36FD43565828383C8, ___gameType_0)); }
	inline String_t* get_gameType_0() const { return ___gameType_0; }
	inline String_t** get_address_of_gameType_0() { return &___gameType_0; }
	inline void set_gameType_0(String_t* value)
	{
		___gameType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameType_0), (void*)value);
	}

	inline static int32_t get_offset_of_score_1() { return static_cast<int32_t>(offsetof(WebsiteScore_t4A970FD02F287299012DB0C36FD43565828383C8, ___score_1)); }
	inline int32_t get_score_1() const { return ___score_1; }
	inline int32_t* get_address_of_score_1() { return &___score_1; }
	inline void set_score_1(int32_t value)
	{
		___score_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___firstValue_1)); }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___additionalValues_2)); }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
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


// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single ExitGames.Client.Photon.WaitForRealSeconds::_endTime
	float ____endTime_0;

public:
	inline static int32_t get_offset_of__endTime_0() { return static_cast<int32_t>(offsetof(WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926, ____endTime_0)); }
	inline float get__endTime_0() const { return ____endTime_0; }
	inline float* get_address_of__endTime_0() { return &____endTime_0; }
	inline void set__endTime_0(float value)
	{
		____endTime_0 = value;
	}
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// PlayerControls/GamePlayActions
struct GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 
{
public:
	// PlayerControls PlayerControls/GamePlayActions::m_Wrapper
	PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ___m_Wrapper_0;

public:
	inline static int32_t get_offset_of_m_Wrapper_0() { return static_cast<int32_t>(offsetof(GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23, ___m_Wrapper_0)); }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * get_m_Wrapper_0() const { return ___m_Wrapper_0; }
	inline PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 ** get_address_of_m_Wrapper_0() { return &___m_Wrapper_0; }
	inline void set_m_Wrapper_0(PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * value)
	{
		___m_Wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Wrapper_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of PlayerControls/GamePlayActions
struct GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshaled_pinvoke
{
	PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ___m_Wrapper_0;
};
// Native definition for COM marshalling of PlayerControls/GamePlayActions
struct GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshaled_com
{
	PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ___m_Wrapper_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
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


// ExitGames.Client.Photon.ConnectionStateValue
struct ConnectionStateValue_tBA7084D5764BE0B76B0F11B1A436D81449527F63 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionStateValue_tBA7084D5764BE0B76B0F11B1A436D81449527F63, ___value___2)); }
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

// UnityEngine.InputSystem.InputActionType
struct InputActionType_t913CC58784CA34E9791C18B15436C791CD465901 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t913CC58784CA34E9791C18B15436C791CD465901, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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

// ExitGames.Client.Photon.PhotonSocketState
struct PhotonSocketState_t0A317E33CE881C4E61BFE7545CB6829B01C83917 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketState_t0A317E33CE881C4E61BFE7545CB6829B01C83917, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QuantumTek.QuantumUI.QUI_BarFillType
struct QUI_BarFillType_t96874975BFA0056824E4DB902400F219DF319A7C 
{
public:
	// System.Int32 QuantumTek.QuantumUI.QUI_BarFillType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QUI_BarFillType_t96874975BFA0056824E4DB902400F219DF319A7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QuantumTek.QuantumUI.QUI_LoadType
struct QUI_LoadType_t10E43441405D834503923AF2D6998B32806F3AB1 
{
public:
	// System.Int32 QuantumTek.QuantumUI.QUI_LoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QUI_LoadType_t10E43441405D834503923AF2D6998B32806F3AB1, ___value___2)); }
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


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::ConnectAddress
	String_t* ___ConnectAddress_4;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_8;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_10;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_peerBase_0() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___peerBase_0)); }
	inline PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * get_peerBase_0() const { return ___peerBase_0; }
	inline PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 ** get_address_of_peerBase_0() { return &___peerBase_0; }
	inline void set_peerBase_0(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * value)
	{
		___peerBase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_0), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_1() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___Protocol_1)); }
	inline uint8_t get_Protocol_1() const { return ___Protocol_1; }
	inline uint8_t* get_address_of_Protocol_1() { return &___Protocol_1; }
	inline void set_Protocol_1(uint8_t value)
	{
		___Protocol_1 = value;
	}

	inline static int32_t get_offset_of_PollReceive_2() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___PollReceive_2)); }
	inline bool get_PollReceive_2() const { return ___PollReceive_2; }
	inline bool* get_address_of_PollReceive_2() { return &___PollReceive_2; }
	inline void set_PollReceive_2(bool value)
	{
		___PollReceive_2 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___U3CStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_ConnectAddress_4() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___ConnectAddress_4)); }
	inline String_t* get_ConnectAddress_4() const { return ___ConnectAddress_4; }
	inline String_t** get_address_of_ConnectAddress_4() { return &___ConnectAddress_4; }
	inline void set_ConnectAddress_4(String_t* value)
	{
		___ConnectAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___U3CServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_5() const { return ___U3CServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_5() { return &___U3CServerAddressU3Ek__BackingField_5; }
	inline void set_U3CServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___U3CProxyServerAddressU3Ek__BackingField_6)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_6() const { return ___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_6() { return &___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_6(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerPortU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___U3CServerPortU3Ek__BackingField_8)); }
	inline int32_t get_U3CServerPortU3Ek__BackingField_8() const { return ___U3CServerPortU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CServerPortU3Ek__BackingField_8() { return &___U3CServerPortU3Ek__BackingField_8; }
	inline void set_U3CServerPortU3Ek__BackingField_8(int32_t value)
	{
		___U3CServerPortU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9)); }
	inline bool get_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() const { return ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9; }
	inline bool* get_address_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() { return &___U3CAddressResolvedAsIpv6U3Ek__BackingField_9; }
	inline void set_U3CAddressResolvedAsIpv6U3Ek__BackingField_9(bool value)
	{
		___U3CAddressResolvedAsIpv6U3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUrlProtocolU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___U3CUrlProtocolU3Ek__BackingField_10)); }
	inline String_t* get_U3CUrlProtocolU3Ek__BackingField_10() const { return ___U3CUrlProtocolU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUrlProtocolU3Ek__BackingField_10() { return &___U3CUrlProtocolU3Ek__BackingField_10; }
	inline void set_U3CUrlProtocolU3Ek__BackingField_10(String_t* value)
	{
		___U3CUrlProtocolU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlProtocolU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlPathU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C, ___U3CUrlPathU3Ek__BackingField_11)); }
	inline String_t* get_U3CUrlPathU3Ek__BackingField_11() const { return ___U3CUrlPathU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CUrlPathU3Ek__BackingField_11() { return &___U3CUrlPathU3Ek__BackingField_11; }
	inline void set_U3CUrlPathU3Ek__BackingField_11(String_t* value)
	{
		___U3CUrlPathU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlPathU3Ek__BackingField_11), (void*)value);
	}
};

struct IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C_StaticFields
{
public:
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CServerIpAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C_StaticFields, ___U3CServerIpAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CServerIpAddressU3Ek__BackingField_7() const { return ___U3CServerIpAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CServerIpAddressU3Ek__BackingField_7() { return &___U3CServerIpAddressU3Ek__BackingField_7; }
	inline void set_U3CServerIpAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CServerIpAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerIpAddressU3Ek__BackingField_7), (void*)value);
	}
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_tAD36D5E3B726ED226279CA1695889DBE1EFC83DF * ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_8;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t8BA633E6BDD431280C43CDEA74C4082AC9FC5074 * ___CommandInCurrentDispatch_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_11;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t76C23A7CC17A2EE34A69A1A348CE38C7D8032001 * ___ActionQueue_12;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_13;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_14;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::PhotonToken
	RuntimeObject * ___PhotonToken_25;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject * ___CustomInitData_26;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_27;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * ___reusableEventData_28;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PeerBase::watch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___watch_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_35;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_37;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::messageHeader
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageHeader_39;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_40;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___lagRandomizer_41;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * ___NetSimListOutgoing_42;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * ___NetSimListIncoming_43;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t2A9AD24D6EB9D2BA1CA682ADAC5D62DAED8FF6AB * ___networkSimulationSettings_44;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_45;

public:
	inline static int32_t get_offset_of_photonPeer_0() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___photonPeer_0)); }
	inline PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * get_photonPeer_0() const { return ___photonPeer_0; }
	inline PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 ** get_address_of_photonPeer_0() { return &___photonPeer_0; }
	inline void set_photonPeer_0(PhotonPeer_t092006D278E644E3F92EC8E3D0EABC3FD5658CA6 * value)
	{
		___photonPeer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonPeer_0), (void*)value);
	}

	inline static int32_t get_offset_of_SerializationProtocol_1() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___SerializationProtocol_1)); }
	inline IProtocol_tAD36D5E3B726ED226279CA1695889DBE1EFC83DF * get_SerializationProtocol_1() const { return ___SerializationProtocol_1; }
	inline IProtocol_tAD36D5E3B726ED226279CA1695889DBE1EFC83DF ** get_address_of_SerializationProtocol_1() { return &___SerializationProtocol_1; }
	inline void set_SerializationProtocol_1(IProtocol_tAD36D5E3B726ED226279CA1695889DBE1EFC83DF * value)
	{
		___SerializationProtocol_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializationProtocol_1), (void*)value);
	}

	inline static int32_t get_offset_of_usedTransportProtocol_2() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___usedTransportProtocol_2)); }
	inline uint8_t get_usedTransportProtocol_2() const { return ___usedTransportProtocol_2; }
	inline uint8_t* get_address_of_usedTransportProtocol_2() { return &___usedTransportProtocol_2; }
	inline void set_usedTransportProtocol_2(uint8_t value)
	{
		___usedTransportProtocol_2 = value;
	}

	inline static int32_t get_offset_of_PhotonSocket_3() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___PhotonSocket_3)); }
	inline IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * get_PhotonSocket_3() const { return ___PhotonSocket_3; }
	inline IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C ** get_address_of_PhotonSocket_3() { return &___PhotonSocket_3; }
	inline void set_PhotonSocket_3(IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * value)
	{
		___PhotonSocket_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonSocket_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___U3CProxyServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_5() const { return ___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_5() { return &___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_peerConnectionState_6() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___peerConnectionState_6)); }
	inline uint8_t get_peerConnectionState_6() const { return ___peerConnectionState_6; }
	inline uint8_t* get_address_of_peerConnectionState_6() { return &___peerConnectionState_6; }
	inline void set_peerConnectionState_6(uint8_t value)
	{
		___peerConnectionState_6 = value;
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_7() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___ByteCountLastOperation_7)); }
	inline int32_t get_ByteCountLastOperation_7() const { return ___ByteCountLastOperation_7; }
	inline int32_t* get_address_of_ByteCountLastOperation_7() { return &___ByteCountLastOperation_7; }
	inline void set_ByteCountLastOperation_7(int32_t value)
	{
		___ByteCountLastOperation_7 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_8() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___ByteCountCurrentDispatch_8)); }
	inline int32_t get_ByteCountCurrentDispatch_8() const { return ___ByteCountCurrentDispatch_8; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_8() { return &___ByteCountCurrentDispatch_8; }
	inline void set_ByteCountCurrentDispatch_8(int32_t value)
	{
		___ByteCountCurrentDispatch_8 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_9() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___CommandInCurrentDispatch_9)); }
	inline NCommand_t8BA633E6BDD431280C43CDEA74C4082AC9FC5074 * get_CommandInCurrentDispatch_9() const { return ___CommandInCurrentDispatch_9; }
	inline NCommand_t8BA633E6BDD431280C43CDEA74C4082AC9FC5074 ** get_address_of_CommandInCurrentDispatch_9() { return &___CommandInCurrentDispatch_9; }
	inline void set_CommandInCurrentDispatch_9(NCommand_t8BA633E6BDD431280C43CDEA74C4082AC9FC5074 * value)
	{
		___CommandInCurrentDispatch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandInCurrentDispatch_9), (void*)value);
	}

	inline static int32_t get_offset_of_packetLossByCrc_10() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___packetLossByCrc_10)); }
	inline int32_t get_packetLossByCrc_10() const { return ___packetLossByCrc_10; }
	inline int32_t* get_address_of_packetLossByCrc_10() { return &___packetLossByCrc_10; }
	inline void set_packetLossByCrc_10(int32_t value)
	{
		___packetLossByCrc_10 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_11() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___packetLossByChallenge_11)); }
	inline int32_t get_packetLossByChallenge_11() const { return ___packetLossByChallenge_11; }
	inline int32_t* get_address_of_packetLossByChallenge_11() { return &___packetLossByChallenge_11; }
	inline void set_packetLossByChallenge_11(int32_t value)
	{
		___packetLossByChallenge_11 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_12() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___ActionQueue_12)); }
	inline Queue_1_t76C23A7CC17A2EE34A69A1A348CE38C7D8032001 * get_ActionQueue_12() const { return ___ActionQueue_12; }
	inline Queue_1_t76C23A7CC17A2EE34A69A1A348CE38C7D8032001 ** get_address_of_ActionQueue_12() { return &___ActionQueue_12; }
	inline void set_ActionQueue_12(Queue_1_t76C23A7CC17A2EE34A69A1A348CE38C7D8032001 * value)
	{
		___ActionQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_peerID_13() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___peerID_13)); }
	inline int16_t get_peerID_13() const { return ___peerID_13; }
	inline int16_t* get_address_of_peerID_13() { return &___peerID_13; }
	inline void set_peerID_13(int16_t value)
	{
		___peerID_13 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_14() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___serverTimeOffset_14)); }
	inline int32_t get_serverTimeOffset_14() const { return ___serverTimeOffset_14; }
	inline int32_t* get_address_of_serverTimeOffset_14() { return &___serverTimeOffset_14; }
	inline void set_serverTimeOffset_14(int32_t value)
	{
		___serverTimeOffset_14 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_15() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___serverTimeOffsetIsAvailable_15)); }
	inline bool get_serverTimeOffsetIsAvailable_15() const { return ___serverTimeOffsetIsAvailable_15; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_15() { return &___serverTimeOffsetIsAvailable_15; }
	inline void set_serverTimeOffsetIsAvailable_15(bool value)
	{
		___serverTimeOffsetIsAvailable_15 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_16() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___roundTripTime_16)); }
	inline int32_t get_roundTripTime_16() const { return ___roundTripTime_16; }
	inline int32_t* get_address_of_roundTripTime_16() { return &___roundTripTime_16; }
	inline void set_roundTripTime_16(int32_t value)
	{
		___roundTripTime_16 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_17() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___roundTripTimeVariance_17)); }
	inline int32_t get_roundTripTimeVariance_17() const { return ___roundTripTimeVariance_17; }
	inline int32_t* get_address_of_roundTripTimeVariance_17() { return &___roundTripTimeVariance_17; }
	inline void set_roundTripTimeVariance_17(int32_t value)
	{
		___roundTripTimeVariance_17 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_18() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___lastRoundTripTime_18)); }
	inline int32_t get_lastRoundTripTime_18() const { return ___lastRoundTripTime_18; }
	inline int32_t* get_address_of_lastRoundTripTime_18() { return &___lastRoundTripTime_18; }
	inline void set_lastRoundTripTime_18(int32_t value)
	{
		___lastRoundTripTime_18 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_19() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___lowestRoundTripTime_19)); }
	inline int32_t get_lowestRoundTripTime_19() const { return ___lowestRoundTripTime_19; }
	inline int32_t* get_address_of_lowestRoundTripTime_19() { return &___lowestRoundTripTime_19; }
	inline void set_lowestRoundTripTime_19(int32_t value)
	{
		___lowestRoundTripTime_19 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_20() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___highestRoundTripTimeVariance_20)); }
	inline int32_t get_highestRoundTripTimeVariance_20() const { return ___highestRoundTripTimeVariance_20; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_20() { return &___highestRoundTripTimeVariance_20; }
	inline void set_highestRoundTripTimeVariance_20(int32_t value)
	{
		___highestRoundTripTimeVariance_20 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_21() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___timestampOfLastReceive_21)); }
	inline int32_t get_timestampOfLastReceive_21() const { return ___timestampOfLastReceive_21; }
	inline int32_t* get_address_of_timestampOfLastReceive_21() { return &___timestampOfLastReceive_21; }
	inline void set_timestampOfLastReceive_21(int32_t value)
	{
		___timestampOfLastReceive_21 = value;
	}

	inline static int32_t get_offset_of_bytesOut_23() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___bytesOut_23)); }
	inline int64_t get_bytesOut_23() const { return ___bytesOut_23; }
	inline int64_t* get_address_of_bytesOut_23() { return &___bytesOut_23; }
	inline void set_bytesOut_23(int64_t value)
	{
		___bytesOut_23 = value;
	}

	inline static int32_t get_offset_of_bytesIn_24() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___bytesIn_24)); }
	inline int64_t get_bytesIn_24() const { return ___bytesIn_24; }
	inline int64_t* get_address_of_bytesIn_24() { return &___bytesIn_24; }
	inline void set_bytesIn_24(int64_t value)
	{
		___bytesIn_24 = value;
	}

	inline static int32_t get_offset_of_PhotonToken_25() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___PhotonToken_25)); }
	inline RuntimeObject * get_PhotonToken_25() const { return ___PhotonToken_25; }
	inline RuntimeObject ** get_address_of_PhotonToken_25() { return &___PhotonToken_25; }
	inline void set_PhotonToken_25(RuntimeObject * value)
	{
		___PhotonToken_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonToken_25), (void*)value);
	}

	inline static int32_t get_offset_of_CustomInitData_26() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___CustomInitData_26)); }
	inline RuntimeObject * get_CustomInitData_26() const { return ___CustomInitData_26; }
	inline RuntimeObject ** get_address_of_CustomInitData_26() { return &___CustomInitData_26; }
	inline void set_CustomInitData_26(RuntimeObject * value)
	{
		___CustomInitData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomInitData_26), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_27() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___AppId_27)); }
	inline String_t* get_AppId_27() const { return ___AppId_27; }
	inline String_t** get_address_of_AppId_27() { return &___AppId_27; }
	inline void set_AppId_27(String_t* value)
	{
		___AppId_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_27), (void*)value);
	}

	inline static int32_t get_offset_of_reusableEventData_28() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___reusableEventData_28)); }
	inline EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * get_reusableEventData_28() const { return ___reusableEventData_28; }
	inline EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC ** get_address_of_reusableEventData_28() { return &___reusableEventData_28; }
	inline void set_reusableEventData_28(EventData_tAF8F5C9AE41D34DDE1E4B79F6A09ADD536047AAC * value)
	{
		___reusableEventData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableEventData_28), (void*)value);
	}

	inline static int32_t get_offset_of_watch_29() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___watch_29)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_watch_29() const { return ___watch_29; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_watch_29() { return &___watch_29; }
	inline void set_watch_29(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___watch_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___watch_29), (void*)value);
	}

	inline static int32_t get_offset_of_timeoutInt_30() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___timeoutInt_30)); }
	inline int32_t get_timeoutInt_30() const { return ___timeoutInt_30; }
	inline int32_t* get_address_of_timeoutInt_30() { return &___timeoutInt_30; }
	inline void set_timeoutInt_30(int32_t value)
	{
		___timeoutInt_30 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_31() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___timeLastAckReceive_31)); }
	inline int32_t get_timeLastAckReceive_31() const { return ___timeLastAckReceive_31; }
	inline int32_t* get_address_of_timeLastAckReceive_31() { return &___timeLastAckReceive_31; }
	inline void set_timeLastAckReceive_31(int32_t value)
	{
		___timeLastAckReceive_31 = value;
	}

	inline static int32_t get_offset_of_longestSentCall_32() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___longestSentCall_32)); }
	inline int32_t get_longestSentCall_32() const { return ___longestSentCall_32; }
	inline int32_t* get_address_of_longestSentCall_32() { return &___longestSentCall_32; }
	inline void set_longestSentCall_32(int32_t value)
	{
		___longestSentCall_32 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_33() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___timeLastSendAck_33)); }
	inline int32_t get_timeLastSendAck_33() const { return ___timeLastSendAck_33; }
	inline int32_t* get_address_of_timeLastSendAck_33() { return &___timeLastSendAck_33; }
	inline void set_timeLastSendAck_33(int32_t value)
	{
		___timeLastSendAck_33 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_34() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___timeLastSendOutgoing_34)); }
	inline int32_t get_timeLastSendOutgoing_34() const { return ___timeLastSendOutgoing_34; }
	inline int32_t* get_address_of_timeLastSendOutgoing_34() { return &___timeLastSendOutgoing_34; }
	inline void set_timeLastSendOutgoing_34(int32_t value)
	{
		___timeLastSendOutgoing_34 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_35() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___ApplicationIsInitialized_35)); }
	inline bool get_ApplicationIsInitialized_35() const { return ___ApplicationIsInitialized_35; }
	inline bool* get_address_of_ApplicationIsInitialized_35() { return &___ApplicationIsInitialized_35; }
	inline void set_ApplicationIsInitialized_35(bool value)
	{
		___ApplicationIsInitialized_35 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_36() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___isEncryptionAvailable_36)); }
	inline bool get_isEncryptionAvailable_36() const { return ___isEncryptionAvailable_36; }
	inline bool* get_address_of_isEncryptionAvailable_36() { return &___isEncryptionAvailable_36; }
	inline void set_isEncryptionAvailable_36(bool value)
	{
		___isEncryptionAvailable_36 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_37() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___outgoingCommandsInStream_37)); }
	inline int32_t get_outgoingCommandsInStream_37() const { return ___outgoingCommandsInStream_37; }
	inline int32_t* get_address_of_outgoingCommandsInStream_37() { return &___outgoingCommandsInStream_37; }
	inline void set_outgoingCommandsInStream_37(int32_t value)
	{
		___outgoingCommandsInStream_37 = value;
	}

	inline static int32_t get_offset_of_messageHeader_39() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___messageHeader_39)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_messageHeader_39() const { return ___messageHeader_39; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_messageHeader_39() { return &___messageHeader_39; }
	inline void set_messageHeader_39(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___messageHeader_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHeader_39), (void*)value);
	}

	inline static int32_t get_offset_of_CryptoProvider_40() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___CryptoProvider_40)); }
	inline RuntimeObject* get_CryptoProvider_40() const { return ___CryptoProvider_40; }
	inline RuntimeObject** get_address_of_CryptoProvider_40() { return &___CryptoProvider_40; }
	inline void set_CryptoProvider_40(RuntimeObject* value)
	{
		___CryptoProvider_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CryptoProvider_40), (void*)value);
	}

	inline static int32_t get_offset_of_lagRandomizer_41() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___lagRandomizer_41)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_lagRandomizer_41() const { return ___lagRandomizer_41; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_lagRandomizer_41() { return &___lagRandomizer_41; }
	inline void set_lagRandomizer_41(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___lagRandomizer_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lagRandomizer_41), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_42() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___NetSimListOutgoing_42)); }
	inline LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * get_NetSimListOutgoing_42() const { return ___NetSimListOutgoing_42; }
	inline LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA ** get_address_of_NetSimListOutgoing_42() { return &___NetSimListOutgoing_42; }
	inline void set_NetSimListOutgoing_42(LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * value)
	{
		___NetSimListOutgoing_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListOutgoing_42), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_43() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___NetSimListIncoming_43)); }
	inline LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * get_NetSimListIncoming_43() const { return ___NetSimListIncoming_43; }
	inline LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA ** get_address_of_NetSimListIncoming_43() { return &___NetSimListIncoming_43; }
	inline void set_NetSimListIncoming_43(LinkedList_1_tA4DB555A1DB740B49D65FD1CCAE3B8D48F8680CA * value)
	{
		___NetSimListIncoming_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListIncoming_43), (void*)value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_44() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___networkSimulationSettings_44)); }
	inline NetworkSimulationSet_t2A9AD24D6EB9D2BA1CA682ADAC5D62DAED8FF6AB * get_networkSimulationSettings_44() const { return ___networkSimulationSettings_44; }
	inline NetworkSimulationSet_t2A9AD24D6EB9D2BA1CA682ADAC5D62DAED8FF6AB ** get_address_of_networkSimulationSettings_44() { return &___networkSimulationSettings_44; }
	inline void set_networkSimulationSettings_44(NetworkSimulationSet_t2A9AD24D6EB9D2BA1CA682ADAC5D62DAED8FF6AB * value)
	{
		___networkSimulationSettings_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkSimulationSettings_44), (void*)value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_45() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046, ___TrafficPackageHeaderSize_45)); }
	inline int32_t get_TrafficPackageHeaderSize_45() const { return ___TrafficPackageHeaderSize_45; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_45() { return &___TrafficPackageHeaderSize_45; }
	inline void set_TrafficPackageHeaderSize_45(int32_t value)
	{
		___TrafficPackageHeaderSize_45 = value;
	}
};

struct PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t9687E6386547C3E3285183B1A000577B5F93DD4E * ___MessageBufferPool_38;

public:
	inline static int32_t get_offset_of_peerCount_22() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046_StaticFields, ___peerCount_22)); }
	inline int16_t get_peerCount_22() const { return ___peerCount_22; }
	inline int16_t* get_address_of_peerCount_22() { return &___peerCount_22; }
	inline void set_peerCount_22(int16_t value)
	{
		___peerCount_22 = value;
	}

	inline static int32_t get_offset_of_MessageBufferPool_38() { return static_cast<int32_t>(offsetof(PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046_StaticFields, ___MessageBufferPool_38)); }
	inline Queue_1_t9687E6386547C3E3285183B1A000577B5F93DD4E * get_MessageBufferPool_38() const { return ___MessageBufferPool_38; }
	inline Queue_1_t9687E6386547C3E3285183B1A000577B5F93DD4E ** get_address_of_MessageBufferPool_38() { return &___MessageBufferPool_38; }
	inline void set_MessageBufferPool_38(Queue_1_t9687E6386547C3E3285183B1A000577B5F93DD4E * value)
	{
		___MessageBufferPool_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBufferPool_38), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1  : public IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C
{
public:
	// WebSocket ExitGames.Client.Photon.SocketWebTcp::sock
	WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * ___sock_12;
	// System.Object ExitGames.Client.Photon.SocketWebTcp::syncer
	RuntimeObject * ___syncer_13;
	// UnityEngine.GameObject ExitGames.Client.Photon.SocketWebTcp::websocketConnectionObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___websocketConnectionObject_14;

public:
	inline static int32_t get_offset_of_sock_12() { return static_cast<int32_t>(offsetof(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1, ___sock_12)); }
	inline WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * get_sock_12() const { return ___sock_12; }
	inline WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 ** get_address_of_sock_12() { return &___sock_12; }
	inline void set_sock_12(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * value)
	{
		___sock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_12), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_13() { return static_cast<int32_t>(offsetof(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1, ___syncer_13)); }
	inline RuntimeObject * get_syncer_13() const { return ___syncer_13; }
	inline RuntimeObject ** get_address_of_syncer_13() { return &___syncer_13; }
	inline void set_syncer_13(RuntimeObject * value)
	{
		___syncer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_13), (void*)value);
	}

	inline static int32_t get_offset_of_websocketConnectionObject_14() { return static_cast<int32_t>(offsetof(SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1, ___websocketConnectionObject_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_websocketConnectionObject_14() const { return ___websocketConnectionObject_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_websocketConnectionObject_14() { return &___websocketConnectionObject_14; }
	inline void set_websocketConnectionObject_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___websocketConnectionObject_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___websocketConnectionObject_14), (void*)value);
	}
};


// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_SingletonActionBindings_6;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_7;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_12;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnStarted_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnCanceled_15;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnPerformed_16;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_7() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingMask_7)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_7() const { return ___m_BindingMask_7; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_7() { return &___m_BindingMask_7; }
	inline void set_m_BindingMask_7(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_8() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsStartIndex_8)); }
	inline int32_t get_m_BindingsStartIndex_8() const { return ___m_BindingsStartIndex_8; }
	inline int32_t* get_address_of_m_BindingsStartIndex_8() { return &___m_BindingsStartIndex_8; }
	inline void set_m_BindingsStartIndex_8(int32_t value)
	{
		___m_BindingsStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_9() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsCount_9)); }
	inline int32_t get_m_BindingsCount_9() const { return ___m_BindingsCount_9; }
	inline int32_t* get_address_of_m_BindingsCount_9() { return &___m_BindingsCount_9; }
	inline void set_m_BindingsCount_9(int32_t value)
	{
		___m_BindingsCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlStartIndex_10)); }
	inline int32_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline int32_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(int32_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_11() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlCount_11)); }
	inline int32_t get_m_ControlCount_11() const { return ___m_ControlCount_11; }
	inline int32_t* get_address_of_m_ControlCount_11() { return &___m_ControlCount_11; }
	inline void set_m_ControlCount_11(int32_t value)
	{
		___m_ControlCount_11 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_12() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionIndexInState_12)); }
	inline int32_t get_m_ActionIndexInState_12() const { return ___m_ActionIndexInState_12; }
	inline int32_t* get_address_of_m_ActionIndexInState_12() { return &___m_ActionIndexInState_12; }
	inline void set_m_ActionIndexInState_12(int32_t value)
	{
		___m_ActionIndexInState_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_13() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionMap_13)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_ActionMap_13() const { return ___m_ActionMap_13; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_ActionMap_13() { return &___m_ActionMap_13; }
	inline void set_m_ActionMap_13(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_ActionMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_14() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnStarted_14)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnStarted_14() const { return ___m_OnStarted_14; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnStarted_14() { return &___m_OnStarted_14; }
	inline void set_m_OnStarted_14(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_15() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnCanceled_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnCanceled_15() const { return ___m_OnCanceled_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnCanceled_15() { return &___m_OnCanceled_15; }
	inline void set_m_OnCanceled_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnCanceled_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_16() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnPerformed_16)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnPerformed_16() const { return ___m_OnPerformed_16; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnPerformed_16() { return &___m_OnPerformed_16; }
	inline void set_m_OnPerformed_16(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnPerformed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_10;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_11;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_DevicesCount
	int32_t ___m_DevicesCount_13;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap::m_DevicesArray
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_DevicesArray_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_ActionCallbacks_15;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Id_1)); }
	inline String_t* get_m_Id_1() const { return ___m_Id_1; }
	inline String_t** get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(String_t* value)
	{
		___m_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Asset_2() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Asset_2)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_Asset_2() const { return ___m_Asset_2; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_Asset_2() { return &___m_Asset_2; }
	inline void set_m_Asset_2(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_Asset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Actions_3() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Actions_3)); }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* get_m_Actions_3() const { return ___m_Actions_3; }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73** get_address_of_m_Actions_3() { return &___m_Actions_3; }
	inline void set_m_Actions_3(InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* value)
	{
		___m_Actions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Bindings_4() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Bindings_4)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_Bindings_4() const { return ___m_Bindings_4; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_Bindings_4() { return &___m_Bindings_4; }
	inline void set_m_Bindings_4(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_Bindings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingsForEachAction_5() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingsForEachAction_5)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_BindingsForEachAction_5() const { return ___m_BindingsForEachAction_5; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_BindingsForEachAction_5() { return &___m_BindingsForEachAction_5; }
	inline void set_m_BindingsForEachAction_5(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_BindingsForEachAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingsForEachAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlsForEachAction_6() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ControlsForEachAction_6)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_ControlsForEachAction_6() const { return ___m_ControlsForEachAction_6; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_ControlsForEachAction_6() { return &___m_ControlsForEachAction_6; }
	inline void set_m_ControlsForEachAction_6(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_ControlsForEachAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlsForEachAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnabledActionsCount_7() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_EnabledActionsCount_7)); }
	inline int32_t get_m_EnabledActionsCount_7() const { return ___m_EnabledActionsCount_7; }
	inline int32_t* get_address_of_m_EnabledActionsCount_7() { return &___m_EnabledActionsCount_7; }
	inline void set_m_EnabledActionsCount_7(int32_t value)
	{
		___m_EnabledActionsCount_7 = value;
	}

	inline static int32_t get_offset_of_m_SingletonAction_8() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_SingletonAction_8)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_SingletonAction_8() const { return ___m_SingletonAction_8; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_SingletonAction_8() { return &___m_SingletonAction_8; }
	inline void set_m_SingletonAction_8(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_SingletonAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_MapIndexInState_9() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_MapIndexInState_9)); }
	inline int32_t get_m_MapIndexInState_9() const { return ___m_MapIndexInState_9; }
	inline int32_t* get_address_of_m_MapIndexInState_9() { return &___m_MapIndexInState_9; }
	inline void set_m_MapIndexInState_9(int32_t value)
	{
		___m_MapIndexInState_9 = value;
	}

	inline static int32_t get_offset_of_m_State_10() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_State_10)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_10() const { return ___m_State_10; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_10() { return &___m_State_10; }
	inline void set_m_State_10(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeedToResolveBindings_11() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_NeedToResolveBindings_11)); }
	inline bool get_m_NeedToResolveBindings_11() const { return ___m_NeedToResolveBindings_11; }
	inline bool* get_address_of_m_NeedToResolveBindings_11() { return &___m_NeedToResolveBindings_11; }
	inline void set_m_NeedToResolveBindings_11(bool value)
	{
		___m_NeedToResolveBindings_11 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_12() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingMask_12)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_12() const { return ___m_BindingMask_12; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_12() { return &___m_BindingMask_12; }
	inline void set_m_BindingMask_12(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_13() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesCount_13)); }
	inline int32_t get_m_DevicesCount_13() const { return ___m_DevicesCount_13; }
	inline int32_t* get_address_of_m_DevicesCount_13() { return &___m_DevicesCount_13; }
	inline void set_m_DevicesCount_13(int32_t value)
	{
		___m_DevicesCount_13 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_14() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesArray_14)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_DevicesArray_14() const { return ___m_DevicesArray_14; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_DevicesArray_14() { return &___m_DevicesArray_14; }
	inline void set_m_DevicesArray_14(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_DevicesArray_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionCallbacks_15() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ActionCallbacks_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_ActionCallbacks_15() const { return ___m_ActionCallbacks_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_ActionCallbacks_15() { return &___m_ActionCallbacks_15; }
	inline void set_m_ActionCallbacks_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_ActionCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_16;

public:
	inline static int32_t get_offset_of_s_DeferBindingResolution_16() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields, ___s_DeferBindingResolution_16)); }
	inline int32_t get_s_DeferBindingResolution_16() const { return ___s_DeferBindingResolution_16; }
	inline int32_t* get_address_of_s_DeferBindingResolution_16() { return &___s_DeferBindingResolution_16; }
	inline void set_s_DeferBindingResolution_16(int32_t value)
	{
		___s_DeferBindingResolution_16 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// GameTimer
struct GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GameTimer::timerTextUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timerTextUI_4;
	// System.Single GameTimer::timer
	float ___timer_5;
	// System.String GameTimer::timerText
	String_t* ___timerText_6;
	// System.Single GameTimer::startTime
	float ___startTime_7;
	// System.Boolean GameTimer::startToggle
	bool ___startToggle_8;
	// System.String GameTimer::gameType
	String_t* ___gameType_9;
	// System.String GameTimer::gameSetup
	String_t* ___gameSetup_10;
	// System.Single GameTimer::previousRealTime
	float ___previousRealTime_11;
	// AudioManager GameTimer::audioManager
	AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * ___audioManager_12;
	// ScoreKeeper GameTimer::scoreKeeper
	ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * ___scoreKeeper_13;

public:
	inline static int32_t get_offset_of_timerTextUI_4() { return static_cast<int32_t>(offsetof(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D, ___timerTextUI_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timerTextUI_4() const { return ___timerTextUI_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timerTextUI_4() { return &___timerTextUI_4; }
	inline void set_timerTextUI_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timerTextUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerTextUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_timerText_6() { return static_cast<int32_t>(offsetof(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D, ___timerText_6)); }
	inline String_t* get_timerText_6() const { return ___timerText_6; }
	inline String_t** get_address_of_timerText_6() { return &___timerText_6; }
	inline void set_timerText_6(String_t* value)
	{
		___timerText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerText_6), (void*)value);
	}

	inline static int32_t get_offset_of_startTime_7() { return static_cast<int32_t>(offsetof(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D, ___startTime_7)); }
	inline float get_startTime_7() const { return ___startTime_7; }
	inline float* get_address_of_startTime_7() { return &___startTime_7; }
	inline void set_startTime_7(float value)
	{
		___startTime_7 = value;
	}

	inline static int32_t get_offset_of_startToggle_8() { return static_cast<int32_t>(offsetof(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D, ___startToggle_8)); }
	inline bool get_startToggle_8() const { return ___startToggle_8; }
	inline bool* get_address_of_startToggle_8() { return &___startToggle_8; }
	inline void set_startToggle_8(bool value)
	{
		___startToggle_8 = value;
	}

	inline static int32_t get_offset_of_gameType_9() { return static_cast<int32_t>(offsetof(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D, ___gameType_9)); }
	inline String_t* get_gameType_9() const { return ___gameType_9; }
	inline String_t** get_address_of_gameType_9() { return &___gameType_9; }
	inline void set_gameType_9(String_t* value)
	{
		___gameType_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameType_9), (void*)value);
	}

	inline static int32_t get_offset_of_gameSetup_10() { return static_cast<int32_t>(offsetof(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D, ___gameSetup_10)); }
	inline String_t* get_gameSetup_10() const { return ___gameSetup_10; }
	inline String_t** get_address_of_gameSetup_10() { return &___gameSetup_10; }
	inline void set_gameSetup_10(String_t* value)
	{
		___gameSetup_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameSetup_10), (void*)value);
	}

	inline static int32_t get_offset_of_previousRealTime_11() { return static_cast<int32_t>(offsetof(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D, ___previousRealTime_11)); }
	inline float get_previousRealTime_11() const { return ___previousRealTime_11; }
	inline float* get_address_of_previousRealTime_11() { return &___previousRealTime_11; }
	inline void set_previousRealTime_11(float value)
	{
		___previousRealTime_11 = value;
	}

	inline static int32_t get_offset_of_audioManager_12() { return static_cast<int32_t>(offsetof(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D, ___audioManager_12)); }
	inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * get_audioManager_12() const { return ___audioManager_12; }
	inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 ** get_address_of_audioManager_12() { return &___audioManager_12; }
	inline void set_audioManager_12(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * value)
	{
		___audioManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioManager_12), (void*)value);
	}

	inline static int32_t get_offset_of_scoreKeeper_13() { return static_cast<int32_t>(offsetof(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D, ___scoreKeeper_13)); }
	inline ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * get_scoreKeeper_13() const { return ___scoreKeeper_13; }
	inline ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 ** get_address_of_scoreKeeper_13() { return &___scoreKeeper_13; }
	inline void set_scoreKeeper_13(ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * value)
	{
		___scoreKeeper_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreKeeper_13), (void*)value);
	}
};


// QuantumTek.QuantumUI.QUI_Bar
struct QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform QuantumTek.QuantumUI.QUI_Bar::barTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___barTransform_4;
	// UnityEngine.RectTransform QuantumTek.QuantumUI.QUI_Bar::fillTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___fillTransform_5;
	// UnityEngine.UI.Image QuantumTek.QuantumUI.QUI_Bar::fill
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___fill_6;
	// QuantumTek.QuantumUI.QUI_BarFillType QuantumTek.QuantumUI.QUI_Bar::fillType
	int32_t ___fillType_7;
	// System.Single QuantumTek.QuantumUI.QUI_Bar::fillAmount
	float ___fillAmount_8;

public:
	inline static int32_t get_offset_of_barTransform_4() { return static_cast<int32_t>(offsetof(QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77, ___barTransform_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_barTransform_4() const { return ___barTransform_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_barTransform_4() { return &___barTransform_4; }
	inline void set_barTransform_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___barTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___barTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_fillTransform_5() { return static_cast<int32_t>(offsetof(QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77, ___fillTransform_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_fillTransform_5() const { return ___fillTransform_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_fillTransform_5() { return &___fillTransform_5; }
	inline void set_fillTransform_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___fillTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fillTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_fill_6() { return static_cast<int32_t>(offsetof(QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77, ___fill_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_fill_6() const { return ___fill_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_fill_6() { return &___fill_6; }
	inline void set_fill_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___fill_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fill_6), (void*)value);
	}

	inline static int32_t get_offset_of_fillType_7() { return static_cast<int32_t>(offsetof(QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77, ___fillType_7)); }
	inline int32_t get_fillType_7() const { return ___fillType_7; }
	inline int32_t* get_address_of_fillType_7() { return &___fillType_7; }
	inline void set_fillType_7(int32_t value)
	{
		___fillType_7 = value;
	}

	inline static int32_t get_offset_of_fillAmount_8() { return static_cast<int32_t>(offsetof(QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77, ___fillAmount_8)); }
	inline float get_fillAmount_8() const { return ___fillAmount_8; }
	inline float* get_address_of_fillAmount_8() { return &___fillAmount_8; }
	inline void set_fillAmount_8(float value)
	{
		___fillAmount_8 = value;
	}
};


// QuantumTek.QuantumUI.QUI_SceneTransition
struct QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// QuantumTek.QuantumUI.QUI_ElementAnimator QuantumTek.QuantumUI.QUI_SceneTransition::animator
	QUI_ElementAnimator_t346C37B0A5124B4FBDE72359ECAFCAECB31502D7 * ___animator_4;
	// QuantumTek.QuantumUI.QUI_Bar QuantumTek.QuantumUI.QUI_SceneTransition::loadingBar
	QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77 * ___loadingBar_5;
	// UnityEngine.RectTransform QuantumTek.QuantumUI.QUI_SceneTransition::loadingUI
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___loadingUI_6;
	// QuantumTek.QuantumUI.QUI_LoadType QuantumTek.QuantumUI.QUI_SceneTransition::loadType
	int32_t ___loadType_7;
	// System.String QuantumTek.QuantumUI.QUI_SceneTransition::loadingSceneName
	String_t* ___loadingSceneName_9;
	// System.String QuantumTek.QuantumUI.QUI_SceneTransition::enterSceneAnimation
	String_t* ___enterSceneAnimation_10;
	// System.String QuantumTek.QuantumUI.QUI_SceneTransition::exitSceneAnimation
	String_t* ___exitSceneAnimation_11;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402, ___animator_4)); }
	inline QUI_ElementAnimator_t346C37B0A5124B4FBDE72359ECAFCAECB31502D7 * get_animator_4() const { return ___animator_4; }
	inline QUI_ElementAnimator_t346C37B0A5124B4FBDE72359ECAFCAECB31502D7 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(QUI_ElementAnimator_t346C37B0A5124B4FBDE72359ECAFCAECB31502D7 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}

	inline static int32_t get_offset_of_loadingBar_5() { return static_cast<int32_t>(offsetof(QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402, ___loadingBar_5)); }
	inline QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77 * get_loadingBar_5() const { return ___loadingBar_5; }
	inline QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77 ** get_address_of_loadingBar_5() { return &___loadingBar_5; }
	inline void set_loadingBar_5(QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77 * value)
	{
		___loadingBar_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingBar_5), (void*)value);
	}

	inline static int32_t get_offset_of_loadingUI_6() { return static_cast<int32_t>(offsetof(QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402, ___loadingUI_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_loadingUI_6() const { return ___loadingUI_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_loadingUI_6() { return &___loadingUI_6; }
	inline void set_loadingUI_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___loadingUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadType_7() { return static_cast<int32_t>(offsetof(QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402, ___loadType_7)); }
	inline int32_t get_loadType_7() const { return ___loadType_7; }
	inline int32_t* get_address_of_loadType_7() { return &___loadType_7; }
	inline void set_loadType_7(int32_t value)
	{
		___loadType_7 = value;
	}

	inline static int32_t get_offset_of_loadingSceneName_9() { return static_cast<int32_t>(offsetof(QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402, ___loadingSceneName_9)); }
	inline String_t* get_loadingSceneName_9() const { return ___loadingSceneName_9; }
	inline String_t** get_address_of_loadingSceneName_9() { return &___loadingSceneName_9; }
	inline void set_loadingSceneName_9(String_t* value)
	{
		___loadingSceneName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingSceneName_9), (void*)value);
	}

	inline static int32_t get_offset_of_enterSceneAnimation_10() { return static_cast<int32_t>(offsetof(QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402, ___enterSceneAnimation_10)); }
	inline String_t* get_enterSceneAnimation_10() const { return ___enterSceneAnimation_10; }
	inline String_t** get_address_of_enterSceneAnimation_10() { return &___enterSceneAnimation_10; }
	inline void set_enterSceneAnimation_10(String_t* value)
	{
		___enterSceneAnimation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterSceneAnimation_10), (void*)value);
	}

	inline static int32_t get_offset_of_exitSceneAnimation_11() { return static_cast<int32_t>(offsetof(QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402, ___exitSceneAnimation_11)); }
	inline String_t* get_exitSceneAnimation_11() const { return ___exitSceneAnimation_11; }
	inline String_t** get_address_of_exitSceneAnimation_11() { return &___exitSceneAnimation_11; }
	inline void set_exitSceneAnimation_11(String_t* value)
	{
		___exitSceneAnimation_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exitSceneAnimation_11), (void*)value);
	}
};

struct QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402_StaticFields
{
public:
	// System.String QuantumTek.QuantumUI.QUI_SceneTransition::sceneToLoad
	String_t* ___sceneToLoad_8;

public:
	inline static int32_t get_offset_of_sceneToLoad_8() { return static_cast<int32_t>(offsetof(QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402_StaticFields, ___sceneToLoad_8)); }
	inline String_t* get_sceneToLoad_8() const { return ___sceneToLoad_8; }
	inline String_t** get_address_of_sceneToLoad_8() { return &___sceneToLoad_8; }
	inline void set_sceneToLoad_8(String_t* value)
	{
		___sceneToLoad_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneToLoad_8), (void*)value);
	}
};


// ScoreKeeper
struct ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ScoreKeeper::redScoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___redScoreText_4;
	// UnityEngine.UI.Text ScoreKeeper::blueScoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___blueScoreText_5;
	// System.Int32 ScoreKeeper::redScore
	int32_t ___redScore_6;
	// System.Int32 ScoreKeeper::blueScore
	int32_t ___blueScore_7;
	// System.Boolean ScoreKeeper::freeze
	bool ___freeze_8;
	// UnityEngine.Light[] ScoreKeeper::lights
	LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* ___lights_9;

public:
	inline static int32_t get_offset_of_redScoreText_4() { return static_cast<int32_t>(offsetof(ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34, ___redScoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_redScoreText_4() const { return ___redScoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_redScoreText_4() { return &___redScoreText_4; }
	inline void set_redScoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___redScoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___redScoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_blueScoreText_5() { return static_cast<int32_t>(offsetof(ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34, ___blueScoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_blueScoreText_5() const { return ___blueScoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_blueScoreText_5() { return &___blueScoreText_5; }
	inline void set_blueScoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___blueScoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blueScoreText_5), (void*)value);
	}

	inline static int32_t get_offset_of_redScore_6() { return static_cast<int32_t>(offsetof(ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34, ___redScore_6)); }
	inline int32_t get_redScore_6() const { return ___redScore_6; }
	inline int32_t* get_address_of_redScore_6() { return &___redScore_6; }
	inline void set_redScore_6(int32_t value)
	{
		___redScore_6 = value;
	}

	inline static int32_t get_offset_of_blueScore_7() { return static_cast<int32_t>(offsetof(ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34, ___blueScore_7)); }
	inline int32_t get_blueScore_7() const { return ___blueScore_7; }
	inline int32_t* get_address_of_blueScore_7() { return &___blueScore_7; }
	inline void set_blueScore_7(int32_t value)
	{
		___blueScore_7 = value;
	}

	inline static int32_t get_offset_of_freeze_8() { return static_cast<int32_t>(offsetof(ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34, ___freeze_8)); }
	inline bool get_freeze_8() const { return ___freeze_8; }
	inline bool* get_address_of_freeze_8() { return &___freeze_8; }
	inline void set_freeze_8(bool value)
	{
		___freeze_8 = value;
	}

	inline static int32_t get_offset_of_lights_9() { return static_cast<int32_t>(offsetof(ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34, ___lights_9)); }
	inline LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* get_lights_9() const { return ___lights_9; }
	inline LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9** get_address_of_lights_9() { return &___lights_9; }
	inline void set_lights_9(LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* value)
	{
		___lights_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lights_9), (void*)value);
	}
};


// WhiteLineGoal
struct WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ScoreKeeper WhiteLineGoal::scoreKeeper
	ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * ___scoreKeeper_4;
	// System.Int32 WhiteLineGoal::pointsPerGoal
	int32_t ___pointsPerGoal_5;
	// System.String WhiteLineGoal::tagOfGameObject1
	String_t* ___tagOfGameObject1_6;
	// System.String WhiteLineGoal::tagOfGameObject2
	String_t* ___tagOfGameObject2_7;
	// System.Boolean WhiteLineGoal::inZone
	bool ___inZone_8;
	// GameTimer WhiteLineGoal::gameTimer
	GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D * ___gameTimer_9;

public:
	inline static int32_t get_offset_of_scoreKeeper_4() { return static_cast<int32_t>(offsetof(WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693, ___scoreKeeper_4)); }
	inline ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * get_scoreKeeper_4() const { return ___scoreKeeper_4; }
	inline ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 ** get_address_of_scoreKeeper_4() { return &___scoreKeeper_4; }
	inline void set_scoreKeeper_4(ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * value)
	{
		___scoreKeeper_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreKeeper_4), (void*)value);
	}

	inline static int32_t get_offset_of_pointsPerGoal_5() { return static_cast<int32_t>(offsetof(WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693, ___pointsPerGoal_5)); }
	inline int32_t get_pointsPerGoal_5() const { return ___pointsPerGoal_5; }
	inline int32_t* get_address_of_pointsPerGoal_5() { return &___pointsPerGoal_5; }
	inline void set_pointsPerGoal_5(int32_t value)
	{
		___pointsPerGoal_5 = value;
	}

	inline static int32_t get_offset_of_tagOfGameObject1_6() { return static_cast<int32_t>(offsetof(WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693, ___tagOfGameObject1_6)); }
	inline String_t* get_tagOfGameObject1_6() const { return ___tagOfGameObject1_6; }
	inline String_t** get_address_of_tagOfGameObject1_6() { return &___tagOfGameObject1_6; }
	inline void set_tagOfGameObject1_6(String_t* value)
	{
		___tagOfGameObject1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tagOfGameObject1_6), (void*)value);
	}

	inline static int32_t get_offset_of_tagOfGameObject2_7() { return static_cast<int32_t>(offsetof(WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693, ___tagOfGameObject2_7)); }
	inline String_t* get_tagOfGameObject2_7() const { return ___tagOfGameObject2_7; }
	inline String_t** get_address_of_tagOfGameObject2_7() { return &___tagOfGameObject2_7; }
	inline void set_tagOfGameObject2_7(String_t* value)
	{
		___tagOfGameObject2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tagOfGameObject2_7), (void*)value);
	}

	inline static int32_t get_offset_of_inZone_8() { return static_cast<int32_t>(offsetof(WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693, ___inZone_8)); }
	inline bool get_inZone_8() const { return ___inZone_8; }
	inline bool* get_address_of_inZone_8() { return &___inZone_8; }
	inline void set_inZone_8(bool value)
	{
		___inZone_8 = value;
	}

	inline static int32_t get_offset_of_gameTimer_9() { return static_cast<int32_t>(offsetof(WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693, ___gameTimer_9)); }
	inline GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D * get_gameTimer_9() const { return ___gameTimer_9; }
	inline GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D ** get_address_of_gameTimer_9() { return &___gameTimer_9; }
	inline void set_gameTimer_9(GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D * value)
	{
		___gameTimer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameTimer_9), (void*)value);
	}
};


// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_tE9402B38CA5077FD18ACC4CDF5CC63963BA6240B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
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


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mA0CBE6076DE404E7EBB2FED418EB3E1B14E3E24F (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Byte[] WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocket_Recv_mB0AA2953A88628422FF0E0B18372EABBDB4E72D2 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method);
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_m43A20AF96DC3A373C404A94ECEB92F20C3D5956B (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_mFD76AD5CE500367EB1402C43DEAF896064950A27 (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_m64803B169A6D8697E87AAE3F1DDC7D290E9408A3 (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_m380984FAB430F512016664F700CFA304EBF1F363 (String_t* ___url0, String_t* ___protocols1, const RuntimeMethod* method);
// System.Void WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_m6D350474CA1A621D94D8D3464C54BAAA8CB8C5EE (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_mA3D0FE4111F1AB5AA56E265808A332C512F705FD (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m76233984EF10014AB5EA9BCA174E0DE21DF3652C (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ScoreKeeper>()
inline ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * GameObject_GetComponent_TisScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34_m1BC842C6818527291FBCCDCC52A3EC6FC04EBCD1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<GameTimer>()
inline GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D * GameObject_GetComponent_TisGameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D_m7A7EEA3812A0DA5E83AA021B0D5F8D9CE18E630F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String GameTimer::getGameType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameTimer_getGameType_mF9E31A20CC6481304916FEA5A59DF7D5022F00A3 (GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D * __this, const RuntimeMethod* method);
// System.Void ScoreKeeper::addScoreBlue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_addScoreBlue_mED889A17692592E2097E90C5A7C1B158007E35D6 (ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * __this, int32_t ___points0, const RuntimeMethod* method);
// System.Void ScoreKeeper::addScoreRed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_addScoreRed_mEE3BF66E1735BA716E2D8C9F13970430BC012D71 (ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * __this, int32_t ___points0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<MultiUserManager/WebsiteCommands>(System.String)
inline WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E * JsonUtility_FromJson_TisWebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E_m315C34C92C6596274CD6B5932462F3F70B735C5F (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void PlayerControls/GamePlayActions::.ctor(PlayerControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayActions__ctor_mDDF2A0B4913218C2541491945A1F9D24161E17A8 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ___wrapper0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Shoot_m2FFAC558C7EB756C12662EDF2DE6F0B53F05A79F (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_Intake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Intake_m4AEEA797DD43CD7D8A25C7BB14C795686895F781 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_Spinup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Spinup_m4C1E875524935D42BEFBC82BF10EBC1EE87A4E0E (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_Wobble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Wobble_mD8CBE1855FEA83CEE007B415CE74BC402CFFA92A (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_WobbleHigh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_WobbleHigh_m0DBC832D794EEA4387E142B2C9BA0F5933E56AD7 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_IncreaseSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_IncreaseSpin_m8F1D3888BCE660866E357DB4AA7886F281FD16F3 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_DecreaseSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DecreaseSpin_m3A386602FE7E6F4FD80542909F508B5B5D5683ED (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_DriveForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveForward_m0F2CA734B1DE07D45105E74E00EA81AF35FEC3B2 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_DriveBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveBack_m54256D2427D81CF3AAFFC9250A7C96EAB31BD03B (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_DriveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveLeft_mBF2157B93A0FADA9FB1D8047EECE29C21931C1EB (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_DriveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveRight_m6B8AEB6E120475632257CFFE19A07B00FD4872ED (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_TurnLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_TurnLeft_m85B9897FCA4120C0EC23B2B925296234268A7CEF (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_TurnRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_TurnRight_m3DDB3B452DCC4F67A935038A0A9D3309A53F9F4E (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap PlayerControls/GamePlayActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * GamePlayActions_Get_m12C127A27B51F15F6076A4B89ECAECF6DB8A8D77 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Void PlayerControls/GamePlayActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayActions_Enable_mE9C7A7E6AEC2051B7637B030B30A790AA39B532B (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Void PlayerControls/GamePlayActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayActions_Disable_mA0385F81A5DD4B6B68328643B366CE5637F1DAB3 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Boolean PlayerControls/GamePlayActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamePlayActions_get_enabled_m078A3F03140839D6CD3C220E578FBCEDD18CC6EB (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0 (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void PlayerControls/GamePlayActions::SetCallbacks(PlayerControls/IGamePlayActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayActions_SetCallbacks_m1D79905F7FAEC056E1AD96FA97480B6F0BE10DAE (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void QuantumTek.QuantumUI.QUI_Bar::SetFill(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QUI_Bar_SetFill_m785C4363BD983E33EDCFF0A2794479E33FF7E953 (QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77 * __this, float ___amount0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<RobotControllerUdp/RobotPowers>(System.String)
inline RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80 * JsonUtility_FromJson_TisRobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80_m105488E0BCA6C178D391F49097A2EF5E44CBCC3E (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_mCD44B820C0EAD126888F40FC5550D0575883EB1D (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m175AEA9D6447234508ED29C0F39E9B722C37CB9B (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method);
// System.String WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IPhotonSocket_get_Listener_m468082D96D7C5553A4CBE8EBEB0E2E9F3756D4BF (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_mC0ED9A7317D0ADEF35EDDEB00589F75FBB35BC3C_inline (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_mF84ECB699DE57D5097414264F8F3480C2AB54BE6_inline (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleException_mAAFAAA906B292A9BDE782A3567624568C203E5F4 (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, int32_t ___statusCode0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_ReportDebugOfLevel_m3C0988E7C6953C14369C4CB6A020F77BAC9211B5 (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, uint8_t ___levelOfMessage0, const RuntimeMethod* method);
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_m50E87FF3DF75AD68346955C9CE6A379B96CB569D_inline (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_mA9016132CA53E2246EA0CE878B4E0FA92170AE01_inline (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ByteArrayToString_mEAE62ED676EE78B5C54B2C697B6D4ABAAF219C81 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___list0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleReceivedDatagram_m802BD03E022168C6ECD898F2222C9AB9F7954C8A (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_EnqueueDebugReturn_mF6D6DC45C0C95151B52BBB66A48112B9005EB6E3 (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, uint8_t ___debugLevel0, String_t* ___message1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<UserManager/WebsiteCommands>(System.String)
inline WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD * JsonUtility_FromJson_TisWebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD_m298818A641F8E69A0DC661E6251F1E32E9D64468 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketCreate(char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketState(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketRecv(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketRecvLength(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketClose(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketError(int32_t, uint8_t*, int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ExitGames.Client.Photon.WaitForRealSeconds::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForRealSeconds_get_keepWaiting_mD9A23362895518F4DBCA3056F1392D212FDFD52D (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this._endTime > Time.realtimeSinceStartup; }
		float L_0 = __this->get__endTime_0();
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		V_0 = (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		// get { return this._endTime > Time.realtimeSinceStartup; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_mCD44B820C0EAD126888F40FC5550D0575883EB1D (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * __this, float ___seconds0, const RuntimeMethod* method)
{
	{
		// public WaitForRealSeconds(float seconds)
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		// this._endTime = Time.realtimeSinceStartup + seconds;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_1 = ___seconds0;
		__this->set__endTime_0(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
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
// System.Void WebSocket::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m72024727BB2CBAE2161797E999634554BEFCB902 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___url0, String_t* ___serialization1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// private string protocols = "GpBinaryV16";
		__this->set_protocols_1(_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		// int m_NativeRef = 0;
		__this->set_m_NativeRef_2(0);
		// public WebSocket(Uri url, string serialization = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.mUrl = url;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___url0;
		__this->set_mUrl_0(L_0);
		// if (serialization != null)
		String_t* L_1 = ___serialization1;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// this.protocols = serialization;
		String_t* L_3 = ___serialization1;
		__this->set_protocols_1(L_3);
	}

IL_0032:
	{
		// string protocol = mUrl.Scheme;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = __this->get_mUrl_0();
		String_t* L_5;
		L_5 = Uri_get_Scheme_mEC4980E1C82DE3963007E33C759742A02A26FF29(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_6, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_8, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 0;
	}

IL_005c:
	{
		V_2 = (bool)G_B5_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5)), L_11, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket__ctor_m72024727BB2CBAE2161797E999634554BEFCB902_RuntimeMethod_var)));
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void WebSocket::SendString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SendString_mEEED038CB567FA2A1E382DD688F9B0E904A0C1F5 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	{
		// Send(Encoding.UTF8.GetBytes (str));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		WebSocket_Send_mA0CBE6076DE404E7EBB2FED418EB3E1B14E3E24F(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String WebSocket::RecvString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_RecvString_m4BB30F03E3C7E687A4346BDBE578B0136B782C45 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// byte[] retval = Recv();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0;
		L_0 = WebSocket_Recv_mB0AA2953A88628422FF0E0B18372EABBDB4E72D2(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (retval == null)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		V_2 = (String_t*)NULL;
		goto IL_0022;
	}

IL_0014:
	{
		// return Encoding.UTF8.GetString (retval);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3;
		L_3 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		String_t* L_5;
		L_5 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_4);
		V_2 = L_5;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		String_t* L_6 = V_2;
		return L_6;
	}
}
// System.Int32 WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_m380984FAB430F512016664F700CFA304EBF1F363 (String_t* ___url0, String_t* ___protocols1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Marshaling of parameter '___protocols1' to native representation
	char* ____protocols1_marshaled = NULL;
	____protocols1_marshaled = il2cpp_codegen_marshal_string(___protocols1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketCreate)(____url0_marshaled, ____protocols1_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	// Marshaling cleanup of parameter '___protocols1' native representation
	il2cpp_codegen_marshal_free(____protocols1_marshaled);
	____protocols1_marshaled = NULL;

	return returnValue;
}
// System.Int32 WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_mA3D0FE4111F1AB5AA56E265808A332C512F705FD (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketState)(___socketInstance0);

	return returnValue;
}
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_m43A20AF96DC3A373C404A94ECEB92F20C3D5956B (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketSend)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_m64803B169A6D8697E87AAE3F1DDC7D290E9408A3 (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketRecv)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_mFD76AD5CE500367EB1402C43DEAF896064950A27 (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketRecvLength)(___socketInstance0);

	return returnValue;
}
// System.Void WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_m6D350474CA1A621D94D8D3464C54BAAA8CB8C5EE (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketClose)(___socketInstance0);

}
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m76233984EF10014AB5EA9BCA174E0DE21DF3652C (int32_t ___socketInstance0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketError)(___socketInstance0, ____ptr1_marshaled, ___length2);

	return returnValue;
}
// System.Void WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mA0CBE6076DE404E7EBB2FED418EB3E1B14E3E24F (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method)
{
	{
		// SocketSend (m_NativeRef, buffer, buffer.Length);
		int32_t L_0 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___buffer0;
		WebSocket_SocketSend_m43A20AF96DC3A373C404A94ECEB92F20C3D5956B(L_0, L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Byte[] WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* WebSocket_Recv_mB0AA2953A88628422FF0E0B18372EABBDB4E72D2 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	{
		// int length = SocketRecvLength (m_NativeRef);
		int32_t L_0 = __this->get_m_NativeRef_2();
		int32_t L_1;
		L_1 = WebSocket_SocketRecvLength_mFD76AD5CE500367EB1402C43DEAF896064950A27(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (length == 0)
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return null;
		V_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		goto IL_0032;
	}

IL_0019:
	{
		// byte[] buffer = new byte[length];
		int32_t L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// SocketRecv (m_NativeRef, buffer, length);
		int32_t L_6 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_1;
		int32_t L_8 = V_0;
		WebSocket_SocketRecv_m64803B169A6D8697E87AAE3F1DDC7D290E9408A3(L_6, L_7, L_8, /*hidden argument*/NULL);
		// return buffer;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		V_3 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_3;
		return L_10;
	}
}
// System.Void WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m9C0189CA2EE5B84E20DBD913175F663AE055CE02 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	{
		// m_NativeRef = SocketCreate (mUrl.ToString(), this.protocols);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = __this->get_mUrl_0();
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = __this->get_protocols_1();
		int32_t L_3;
		L_3 = WebSocket_SocketCreate_m380984FAB430F512016664F700CFA304EBF1F363(L_1, L_2, /*hidden argument*/NULL);
		__this->set_m_NativeRef_2(L_3);
		// }
		return;
	}
}
// System.Void WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_m78D6328B5769E65A24CFB896400ED86B3535F6A3 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	{
		// SocketClose(m_NativeRef);
		int32_t L_0 = __this->get_m_NativeRef_2();
		WebSocket_SocketClose_m6D350474CA1A621D94D8D3464C54BAAA8CB8C5EE(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m175AEA9D6447234508ED29C0F39E9B722C37CB9B (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return SocketState(m_NativeRef) != 0; }
		int32_t L_0 = __this->get_m_NativeRef_2();
		int32_t L_1;
		L_1 = WebSocket_SocketState_mA3D0FE4111F1AB5AA56E265808A332C512F705FD(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// get { return SocketState(m_NativeRef) != 0; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29 (WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// byte[] buffer = new byte[bufsize];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// int result = SocketError (m_NativeRef, buffer, bufsize);
		int32_t L_1 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_0;
		int32_t L_3;
		L_3 = WebSocket_SocketError_m76233984EF10014AB5EA9BCA174E0DE21DF3652C(L_1, L_2, ((int32_t)1024), /*hidden argument*/NULL);
		V_1 = L_3;
		// if (result == 0)
		int32_t L_4 = V_1;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return null;
		V_3 = (String_t*)NULL;
		goto IL_0038;
	}

IL_002a:
	{
		// return Encoding.UTF8.GetString (buffer);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_6;
		L_6 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		String_t* L_8;
		L_8 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_6, L_7);
		V_3 = L_8;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		String_t* L_9 = V_3;
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
// System.Void WhiteLineGoal::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteLineGoal_Awake_m7EF9EBECA9DD30A61A0AD51AEFAE83047310D39F (WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D_m7A7EEA3812A0DA5E83AA021B0D5F8D9CE18E630F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34_m1BC842C6818527291FBCCDCC52A3EC6FC04EBCD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9C2D3131ADC412805EFE2994298865FECF402EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreKeeper = GameObject.Find("ScoreKeeper").GetComponent<ScoreKeeper>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralE9C2D3131ADC412805EFE2994298865FECF402EA, /*hidden argument*/NULL);
		ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * L_1;
		L_1 = GameObject_GetComponent_TisScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34_m1BC842C6818527291FBCCDCC52A3EC6FC04EBCD1(L_0, /*hidden argument*/GameObject_GetComponent_TisScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34_m1BC842C6818527291FBCCDCC52A3EC6FC04EBCD1_RuntimeMethod_var);
		__this->set_scoreKeeper_4(L_1);
		// gameTimer = GameObject.Find("ScoreKeeper").GetComponent<GameTimer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralE9C2D3131ADC412805EFE2994298865FECF402EA, /*hidden argument*/NULL);
		GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D * L_3;
		L_3 = GameObject_GetComponent_TisGameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D_m7A7EEA3812A0DA5E83AA021B0D5F8D9CE18E630F(L_2, /*hidden argument*/GameObject_GetComponent_TisGameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D_m7A7EEA3812A0DA5E83AA021B0D5F8D9CE18E630F_RuntimeMethod_var);
		__this->set_gameTimer_9(L_3);
		// }
		return;
	}
}
// System.Void WhiteLineGoal::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteLineGoal_OnTriggerEnter_m95189F427EDBE0D737BCDCAAF8C37A9C2AE7DB62 (WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if ((collision.tag == tagOfGameObject1 || collision.tag == tagOfGameObject2) && inZone == false && gameTimer.getGameType() == "auto")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collision0;
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_tagOfGameObject1_6();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___collision0;
		String_t* L_5;
		L_5 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_4, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_tagOfGameObject2_7();
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_0027:
	{
		bool L_8 = __this->get_inZone_8();
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D * L_9 = __this->get_gameTimer_9();
		String_t* L_10;
		L_10 = GameTimer_getGameType_mF9E31A20CC6481304916FEA5A59DF7D5022F00A3(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 0;
	}

IL_0047:
	{
		V_0 = (bool)G_B5_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0096;
		}
	}
	{
		// pointsPerGoal = 5;
		__this->set_pointsPerGoal_5(5);
		// inZone = true;
		__this->set_inZone_8((bool)1);
		// if (collision.tag == tagOfGameObject1)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13 = ___collision0;
		String_t* L_14;
		L_14 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_13, /*hidden argument*/NULL);
		String_t* L_15 = __this->get_tagOfGameObject1_6();
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0083;
		}
	}
	{
		// scoreKeeper.addScoreBlue(pointsPerGoal);
		ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * L_18 = __this->get_scoreKeeper_4();
		int32_t L_19 = __this->get_pointsPerGoal_5();
		ScoreKeeper_addScoreBlue_mED889A17692592E2097E90C5A7C1B158007E35D6(L_18, L_19, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0083:
	{
		// scoreKeeper.addScoreRed(pointsPerGoal);
		ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * L_20 = __this->get_scoreKeeper_4();
		int32_t L_21 = __this->get_pointsPerGoal_5();
		ScoreKeeper_addScoreRed_mEE3BF66E1735BA716E2D8C9F13970430BC012D71(L_20, L_21, /*hidden argument*/NULL);
	}

IL_0095:
	{
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void WhiteLineGoal::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteLineGoal_OnTriggerExit_m5F3C70727F5B9713A3819CC6ECD38EF3465EAB55 (WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if ((collision.tag == tagOfGameObject1 || collision.tag == tagOfGameObject2) && inZone == false && gameTimer.getGameType() == "auto")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collision0;
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_tagOfGameObject1_6();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___collision0;
		String_t* L_5;
		L_5 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_4, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_tagOfGameObject2_7();
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_0027:
	{
		bool L_8 = __this->get_inZone_8();
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		GameTimer_t34552D41B5A0AFFBBF33ED7216E7D18572BD4A9D * L_9 = __this->get_gameTimer_9();
		String_t* L_10;
		L_10 = GameTimer_getGameType_mF9E31A20CC6481304916FEA5A59DF7D5022F00A3(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 0;
	}

IL_0047:
	{
		V_0 = (bool)G_B5_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0098;
		}
	}
	{
		// pointsPerGoal = 5;
		__this->set_pointsPerGoal_5(5);
		// inZone = false;
		__this->set_inZone_8((bool)0);
		// if (collision.tag == tagOfGameObject1)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_13 = ___collision0;
		String_t* L_14;
		L_14 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_13, /*hidden argument*/NULL);
		String_t* L_15 = __this->get_tagOfGameObject1_6();
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0084;
		}
	}
	{
		// scoreKeeper.addScoreBlue(-pointsPerGoal);
		ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * L_18 = __this->get_scoreKeeper_4();
		int32_t L_19 = __this->get_pointsPerGoal_5();
		ScoreKeeper_addScoreBlue_mED889A17692592E2097E90C5A7C1B158007E35D6(L_18, ((-L_19)), /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_0084:
	{
		// scoreKeeper.addScoreRed(-pointsPerGoal);
		ScoreKeeper_tA624F80778A07CA9C619EBAF09AF24D3DA452D34 * L_20 = __this->get_scoreKeeper_4();
		int32_t L_21 = __this->get_pointsPerGoal_5();
		ScoreKeeper_addScoreRed_mEE3BF66E1735BA716E2D8C9F13970430BC012D71(L_20, ((-L_21)), /*hidden argument*/NULL);
	}

IL_0097:
	{
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void WhiteLineGoal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteLineGoal__ctor_m8A531A04F8ABC035689E3B7B07D552DF7744D395 (WhiteLineGoal_t90DA20775A1CB5C82F0BAB94B82F034814F3F693 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0935634EDC60E4C80D1F7F0BFAD7D077B88DFB94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09E5E322B9122B1DA98DBB5C7DB34E56DC0BD30C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int pointsPerGoal = 0;
		__this->set_pointsPerGoal_5(0);
		// public string tagOfGameObject1 = "BlueRobot";
		__this->set_tagOfGameObject1_6(_stringLiteral09E5E322B9122B1DA98DBB5C7DB34E56DC0BD30C);
		// public string tagOfGameObject2 = "RedRobot";
		__this->set_tagOfGameObject2_7(_stringLiteral0935634EDC60E4C80D1F7F0BFAD7D077B88DFB94);
		// private bool inZone = false;
		__this->set_inZone_8((bool)0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// MultiUserManager/WebsiteCommands MultiUserManager/WebsiteCommands::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E * WebsiteCommands_CreateFromJSON_mA92CB01BD4203697D92C278805945230F5467516 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisWebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E_m315C34C92C6596274CD6B5932462F3F70B735C5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E * V_0 = NULL;
	{
		// return JsonUtility.FromJson<WebsiteCommands>(jsonString);
		String_t* L_0 = ___jsonString0;
		WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E * L_1;
		L_1 = JsonUtility_FromJson_TisWebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E_m315C34C92C6596274CD6B5932462F3F70B735C5F(L_0, /*hidden argument*/JsonUtility_FromJson_TisWebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E_m315C34C92C6596274CD6B5932462F3F70B735C5F_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E * L_2 = V_0;
		return L_2;
	}
}
// System.Void MultiUserManager/WebsiteCommands::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsiteCommands__ctor_mD3C2536F79C9FCB90FE45C65A1D36A621A1CFE2D (WebsiteCommands_tAA890B276A74FAA72EEA6487A4C5BA0EF77A648E * __this, const RuntimeMethod* method)
{
	{
		// public int position = -1;
		__this->set_position_0((-1));
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
// System.Void PhotonRoom/CustomPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPlayer__ctor_mDC3C8539933C648A64E6325ADF1F14AF60B722FE (CustomPlayer_tE2B61CF9CD6A7300E674E8F8F9CF2EAA8E916779 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: PlayerControls/GamePlayActions
IL2CPP_EXTERN_C void GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshal_pinvoke(const GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23& unmarshaled, GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GamePlayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshal_pinvoke_back(const GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshaled_pinvoke& marshaled, GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GamePlayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerControls/GamePlayActions
IL2CPP_EXTERN_C void GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshal_pinvoke_cleanup(GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: PlayerControls/GamePlayActions
IL2CPP_EXTERN_C void GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshal_com(const GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23& unmarshaled, GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GamePlayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshal_com_back(const GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshaled_com& marshaled, GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'GamePlayActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: PlayerControls/GamePlayActions
IL2CPP_EXTERN_C void GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshal_com_cleanup(GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23_marshaled_com& marshaled)
{
}
// System.Void PlayerControls/GamePlayActions::.ctor(PlayerControls)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayActions__ctor_mDDF2A0B4913218C2541491945A1F9D24161E17A8 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public GamePlayActions(@PlayerControls wrapper) { m_Wrapper = wrapper; }
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public GamePlayActions(@PlayerControls wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void GamePlayActions__ctor_mDDF2A0B4913218C2541491945A1F9D24161E17A8_AdjustorThunk (RuntimeObject * __this, PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * ___wrapper0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	GamePlayActions__ctor_mDDF2A0B4913218C2541491945A1F9D24161E17A8(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Shoot_m2FFAC558C7EB756C12662EDF2DE6F0B53F05A79F (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Shoot => m_Wrapper.m_GamePlay_Shoot;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_Shoot_3();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Shoot_m2FFAC558C7EB756C12662EDF2DE6F0B53F05A79F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_Shoot_m2FFAC558C7EB756C12662EDF2DE6F0B53F05A79F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_Intake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Intake_m4AEEA797DD43CD7D8A25C7BB14C795686895F781 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Intake => m_Wrapper.m_GamePlay_Intake;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_Intake_4();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Intake_m4AEEA797DD43CD7D8A25C7BB14C795686895F781_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_Intake_m4AEEA797DD43CD7D8A25C7BB14C795686895F781(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_Spinup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Spinup_m4C1E875524935D42BEFBC82BF10EBC1EE87A4E0E (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Spinup => m_Wrapper.m_GamePlay_Spinup;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_Spinup_5();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Spinup_m4C1E875524935D42BEFBC82BF10EBC1EE87A4E0E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_Spinup_m4C1E875524935D42BEFBC82BF10EBC1EE87A4E0E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_Wobble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Wobble_mD8CBE1855FEA83CEE007B415CE74BC402CFFA92A (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Wobble => m_Wrapper.m_GamePlay_Wobble;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_Wobble_6();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_Wobble_mD8CBE1855FEA83CEE007B415CE74BC402CFFA92A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_Wobble_mD8CBE1855FEA83CEE007B415CE74BC402CFFA92A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_WobbleHigh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_WobbleHigh_m0DBC832D794EEA4387E142B2C9BA0F5933E56AD7 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @WobbleHigh => m_Wrapper.m_GamePlay_WobbleHigh;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_WobbleHigh_7();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_WobbleHigh_m0DBC832D794EEA4387E142B2C9BA0F5933E56AD7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_WobbleHigh_m0DBC832D794EEA4387E142B2C9BA0F5933E56AD7(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_IncreaseSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_IncreaseSpin_m8F1D3888BCE660866E357DB4AA7886F281FD16F3 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @IncreaseSpin => m_Wrapper.m_GamePlay_IncreaseSpin;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_IncreaseSpin_8();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_IncreaseSpin_m8F1D3888BCE660866E357DB4AA7886F281FD16F3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_IncreaseSpin_m8F1D3888BCE660866E357DB4AA7886F281FD16F3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_DecreaseSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DecreaseSpin_m3A386602FE7E6F4FD80542909F508B5B5D5683ED (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @DecreaseSpin => m_Wrapper.m_GamePlay_DecreaseSpin;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_DecreaseSpin_9();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DecreaseSpin_m3A386602FE7E6F4FD80542909F508B5B5D5683ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_DecreaseSpin_m3A386602FE7E6F4FD80542909F508B5B5D5683ED(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_DriveForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveForward_m0F2CA734B1DE07D45105E74E00EA81AF35FEC3B2 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @DriveForward => m_Wrapper.m_GamePlay_DriveForward;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_DriveForward_10();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveForward_m0F2CA734B1DE07D45105E74E00EA81AF35FEC3B2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_DriveForward_m0F2CA734B1DE07D45105E74E00EA81AF35FEC3B2(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_DriveBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveBack_m54256D2427D81CF3AAFFC9250A7C96EAB31BD03B (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @DriveBack => m_Wrapper.m_GamePlay_DriveBack;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_DriveBack_11();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveBack_m54256D2427D81CF3AAFFC9250A7C96EAB31BD03B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_DriveBack_m54256D2427D81CF3AAFFC9250A7C96EAB31BD03B(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_DriveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveLeft_mBF2157B93A0FADA9FB1D8047EECE29C21931C1EB (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @DriveLeft => m_Wrapper.m_GamePlay_DriveLeft;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_DriveLeft_12();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveLeft_mBF2157B93A0FADA9FB1D8047EECE29C21931C1EB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_DriveLeft_mBF2157B93A0FADA9FB1D8047EECE29C21931C1EB(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_DriveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveRight_m6B8AEB6E120475632257CFFE19A07B00FD4872ED (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @DriveRight => m_Wrapper.m_GamePlay_DriveRight;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_DriveRight_13();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_DriveRight_m6B8AEB6E120475632257CFFE19A07B00FD4872ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_DriveRight_m6B8AEB6E120475632257CFFE19A07B00FD4872ED(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_TurnLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_TurnLeft_m85B9897FCA4120C0EC23B2B925296234268A7CEF (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @TurnLeft => m_Wrapper.m_GamePlay_TurnLeft;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_TurnLeft_14();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_TurnLeft_m85B9897FCA4120C0EC23B2B925296234268A7CEF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_TurnLeft_m85B9897FCA4120C0EC23B2B925296234268A7CEF(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction PlayerControls/GamePlayActions::get_TurnRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_TurnRight_m3DDB3B452DCC4F67A935038A0A9D3309A53F9F4E (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @TurnRight => m_Wrapper.m_GamePlay_TurnRight;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_GamePlay_TurnRight_15();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * GamePlayActions_get_TurnRight_m3DDB3B452DCC4F67A935038A0A9D3309A53F9F4E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = GamePlayActions_get_TurnRight_m3DDB3B452DCC4F67A935038A0A9D3309A53F9F4E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerControls/GamePlayActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * GamePlayActions_Get_m12C127A27B51F15F6076A4B89ECAECF6DB8A8D77 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * V_0 = NULL;
	{
		// public InputActionMap Get() { return m_Wrapper.m_GamePlay; }
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_1 = L_0->get_m_GamePlay_1();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public InputActionMap Get() { return m_Wrapper.m_GamePlay; }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * GamePlayActions_Get_m12C127A27B51F15F6076A4B89ECAECF6DB8A8D77_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * _returnValue;
	_returnValue = GamePlayActions_Get_m12C127A27B51F15F6076A4B89ECAECF6DB8A8D77(_thisAdjusted, method);
	return _returnValue;
}
// System.Void PlayerControls/GamePlayActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayActions_Enable_mE9C7A7E6AEC2051B7637B030B30A790AA39B532B (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = GamePlayActions_Get_m12C127A27B51F15F6076A4B89ECAECF6DB8A8D77((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15(L_0, /*hidden argument*/NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void GamePlayActions_Enable_mE9C7A7E6AEC2051B7637B030B30A790AA39B532B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	GamePlayActions_Enable_mE9C7A7E6AEC2051B7637B030B30A790AA39B532B(_thisAdjusted, method);
}
// System.Void PlayerControls/GamePlayActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayActions_Disable_mA0385F81A5DD4B6B68328643B366CE5637F1DAB3 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = GamePlayActions_Get_m12C127A27B51F15F6076A4B89ECAECF6DB8A8D77((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5(L_0, /*hidden argument*/NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void GamePlayActions_Disable_mA0385F81A5DD4B6B68328643B366CE5637F1DAB3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	GamePlayActions_Disable_mA0385F81A5DD4B6B68328643B366CE5637F1DAB3(_thisAdjusted, method);
}
// System.Boolean PlayerControls/GamePlayActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamePlayActions_get_enabled_m078A3F03140839D6CD3C220E578FBCEDD18CC6EB (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, const RuntimeMethod* method)
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = GamePlayActions_Get_m12C127A27B51F15F6076A4B89ECAECF6DB8A8D77((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool GamePlayActions_get_enabled_m078A3F03140839D6CD3C220E578FBCEDD18CC6EB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	bool _returnValue;
	_returnValue = GamePlayActions_get_enabled_m078A3F03140839D6CD3C220E578FBCEDD18CC6EB(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap PlayerControls/GamePlayActions::op_Implicit(PlayerControls/GamePlayActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * GamePlayActions_op_Implicit_m6C885E233CBB9D8F2DA264ECF03A40C4A862F111 (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23  ___set0, const RuntimeMethod* method)
{
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * V_0 = NULL;
	{
		// public static implicit operator InputActionMap(GamePlayActions set) { return set.Get(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = GamePlayActions_Get_m12C127A27B51F15F6076A4B89ECAECF6DB8A8D77((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)(&___set0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// public static implicit operator InputActionMap(GamePlayActions set) { return set.Get(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerControls/GamePlayActions::SetCallbacks(PlayerControls/IGamePlayActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePlayActions_SetCallbacks_m1D79905F7FAEC056E1AD96FA97480B6F0BE10DAE (GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Wrapper.m_GamePlayActionsCallbackInterface != null)
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_0 = __this->get_m_Wrapper_0();
		RuntimeObject* L_1 = L_0->get_m_GamePlayActionsCallbackInterface_2();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_056d;
		}
	}
	{
		// @Shoot.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnShoot;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_3;
		L_3 = GamePlayActions_get_Shoot_m2FFAC558C7EB756C12662EDF2DE6F0B53F05A79F((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_4 = __this->get_m_Wrapper_0();
		RuntimeObject* L_5 = L_4->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_6 = L_5;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_7 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_7, L_6, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_6, 0, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_3, L_7, /*hidden argument*/NULL);
		// @Shoot.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnShoot;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_8;
		L_8 = GamePlayActions_get_Shoot_m2FFAC558C7EB756C12662EDF2DE6F0B53F05A79F((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_9 = __this->get_m_Wrapper_0();
		RuntimeObject* L_10 = L_9->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_11 = L_10;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_12 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_12, L_11, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_11, 0, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_8, L_12, /*hidden argument*/NULL);
		// @Shoot.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnShoot;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_13;
		L_13 = GamePlayActions_get_Shoot_m2FFAC558C7EB756C12662EDF2DE6F0B53F05A79F((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_14 = __this->get_m_Wrapper_0();
		RuntimeObject* L_15 = L_14->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_16 = L_15;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_17 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_17, L_16, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_16, 0, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_13, L_17, /*hidden argument*/NULL);
		// @Intake.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIntake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_18;
		L_18 = GamePlayActions_get_Intake_m4AEEA797DD43CD7D8A25C7BB14C795686895F781((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_19 = __this->get_m_Wrapper_0();
		RuntimeObject* L_20 = L_19->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_21 = L_20;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_22 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_22, L_21, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_21, 1, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_18, L_22, /*hidden argument*/NULL);
		// @Intake.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIntake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_23;
		L_23 = GamePlayActions_get_Intake_m4AEEA797DD43CD7D8A25C7BB14C795686895F781((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_24 = __this->get_m_Wrapper_0();
		RuntimeObject* L_25 = L_24->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_26 = L_25;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_27 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_27, L_26, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_26, 1, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_23, L_27, /*hidden argument*/NULL);
		// @Intake.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIntake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_28;
		L_28 = GamePlayActions_get_Intake_m4AEEA797DD43CD7D8A25C7BB14C795686895F781((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_29 = __this->get_m_Wrapper_0();
		RuntimeObject* L_30 = L_29->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_31 = L_30;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_32 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_32, L_31, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_31, 1, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_28, L_32, /*hidden argument*/NULL);
		// @Spinup.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnSpinup;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_33;
		L_33 = GamePlayActions_get_Spinup_m4C1E875524935D42BEFBC82BF10EBC1EE87A4E0E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_34 = __this->get_m_Wrapper_0();
		RuntimeObject* L_35 = L_34->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_36 = L_35;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_37 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_37, L_36, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_36, 2, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_33, L_37, /*hidden argument*/NULL);
		// @Spinup.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnSpinup;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_38;
		L_38 = GamePlayActions_get_Spinup_m4C1E875524935D42BEFBC82BF10EBC1EE87A4E0E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_39 = __this->get_m_Wrapper_0();
		RuntimeObject* L_40 = L_39->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_41 = L_40;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_42 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_42, L_41, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_41, 2, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_38, L_42, /*hidden argument*/NULL);
		// @Spinup.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnSpinup;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_43;
		L_43 = GamePlayActions_get_Spinup_m4C1E875524935D42BEFBC82BF10EBC1EE87A4E0E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_44 = __this->get_m_Wrapper_0();
		RuntimeObject* L_45 = L_44->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_46 = L_45;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_47 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_47, L_46, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_46, 2, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_43, L_47, /*hidden argument*/NULL);
		// @Wobble.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobble;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_48;
		L_48 = GamePlayActions_get_Wobble_mD8CBE1855FEA83CEE007B415CE74BC402CFFA92A((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_49 = __this->get_m_Wrapper_0();
		RuntimeObject* L_50 = L_49->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_51 = L_50;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_52 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_52, L_51, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_51, 3, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_48, L_52, /*hidden argument*/NULL);
		// @Wobble.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobble;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_53;
		L_53 = GamePlayActions_get_Wobble_mD8CBE1855FEA83CEE007B415CE74BC402CFFA92A((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_54 = __this->get_m_Wrapper_0();
		RuntimeObject* L_55 = L_54->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_56 = L_55;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_57 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_57, L_56, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_56, 3, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_53, L_57, /*hidden argument*/NULL);
		// @Wobble.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobble;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_58;
		L_58 = GamePlayActions_get_Wobble_mD8CBE1855FEA83CEE007B415CE74BC402CFFA92A((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_59 = __this->get_m_Wrapper_0();
		RuntimeObject* L_60 = L_59->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_61 = L_60;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_62 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_62, L_61, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_61, 3, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_58, L_62, /*hidden argument*/NULL);
		// @WobbleHigh.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobbleHigh;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_63;
		L_63 = GamePlayActions_get_WobbleHigh_m0DBC832D794EEA4387E142B2C9BA0F5933E56AD7((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_64 = __this->get_m_Wrapper_0();
		RuntimeObject* L_65 = L_64->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_66 = L_65;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_67 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_67, L_66, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_66, 4, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_63, L_67, /*hidden argument*/NULL);
		// @WobbleHigh.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobbleHigh;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_68;
		L_68 = GamePlayActions_get_WobbleHigh_m0DBC832D794EEA4387E142B2C9BA0F5933E56AD7((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_69 = __this->get_m_Wrapper_0();
		RuntimeObject* L_70 = L_69->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_71 = L_70;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_72 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_72, L_71, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_71, 4, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_68, L_72, /*hidden argument*/NULL);
		// @WobbleHigh.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnWobbleHigh;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_73;
		L_73 = GamePlayActions_get_WobbleHigh_m0DBC832D794EEA4387E142B2C9BA0F5933E56AD7((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_74 = __this->get_m_Wrapper_0();
		RuntimeObject* L_75 = L_74->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_76 = L_75;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_77 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_77, L_76, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_76, 4, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_73, L_77, /*hidden argument*/NULL);
		// @IncreaseSpin.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIncreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_78;
		L_78 = GamePlayActions_get_IncreaseSpin_m8F1D3888BCE660866E357DB4AA7886F281FD16F3((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_79 = __this->get_m_Wrapper_0();
		RuntimeObject* L_80 = L_79->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_81 = L_80;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_82 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_82, L_81, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_81, 5, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_78, L_82, /*hidden argument*/NULL);
		// @IncreaseSpin.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIncreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_83;
		L_83 = GamePlayActions_get_IncreaseSpin_m8F1D3888BCE660866E357DB4AA7886F281FD16F3((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_84 = __this->get_m_Wrapper_0();
		RuntimeObject* L_85 = L_84->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_86 = L_85;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_87 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_87, L_86, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_86, 5, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_83, L_87, /*hidden argument*/NULL);
		// @IncreaseSpin.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnIncreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_88;
		L_88 = GamePlayActions_get_IncreaseSpin_m8F1D3888BCE660866E357DB4AA7886F281FD16F3((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_89 = __this->get_m_Wrapper_0();
		RuntimeObject* L_90 = L_89->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_91 = L_90;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_92 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_92, L_91, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_91, 5, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_88, L_92, /*hidden argument*/NULL);
		// @DecreaseSpin.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDecreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_93;
		L_93 = GamePlayActions_get_DecreaseSpin_m3A386602FE7E6F4FD80542909F508B5B5D5683ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_94 = __this->get_m_Wrapper_0();
		RuntimeObject* L_95 = L_94->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_96 = L_95;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_97 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_97, L_96, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_96, 6, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_93, L_97, /*hidden argument*/NULL);
		// @DecreaseSpin.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDecreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_98;
		L_98 = GamePlayActions_get_DecreaseSpin_m3A386602FE7E6F4FD80542909F508B5B5D5683ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_99 = __this->get_m_Wrapper_0();
		RuntimeObject* L_100 = L_99->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_101 = L_100;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_102 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_102, L_101, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_101, 6, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_98, L_102, /*hidden argument*/NULL);
		// @DecreaseSpin.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDecreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_103;
		L_103 = GamePlayActions_get_DecreaseSpin_m3A386602FE7E6F4FD80542909F508B5B5D5683ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_104 = __this->get_m_Wrapper_0();
		RuntimeObject* L_105 = L_104->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_106 = L_105;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_107 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_107, L_106, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_106, 6, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_103, L_107, /*hidden argument*/NULL);
		// @DriveForward.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveForward;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_108;
		L_108 = GamePlayActions_get_DriveForward_m0F2CA734B1DE07D45105E74E00EA81AF35FEC3B2((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_109 = __this->get_m_Wrapper_0();
		RuntimeObject* L_110 = L_109->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_111 = L_110;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_112 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_112, L_111, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_111, 7, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_108, L_112, /*hidden argument*/NULL);
		// @DriveForward.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveForward;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_113;
		L_113 = GamePlayActions_get_DriveForward_m0F2CA734B1DE07D45105E74E00EA81AF35FEC3B2((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_114 = __this->get_m_Wrapper_0();
		RuntimeObject* L_115 = L_114->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_116 = L_115;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_117 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_117, L_116, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_116, 7, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_113, L_117, /*hidden argument*/NULL);
		// @DriveForward.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveForward;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_118;
		L_118 = GamePlayActions_get_DriveForward_m0F2CA734B1DE07D45105E74E00EA81AF35FEC3B2((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_119 = __this->get_m_Wrapper_0();
		RuntimeObject* L_120 = L_119->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_121 = L_120;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_122 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_122, L_121, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_121, 7, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_118, L_122, /*hidden argument*/NULL);
		// @DriveBack.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveBack;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_123;
		L_123 = GamePlayActions_get_DriveBack_m54256D2427D81CF3AAFFC9250A7C96EAB31BD03B((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_124 = __this->get_m_Wrapper_0();
		RuntimeObject* L_125 = L_124->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_126 = L_125;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_127 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_127, L_126, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_126, 8, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_123, L_127, /*hidden argument*/NULL);
		// @DriveBack.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveBack;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_128;
		L_128 = GamePlayActions_get_DriveBack_m54256D2427D81CF3AAFFC9250A7C96EAB31BD03B((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_129 = __this->get_m_Wrapper_0();
		RuntimeObject* L_130 = L_129->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_131 = L_130;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_132 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_132, L_131, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_131, 8, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_128, L_132, /*hidden argument*/NULL);
		// @DriveBack.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveBack;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_133;
		L_133 = GamePlayActions_get_DriveBack_m54256D2427D81CF3AAFFC9250A7C96EAB31BD03B((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_134 = __this->get_m_Wrapper_0();
		RuntimeObject* L_135 = L_134->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_136 = L_135;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_137 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_137, L_136, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_136, 8, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_133, L_137, /*hidden argument*/NULL);
		// @DriveLeft.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_138;
		L_138 = GamePlayActions_get_DriveLeft_mBF2157B93A0FADA9FB1D8047EECE29C21931C1EB((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_139 = __this->get_m_Wrapper_0();
		RuntimeObject* L_140 = L_139->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_141 = L_140;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_142 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_142, L_141, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_141, 9, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_138, L_142, /*hidden argument*/NULL);
		// @DriveLeft.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_143;
		L_143 = GamePlayActions_get_DriveLeft_mBF2157B93A0FADA9FB1D8047EECE29C21931C1EB((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_144 = __this->get_m_Wrapper_0();
		RuntimeObject* L_145 = L_144->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_146 = L_145;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_147 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_147, L_146, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_146, 9, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_143, L_147, /*hidden argument*/NULL);
		// @DriveLeft.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_148;
		L_148 = GamePlayActions_get_DriveLeft_mBF2157B93A0FADA9FB1D8047EECE29C21931C1EB((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_149 = __this->get_m_Wrapper_0();
		RuntimeObject* L_150 = L_149->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_151 = L_150;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_152 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_152, L_151, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_151, 9, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_148, L_152, /*hidden argument*/NULL);
		// @DriveRight.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_153;
		L_153 = GamePlayActions_get_DriveRight_m6B8AEB6E120475632257CFFE19A07B00FD4872ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_154 = __this->get_m_Wrapper_0();
		RuntimeObject* L_155 = L_154->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_156 = L_155;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_157 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_157, L_156, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_156, 10, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_153, L_157, /*hidden argument*/NULL);
		// @DriveRight.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_158;
		L_158 = GamePlayActions_get_DriveRight_m6B8AEB6E120475632257CFFE19A07B00FD4872ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_159 = __this->get_m_Wrapper_0();
		RuntimeObject* L_160 = L_159->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_161 = L_160;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_162 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_162, L_161, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_161, 10, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_158, L_162, /*hidden argument*/NULL);
		// @DriveRight.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnDriveRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_163;
		L_163 = GamePlayActions_get_DriveRight_m6B8AEB6E120475632257CFFE19A07B00FD4872ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_164 = __this->get_m_Wrapper_0();
		RuntimeObject* L_165 = L_164->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_166 = L_165;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_167 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_167, L_166, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_166, 10, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_163, L_167, /*hidden argument*/NULL);
		// @TurnLeft.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_168;
		L_168 = GamePlayActions_get_TurnLeft_m85B9897FCA4120C0EC23B2B925296234268A7CEF((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_169 = __this->get_m_Wrapper_0();
		RuntimeObject* L_170 = L_169->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_171 = L_170;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_172 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_172, L_171, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_171, 11, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_168, L_172, /*hidden argument*/NULL);
		// @TurnLeft.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_173;
		L_173 = GamePlayActions_get_TurnLeft_m85B9897FCA4120C0EC23B2B925296234268A7CEF((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_174 = __this->get_m_Wrapper_0();
		RuntimeObject* L_175 = L_174->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_176 = L_175;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_177 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_177, L_176, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_176, 11, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_173, L_177, /*hidden argument*/NULL);
		// @TurnLeft.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_178;
		L_178 = GamePlayActions_get_TurnLeft_m85B9897FCA4120C0EC23B2B925296234268A7CEF((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_179 = __this->get_m_Wrapper_0();
		RuntimeObject* L_180 = L_179->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_181 = L_180;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_182 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_182, L_181, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_181, 11, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_178, L_182, /*hidden argument*/NULL);
		// @TurnRight.started -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_183;
		L_183 = GamePlayActions_get_TurnRight_m3DDB3B452DCC4F67A935038A0A9D3309A53F9F4E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_184 = __this->get_m_Wrapper_0();
		RuntimeObject* L_185 = L_184->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_186 = L_185;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_187 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_187, L_186, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_186, 12, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_183, L_187, /*hidden argument*/NULL);
		// @TurnRight.performed -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_188;
		L_188 = GamePlayActions_get_TurnRight_m3DDB3B452DCC4F67A935038A0A9D3309A53F9F4E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_189 = __this->get_m_Wrapper_0();
		RuntimeObject* L_190 = L_189->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_191 = L_190;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_192 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_192, L_191, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_191, 12, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_188, L_192, /*hidden argument*/NULL);
		// @TurnRight.canceled -= m_Wrapper.m_GamePlayActionsCallbackInterface.OnTurnRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_193;
		L_193 = GamePlayActions_get_TurnRight_m3DDB3B452DCC4F67A935038A0A9D3309A53F9F4E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_194 = __this->get_m_Wrapper_0();
		RuntimeObject* L_195 = L_194->get_m_GamePlayActionsCallbackInterface_2();
		RuntimeObject* L_196 = L_195;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_197 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_197, L_196, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_196, 12, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_193, L_197, /*hidden argument*/NULL);
	}

IL_056d:
	{
		// m_Wrapper.m_GamePlayActionsCallbackInterface = instance;
		PlayerControls_tCBCC13AB68445516CE9B39458A3D232B4FA914B3 * L_198 = __this->get_m_Wrapper_0();
		RuntimeObject* L_199 = ___instance0;
		L_198->set_m_GamePlayActionsCallbackInterface_2(L_199);
		// if (instance != null)
		RuntimeObject* L_200 = ___instance0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_200) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_201 = V_1;
		if (!L_201)
		{
			goto IL_0955;
		}
	}
	{
		// @Shoot.started += instance.OnShoot;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_202;
		L_202 = GamePlayActions_get_Shoot_m2FFAC558C7EB756C12662EDF2DE6F0B53F05A79F((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_203 = ___instance0;
		RuntimeObject* L_204 = L_203;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_205 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_205, L_204, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_204, 0, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_202, L_205, /*hidden argument*/NULL);
		// @Shoot.performed += instance.OnShoot;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_206;
		L_206 = GamePlayActions_get_Shoot_m2FFAC558C7EB756C12662EDF2DE6F0B53F05A79F((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_207 = ___instance0;
		RuntimeObject* L_208 = L_207;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_209 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_209, L_208, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_208, 0, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_206, L_209, /*hidden argument*/NULL);
		// @Shoot.canceled += instance.OnShoot;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_210;
		L_210 = GamePlayActions_get_Shoot_m2FFAC558C7EB756C12662EDF2DE6F0B53F05A79F((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_211 = ___instance0;
		RuntimeObject* L_212 = L_211;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_213 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_213, L_212, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_212, 0, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_210, L_213, /*hidden argument*/NULL);
		// @Intake.started += instance.OnIntake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_214;
		L_214 = GamePlayActions_get_Intake_m4AEEA797DD43CD7D8A25C7BB14C795686895F781((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_215 = ___instance0;
		RuntimeObject* L_216 = L_215;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_217 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_217, L_216, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_216, 1, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_214, L_217, /*hidden argument*/NULL);
		// @Intake.performed += instance.OnIntake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_218;
		L_218 = GamePlayActions_get_Intake_m4AEEA797DD43CD7D8A25C7BB14C795686895F781((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_219 = ___instance0;
		RuntimeObject* L_220 = L_219;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_221 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_221, L_220, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_220, 1, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_218, L_221, /*hidden argument*/NULL);
		// @Intake.canceled += instance.OnIntake;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_222;
		L_222 = GamePlayActions_get_Intake_m4AEEA797DD43CD7D8A25C7BB14C795686895F781((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_223 = ___instance0;
		RuntimeObject* L_224 = L_223;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_225 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_225, L_224, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_224, 1, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_222, L_225, /*hidden argument*/NULL);
		// @Spinup.started += instance.OnSpinup;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_226;
		L_226 = GamePlayActions_get_Spinup_m4C1E875524935D42BEFBC82BF10EBC1EE87A4E0E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_227 = ___instance0;
		RuntimeObject* L_228 = L_227;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_229 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_229, L_228, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_228, 2, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_226, L_229, /*hidden argument*/NULL);
		// @Spinup.performed += instance.OnSpinup;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_230;
		L_230 = GamePlayActions_get_Spinup_m4C1E875524935D42BEFBC82BF10EBC1EE87A4E0E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_231 = ___instance0;
		RuntimeObject* L_232 = L_231;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_233 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_233, L_232, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_232, 2, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_230, L_233, /*hidden argument*/NULL);
		// @Spinup.canceled += instance.OnSpinup;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_234;
		L_234 = GamePlayActions_get_Spinup_m4C1E875524935D42BEFBC82BF10EBC1EE87A4E0E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_235 = ___instance0;
		RuntimeObject* L_236 = L_235;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_237 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_237, L_236, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_236, 2, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_234, L_237, /*hidden argument*/NULL);
		// @Wobble.started += instance.OnWobble;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_238;
		L_238 = GamePlayActions_get_Wobble_mD8CBE1855FEA83CEE007B415CE74BC402CFFA92A((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_239 = ___instance0;
		RuntimeObject* L_240 = L_239;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_241 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_241, L_240, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_240, 3, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_238, L_241, /*hidden argument*/NULL);
		// @Wobble.performed += instance.OnWobble;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_242;
		L_242 = GamePlayActions_get_Wobble_mD8CBE1855FEA83CEE007B415CE74BC402CFFA92A((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_243 = ___instance0;
		RuntimeObject* L_244 = L_243;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_245 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_245, L_244, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_244, 3, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_242, L_245, /*hidden argument*/NULL);
		// @Wobble.canceled += instance.OnWobble;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_246;
		L_246 = GamePlayActions_get_Wobble_mD8CBE1855FEA83CEE007B415CE74BC402CFFA92A((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_247 = ___instance0;
		RuntimeObject* L_248 = L_247;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_249 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_249, L_248, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_248, 3, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_246, L_249, /*hidden argument*/NULL);
		// @WobbleHigh.started += instance.OnWobbleHigh;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_250;
		L_250 = GamePlayActions_get_WobbleHigh_m0DBC832D794EEA4387E142B2C9BA0F5933E56AD7((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_251 = ___instance0;
		RuntimeObject* L_252 = L_251;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_253 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_253, L_252, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_252, 4, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_250, L_253, /*hidden argument*/NULL);
		// @WobbleHigh.performed += instance.OnWobbleHigh;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_254;
		L_254 = GamePlayActions_get_WobbleHigh_m0DBC832D794EEA4387E142B2C9BA0F5933E56AD7((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_255 = ___instance0;
		RuntimeObject* L_256 = L_255;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_257 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_257, L_256, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_256, 4, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_254, L_257, /*hidden argument*/NULL);
		// @WobbleHigh.canceled += instance.OnWobbleHigh;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_258;
		L_258 = GamePlayActions_get_WobbleHigh_m0DBC832D794EEA4387E142B2C9BA0F5933E56AD7((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_259 = ___instance0;
		RuntimeObject* L_260 = L_259;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_261 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_261, L_260, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_260, 4, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_258, L_261, /*hidden argument*/NULL);
		// @IncreaseSpin.started += instance.OnIncreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_262;
		L_262 = GamePlayActions_get_IncreaseSpin_m8F1D3888BCE660866E357DB4AA7886F281FD16F3((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_263 = ___instance0;
		RuntimeObject* L_264 = L_263;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_265 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_265, L_264, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_264, 5, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_262, L_265, /*hidden argument*/NULL);
		// @IncreaseSpin.performed += instance.OnIncreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_266;
		L_266 = GamePlayActions_get_IncreaseSpin_m8F1D3888BCE660866E357DB4AA7886F281FD16F3((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_267 = ___instance0;
		RuntimeObject* L_268 = L_267;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_269 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_269, L_268, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_268, 5, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_266, L_269, /*hidden argument*/NULL);
		// @IncreaseSpin.canceled += instance.OnIncreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_270;
		L_270 = GamePlayActions_get_IncreaseSpin_m8F1D3888BCE660866E357DB4AA7886F281FD16F3((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_271 = ___instance0;
		RuntimeObject* L_272 = L_271;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_273 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_273, L_272, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_272, 5, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_270, L_273, /*hidden argument*/NULL);
		// @DecreaseSpin.started += instance.OnDecreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_274;
		L_274 = GamePlayActions_get_DecreaseSpin_m3A386602FE7E6F4FD80542909F508B5B5D5683ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_275 = ___instance0;
		RuntimeObject* L_276 = L_275;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_277 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_277, L_276, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_276, 6, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_274, L_277, /*hidden argument*/NULL);
		// @DecreaseSpin.performed += instance.OnDecreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_278;
		L_278 = GamePlayActions_get_DecreaseSpin_m3A386602FE7E6F4FD80542909F508B5B5D5683ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_279 = ___instance0;
		RuntimeObject* L_280 = L_279;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_281 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_281, L_280, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_280, 6, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_278, L_281, /*hidden argument*/NULL);
		// @DecreaseSpin.canceled += instance.OnDecreaseSpin;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_282;
		L_282 = GamePlayActions_get_DecreaseSpin_m3A386602FE7E6F4FD80542909F508B5B5D5683ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_283 = ___instance0;
		RuntimeObject* L_284 = L_283;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_285 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_285, L_284, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_284, 6, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_282, L_285, /*hidden argument*/NULL);
		// @DriveForward.started += instance.OnDriveForward;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_286;
		L_286 = GamePlayActions_get_DriveForward_m0F2CA734B1DE07D45105E74E00EA81AF35FEC3B2((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_287 = ___instance0;
		RuntimeObject* L_288 = L_287;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_289 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_289, L_288, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_288, 7, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_286, L_289, /*hidden argument*/NULL);
		// @DriveForward.performed += instance.OnDriveForward;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_290;
		L_290 = GamePlayActions_get_DriveForward_m0F2CA734B1DE07D45105E74E00EA81AF35FEC3B2((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_291 = ___instance0;
		RuntimeObject* L_292 = L_291;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_293 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_293, L_292, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_292, 7, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_290, L_293, /*hidden argument*/NULL);
		// @DriveForward.canceled += instance.OnDriveForward;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_294;
		L_294 = GamePlayActions_get_DriveForward_m0F2CA734B1DE07D45105E74E00EA81AF35FEC3B2((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_295 = ___instance0;
		RuntimeObject* L_296 = L_295;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_297 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_297, L_296, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_296, 7, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_294, L_297, /*hidden argument*/NULL);
		// @DriveBack.started += instance.OnDriveBack;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_298;
		L_298 = GamePlayActions_get_DriveBack_m54256D2427D81CF3AAFFC9250A7C96EAB31BD03B((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_299 = ___instance0;
		RuntimeObject* L_300 = L_299;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_301 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_301, L_300, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_300, 8, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_298, L_301, /*hidden argument*/NULL);
		// @DriveBack.performed += instance.OnDriveBack;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_302;
		L_302 = GamePlayActions_get_DriveBack_m54256D2427D81CF3AAFFC9250A7C96EAB31BD03B((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_303 = ___instance0;
		RuntimeObject* L_304 = L_303;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_305 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_305, L_304, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_304, 8, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_302, L_305, /*hidden argument*/NULL);
		// @DriveBack.canceled += instance.OnDriveBack;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_306;
		L_306 = GamePlayActions_get_DriveBack_m54256D2427D81CF3AAFFC9250A7C96EAB31BD03B((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_307 = ___instance0;
		RuntimeObject* L_308 = L_307;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_309 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_309, L_308, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_308, 8, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_306, L_309, /*hidden argument*/NULL);
		// @DriveLeft.started += instance.OnDriveLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_310;
		L_310 = GamePlayActions_get_DriveLeft_mBF2157B93A0FADA9FB1D8047EECE29C21931C1EB((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_311 = ___instance0;
		RuntimeObject* L_312 = L_311;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_313 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_313, L_312, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_312, 9, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_310, L_313, /*hidden argument*/NULL);
		// @DriveLeft.performed += instance.OnDriveLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_314;
		L_314 = GamePlayActions_get_DriveLeft_mBF2157B93A0FADA9FB1D8047EECE29C21931C1EB((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_315 = ___instance0;
		RuntimeObject* L_316 = L_315;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_317 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_317, L_316, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_316, 9, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_314, L_317, /*hidden argument*/NULL);
		// @DriveLeft.canceled += instance.OnDriveLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_318;
		L_318 = GamePlayActions_get_DriveLeft_mBF2157B93A0FADA9FB1D8047EECE29C21931C1EB((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_319 = ___instance0;
		RuntimeObject* L_320 = L_319;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_321 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_321, L_320, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_320, 9, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_318, L_321, /*hidden argument*/NULL);
		// @DriveRight.started += instance.OnDriveRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_322;
		L_322 = GamePlayActions_get_DriveRight_m6B8AEB6E120475632257CFFE19A07B00FD4872ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_323 = ___instance0;
		RuntimeObject* L_324 = L_323;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_325 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_325, L_324, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_324, 10, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_322, L_325, /*hidden argument*/NULL);
		// @DriveRight.performed += instance.OnDriveRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_326;
		L_326 = GamePlayActions_get_DriveRight_m6B8AEB6E120475632257CFFE19A07B00FD4872ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_327 = ___instance0;
		RuntimeObject* L_328 = L_327;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_329 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_329, L_328, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_328, 10, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_326, L_329, /*hidden argument*/NULL);
		// @DriveRight.canceled += instance.OnDriveRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_330;
		L_330 = GamePlayActions_get_DriveRight_m6B8AEB6E120475632257CFFE19A07B00FD4872ED((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_331 = ___instance0;
		RuntimeObject* L_332 = L_331;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_333 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_333, L_332, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_332, 10, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_330, L_333, /*hidden argument*/NULL);
		// @TurnLeft.started += instance.OnTurnLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_334;
		L_334 = GamePlayActions_get_TurnLeft_m85B9897FCA4120C0EC23B2B925296234268A7CEF((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_335 = ___instance0;
		RuntimeObject* L_336 = L_335;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_337 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_337, L_336, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_336, 11, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_334, L_337, /*hidden argument*/NULL);
		// @TurnLeft.performed += instance.OnTurnLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_338;
		L_338 = GamePlayActions_get_TurnLeft_m85B9897FCA4120C0EC23B2B925296234268A7CEF((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_339 = ___instance0;
		RuntimeObject* L_340 = L_339;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_341 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_341, L_340, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_340, 11, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_338, L_341, /*hidden argument*/NULL);
		// @TurnLeft.canceled += instance.OnTurnLeft;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_342;
		L_342 = GamePlayActions_get_TurnLeft_m85B9897FCA4120C0EC23B2B925296234268A7CEF((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_343 = ___instance0;
		RuntimeObject* L_344 = L_343;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_345 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_345, L_344, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_344, 11, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_342, L_345, /*hidden argument*/NULL);
		// @TurnRight.started += instance.OnTurnRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_346;
		L_346 = GamePlayActions_get_TurnRight_m3DDB3B452DCC4F67A935038A0A9D3309A53F9F4E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_347 = ___instance0;
		RuntimeObject* L_348 = L_347;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_349 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_349, L_348, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_348, 12, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_346, L_349, /*hidden argument*/NULL);
		// @TurnRight.performed += instance.OnTurnRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_350;
		L_350 = GamePlayActions_get_TurnRight_m3DDB3B452DCC4F67A935038A0A9D3309A53F9F4E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_351 = ___instance0;
		RuntimeObject* L_352 = L_351;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_353 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_353, L_352, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_352, 12, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_350, L_353, /*hidden argument*/NULL);
		// @TurnRight.canceled += instance.OnTurnRight;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_354;
		L_354 = GamePlayActions_get_TurnRight_m3DDB3B452DCC4F67A935038A0A9D3309A53F9F4E((GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_355 = ___instance0;
		RuntimeObject* L_356 = L_355;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_357 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_357, L_356, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_356, 12, IGamePlayActions_t1B999C122386586916D3E382D0189B113B32C4E1_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_354, L_357, /*hidden argument*/NULL);
	}

IL_0955:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GamePlayActions_SetCallbacks_m1D79905F7FAEC056E1AD96FA97480B6F0BE10DAE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 * _thisAdjusted = reinterpret_cast<GamePlayActions_t311C3E70BD84525AE86A3C23CED46CD05BAD7E23 *>(__this + _offset);
	GamePlayActions_SetCallbacks_m1D79905F7FAEC056E1AD96FA97480B6F0BE10DAE(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__11__ctor_m2A1B6F6D42DF6CF2887623CF7641F7AEC5D5B396 (U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__11_System_IDisposable_Dispose_m0947C33803A0510C0A3D34D07246B62EB7965825 (U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneAsyncU3Ed__11_MoveNext_mAA59F2E1CD4BF0745BBAA8FB44E9D010BC2CF8EB (U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_008b;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AsyncOperation loadOperation = SceneManager.LoadSceneAsync(sceneName);
		String_t* L_3 = __this->get_sceneName_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_4;
		L_4 = SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA(L_3, /*hidden argument*/NULL);
		__this->set_U3CloadOperationU3E5__1_4(L_4);
		goto IL_0093;
	}

IL_0033:
	{
		// float loadProgress = Mathf.Clamp01(loadOperation.progress / 0.9f);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_5 = __this->get_U3CloadOperationU3E5__1_4();
		float L_6;
		L_6 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_6/(float)(0.899999976f))), /*hidden argument*/NULL);
		__this->set_U3CloadProgressU3E5__2_5(L_7);
		// if (loadingBar)
		QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402 * L_8 = __this->get_U3CU3E4__this_3();
		QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77 * L_9 = L_8->get_loadingBar_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		// loadingBar.SetFill(loadProgress);
		QUI_SceneTransition_t4BB7F1279E0C32DB630EB967B8C2490DE56EE402 * L_12 = __this->get_U3CU3E4__this_3();
		QUI_Bar_t53BDD659BC55B6D20ABDA6A5EA1E977A812B1C77 * L_13 = L_12->get_loadingBar_5();
		float L_14 = __this->get_U3CloadProgressU3E5__2_5();
		QUI_Bar_SetFill_m785C4363BD983E33EDCFF0A2794479E33FF7E953(L_13, L_14, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0093:
	{
		// while (!loadOperation.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_15 = __this->get_U3CloadOperationU3E5__1_4();
		bool L_16;
		L_16 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_15, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0033;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneAsyncU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m34F0E6C3B6FF5B99009E17E069DE715F20E04A88 (U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__11_System_Collections_IEnumerator_Reset_m5F5E2CC25FFF7440DBD996DEC6F29D32BE64CF3E (U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneAsyncU3Ed__11_System_Collections_IEnumerator_Reset_m5F5E2CC25FFF7440DBD996DEC6F29D32BE64CF3E_RuntimeMethod_var)));
	}
}
// System.Object QuantumTek.QuantumUI.QUI_SceneTransition/<LoadSceneAsync>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneAsyncU3Ed__11_System_Collections_IEnumerator_get_Current_mA972EE6BD93ADA6368B8C4D6B929B6B8EB948C94 (U3CLoadSceneAsyncU3Ed__11_tE9B38F58E76A38212ECE32BA13EA49AEDDB34445 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// RobotControllerUdp/RobotPowers RobotControllerUdp/RobotPowers::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80 * RobotPowers_CreateFromJSON_m35E6970C69C585A65131107414CC15826F921790 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisRobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80_m105488E0BCA6C178D391F49097A2EF5E44CBCC3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80 * V_0 = NULL;
	{
		// return JsonUtility.FromJson<RobotPowers>(jsonString);
		String_t* L_0 = ___jsonString0;
		RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80 * L_1;
		L_1 = JsonUtility_FromJson_TisRobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80_m105488E0BCA6C178D391F49097A2EF5E44CBCC3E(L_0, /*hidden argument*/JsonUtility_FromJson_TisRobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80_m105488E0BCA6C178D391F49097A2EF5E44CBCC3E_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80 * L_2 = V_0;
		return L_2;
	}
}
// System.Void RobotControllerUdp/RobotPowers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RobotPowers__ctor_mD981A3C956D9B3285B30D1C08510C9C452D9CB91 (RobotPowers_tAC541FE45D922AB5FC86D1EE14629949E0708E80 * __this, const RuntimeMethod* method)
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
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12__ctor_m24E77CA82CA838B779F709263461B1C455D50FDE (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12_System_IDisposable_Dispose_m53C61006F5E5F3D044ED300FFB7324B7D4D76C5D (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReceiveLoopU3Ed__12_MoveNext_mE194BBB0A794B79D881385F3AFAC7D8493A88356 (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonSocketState_t0A317E33CE881C4E61BFE7545CB6829B01C83917_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t3C6FD0679150AB8D4FC9E648D97B1135C73E8C6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Exception_t * V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B14_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B38_0 = 0;
	Exception_t * G_B42_0 = NULL;
	int32_t G_B42_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B42_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B42_3 = NULL;
	int32_t G_B42_4 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * G_B42_5 = NULL;
	Exception_t * G_B41_0 = NULL;
	int32_t G_B41_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B41_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B41_3 = NULL;
	int32_t G_B41_4 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * G_B41_5 = NULL;
	String_t* G_B43_0 = NULL;
	int32_t G_B43_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B43_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B43_3 = NULL;
	int32_t G_B43_4 = 0;
	SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * G_B43_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0060;
	}

IL_001f:
	{
		goto IL_02cb;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (this.sock != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_2 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_3 = L_2->get_sock_12();
		V_1 = (bool)((!(((RuntimeObject*)(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0450;
		}
	}
	{
		goto IL_0068;
	}

IL_0046:
	{
		// yield return new WaitForRealSeconds(0.1f);
		WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * L_5 = (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 *)il2cpp_codegen_object_new(WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_mCD44B820C0EAD126888F40FC5550D0575883EB1D(L_5, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0060:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0068:
	{
		// while (this.sock != null && !this.sock.Connected && this.sock.Error == null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_6 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_7 = L_6->get_sock_12();
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_8 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_9 = L_8->get_sock_12();
		bool L_10;
		L_10 = WebSocket_get_Connected_m175AEA9D6447234508ED29C0F39E9B722C37CB9B(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_009c;
		}
	}
	{
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_11 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_12 = L_11->get_sock_12();
		String_t* L_13;
		L_13 = WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29(L_12, /*hidden argument*/NULL);
		G_B14_0 = ((((RuntimeObject*)(String_t*)L_13) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B14_0 = 0;
	}

IL_009d:
	{
		V_2 = (bool)G_B14_0;
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0046;
		}
	}
	{
		// if (this.sock != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_15 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_16 = L_15->get_sock_12();
		V_3 = (bool)((!(((RuntimeObject*)(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_044f;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_18 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_19 = L_18->get_sock_12();
		String_t* L_20;
		L_20 = WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29(L_19, /*hidden argument*/NULL);
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_20) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0158;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread. Server: " + this.ServerAddress + ":" + this.ServerPort + " Error: " + this.sock.Error);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_22 = __this->get_U3CU3E4__this_2();
		RuntimeObject* L_23;
		L_23 = IPhotonSocket_get_Listener_m468082D96D7C5553A4CBE8EBEB0E2E9F3756D4BF(L_22, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		ArrayElementTypeCheck (L_25, _stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_27 = __this->get_U3CU3E4__this_2();
		String_t* L_28;
		L_28 = IPhotonSocket_get_ServerAddress_mC0ED9A7317D0ADEF35EDDEB00589F75FBB35BC3C_inline(L_27, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_28);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_26;
		ArrayElementTypeCheck (L_29, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_31 = __this->get_U3CU3E4__this_2();
		int32_t L_32;
		L_32 = IPhotonSocket_get_ServerPort_mF84ECB699DE57D5097414264F8F3480C2AB54BE6_inline(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		String_t* L_33;
		L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_30;
		ArrayElementTypeCheck (L_34, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_36 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_37 = L_36->get_sock_12();
		String_t* L_38;
		L_38 = WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29(L_37, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_38);
		String_t* L_39;
		L_39 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_35, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var, L_23, 1, L_39);
		// this.HandleException(StatusCode.ExceptionOnConnect);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_40 = __this->get_U3CU3E4__this_2();
		IPhotonSocket_HandleException_mAAFAAA906B292A9BDE782A3567624568C203E5F4(L_40, ((int32_t)1023), /*hidden argument*/NULL);
		goto IL_044e;
	}

IL_0158:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_41 = __this->get_U3CU3E4__this_2();
		bool L_42;
		L_42 = IPhotonSocket_ReportDebugOfLevel_m3C0988E7C6953C14369C4CB6A020F77BAC9211B5(L_41, 5, /*hidden argument*/NULL);
		V_6 = L_42;
		bool L_43 = V_6;
		if (!L_43)
		{
			goto IL_01a3;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "Receiving by websocket. this.State: " + this.State);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_44 = __this->get_U3CU3E4__this_2();
		RuntimeObject* L_45;
		L_45 = IPhotonSocket_get_Listener_m468082D96D7C5553A4CBE8EBEB0E2E9F3756D4BF(L_44, /*hidden argument*/NULL);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_46 = __this->get_U3CU3E4__this_2();
		int32_t L_47;
		L_47 = IPhotonSocket_get_State_m50E87FF3DF75AD68346955C9CE6A379B96CB569D_inline(L_46, /*hidden argument*/NULL);
		V_7 = L_47;
		RuntimeObject * L_48 = Box(PhotonSocketState_t0A317E33CE881C4E61BFE7545CB6829B01C83917_il2cpp_TypeInfo_var, (&V_7));
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		V_7 = *(int32_t*)UnBox(L_48);
		String_t* L_50;
		L_50 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B, L_49, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var, L_45, 5, L_50);
	}

IL_01a3:
	{
		// this.State = PhotonSocketState.Connected;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_51 = __this->get_U3CU3E4__this_2();
		IPhotonSocket_set_State_mA9016132CA53E2246EA0CE878B4E0FA92170AE01_inline(L_51, 2, /*hidden argument*/NULL);
		// this.peerBase.OnConnect();
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_52 = __this->get_U3CU3E4__this_2();
		PeerBase_t6C232E0857425CF66ADE8F5337DD6192C6D48046 * L_53 = ((IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C *)L_52)->get_peerBase_0();
		VirtActionInvoker0::Invoke(10 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_53);
		goto IL_0436;
	}

IL_01c6:
	{
		// if (this.sock != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_54 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_55 = L_54->get_sock_12();
		V_8 = (bool)((!(((RuntimeObject*)(WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 *)L_55) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_56 = V_8;
		if (!L_56)
		{
			goto IL_0435;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_57 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_58 = L_57->get_sock_12();
		String_t* L_59;
		L_59 = WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29(L_58, /*hidden argument*/NULL);
		V_9 = (bool)((!(((RuntimeObject*)(String_t*)L_59) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_60 = V_9;
		if (!L_60)
		{
			goto IL_027f;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread (inside loop). Server: " + this.ServerAddress + ":" + this.ServerPort + " Error: " + this.sock.Error);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_61 = __this->get_U3CU3E4__this_2();
		RuntimeObject* L_62;
		L_62 = IPhotonSocket_get_Listener_m468082D96D7C5553A4CBE8EBEB0E2E9F3756D4BF(L_61, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_63;
		ArrayElementTypeCheck (L_64, _stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65 = L_64;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_66 = __this->get_U3CU3E4__this_2();
		String_t* L_67;
		L_67 = IPhotonSocket_get_ServerAddress_mC0ED9A7317D0ADEF35EDDEB00589F75FBB35BC3C_inline(L_66, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_67);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_65;
		ArrayElementTypeCheck (L_68, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_69 = L_68;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_70 = __this->get_U3CU3E4__this_2();
		int32_t L_71;
		L_71 = IPhotonSocket_get_ServerPort_mF84ECB699DE57D5097414264F8F3480C2AB54BE6_inline(L_70, /*hidden argument*/NULL);
		V_5 = L_71;
		String_t* L_72;
		L_72 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_5), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_69, L_72);
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_72);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_73 = L_69;
		ArrayElementTypeCheck (L_73, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74 = L_73;
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_75 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_76 = L_75->get_sock_12();
		String_t* L_77;
		L_77 = WebSocket_get_Error_mB50059CF4E3511AF4541979573445962DFF14C29(L_76, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_74, L_77);
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_77);
		String_t* L_78;
		L_78 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_74, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var, L_62, 1, L_78);
		// this.HandleException(StatusCode.ExceptionOnReceive);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_79 = __this->get_U3CU3E4__this_2();
		IPhotonSocket_HandleException_mAAFAAA906B292A9BDE782A3567624568C203E5F4(L_79, ((int32_t)1039), /*hidden argument*/NULL);
		// break;
		goto IL_044d;
	}

IL_027f:
	{
		// byte[] inBuff = this.sock.Recv();
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_80 = __this->get_U3CU3E4__this_2();
		WebSocket_t3FFD2AD7791A6884FC25977D5DC29D1949341749 * L_81 = L_80->get_sock_12();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_82;
		L_82 = WebSocket_Recv_mB0AA2953A88628422FF0E0B18372EABBDB4E72D2(L_81, /*hidden argument*/NULL);
		__this->set_U3CinBuffU3E5__1_3(L_82);
		// if (inBuff == null || inBuff.Length == 0)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83 = __this->get_U3CinBuffU3E5__1_3();
		if (!L_83)
		{
			goto IL_02aa;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_84 = __this->get_U3CinBuffU3E5__1_3();
		G_B27_0 = ((((int32_t)(((RuntimeArray*)L_84)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_02ab;
	}

IL_02aa:
	{
		G_B27_0 = 1;
	}

IL_02ab:
	{
		V_10 = (bool)G_B27_0;
		bool L_85 = V_10;
		if (!L_85)
		{
			goto IL_02d7;
		}
	}
	{
		// yield return new WaitForRealSeconds(0.02f);
		WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 * L_86 = (WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926 *)il2cpp_codegen_object_new(WaitForRealSeconds_t88BCA6D42C39FFFAE93F61F72CAFB422CC164926_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_mCD44B820C0EAD126888F40FC5550D0575883EB1D(L_86, (0.0199999996f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_86);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_02cb:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_0436;
	}

IL_02d7:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_87 = __this->get_U3CU3E4__this_2();
		bool L_88;
		L_88 = IPhotonSocket_ReportDebugOfLevel_m3C0988E7C6953C14369C4CB6A020F77BAC9211B5(L_87, 5, /*hidden argument*/NULL);
		V_11 = L_88;
		bool L_89 = V_11;
		if (!L_89)
		{
			goto IL_0328;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "TCP << " + inBuff.Length + " = " + SupportClassPun.ByteArrayToString(inBuff));
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_90 = __this->get_U3CU3E4__this_2();
		RuntimeObject* L_91;
		L_91 = IPhotonSocket_get_Listener_m468082D96D7C5553A4CBE8EBEB0E2E9F3756D4BF(L_90, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_92 = __this->get_U3CinBuffU3E5__1_3();
		V_5 = ((int32_t)((int32_t)(((RuntimeArray*)L_92)->max_length)));
		String_t* L_93;
		L_93 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_5), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_94 = __this->get_U3CinBuffU3E5__1_3();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t3C6FD0679150AB8D4FC9E648D97B1135C73E8C6D_il2cpp_TypeInfo_var);
		String_t* L_95;
		L_95 = SupportClass_ByteArrayToString_mEAE62ED676EE78B5C54B2C697B6D4ABAAF219C81(L_94, /*hidden argument*/NULL);
		String_t* L_96;
		L_96 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D, L_93, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, L_95, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t8B75CD974B0517120AD5A03161DC357CF3384BE2_il2cpp_TypeInfo_var, L_91, 5, L_96);
	}

IL_0328:
	{
		// if (inBuff.Length > 0)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_97 = __this->get_U3CinBuffU3E5__1_3();
		V_12 = (bool)((!(((uint32_t)(((RuntimeArray*)L_97)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_98 = V_12;
		if (!L_98)
		{
			goto IL_042c;
		}
	}
	{
	}

IL_033c:
	try
	{ // begin try (depth: 1)
		// this.HandleReceivedDatagram(inBuff, inBuff.Length, false);
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_99 = __this->get_U3CU3E4__this_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_100 = __this->get_U3CinBuffU3E5__1_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_101 = __this->get_U3CinBuffU3E5__1_3();
		IPhotonSocket_HandleReceivedDatagram_m802BD03E022168C6ECD898F2222C9AB9F7954C8A(L_99, L_100, ((int32_t)((int32_t)(((RuntimeArray*)L_101)->max_length))), (bool)0, /*hidden argument*/NULL);
		goto IL_042b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_035e;
		}
		throw e;
	}

CATCH_035e:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_13 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_102 = V_13;
			__this->set_U3CeU3E5__2_4(L_102);
			// if (this.State != PhotonSocketState.Disconnecting && this.State != PhotonSocketState.Disconnected)
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_103 = __this->get_U3CU3E4__this_2();
			int32_t L_104;
			L_104 = IPhotonSocket_get_State_m50E87FF3DF75AD68346955C9CE6A379B96CB569D_inline(L_103, /*hidden argument*/NULL);
			if ((((int32_t)L_104) == ((int32_t)3)))
			{
				goto IL_0387;
			}
		}

IL_0377:
		{
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_105 = __this->get_U3CU3E4__this_2();
			int32_t L_106;
			L_106 = IPhotonSocket_get_State_m50E87FF3DF75AD68346955C9CE6A379B96CB569D_inline(L_105, /*hidden argument*/NULL);
			G_B38_0 = ((!(((uint32_t)L_106) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0388;
		}

IL_0387:
		{
			G_B38_0 = 0;
		}

IL_0388:
		{
			V_14 = (bool)G_B38_0;
			bool L_107 = V_14;
			if (!L_107)
			{
				goto IL_0428;
			}
		}

IL_0391:
		{
			// if (this.ReportDebugOfLevel(DebugLevel.ERROR))
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_108 = __this->get_U3CU3E4__this_2();
			bool L_109;
			L_109 = IPhotonSocket_ReportDebugOfLevel_m3C0988E7C6953C14369C4CB6A020F77BAC9211B5(L_108, 1, /*hidden argument*/NULL);
			V_15 = L_109;
			bool L_110 = V_15;
			if (!L_110)
			{
				goto IL_0416;
			}
		}

IL_03a4:
		{
			// this.EnqueueDebugReturn(DebugLevel.ERROR, "Receive issue. State: " + this.State + ". Server: '" + this.ServerAddress + "' Exception: " + e);
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_111 = __this->get_U3CU3E4__this_2();
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_112 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113 = L_112;
			ArrayElementTypeCheck (L_113, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			(L_113)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_114 = L_113;
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_115 = __this->get_U3CU3E4__this_2();
			int32_t L_116;
			L_116 = IPhotonSocket_get_State_m50E87FF3DF75AD68346955C9CE6A379B96CB569D_inline(L_115, /*hidden argument*/NULL);
			V_7 = L_116;
			RuntimeObject * L_117 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhotonSocketState_t0A317E33CE881C4E61BFE7545CB6829B01C83917_il2cpp_TypeInfo_var)), (&V_7));
			String_t* L_118;
			L_118 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_117);
			V_7 = *(int32_t*)UnBox(L_117);
			ArrayElementTypeCheck (L_114, L_118);
			(L_114)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_118);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_119 = L_114;
			ArrayElementTypeCheck (L_119, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			(L_119)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_120 = L_119;
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_121 = __this->get_U3CU3E4__this_2();
			String_t* L_122;
			L_122 = IPhotonSocket_get_ServerAddress_mC0ED9A7317D0ADEF35EDDEB00589F75FBB35BC3C_inline(L_121, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_120, L_122);
			(L_120)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_122);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_123 = L_120;
			ArrayElementTypeCheck (L_123, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			(L_123)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_124 = L_123;
			Exception_t * L_125 = __this->get_U3CeU3E5__2_4();
			Exception_t * L_126 = L_125;
			G_B41_0 = L_126;
			G_B41_1 = 5;
			G_B41_2 = L_124;
			G_B41_3 = L_124;
			G_B41_4 = 1;
			G_B41_5 = L_111;
			if (L_126)
			{
				G_B42_0 = L_126;
				G_B42_1 = 5;
				G_B42_2 = L_124;
				G_B42_3 = L_124;
				G_B42_4 = 1;
				G_B42_5 = L_111;
				goto IL_0404;
			}
		}

IL_0400:
		{
			G_B43_0 = ((String_t*)(NULL));
			G_B43_1 = G_B41_1;
			G_B43_2 = G_B41_2;
			G_B43_3 = G_B41_3;
			G_B43_4 = G_B41_4;
			G_B43_5 = G_B41_5;
			goto IL_0409;
		}

IL_0404:
		{
			String_t* L_127;
			L_127 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B42_0);
			G_B43_0 = L_127;
			G_B43_1 = G_B42_1;
			G_B43_2 = G_B42_2;
			G_B43_3 = G_B42_3;
			G_B43_4 = G_B42_4;
			G_B43_5 = G_B42_5;
		}

IL_0409:
		{
			ArrayElementTypeCheck (G_B43_2, G_B43_0);
			(G_B43_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B43_1), (String_t*)G_B43_0);
			String_t* L_128;
			L_128 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B43_3, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_mF6D6DC45C0C95151B52BBB66A48112B9005EB6E3(G_B43_5, G_B43_4, L_128, /*hidden argument*/NULL);
		}

IL_0416:
		{
			// this.HandleException(StatusCode.ExceptionOnReceive);
			SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_129 = __this->get_U3CU3E4__this_2();
			IPhotonSocket_HandleException_mAAFAAA906B292A9BDE782A3567624568C203E5F4(L_129, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_0428:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_042b;
		}
	} // end catch (depth: 1)

IL_042b:
	{
	}

IL_042c:
	{
		__this->set_U3CinBuffU3E5__1_3((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
	}

IL_0435:
	{
	}

IL_0436:
	{
		// while (this.State == PhotonSocketState.Connected)
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_130 = __this->get_U3CU3E4__this_2();
		int32_t L_131;
		L_131 = IPhotonSocket_get_State_m50E87FF3DF75AD68346955C9CE6A379B96CB569D_inline(L_130, /*hidden argument*/NULL);
		V_16 = (bool)((((int32_t)L_131) == ((int32_t)2))? 1 : 0);
		bool L_132 = V_16;
		if (L_132)
		{
			goto IL_01c6;
		}
	}

IL_044d:
	{
	}

IL_044e:
	{
	}

IL_044f:
	{
	}

IL_0450:
	{
		// this.Disconnect();
		SocketWebTcp_t2DA86F6574E0EA30B38D1AA86C6D4227CC571AF1 * L_133 = __this->get_U3CU3E4__this_2();
		bool L_134;
		L_134 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_133);
		// }
		return (bool)0;
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReceiveLoopU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0D3422003F04C77A1DA7A261C6028A2F5E43EE7E (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m81A880D827588FC43EAE12B1320A15F6B7B3172E (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m81A880D827588FC43EAE12B1320A15F6B7B3172E_RuntimeMethod_var)));
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_get_Current_m35B3B48641D47BC16386B7482AA19B6E2B95BE8F (U3CReceiveLoopU3Ed__12_t0022C29F89E925E06BFE17A013527CCA19057971 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourExt__ctor_mCBC834820BA80499919028FDFFB3DB2F8A71223A (MonoBehaviourExt_tE9402B38CA5077FD18ACC4CDF5CC63963BA6240B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UserManager/WebsiteCommands UserManager/WebsiteCommands::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD * WebsiteCommands_CreateFromJSON_mAFD10CFCA73391FF0C20B1A963544AA4657D1BBD (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisWebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD_m298818A641F8E69A0DC661E6251F1E32E9D64468_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD * V_0 = NULL;
	{
		// return JsonUtility.FromJson<WebsiteCommands>(jsonString);
		String_t* L_0 = ___jsonString0;
		WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD * L_1;
		L_1 = JsonUtility_FromJson_TisWebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD_m298818A641F8E69A0DC661E6251F1E32E9D64468(L_0, /*hidden argument*/JsonUtility_FromJson_TisWebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD_m298818A641F8E69A0DC661E6251F1E32E9D64468_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD * L_2 = V_0;
		return L_2;
	}
}
// System.Void UserManager/WebsiteCommands::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsiteCommands__ctor_m718770E5B610D8F7211CD2BAD1A006C3A01AE747 (WebsiteCommands_t65002966F065FEE272A62403ABEAC4F4BEA40ECD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string gameType = "";
		__this->set_gameType_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string gameSetup = "";
		__this->set_gameSetup_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void UserManager/WebsiteScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsiteScore__ctor_m28F28825CA8849E6D14A84A13549CFDFAAF4AEC6 (WebsiteScore_t4A970FD02F287299012DB0C36FD43565828383C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_mC0ED9A7317D0ADEF35EDDEB00589F75FBB35BC3C_inline (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_mF84ECB699DE57D5097414264F8F3480C2AB54BE6_inline (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CServerPortU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_m50E87FF3DF75AD68346955C9CE6A379B96CB569D_inline (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_mA9016132CA53E2246EA0CE878B4E0FA92170AE01_inline (IPhotonSocket_t73FA624B134DA3E5B7E5E456D74BCD26DB34710C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_3(L_0);
		return;
	}
}

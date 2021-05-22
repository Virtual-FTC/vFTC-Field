#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70_RuntimeMethod_var;
extern const RuntimeMethod* WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715_RuntimeMethod_var;



// 0x00000001 System.Void HybridWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
extern void WebSocketOpenEventHandler__ctor_mCC909728B9E6EFF2E80567AFA7F6648DB3E8974B (void);
// 0x00000002 System.Void HybridWebSocket.WebSocketOpenEventHandler::Invoke()
extern void WebSocketOpenEventHandler_Invoke_m463A1210A0CF3B0451EA212FEE85355DAB7B6EC0 (void);
// 0x00000003 System.IAsyncResult HybridWebSocket.WebSocketOpenEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern void WebSocketOpenEventHandler_BeginInvoke_m67694F7CB24C88FBF94EC20B1E0524B099CFAD8B (void);
// 0x00000004 System.Void HybridWebSocket.WebSocketOpenEventHandler::EndInvoke(System.IAsyncResult)
extern void WebSocketOpenEventHandler_EndInvoke_m2C0A4787812A0240D14EED742D36C861581256A3 (void);
// 0x00000005 System.Void HybridWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
extern void WebSocketMessageEventHandler__ctor_m26BE4DEB6BA4108C19A599D884C80A96EFB55296 (void);
// 0x00000006 System.Void HybridWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
extern void WebSocketMessageEventHandler_Invoke_m5D9CAFBEAFD3C1A2FD26AD292C2D165A8BF4271D (void);
// 0x00000007 System.IAsyncResult HybridWebSocket.WebSocketMessageEventHandler::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
extern void WebSocketMessageEventHandler_BeginInvoke_mD3EBE64263C76A2DE73C2590597079FF84244270 (void);
// 0x00000008 System.Void HybridWebSocket.WebSocketMessageEventHandler::EndInvoke(System.IAsyncResult)
extern void WebSocketMessageEventHandler_EndInvoke_m938C9038B555A3671586BE898927CA39959930B8 (void);
// 0x00000009 System.Void HybridWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
extern void WebSocketErrorEventHandler__ctor_m3F0C04DB1D57EADD4F6E99EE4E233D5884811F1D (void);
// 0x0000000A System.Void HybridWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
extern void WebSocketErrorEventHandler_Invoke_m356C5B6B198897031573419D151FE33866997804 (void);
// 0x0000000B System.IAsyncResult HybridWebSocket.WebSocketErrorEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void WebSocketErrorEventHandler_BeginInvoke_mE8B1ABA7201829CE9F14FEEB6AEEB35D7E2B086B (void);
// 0x0000000C System.Void HybridWebSocket.WebSocketErrorEventHandler::EndInvoke(System.IAsyncResult)
extern void WebSocketErrorEventHandler_EndInvoke_mA6A10315ACFCBF9DE39529782476DF1E4ABD5D95 (void);
// 0x0000000D System.Void HybridWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
extern void WebSocketCloseEventHandler__ctor_m51B640CD4CB9BE0D26E7427A56A421A9A9FA0948 (void);
// 0x0000000E System.Void HybridWebSocket.WebSocketCloseEventHandler::Invoke(HybridWebSocket.WebSocketCloseCode)
extern void WebSocketCloseEventHandler_Invoke_mDEBFE0986BC3B1777BF7036BD2C84A5BFBBD3E6B (void);
// 0x0000000F System.IAsyncResult HybridWebSocket.WebSocketCloseEventHandler::BeginInvoke(HybridWebSocket.WebSocketCloseCode,System.AsyncCallback,System.Object)
extern void WebSocketCloseEventHandler_BeginInvoke_m6BA3148015CF4E2D0FB47256EA3CB10AED38DB43 (void);
// 0x00000010 System.Void HybridWebSocket.WebSocketCloseEventHandler::EndInvoke(System.IAsyncResult)
extern void WebSocketCloseEventHandler_EndInvoke_m5463BD26133047B86E162878F3666D504BFFB456 (void);
// 0x00000011 System.Void HybridWebSocket.IWebSocket::Connect()
// 0x00000012 System.Void HybridWebSocket.IWebSocket::Close(HybridWebSocket.WebSocketCloseCode,System.String)
// 0x00000013 System.Void HybridWebSocket.IWebSocket::Send(System.Byte[])
// 0x00000014 HybridWebSocket.WebSocketState HybridWebSocket.IWebSocket::GetState()
// 0x00000015 System.Void HybridWebSocket.IWebSocket::add_OnOpen(HybridWebSocket.WebSocketOpenEventHandler)
// 0x00000016 System.Void HybridWebSocket.IWebSocket::remove_OnOpen(HybridWebSocket.WebSocketOpenEventHandler)
// 0x00000017 System.Void HybridWebSocket.IWebSocket::add_OnMessage(HybridWebSocket.WebSocketMessageEventHandler)
// 0x00000018 System.Void HybridWebSocket.IWebSocket::remove_OnMessage(HybridWebSocket.WebSocketMessageEventHandler)
// 0x00000019 System.Void HybridWebSocket.IWebSocket::add_OnError(HybridWebSocket.WebSocketErrorEventHandler)
// 0x0000001A System.Void HybridWebSocket.IWebSocket::remove_OnError(HybridWebSocket.WebSocketErrorEventHandler)
// 0x0000001B System.Void HybridWebSocket.IWebSocket::add_OnClose(HybridWebSocket.WebSocketCloseEventHandler)
// 0x0000001C System.Void HybridWebSocket.IWebSocket::remove_OnClose(HybridWebSocket.WebSocketCloseEventHandler)
// 0x0000001D HybridWebSocket.WebSocketCloseCode HybridWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
extern void WebSocketHelpers_ParseCloseCodeEnum_m2853525C9E621C03B5274BBFD55DB633D3654675 (void);
// 0x0000001E HybridWebSocket.WebSocketException HybridWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
extern void WebSocketHelpers_GetErrorMessageFromCode_m80C6218AE0B4B571F00418B4E30A0F757AC17952 (void);
// 0x0000001F System.Void HybridWebSocket.WebSocketException::.ctor()
extern void WebSocketException__ctor_mA1DC1FA395F7363DFA2CE98BA0ABFA9512540F17 (void);
// 0x00000020 System.Void HybridWebSocket.WebSocketException::.ctor(System.String)
extern void WebSocketException__ctor_m30E1430FA020D05CB0F49CA3C0C4E30CA6528372 (void);
// 0x00000021 System.Void HybridWebSocket.WebSocketException::.ctor(System.String,System.Exception)
extern void WebSocketException__ctor_m9EB35F6B6189B0D90C47BF2B7BABA65750059A75 (void);
// 0x00000022 System.Void HybridWebSocket.WebSocketUnexpectedException::.ctor()
extern void WebSocketUnexpectedException__ctor_mCA6A9A13B3FD62F70E460C42E2E0319A05EF5105 (void);
// 0x00000023 System.Void HybridWebSocket.WebSocketUnexpectedException::.ctor(System.String)
extern void WebSocketUnexpectedException__ctor_m218BEF9A25CF3C68C95D09051F68632CA7707741 (void);
// 0x00000024 System.Void HybridWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
extern void WebSocketUnexpectedException__ctor_mC5EDE451CEF57471230600C7DBB03479B04CA3DB (void);
// 0x00000025 System.Void HybridWebSocket.WebSocketInvalidArgumentException::.ctor()
extern void WebSocketInvalidArgumentException__ctor_mB65C16F1B1CEF6F2720AD5F0086974ED0E5CC7EA (void);
// 0x00000026 System.Void HybridWebSocket.WebSocketInvalidArgumentException::.ctor(System.String)
extern void WebSocketInvalidArgumentException__ctor_mF13A3CBAACD84EC39FB85CF6E7B9C8A1B2A81137 (void);
// 0x00000027 System.Void HybridWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
extern void WebSocketInvalidArgumentException__ctor_m1F09E44E378059EBBB2BFD7AE849641D6566F620 (void);
// 0x00000028 System.Void HybridWebSocket.WebSocketInvalidStateException::.ctor()
extern void WebSocketInvalidStateException__ctor_m3477D18CA268D2E5640B95820E60847D4CA9C562 (void);
// 0x00000029 System.Void HybridWebSocket.WebSocketInvalidStateException::.ctor(System.String)
extern void WebSocketInvalidStateException__ctor_m980292F1035B0AB17674F59FA1F651E4A4A3C0A6 (void);
// 0x0000002A System.Void HybridWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
extern void WebSocketInvalidStateException__ctor_m0AB29BC819750447D99FC0E350631E051C792A95 (void);
// 0x0000002B System.Int32 HybridWebSocket.WebSocket::WebSocketConnect(System.Int32)
extern void WebSocket_WebSocketConnect_m9E4CD1E3C92513A4E15AB81BFF08A581BAD79BAF (void);
// 0x0000002C System.Int32 HybridWebSocket.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
extern void WebSocket_WebSocketClose_m8A33249925BCBF4D630E040543903D0D4D635992 (void);
// 0x0000002D System.Int32 HybridWebSocket.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
extern void WebSocket_WebSocketSend_m67F539CA90154609F7CBECE7CA7A204F12DD6554 (void);
// 0x0000002E System.Int32 HybridWebSocket.WebSocket::WebSocketGetState(System.Int32)
extern void WebSocket_WebSocketGetState_m76BA1FF0370140EB9AAF31430550C81D8F210DAE (void);
// 0x0000002F System.Void HybridWebSocket.WebSocket::add_OnOpen(HybridWebSocket.WebSocketOpenEventHandler)
extern void WebSocket_add_OnOpen_mB68E0D3A47AEE461F426285CCF5D160E5784D60D (void);
// 0x00000030 System.Void HybridWebSocket.WebSocket::remove_OnOpen(HybridWebSocket.WebSocketOpenEventHandler)
extern void WebSocket_remove_OnOpen_mC310C85E6149DD092740AB9B8069E980D5A5C9CE (void);
// 0x00000031 System.Void HybridWebSocket.WebSocket::add_OnMessage(HybridWebSocket.WebSocketMessageEventHandler)
extern void WebSocket_add_OnMessage_m273E3E130BB7DCE14B0C24FCD08DC8E8F35DD3E5 (void);
// 0x00000032 System.Void HybridWebSocket.WebSocket::remove_OnMessage(HybridWebSocket.WebSocketMessageEventHandler)
extern void WebSocket_remove_OnMessage_m8FBF44B6ED7D5C98F4144FD5DC8CABB81E00EEB6 (void);
// 0x00000033 System.Void HybridWebSocket.WebSocket::add_OnError(HybridWebSocket.WebSocketErrorEventHandler)
extern void WebSocket_add_OnError_m4C1BA21D45B3934BF61A2BF13E43BCF2F13F0D6E (void);
// 0x00000034 System.Void HybridWebSocket.WebSocket::remove_OnError(HybridWebSocket.WebSocketErrorEventHandler)
extern void WebSocket_remove_OnError_m4630EA4641D051424F362716176B56DDF8C26C79 (void);
// 0x00000035 System.Void HybridWebSocket.WebSocket::add_OnClose(HybridWebSocket.WebSocketCloseEventHandler)
extern void WebSocket_add_OnClose_m64A18053386016523A78FB2CF083DB431763DB41 (void);
// 0x00000036 System.Void HybridWebSocket.WebSocket::remove_OnClose(HybridWebSocket.WebSocketCloseEventHandler)
extern void WebSocket_remove_OnClose_m7CF6943931B98251F7138111CB25A1867638095A (void);
// 0x00000037 System.Void HybridWebSocket.WebSocket::.ctor(System.Int32)
extern void WebSocket__ctor_m43E891D30B8F7B04A2911A975B841595FD502A49 (void);
// 0x00000038 System.Void HybridWebSocket.WebSocket::Finalize()
extern void WebSocket_Finalize_mCB79080F884B5BB9AAF011FC696D413BD1793DA5 (void);
// 0x00000039 System.Int32 HybridWebSocket.WebSocket::GetInstanceId()
extern void WebSocket_GetInstanceId_m5054218CAE172BE51141713B9ECE047CBE94EF5D (void);
// 0x0000003A System.Void HybridWebSocket.WebSocket::Connect()
extern void WebSocket_Connect_mF72DE7D9E27BB0728D0943FA925B7E0E8D9E59CD (void);
// 0x0000003B System.Void HybridWebSocket.WebSocket::Close(HybridWebSocket.WebSocketCloseCode,System.String)
extern void WebSocket_Close_mD8B27E75F067A03F4725B9AA716D2D6E501F5325 (void);
// 0x0000003C System.Void HybridWebSocket.WebSocket::Send(System.Byte[])
extern void WebSocket_Send_m786E777316858BF26A3AA5ECFA02771B2ED45890 (void);
// 0x0000003D HybridWebSocket.WebSocketState HybridWebSocket.WebSocket::GetState()
extern void WebSocket_GetState_m913CEED99ED720A0DB064D9E0FED9DC1BF83A6E6 (void);
// 0x0000003E System.Void HybridWebSocket.WebSocket::DelegateOnOpenEvent()
extern void WebSocket_DelegateOnOpenEvent_m50B6FAEDD4B64EF9DA4EF058D36985DA3A476A9C (void);
// 0x0000003F System.Void HybridWebSocket.WebSocket::DelegateOnMessageEvent(System.Byte[])
extern void WebSocket_DelegateOnMessageEvent_mCEBC7C7122277D6974223338D037087AD97A9EF8 (void);
// 0x00000040 System.Void HybridWebSocket.WebSocket::DelegateOnErrorEvent(System.String)
extern void WebSocket_DelegateOnErrorEvent_mD842CC8C61541CD2A9A0D835B93FB459C77556A6 (void);
// 0x00000041 System.Void HybridWebSocket.WebSocket::DelegateOnCloseEvent(System.Int32)
extern void WebSocket_DelegateOnCloseEvent_m122B335ED6E189187E7076F6BDEF7BCBD94F3E00 (void);
// 0x00000042 System.Int32 HybridWebSocket.WebSocketFactory::WebSocketAllocate(System.String)
extern void WebSocketFactory_WebSocketAllocate_m94882BDA7436D39816179099F2EE4BC36C284633 (void);
// 0x00000043 System.Void HybridWebSocket.WebSocketFactory::WebSocketFree(System.Int32)
extern void WebSocketFactory_WebSocketFree_mD34220F85D8B27A6561B0E8A81ED2AE11BE1B8CC (void);
// 0x00000044 System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnOpen(HybridWebSocket.WebSocketFactory/OnOpenCallback)
extern void WebSocketFactory_WebSocketSetOnOpen_m608715A189903AA2C0B182EDC2CEB177D899B15B (void);
// 0x00000045 System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnMessage(HybridWebSocket.WebSocketFactory/OnMessageCallback)
extern void WebSocketFactory_WebSocketSetOnMessage_mD5C1FFF5D60C57ECD5E8F66FC5CC576A01C17D86 (void);
// 0x00000046 System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnError(HybridWebSocket.WebSocketFactory/OnErrorCallback)
extern void WebSocketFactory_WebSocketSetOnError_m3D34E2753FAAD40AC1BA94154D049255FA45376C (void);
// 0x00000047 System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnClose(HybridWebSocket.WebSocketFactory/OnCloseCallback)
extern void WebSocketFactory_WebSocketSetOnClose_m00E718AB78D806CF3C332C1031491DC40F755171 (void);
// 0x00000048 System.Void HybridWebSocket.WebSocketFactory::Initialize()
extern void WebSocketFactory_Initialize_mECE1087B1DED6BC958A1127D892D1230DE2B771B (void);
// 0x00000049 System.Void HybridWebSocket.WebSocketFactory::HandleInstanceDestroy(System.Int32)
extern void WebSocketFactory_HandleInstanceDestroy_m032E0B50A3572FDDEFB3FF66E02580A967F140F6 (void);
// 0x0000004A System.Void HybridWebSocket.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
extern void WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715 (void);
// 0x0000004B System.Void HybridWebSocket.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
extern void WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70 (void);
// 0x0000004C System.Void HybridWebSocket.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
extern void WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A (void);
// 0x0000004D System.Void HybridWebSocket.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
extern void WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51 (void);
// 0x0000004E HybridWebSocket.WebSocket HybridWebSocket.WebSocketFactory::CreateInstance(System.String)
extern void WebSocketFactory_CreateInstance_m2D00574111C569248339E4D2F982E9530AFDEC63 (void);
// 0x0000004F System.Void HybridWebSocket.WebSocketFactory::.cctor()
extern void WebSocketFactory__cctor_m5D2214FC1C711C3C47FF5129E3E3E521A069E3A9 (void);
// 0x00000050 System.Void HybridWebSocket.WebSocketFactory/OnOpenCallback::.ctor(System.Object,System.IntPtr)
extern void OnOpenCallback__ctor_mB5EFE607BF2C7F7D92E8D8652FBA5861063721D5 (void);
// 0x00000051 System.Void HybridWebSocket.WebSocketFactory/OnOpenCallback::Invoke(System.Int32)
extern void OnOpenCallback_Invoke_m67BAEB24BC475620891D3981139C9D265CA9362E (void);
// 0x00000052 System.IAsyncResult HybridWebSocket.WebSocketFactory/OnOpenCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern void OnOpenCallback_BeginInvoke_m0DD4805FBDC097ED722EBE7175013AE096B26351 (void);
// 0x00000053 System.Void HybridWebSocket.WebSocketFactory/OnOpenCallback::EndInvoke(System.IAsyncResult)
extern void OnOpenCallback_EndInvoke_m1F5442EAF7E7A01DFAB526B937824B9DD05BFA01 (void);
// 0x00000054 System.Void HybridWebSocket.WebSocketFactory/OnMessageCallback::.ctor(System.Object,System.IntPtr)
extern void OnMessageCallback__ctor_m8B63F48B6911A463AF30E54067DEDBEFACFF3FD6 (void);
// 0x00000055 System.Void HybridWebSocket.WebSocketFactory/OnMessageCallback::Invoke(System.Int32,System.IntPtr,System.Int32)
extern void OnMessageCallback_Invoke_m777A73837BDEC1E84BE55447116CDE813F19A30B (void);
// 0x00000056 System.IAsyncResult HybridWebSocket.WebSocketFactory/OnMessageCallback::BeginInvoke(System.Int32,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern void OnMessageCallback_BeginInvoke_m21514B3FEB3316006BB3CC7DED784CF2A0DA917F (void);
// 0x00000057 System.Void HybridWebSocket.WebSocketFactory/OnMessageCallback::EndInvoke(System.IAsyncResult)
extern void OnMessageCallback_EndInvoke_m2BCAD40B0D7FDBC9B200DF4D07595F4E4B1643B0 (void);
// 0x00000058 System.Void HybridWebSocket.WebSocketFactory/OnErrorCallback::.ctor(System.Object,System.IntPtr)
extern void OnErrorCallback__ctor_mFEA1C11CD4BD90DB09B8F4C80E7984EE60C8D254 (void);
// 0x00000059 System.Void HybridWebSocket.WebSocketFactory/OnErrorCallback::Invoke(System.Int32,System.IntPtr)
extern void OnErrorCallback_Invoke_m6F6B92066C673CEEE0A8A31972F3F16AB2FDE053 (void);
// 0x0000005A System.IAsyncResult HybridWebSocket.WebSocketFactory/OnErrorCallback::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern void OnErrorCallback_BeginInvoke_m059B7CA18599E0FEFC257EAB777F06DFC186B7BB (void);
// 0x0000005B System.Void HybridWebSocket.WebSocketFactory/OnErrorCallback::EndInvoke(System.IAsyncResult)
extern void OnErrorCallback_EndInvoke_m7AA619C3DAC51DC9C1E3560C6F9D6EF8EF571F6A (void);
// 0x0000005C System.Void HybridWebSocket.WebSocketFactory/OnCloseCallback::.ctor(System.Object,System.IntPtr)
extern void OnCloseCallback__ctor_mAA485B91BD429CAFDBB5F27CFCA931E8131F835C (void);
// 0x0000005D System.Void HybridWebSocket.WebSocketFactory/OnCloseCallback::Invoke(System.Int32,System.Int32)
extern void OnCloseCallback_Invoke_mACC3D1EAD3976CAA9B3A5DBE09672EB1FE59B191 (void);
// 0x0000005E System.IAsyncResult HybridWebSocket.WebSocketFactory/OnCloseCallback::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void OnCloseCallback_BeginInvoke_m7CAA0E383C800B6F555C65C608C3A82892A7161A (void);
// 0x0000005F System.Void HybridWebSocket.WebSocketFactory/OnCloseCallback::EndInvoke(System.IAsyncResult)
extern void OnCloseCallback_EndInvoke_mB7956827A69CDFC4287B73B6F7D24AB84D646A40 (void);
static Il2CppMethodPointer s_methodPointers[95] = 
{
	WebSocketOpenEventHandler__ctor_mCC909728B9E6EFF2E80567AFA7F6648DB3E8974B,
	WebSocketOpenEventHandler_Invoke_m463A1210A0CF3B0451EA212FEE85355DAB7B6EC0,
	WebSocketOpenEventHandler_BeginInvoke_m67694F7CB24C88FBF94EC20B1E0524B099CFAD8B,
	WebSocketOpenEventHandler_EndInvoke_m2C0A4787812A0240D14EED742D36C861581256A3,
	WebSocketMessageEventHandler__ctor_m26BE4DEB6BA4108C19A599D884C80A96EFB55296,
	WebSocketMessageEventHandler_Invoke_m5D9CAFBEAFD3C1A2FD26AD292C2D165A8BF4271D,
	WebSocketMessageEventHandler_BeginInvoke_mD3EBE64263C76A2DE73C2590597079FF84244270,
	WebSocketMessageEventHandler_EndInvoke_m938C9038B555A3671586BE898927CA39959930B8,
	WebSocketErrorEventHandler__ctor_m3F0C04DB1D57EADD4F6E99EE4E233D5884811F1D,
	WebSocketErrorEventHandler_Invoke_m356C5B6B198897031573419D151FE33866997804,
	WebSocketErrorEventHandler_BeginInvoke_mE8B1ABA7201829CE9F14FEEB6AEEB35D7E2B086B,
	WebSocketErrorEventHandler_EndInvoke_mA6A10315ACFCBF9DE39529782476DF1E4ABD5D95,
	WebSocketCloseEventHandler__ctor_m51B640CD4CB9BE0D26E7427A56A421A9A9FA0948,
	WebSocketCloseEventHandler_Invoke_mDEBFE0986BC3B1777BF7036BD2C84A5BFBBD3E6B,
	WebSocketCloseEventHandler_BeginInvoke_m6BA3148015CF4E2D0FB47256EA3CB10AED38DB43,
	WebSocketCloseEventHandler_EndInvoke_m5463BD26133047B86E162878F3666D504BFFB456,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	WebSocketHelpers_ParseCloseCodeEnum_m2853525C9E621C03B5274BBFD55DB633D3654675,
	WebSocketHelpers_GetErrorMessageFromCode_m80C6218AE0B4B571F00418B4E30A0F757AC17952,
	WebSocketException__ctor_mA1DC1FA395F7363DFA2CE98BA0ABFA9512540F17,
	WebSocketException__ctor_m30E1430FA020D05CB0F49CA3C0C4E30CA6528372,
	WebSocketException__ctor_m9EB35F6B6189B0D90C47BF2B7BABA65750059A75,
	WebSocketUnexpectedException__ctor_mCA6A9A13B3FD62F70E460C42E2E0319A05EF5105,
	WebSocketUnexpectedException__ctor_m218BEF9A25CF3C68C95D09051F68632CA7707741,
	WebSocketUnexpectedException__ctor_mC5EDE451CEF57471230600C7DBB03479B04CA3DB,
	WebSocketInvalidArgumentException__ctor_mB65C16F1B1CEF6F2720AD5F0086974ED0E5CC7EA,
	WebSocketInvalidArgumentException__ctor_mF13A3CBAACD84EC39FB85CF6E7B9C8A1B2A81137,
	WebSocketInvalidArgumentException__ctor_m1F09E44E378059EBBB2BFD7AE849641D6566F620,
	WebSocketInvalidStateException__ctor_m3477D18CA268D2E5640B95820E60847D4CA9C562,
	WebSocketInvalidStateException__ctor_m980292F1035B0AB17674F59FA1F651E4A4A3C0A6,
	WebSocketInvalidStateException__ctor_m0AB29BC819750447D99FC0E350631E051C792A95,
	WebSocket_WebSocketConnect_m9E4CD1E3C92513A4E15AB81BFF08A581BAD79BAF,
	WebSocket_WebSocketClose_m8A33249925BCBF4D630E040543903D0D4D635992,
	WebSocket_WebSocketSend_m67F539CA90154609F7CBECE7CA7A204F12DD6554,
	WebSocket_WebSocketGetState_m76BA1FF0370140EB9AAF31430550C81D8F210DAE,
	WebSocket_add_OnOpen_mB68E0D3A47AEE461F426285CCF5D160E5784D60D,
	WebSocket_remove_OnOpen_mC310C85E6149DD092740AB9B8069E980D5A5C9CE,
	WebSocket_add_OnMessage_m273E3E130BB7DCE14B0C24FCD08DC8E8F35DD3E5,
	WebSocket_remove_OnMessage_m8FBF44B6ED7D5C98F4144FD5DC8CABB81E00EEB6,
	WebSocket_add_OnError_m4C1BA21D45B3934BF61A2BF13E43BCF2F13F0D6E,
	WebSocket_remove_OnError_m4630EA4641D051424F362716176B56DDF8C26C79,
	WebSocket_add_OnClose_m64A18053386016523A78FB2CF083DB431763DB41,
	WebSocket_remove_OnClose_m7CF6943931B98251F7138111CB25A1867638095A,
	WebSocket__ctor_m43E891D30B8F7B04A2911A975B841595FD502A49,
	WebSocket_Finalize_mCB79080F884B5BB9AAF011FC696D413BD1793DA5,
	WebSocket_GetInstanceId_m5054218CAE172BE51141713B9ECE047CBE94EF5D,
	WebSocket_Connect_mF72DE7D9E27BB0728D0943FA925B7E0E8D9E59CD,
	WebSocket_Close_mD8B27E75F067A03F4725B9AA716D2D6E501F5325,
	WebSocket_Send_m786E777316858BF26A3AA5ECFA02771B2ED45890,
	WebSocket_GetState_m913CEED99ED720A0DB064D9E0FED9DC1BF83A6E6,
	WebSocket_DelegateOnOpenEvent_m50B6FAEDD4B64EF9DA4EF058D36985DA3A476A9C,
	WebSocket_DelegateOnMessageEvent_mCEBC7C7122277D6974223338D037087AD97A9EF8,
	WebSocket_DelegateOnErrorEvent_mD842CC8C61541CD2A9A0D835B93FB459C77556A6,
	WebSocket_DelegateOnCloseEvent_m122B335ED6E189187E7076F6BDEF7BCBD94F3E00,
	WebSocketFactory_WebSocketAllocate_m94882BDA7436D39816179099F2EE4BC36C284633,
	WebSocketFactory_WebSocketFree_mD34220F85D8B27A6561B0E8A81ED2AE11BE1B8CC,
	WebSocketFactory_WebSocketSetOnOpen_m608715A189903AA2C0B182EDC2CEB177D899B15B,
	WebSocketFactory_WebSocketSetOnMessage_mD5C1FFF5D60C57ECD5E8F66FC5CC576A01C17D86,
	WebSocketFactory_WebSocketSetOnError_m3D34E2753FAAD40AC1BA94154D049255FA45376C,
	WebSocketFactory_WebSocketSetOnClose_m00E718AB78D806CF3C332C1031491DC40F755171,
	WebSocketFactory_Initialize_mECE1087B1DED6BC958A1127D892D1230DE2B771B,
	WebSocketFactory_HandleInstanceDestroy_m032E0B50A3572FDDEFB3FF66E02580A967F140F6,
	WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715,
	WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70,
	WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A,
	WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51,
	WebSocketFactory_CreateInstance_m2D00574111C569248339E4D2F982E9530AFDEC63,
	WebSocketFactory__cctor_m5D2214FC1C711C3C47FF5129E3E3E521A069E3A9,
	OnOpenCallback__ctor_mB5EFE607BF2C7F7D92E8D8652FBA5861063721D5,
	OnOpenCallback_Invoke_m67BAEB24BC475620891D3981139C9D265CA9362E,
	OnOpenCallback_BeginInvoke_m0DD4805FBDC097ED722EBE7175013AE096B26351,
	OnOpenCallback_EndInvoke_m1F5442EAF7E7A01DFAB526B937824B9DD05BFA01,
	OnMessageCallback__ctor_m8B63F48B6911A463AF30E54067DEDBEFACFF3FD6,
	OnMessageCallback_Invoke_m777A73837BDEC1E84BE55447116CDE813F19A30B,
	OnMessageCallback_BeginInvoke_m21514B3FEB3316006BB3CC7DED784CF2A0DA917F,
	OnMessageCallback_EndInvoke_m2BCAD40B0D7FDBC9B200DF4D07595F4E4B1643B0,
	OnErrorCallback__ctor_mFEA1C11CD4BD90DB09B8F4C80E7984EE60C8D254,
	OnErrorCallback_Invoke_m6F6B92066C673CEEE0A8A31972F3F16AB2FDE053,
	OnErrorCallback_BeginInvoke_m059B7CA18599E0FEFC257EAB777F06DFC186B7BB,
	OnErrorCallback_EndInvoke_m7AA619C3DAC51DC9C1E3560C6F9D6EF8EF571F6A,
	OnCloseCallback__ctor_mAA485B91BD429CAFDBB5F27CFCA931E8131F835C,
	OnCloseCallback_Invoke_mACC3D1EAD3976CAA9B3A5DBE09672EB1FE59B191,
	OnCloseCallback_BeginInvoke_m7CAA0E383C800B6F555C65C608C3A82892A7161A,
	OnCloseCallback_EndInvoke_mB7956827A69CDFC4287B73B6F7D24AB84D646A40,
};
static const int32_t s_InvokerIndices[95] = 
{
	2296,
	4899,
	1702,
	3937,
	2296,
	3937,
	1189,
	3937,
	2296,
	3937,
	1189,
	3937,
	2296,
	3916,
	1168,
	3937,
	4899,
	2107,
	3937,
	4780,
	3937,
	3937,
	3937,
	3937,
	3937,
	3937,
	3937,
	3937,
	6948,
	6417,
	4899,
	3937,
	2300,
	4899,
	3937,
	2300,
	4899,
	3937,
	2300,
	4899,
	3937,
	2300,
	6948,
	5934,
	5936,
	6948,
	3937,
	3937,
	3937,
	3937,
	3937,
	3937,
	3937,
	3937,
	3916,
	4899,
	4780,
	4899,
	2107,
	3937,
	4780,
	4899,
	3937,
	3937,
	3916,
	6952,
	7158,
	7161,
	7161,
	7161,
	7161,
	7314,
	7158,
	7158,
	6165,
	6677,
	6676,
	7042,
	7314,
	2296,
	3916,
	1168,
	3937,
	2296,
	1389,
	387,
	3937,
	2296,
	2089,
	733,
	3937,
	2296,
	2087,
	732,
	3937,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[4] = 
{
	{ 0x0600004A, 10,  (void**)&WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715_RuntimeMethod_var, 0 },
	{ 0x0600004B, 9,  (void**)&WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70_RuntimeMethod_var, 0 },
	{ 0x0600004C, 8,  (void**)&WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A_RuntimeMethod_var, 0 },
	{ 0x0600004D, 7,  (void**)&WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51_RuntimeMethod_var, 0 },
};
extern const CustomAttributesCacheGenerator g_AssemblyU2DCSharpU2Dfirstpass_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_AssemblyU2DCSharpU2Dfirstpass_CodeGenModule;
const Il2CppCodeGenModule g_AssemblyU2DCSharpU2Dfirstpass_CodeGenModule = 
{
	"Assembly-CSharp-firstpass.dll",
	95,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	4,
	s_reversePInvokeIndices,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_AssemblyU2DCSharpU2Dfirstpass_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

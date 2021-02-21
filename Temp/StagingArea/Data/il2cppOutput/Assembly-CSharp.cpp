﻿#include "pch-cpp.hpp"

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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8;
// Client
struct Client_t8953F633032099609444F417EEFFBED62649CECB;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HealthBar
struct HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MouseInput
struct MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5;
// MoveByMouse
struct MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E;
// Mirror.NetworkConnection
struct NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311;
// Mirror.NetworkIdentity
struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6;
// Mirror.NetworkVisibility
struct NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07;
// PlayerSoZ
struct PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Server
struct Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Client/TCP
struct TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F;
// MouseInput/IMouseActions
struct IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9;
// Mirror.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39;
// System.Action`2<Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>>
struct Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B;
// System.Action`2<Mirror.NetworkWriter,Mirror.AddPlayerMessage>
struct Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47;
// System.Action`2<Mirror.NetworkWriter,System.Boolean>
struct Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B;
// System.Action`2<Mirror.NetworkWriter,System.Byte>
struct Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922;
// System.Action`2<Mirror.NetworkWriter,System.Byte[]>
struct Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992;
// System.Action`2<Mirror.NetworkWriter,System.Char>
struct Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color>
struct Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color32>
struct Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575;
// System.Action`2<Mirror.NetworkWriter,Mirror.CommandMessage>
struct Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379;
// System.Action`2<Mirror.NetworkWriter,Mirror.ConnectMessage>
struct Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA;
// System.Action`2<Mirror.NetworkWriter,System.Decimal>
struct Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2;
// System.Action`2<Mirror.NetworkWriter,Mirror.DisconnectMessage>
struct Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067;
// System.Action`2<Mirror.NetworkWriter,System.Double>
struct Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B;
// System.Action`2<Mirror.NetworkWriter,Mirror.ErrorMessage>
struct Action_2_t66675A75775137108E5F7FAB965F44B552778C26;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.GameObject>
struct Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568;
// System.Action`2<Mirror.NetworkWriter,System.Guid>
struct Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309;
// System.Action`2<Mirror.NetworkWriter,System.Int16>
struct Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869;
// System.Action`2<Mirror.NetworkWriter,System.Int32>
struct Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722;
// System.Action`2<Mirror.NetworkWriter,System.Int64>
struct Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Matrix4x4>
struct Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkBehaviour>
struct Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkIdentity>
struct Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPingMessage>
struct Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1;
// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPongMessage>
struct Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE;
// System.Action`2<Mirror.NetworkWriter,Mirror.NotReadyMessage>
struct Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectDestroyMessage>
struct Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectHideMessage>
struct Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnFinishedMessage>
struct Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358;
// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnStartedMessage>
struct Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Plane>
struct Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Quaternion>
struct Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Ray>
struct Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64;
// System.Action`2<Mirror.NetworkWriter,Mirror.ReadyMessage>
struct Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Rect>
struct Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18;
// System.Action`2<Mirror.NetworkWriter,Mirror.RpcMessage>
struct Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3;
// System.Action`2<Mirror.NetworkWriter,System.SByte>
struct Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA;
// System.Action`2<Mirror.NetworkWriter,Mirror.SceneMessage>
struct Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF;
// System.Action`2<Mirror.NetworkWriter,Mirror.SceneOperation>
struct Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07;
// System.Action`2<Mirror.NetworkWriter,System.Single>
struct Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7;
// System.Action`2<Mirror.NetworkWriter,Mirror.SpawnMessage>
struct Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC;
// System.Action`2<Mirror.NetworkWriter,System.String>
struct Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Transform>
struct Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1;
// System.Action`2<Mirror.NetworkWriter,System.UInt16>
struct Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F;
// System.Action`2<Mirror.NetworkWriter,System.UInt32>
struct Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401;
// System.Action`2<Mirror.NetworkWriter,System.UInt64>
struct Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E;
// System.Action`2<Mirror.NetworkWriter,Mirror.UpdateVarsMessage>
struct Action_2_t5A3703D259887235527744E2BD7095928D420ADD;
// System.Action`2<Mirror.NetworkWriter,System.Uri>
struct Action_2_t928C90600628DF3301846464535E0CBE3D956042;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2>
struct Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2Int>
struct Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3>
struct Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3Int>
struct Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71;
// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector4>
struct Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48;
// System.Action`2<System.Object,System.ByteEnum>
struct Action_2_t55DA0BCAC47803ECA6F1903087E195B658D3D238;
// System.Action`2<System.Object,System.ArraySegment`1<System.Byte>>
struct Action_2_tAA940E060B7300EF141FF12EAA8D1F0378214DBC;
// System.Action`2<System.Object,Mirror.AddPlayerMessage>
struct Action_2_tC98A5D849247411F3C777D9BD422986B278A9B9C;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_tB46DEF21BEFDF9B046381C5FE787F08B0397DAB5;
// System.Action`2<System.Object,System.Byte>
struct Action_2_t067DD870904608BD9E0396FBC4C88914D12F124D;
// System.Action`2<System.Object,System.Char>
struct Action_2_t3BC7FFE7D540E809EDCCE405A0BBD1C0C0C6541B;
// System.Action`2<System.Object,UnityEngine.Color>
struct Action_2_tA115706E18DF04DC2FE89DB5AE302F7A84C851CA;
// System.Action`2<System.Object,UnityEngine.Color32>
struct Action_2_tF3DD1CEFC2B121035D0814F1EFB7A33388E0AB5F;
// System.Action`2<System.Object,Mirror.CommandMessage>
struct Action_2_tD0E7640900EFD9C89316B51592C6FBA1E8ADEC0C;
// System.Action`2<System.Object,Mirror.ConnectMessage>
struct Action_2_tA078BD690D0E0F1E2815875FDBD3D640F4358E82;
// System.Action`2<System.Object,System.Decimal>
struct Action_2_t02BF29623EF16FDC93DEEF617F16336956C7E822;
// System.Action`2<System.Object,Mirror.DisconnectMessage>
struct Action_2_tA588457BF9116A829CE6B86A0458E2B8BB430213;
// System.Action`2<System.Object,System.Double>
struct Action_2_t8209F6EF5BC73661942B8FA0993EEBEF943F5116;
// System.Action`2<System.Object,Mirror.ErrorMessage>
struct Action_2_t0F7CD0A01AFAFF0CFA102BF2BF180C1C98DB64F9;
// System.Action`2<System.Object,System.Guid>
struct Action_2_t578850E4652CB53E03714DEDBD8DFA2AF467E8AB;
// System.Action`2<System.Object,System.Int16>
struct Action_2_t3F0E1FBF6CCFC5D7DFFADBD80C886FB226CC187D;
// System.Action`2<System.Object,System.Int32>
struct Action_2_t0E8CFD7D8A4393070552ED14F07C6D3B5AD0ED57;
// System.Action`2<System.Object,System.Int64>
struct Action_2_tF2E4E5A9734EA571C61DC7DE4225669282B47B68;
// System.Action`2<System.Object,UnityEngine.Matrix4x4>
struct Action_2_tA02836AC743A5AB8D2BEC360116DD34502174E69;
// System.Action`2<System.Object,Mirror.NetworkPingMessage>
struct Action_2_t1118E4C975F9D64160E4C1A0D3A154C5B25259AA;
// System.Action`2<System.Object,Mirror.NetworkPongMessage>
struct Action_2_tAC082F1978A2D09BAE2A7A431172694DD86C9E70;
// System.Action`2<System.Object,Mirror.NotReadyMessage>
struct Action_2_t5FA88A277C6A22E485C6693490028F435C7F0B48;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Action`2<System.Object,Mirror.ObjectDestroyMessage>
struct Action_2_t9866EC0F1615A4684C8639B2393F024E0CB821FB;
// System.Action`2<System.Object,Mirror.ObjectHideMessage>
struct Action_2_t5E946766BA98A3E914F4DD3CEAD91A946E1B52B5;
// System.Action`2<System.Object,Mirror.ObjectSpawnFinishedMessage>
struct Action_2_tBE0502D2FC8C69678BE76CAA179422478055F400;
// System.Action`2<System.Object,Mirror.ObjectSpawnStartedMessage>
struct Action_2_tBF22EAE2244CC73738E409BCD1486CE62A5DFC5C;
// System.Action`2<System.Object,UnityEngine.Plane>
struct Action_2_t22FFCFCB63107E883BE58E2B8C50A234EB186D38;
// System.Action`2<System.Object,UnityEngine.Quaternion>
struct Action_2_t1C31D5FE30754B8440CEE70BCB51178718DD50BE;
// System.Action`2<System.Object,UnityEngine.Ray>
struct Action_2_tC946F6433AAC6A0934AB6D04D5C129876F813C11;
// System.Action`2<System.Object,Mirror.ReadyMessage>
struct Action_2_t0C1EE81686E0E7E2A61617EF2996EEF95752680A;
// System.Action`2<System.Object,UnityEngine.Rect>
struct Action_2_t001C5ECC68ACFCBDB75B48AB4D8657F55950E508;
// System.Action`2<System.Object,Mirror.RpcMessage>
struct Action_2_t3EC6A7CB14968E96DDEF3BAE7F21EA4CD2E543C6;
// System.Action`2<System.Object,System.SByte>
struct Action_2_tB935837546BC1C736EFA1B6F0A6DA401389B29DA;
// System.Action`2<System.Object,Mirror.SceneMessage>
struct Action_2_tF7A2CE72502B34ACDE8FE02553BFD4C7DD4F023A;
// System.Action`2<System.Object,System.Single>
struct Action_2_t2056F1952FEC365612A9796772AFE1F7E907E69F;
// System.Action`2<System.Object,Mirror.SpawnMessage>
struct Action_2_t9D8250905FAF0E0CF5E418F4EC169108C92FC8E4;
// System.Action`2<System.Object,System.UInt16>
struct Action_2_tBD5203288592592FFA881175A33A37FE9B6E3222;
// System.Action`2<System.Object,System.UInt32>
struct Action_2_t7F130367D5A7BDB052649BAB1AF26213FA9B8B5F;
// System.Action`2<System.Object,System.UInt64>
struct Action_2_tBCA583C92388A0FA097DD0AB25A3EC38FE21EF33;
// System.Action`2<System.Object,Mirror.UpdateVarsMessage>
struct Action_2_tDFF1A2E1446BF38E2172C70E563EE1596B4FD7ED;
// System.Action`2<System.Object,UnityEngine.Vector2>
struct Action_2_t7EA78A942A6E6B745C0E80B8378C88D72C93CA6D;
// System.Action`2<System.Object,UnityEngine.Vector2Int>
struct Action_2_tC857F1C88DCD628300822D3FFBD4200C821F5186;
// System.Action`2<System.Object,UnityEngine.Vector3>
struct Action_2_tC4F931CD0175EC39EFAF6E68B9BCA1FCFE776EB8;
// System.Action`2<System.Object,UnityEngine.Vector3Int>
struct Action_2_t359DC5E2A697F5C659090CA3E3722AB1E911E21B;
// System.Action`2<System.Object,UnityEngine.Vector4>
struct Action_2_t19EDFFB61222396A5C84BDDDE7B973C76FD75900;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection>
struct Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>
struct Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate>
struct Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB;
// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity>
struct Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817;
// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity>
struct Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C;
// System.Func`2<Mirror.NetworkReader,System.ArraySegment`1<System.Byte>>
struct Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4;
// System.Func`2<Mirror.NetworkReader,Mirror.AddPlayerMessage>
struct Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1;
// System.Func`2<Mirror.NetworkReader,System.Boolean>
struct Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7;
// System.Func`2<Mirror.NetworkReader,System.Byte>
struct Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C;
// System.Func`2<Mirror.NetworkReader,System.Byte[]>
struct Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591;
// System.Func`2<Mirror.NetworkReader,System.Char>
struct Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Color>
struct Func_2_t884310CBAF609B1E4C14090750447709C5A58716;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Color32>
struct Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25;
// System.Func`2<Mirror.NetworkReader,Mirror.CommandMessage>
struct Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E;
// System.Func`2<Mirror.NetworkReader,Mirror.ConnectMessage>
struct Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C;
// System.Func`2<Mirror.NetworkReader,System.Decimal>
struct Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA;
// System.Func`2<Mirror.NetworkReader,Mirror.DisconnectMessage>
struct Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0;
// System.Func`2<Mirror.NetworkReader,System.Double>
struct Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD;
// System.Func`2<Mirror.NetworkReader,Mirror.ErrorMessage>
struct Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504;
// System.Func`2<Mirror.NetworkReader,UnityEngine.GameObject>
struct Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4;
// System.Func`2<Mirror.NetworkReader,System.Guid>
struct Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7;
// System.Func`2<Mirror.NetworkReader,System.Int16>
struct Func_2_tB004921AE76C91000E3C564021526D419AA05415;
// System.Func`2<Mirror.NetworkReader,System.Int32>
struct Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701;
// System.Func`2<Mirror.NetworkReader,System.Int64>
struct Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Matrix4x4>
struct Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B;
// System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour>
struct Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7;
// System.Func`2<Mirror.NetworkReader,Mirror.NetworkIdentity>
struct Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996;
// System.Func`2<Mirror.NetworkReader,Mirror.NetworkPingMessage>
struct Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532;
// System.Func`2<Mirror.NetworkReader,Mirror.NetworkPongMessage>
struct Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F;
// System.Func`2<Mirror.NetworkReader,Mirror.NotReadyMessage>
struct Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3;
// System.Func`2<Mirror.NetworkReader,Mirror.ObjectDestroyMessage>
struct Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1;
// System.Func`2<Mirror.NetworkReader,Mirror.ObjectHideMessage>
struct Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6;
// System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnFinishedMessage>
struct Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03;
// System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnStartedMessage>
struct Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Plane>
struct Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Quaternion>
struct Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Ray>
struct Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094;
// System.Func`2<Mirror.NetworkReader,Mirror.ReadyMessage>
struct Func_2_t61544C42F8B241A1233CC53D76C007FD59735486;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Rect>
struct Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3;
// System.Func`2<Mirror.NetworkReader,Mirror.RpcMessage>
struct Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585;
// System.Func`2<Mirror.NetworkReader,System.SByte>
struct Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A;
// System.Func`2<Mirror.NetworkReader,Mirror.SceneMessage>
struct Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89;
// System.Func`2<Mirror.NetworkReader,Mirror.SceneOperation>
struct Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD;
// System.Func`2<Mirror.NetworkReader,System.Single>
struct Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3;
// System.Func`2<Mirror.NetworkReader,Mirror.SpawnMessage>
struct Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB;
// System.Func`2<Mirror.NetworkReader,System.String>
struct Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Transform>
struct Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06;
// System.Func`2<Mirror.NetworkReader,System.UInt16>
struct Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD;
// System.Func`2<Mirror.NetworkReader,System.UInt32>
struct Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071;
// System.Func`2<Mirror.NetworkReader,System.UInt64>
struct Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A;
// System.Func`2<Mirror.NetworkReader,Mirror.UpdateVarsMessage>
struct Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D;
// System.Func`2<Mirror.NetworkReader,System.Uri>
struct Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2>
struct Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2Int>
struct Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3>
struct Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3Int>
struct Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB;
// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector4>
struct Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A;
// System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour/NetworkBehaviourSyncVar>
struct Func_2_t04EF3A5777F40A74EFD067B934A0450866148824;
// System.Func`2<System.Object,System.ByteEnum>
struct Func_2_t7FCF7219A5C8D05BF113BC44B97747F782D9FC2F;
// System.Func`2<System.Object,System.ArraySegment`1<System.Byte>>
struct Func_2_tB0D8F7463934429993EC080E603BDE919F0E8A86;
// System.Func`2<System.Object,Mirror.AddPlayerMessage>
struct Func_2_t9B48EBB76BCBF6C1981D100649FC54EC7BE7EE8A;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Byte>
struct Func_2_tE5F3BE6DF234656E6AD3639DC12B2B44B40936E1;
// System.Func`2<System.Object,System.Char>
struct Func_2_t6965B5A2E0DB61FB4E397E393EA5C47254757B2F;
// System.Func`2<System.Object,UnityEngine.Color>
struct Func_2_tC0A3DCAC2A732AA1EE91C95DC2E4241BAF8A3D81;
// System.Func`2<System.Object,UnityEngine.Color32>
struct Func_2_tD7951F750B6AC916BA4CBE39D580D41B769EF02F;
// System.Func`2<System.Object,Mirror.CommandMessage>
struct Func_2_tB134286F168FEC0A802CA7C8CDD6A6B6BE3C0B29;
// System.Func`2<System.Object,Mirror.ConnectMessage>
struct Func_2_t98C6E330F8F01CD890A29BEC32302E37F928B110;
// System.Func`2<System.Object,System.Decimal>
struct Func_2_t849BC6BC29946D6D8A1A3EB4E4406C8ADBD11CAA;
// System.Func`2<System.Object,Mirror.DisconnectMessage>
struct Func_2_t93FD92511A917EE962F990B11986735138F02291;
// System.Func`2<System.Object,System.Double>
struct Func_2_t32F4E81162C0EB5B67EF4324ABCC54A453AB7B22;
// System.Func`2<System.Object,Mirror.ErrorMessage>
struct Func_2_t64843353AC69E4BDE0341AD4DD0B07F8A8896B21;
// System.Func`2<System.Object,System.Guid>
struct Func_2_tD9B94F80D2178DA2905DED31543DCC2719F75B1E;
// System.Func`2<System.Object,System.Int16>
struct Func_2_t5AD002B975C98F5B9904CFAB15CCDC3CB956F52A;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Int64>
struct Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6;
// System.Func`2<System.Object,UnityEngine.Matrix4x4>
struct Func_2_tE0EF22E14F9A7480E3EE85CE00F61E99253A40F4;
// System.Func`2<System.Object,Mirror.NetworkPingMessage>
struct Func_2_t265AEC25107BC051D64C640B24FF144219E469FB;
// System.Func`2<System.Object,Mirror.NetworkPongMessage>
struct Func_2_t5EF0590E69314A14792C14C5A3CB4EAAB0A9F2FC;
// System.Func`2<System.Object,Mirror.NotReadyMessage>
struct Func_2_t0FDE6ADC73EE6A8C57350DDA440EA9358762D143;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,Mirror.ObjectDestroyMessage>
struct Func_2_t20108D8FB44F9316EA26DA1480984F546990C7F2;
// System.Func`2<System.Object,Mirror.ObjectHideMessage>
struct Func_2_tCF4E3800BB4FC2CF3672ED26C95D49DE2D3F557E;
// System.Func`2<System.Object,Mirror.ObjectSpawnFinishedMessage>
struct Func_2_tA53BAA5AF1A52ADC5B3E4F6573A6D8EEAC2DEF7B;
// System.Func`2<System.Object,Mirror.ObjectSpawnStartedMessage>
struct Func_2_tC9862C3F9E8CB60249A35FA4B80BD13050C6D59D;
// System.Func`2<System.Object,UnityEngine.Plane>
struct Func_2_tCCB3697D722273F7809338F86AC39642C7087C83;
// System.Func`2<System.Object,UnityEngine.Quaternion>
struct Func_2_t0E69E4403F4EC271082D0BB3EA52A971E129EFEF;
// System.Func`2<System.Object,UnityEngine.Ray>
struct Func_2_t6C6298983A5173397C057316A1B1234E68C2A9ED;
// System.Func`2<System.Object,Mirror.ReadyMessage>
struct Func_2_t237DF9796C01927AFCBCA243960EC02556E2654F;
// System.Func`2<System.Object,UnityEngine.Rect>
struct Func_2_t65D819D89391C79060CA0397D1032B14F6D053D8;
// System.Func`2<System.Object,Mirror.RpcMessage>
struct Func_2_t4B52C0F8027FD2962CEDBCE37FEE02C00EC9A8EA;
// System.Func`2<System.Object,System.SByte>
struct Func_2_tAA3B27E852740E1101BE364792E9F241442A3CA5;
// System.Func`2<System.Object,Mirror.SceneMessage>
struct Func_2_t878173F60F27CA5C8E397DA88CE84CFF643042C3;
// System.Func`2<System.Object,System.Single>
struct Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1;
// System.Func`2<System.Object,Mirror.SpawnMessage>
struct Func_2_tA016808D6E4F29AA6B932BFD2897EDDAB478508F;
// System.Func`2<System.Object,System.UInt16>
struct Func_2_tFF20C43795822C78FB88C2359D6E89095055A274;
// System.Func`2<System.Object,System.UInt32>
struct Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428;
// System.Func`2<System.Object,System.UInt64>
struct Func_2_t8C72441750D7147A0EDA017A81A318AD339FB950;
// System.Func`2<System.Object,Mirror.UpdateVarsMessage>
struct Func_2_tCC2335ED6E18138B2E59AAB0BBCFBE9C0245CE1E;
// System.Func`2<System.Object,UnityEngine.Vector2>
struct Func_2_t2FD07C5341AC1EAB0842671D1F6C9DDCE7984BA3;
// System.Func`2<System.Object,UnityEngine.Vector2Int>
struct Func_2_t729AA81D5AAAE1FA4BB7D67FF231CF9B335AF0E4;
// System.Func`2<System.Object,UnityEngine.Vector3>
struct Func_2_t3BAEFBC83B1F104F246CC17B449E3775D5E6881A;
// System.Func`2<System.Object,UnityEngine.Vector3Int>
struct Func_2_tED9D06B010C47140D19A9F12069EC70E636DD6B2;
// System.Func`2<System.Object,UnityEngine.Vector4>
struct Func_2_tFD4CFE66EC69C75B14AF028C7E410048B49CF76B;
// System.Func`2<System.Object,Mirror.NetworkBehaviour/NetworkBehaviourSyncVar>
struct Func_2_tF0F1FBB0AAD62EF5689E3AA3BC86C855DE5CBD59;
// System.Func`2<UnityEngine.RaycastHit2D,System.Boolean>
struct Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC;
// System.Collections.Generic.HashSet`1<Mirror.NetworkConnection>
struct HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05;
// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit2D>
struct IEnumerable_1_t49175DFA50AF85687547911DDB384AE5C4946F04;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_tADCF4A276B4B5CD47B446396D24DA0A5AD9DFC2A;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE;
// System.Collections.Generic.List`1<Mirror.SyncObject>
struct List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t699F71D324A4A1848FDA7FB1A88EEF27E8BD0E88;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Mirror.RemoteCalls.CmdDelegate
struct CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66;
// UnityEngine.Networking.HostTopology
struct HostTopology_t268779309BB2D69F29D1A182662C79818813892B;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// UnityEngine.InputSystem.InputAction
struct InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t7984DCECF082AB5EF114332E0A00AD4B3582A372;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6E8F55A3C3BAB2D7A66E5472A0CFA1B79551B329;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tB7367D1166814016C7E1BD0732A41DBA0FA33622;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tF0AEF1018EBA3AD9FF6D7CF527CF1767FFE5DEF7;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Mirror.NetworkBehaviour
struct NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4;
// Mirror.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC;
// Mirror.NetworkConnectionToClient
struct NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A;
// Mirror.NetworkReader
struct NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48;
// Mirror.NetworkWriter
struct NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Mirror.PooledNetworkWriter
struct PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t5A3703D259887235527744E2BD7095928D420ADD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t66675A75775137108E5F7FAB965F44B552778C26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t928C90600628DF3301846464535E0CBE3D956042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t04EF3A5777F40A74EFD067B934A0450866148824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t61544C42F8B241A1233CC53D76C007FD59735486_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t884310CBAF609B1E4C14090750447709C5A58716_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB004921AE76C91000E3C564021526D419AA05415_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostTopology_t268779309BB2D69F29D1A182662C79818813892B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t49175DFA50AF85687547911DDB384AE5C4946F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tB7C81A9166E0421E20BDEB36BB480064E959BAD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t083D8ECCB58680FD5D919A27D42D5ACF0F5CBDF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t0E048401E8CB5EA23C09C23DFF292DD90C284489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t1618FCE933BA5C4142B26CD9BDAC4BE2B9CE47E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t1D0C9C19E706375FB5BB1E0E6AEFF24F2046FFF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t23490D67AC0FE905168B2E5D08980FED9381EC5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t28097C6BE3F1165A7E9A049C1D10508E06599F10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t2C78F7653A80DB3B637D2505598C62E3A81A88C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t2D4A904E32DE6891875456A545C0BE46816CB0DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t2F750CA385B83B85E1825D294279C6DB9B937143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t31289F731ED08C00E01D693A5FA6C20632712F60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t340D3F9239427DD62799EBE36ADE5274D9C780D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t349D9B742117C8073A7EE742CDA91941B6124122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t357063289723594A62AA25F643AB8979B11971CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t35983FA9F2854E6C345A3FF9706A1D27239CD747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t3E0B740FC5A808266198C5E4269046DF99FD33B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t4D942A4723544426C6071DF37465EB5E82878B1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t4F4D4C3C395F0597BC569A6D5BFDB3DA83344FE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t51AE9286919DF853F6D3DDC634D1FBCE90823305_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t52506F20E01104A02733385E5D2D21E0CC0D0E0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t5B3DE2694EBA81CB860269A44E9264CBBAE5EA58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t5D243F5EADD994ACD26E6C77FBB35DB2B7864A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t5F26DA7CE87D41B03444F13381535B6CAA00437A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t5FB02F93316B95C8CD2ADA4302E0E52F3CC1C9D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t60302CAB2F448EBAFF6DF4F492A5C97E3E6DCF2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t66EB11CF15C6A06B2871B34E7777578BBDF5277F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t671D99F3FDF3E8352FB9385ECF9FE87EB4884819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t69D56AD78A1DBE6BC2A1A780EAFA93CFD7E83308_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t6ABFAAFEFF96CF19AEDE63D808EFBAA36DB06408_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t734F310639852E155413223CE0DE830EADFF4EE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t7A2156954D69733C46101A0628D92FC71B73AB88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t87C017328FEB29BF3E76B8764C7606A27FF2F89A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t8ADEFFD86BD11014D6D2EEA66E24FE5F3B8D0DC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t972E81DF5DE331AC45F67EE1FB8402DC7B95C121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t99BD16A088D1484FABA49E4992D9C1934F233F26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_t9B16EB42C995B6F650D19DC1C1E561AAF2B7F073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tA8EB3C44C1069B23FC475A54CE066FB2652E0963_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tADFE5277B2E01215CC9A6A026DABB39EB2741C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tB2C17950979DE98266B4EB12BA5ED44FE934BEAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tB68D5B89BF0CAA842F2197C7AAA3CE80621F04BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tBC4E6E25BAC8AD54B793870CE9A9D2AF01C98504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tBF17B5E508DC08A8555F20F9FB3E74192C4FC3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tC23BCC5B3A17A1A5143D0F4972C65BEDEAF43D0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tC45C4092A00BA402903F615C613FD0E1B36900A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tC4C890374E32D9A3E639294998A070FB501E1118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tCABE8B3791B8C7E935792A5B7B994627C06FB1A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tCB14FA9E272CD82A17C7089576D4D8CBAF87FF37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tD0E87201714A7263546D1E4A18123B2182244756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tD524544E894714A1FFAF1DE987881EEBD2EDBCA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tE671022E5A800674B392A84CDBB5D96E94D8714B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tF218968FA7DD9B32C7A20F23160E9AB28512B113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tF622DB33D28AD6D261EA88CED4B6703F7E1AA809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tF6F4BA71FF996017CE3A9DEE4CA96E9709BC28A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Reader_1_tF7730493A0864940B2C34DAECDF81E56AF524CD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t0715B02972DFC0935C9B2E48C57B51CE550E513D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t48BB1FBA5084DD891ADF80CAF010D36894B21B71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t4AD49574A8C2D2A5625C36BFB2C8D8ED547FEF6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t4B0E2F18F0DAB051EEA9161CDE2DDFB6E0752F6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t5DD65F78B74F3A48D19CE8E6DF017A29AC88CC6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t65DC0A2F1017439CFEE3D2BE7553E1966A5697D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t68972DB064C6BF5998674584511650B183CAACDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t93FF8F49891220AC926A6994ABAAAC1FCCC69813_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tAEAB6C44B9377EFAA5D77E2DCD1D7A5B8D701681_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tB0323AC0C818A4B8702754ABC81BBE76AD203D94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tCB081B0DDD2F9B8DCEB63F6D061832A40CF1B253_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tD346A524FDC0859D72436D2387BE7ECF7A0B8D2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tEED5FDB6FE6385A9AD6B02D5C74B35CFB433B4BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E25B1B36112CE405774F3AE89D20A4350F9E1BB;
IL2CPP_EXTERN_C String_t* _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7;
IL2CPP_EXTERN_C String_t* _stringLiteral496AC7BC87F25AB4A9E657BBCA5C85064ED5CAD3;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral91A1E86A4A1ACCB4CD55EEC0117CBDF58A9F021F;
IL2CPP_EXTERN_C String_t* _stringLiteral97C687FE2BA83A46207E9F527A74483A969631E0;
IL2CPP_EXTERN_C String_t* _stringLiteralAD916F41F847F4F5D39F47B90FC786789477A715;
IL2CPP_EXTERN_C String_t* _stringLiteralC14DCEA1BC16E3F4E76BA1E9FD3F6EDD2DD96708;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C04E31AE674380D16A947716FD138FE7F17B50;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B9183AF36803E008DBF965019A059B9130CA93;
IL2CPP_EXTERN_C String_t* _stringLiteralECE71252A47A7F50194E20A1AE3D7E53FE2A6D71;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m091F880AADDFD87B4518374CC00C37B91B4B456D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m0D482C7DA8A8651ED207A7E65D8F0354933ED753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m1025F6BC82608A23274E63C46219199F5FEB6862_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m1369D981F15BE3F5035215288D05882EA40F6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m1548A69A3B376F12C561974718E174940AA8FBE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m1AC2689951B7F51F80CD4E4758F9005A64A73BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m1CAFBAC36CA210FB9C0587864E1DF9CA4422A3C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m2365593AD21B593345E2FD3E29EC4E371FA17768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m261CC068AA9083B9077FF472CF00237591F24B16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m298F331E1E183EAA83607B14D4A20E09303CD594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m2A1F7D2C9775763CEE8063E554AE9F8ECF017D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m2E22F83A42E4D0460B184F70743E66E58C4CF77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m3136806DDFFA4F43DB62D141E811C23CE771F09C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m336BDEA9FF0F2B02D75D3005644D0903857486EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m483B17469257E2DA23721B287300CAF7C524BA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m492AC2BFBB4037EDCE4738F185A8BCD663A46AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m4E201B98D59A318F8CF143177AC43F923E76B34F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m4F330BA675F7662A6BB1E17073779F6ACFA40366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m5A1D161A3D700A96BE1F2FDE9645BB34A864CE53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m5E692933983CFB71B4321878D30D1DFEE3B36A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m5F20D89DCC6459F8E9E7F8FF48CB7690053A3020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m6883EDC5D3AE13CB023C1A016DB71EB923975345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m68E4871F1CA24036CEDC75FDE15FB81A266B60B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m6AA5E587A8D69613E23F8FF6F5A35270920E99DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m77708866B66D42375A39FBC272272CFEEA4AB3EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m7D555F1B8617CCAF5FAC8589E41742D733ECE93B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m7F88F339DD9921BFEA0BF7F21CB7A28A1580B100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m86612E2752088A7F8E97BDC84CAD5A28260BD4FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m8C4CBBDA44317866DF41D68074EB2DF53C2AA5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m8D10022EA4A6355224AAD8CE821B28C845296B76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m91B84B10A0E634282727565405A71EED418144A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m97C100FB2660EF471A0A7235179256541AA5497B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m9ADF7DA49508540415C7C8134DD2560676BD4965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m9B479585ED08803A9F0C2721E5900D38B3E76F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mA305F287E550F414D82F54D26BA4F566DF3BDD85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mA4E9C882696FD433AD0A0874172CCB18D379AC74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mA6524E64904D3CBEB386888C78CBC4C921FA15C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mABD9B647262242BFBF9DF30B2F09209CDB0E9C0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mB7DE8C4035310EC77D6EECE2B5C475FB1749DEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mB8BF1B3FD49FA72B97EDEFA1C274D22C57BBBED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mBAE5DEDD1B5DD112878F1C6AD8C0835A64873286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mC028AAEBCD414F3C888993D73AFD2A4F1EC1AD1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mC600CBEAB837FB52C0BC72AEAB8013F4D88FA68E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mC7E7DA96BA1FBF07C92E0B7E21EF59AE9C0282BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mCDC7DFCFB5EA8376AC8594484F8B3C7BBB3D78C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mE32D982104F660FC5785EA3DBF9A4428D2C9503A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mE3BE2C7CBD6BC6718335212AB39B68475C30E7BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mE5BE1B7B82D964AF74A0C18DE66B8663C35DF1E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mEA7A5BDFCD93241D636555FE072F97A2296A5D04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mF1EACD375A560B2CBCC6367753DCFE495736687F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mFB28F85055E20B6EECEF6A83D99A471E2E61EBE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mFB657F4245B20C4ABFADDD00C89EC25727CEE967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_m3709A2CCCDD05C8FCB003F8D423FC55F4970F318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_m73186B2B19D4C242E0E336B023CBC8EA445C188C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisRaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_mAFF3C52C8DC3A598C936360E97FC50B4B179D1E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0181C851DC29BF07BFF0781C797FA08B6F94EC1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m073C360C200A6DBB113F0963509A2D5E032DDA3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0840E6B2B87D2A7D3039422E284043A0F01EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m1AE09E66C0339B68037DC93F6D51062D3AB2B38D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m1E7E4E1A84E7651BA0D1DB67D52265E804813BF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2364D67B58BCBF14EB1FC0069E908C2390A2FAC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m25CDF42A2DF0659E3E45029511615A7BAF70B8C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m27EF1A3EC84C69F8C913CD59E9D3780AF6A69844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2978459CDF08053F19BBCD50A43CCA2E7B6BE21E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2985267B7382331DBF5FDA2425D9CBB2C9D677F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2EE7A55A352620604356D8A08DB8059C51773874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m307FD2EC7E1632076EF9EB169C9E3FDDBAE31633_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m30E5DEA1E27F9B92E336B03EB6A01D575C75D891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m40B2C3EF473C99701C93B4D94BB71B19E7893782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m41A790ECFA64EE0EE44A1D76055FE365D5DF27B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m50056E08735B45FFB2F9F6589D3765FDECECB5EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m59B3766E83584D7101A826CC4841619F4AF5CA71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m62C83AD97E869810AA1D2FDEBB0531CBC977828F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m68858CA20D9BB1A805424453E6C46E0C10C27EED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6CAE0D9ABD9E0A2D049597EFEDFFB37214A771E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6D263A67A11BF8079C28C7C34E830D2DF0D7AA9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m7D4C8B71BB03B86CE5155A2EF2527CF9DB8EDD65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m7F1F6989B89215B3E9E809EF6BE4BD19C4BB9512_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m818209E8857F6A8D1F300E7369B28685E8C861EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m8B28C387FA72ABB1529AA64815D6B6E3C95DCECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m8CD1F4AFF1384E81A4BB8381EF45024549E63991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m8F22D119560FDD4C3D1B5DBDCF178F11F1ADB95E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m93F3AACA6955FF8232F7687AC3C865CA3D6EAB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m9DAC470AF53A5F300E583FEE06190D4B5376539E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m9EBF03A8086223DA8C4B925E039CA211AD13F008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m9EF272CBC76494FFB93487082DB09BE929E54CFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA3F3B589E0AF9F5EBA00933C929283A857625BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA426F174B65F45CAD4647A6A43F74DA115E2286B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA70654B46B479B60C0A33856B45BAE7E2F58F296_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA7369B28D9217CB9FAB17B5B5CA1DF44B22E14E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB426AD57D56B3D11DEA09AF4DE5AF1A6D6730884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB5627FA811AF407E96C3E26A01471E19B1F2F202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBCF604956DBB47124B5F8C992562A69AC77CBA00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBE33BD4233BFFD381FE29248D0C1686869702006_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC0ECF79C8E98B8A38907F969023CF92FB8D65850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC230719162D7FF22A1F60979486519A3206109C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC35B5C0805198C69EAD7F374F774AC7E0D12A151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC7DEC070006E37253207DE0DDF15ACCEC753C5E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mC991B1B6B04195EF9D115D209AB08EEDD7AB6CAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mCFDAC257445CEAAB044AACD13D941445D6E3A1BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD145095A425FE0BA2744DD262256014FAF23DD5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mDE86F805FEC5DC8663A291366E5F7A952D26005E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mE3A3003655A3E8ECD0D97C48D350AD4106D8250E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF1BE232B010C7CA6B4FBC3D16835237A238223FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF4F3D5E183C6BCD218E57D59FA388C19936C0788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF68DA57BD57D394A290AC7CFDE46C915724DF971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF9DB01A6563F9C748912BA28F2C9EB9A76637F57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mFBE309B39B6DD81476653893EF9FB1F0FE3E7B29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mFCD7CB3E82D103FF5A8BDCE78BF6626DFD88E432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_AddPlayerMessage_m4C2E06F848D1B94DDC640AA0EFD0CA9C36721502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_CommandMessage_mECC34FB337A5D4B6EB3947644B7E02B8E8B00FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ConnectMessage_m93BA23C93888B0D7173C2B91A9E594A1B0B9C810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_DisconnectMessage_m590A66EBCEFE4A86249504263DE3C8A9CEFC1A1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ErrorMessage_m8A7F1680078AF95C443FFFABDF4BB63726437225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_NetworkPingMessage_mC2B3B4ACDDB56A809D86D120286A8173DBE447A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_NetworkPongMessage_m9386EC63A77EFEC9FDDEC75BB13EAFDDDAFC81F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_NotReadyMessage_mC6EA3B5AED8C4F9906B2F6C0312D1498D5DAA8E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ObjectDestroyMessage_m48B7D38F474720778F7EF9BCFC37F0B067357B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ObjectHideMessage_m0042FF82016C1FBA7250DA8ECC0BE2724CDC881A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ObjectSpawnFinishedMessage_m0B74EA49D498677A02AE9CABCD58AF792F7AA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ObjectSpawnStartedMessage_mFD106C9DC9281FFB5C54E9D7AE09DB9907368A91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_ReadyMessage_mE2B956FB18C72DB2AAF97D93CD7A1412D4A6B0BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_RpcMessage_m4D257364102F49B28E19CFCBF861C74C71C88CF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_SceneMessage_m4B63289E3849B01FD601A21B8E29E2F1ED1119B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_SceneOperation_m7DEB9A4BFB06C5A38C93BBAC31D4813AD99FD91D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_SpawnMessage_m31EC8220FAEFB8761E8DE1103A248C7BA2DE3783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Read_Mirror_UpdateVarsMessage_m6724C811B71DDE48CA81100D01CA6FF40676B261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_AddPlayerMessage_mAF8C12F87F2F0E51FA42578D82E57D5DE3AF01B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_CommandMessage_mA1685BE9E0633761FE517E4171DE64FFBDC397B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ConnectMessage_mD53F8B44F1D11F3BA468ADD169F17D73737DF978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_DisconnectMessage_mB1CA54449AEAACC9259E5E7949EE4AA31EC8833A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ErrorMessage_m5D80CC10A68818B9350AFA24544361806086FDD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_NetworkPingMessage_m6D621F939E48C0B3CA2E6149D71069C358ABDF93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_NetworkPongMessage_mCAC90209C64184AED8759A6972F1E69D26DDC000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_NotReadyMessage_m6C94EAA192195ACB7BCCB7E8A5FB2083FB0C7005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ObjectDestroyMessage_m843E69EF0CDF268B178138CDA80905687BAFEADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ObjectHideMessage_m1A8003BDD951D23C981F6F7BAB6F9F1569D0425C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ObjectSpawnFinishedMessage_m725199CA24E68A0A89E22B5BC1D0AE903671D1A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ObjectSpawnStartedMessage_m78BBD4AC106546B7F0A36394701C996EB561A462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_ReadyMessage_mDEE6F839CBFBC4FA67F9E4AB3E00479144EFE706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_RpcMessage_m3CFE1651CE89811888902FBB31AB092514F79F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_SceneMessage_mE1645ADD480391AB601EFE6065B1CDDD1E3B00C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_SceneOperation_m006CA70F6FCA7971B6FEC0A3A0EDE3D7BE1678E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_SpawnMessage_mD4D895651BE0B432E3FEB3132D0C374A30F73F9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedNetworkCode__Write_Mirror_UpdateVarsMessage_mE21DBDE7895DDD45CB9430868877CFB93E9C86FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mEA100777A815D7AD063E7C08485928DEFF124C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MoveByMouse_U3CStartU3Eb__7_0_mF465D36FCAE3943ECBDD80DE233296AF95A048D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkBehaviour_SetSyncVar_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB92AEF3F7E574E08410F051A969F1C955C85C8EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkBehaviour_SyncVarEqual_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B8AF1B3A139B3F543BC207AA2FE60B2D9FEF3E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadBoolean_mA9AED23EBC6083FDFFD749EED46F03BAFC6F0ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadByte_m86E3D12D2C1E2C447A4C2F20B808117DAA69571C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadBytesAndSizeSegment_m1750D52A666869DA2EC3C3A25E767834B9DA9E2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadBytesAndSize_m2EED0B100EFEDF9E1A4D2E9A429DBF3D4F8EA623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadChar_m1CD7BF565346230DFE2B29A62818C0DF4ED89AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadColor32_m7926AFB64529E5FC7C51D390468AAB86722D01F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadColor_m21E0B16FA466A4FDAEC8BE1C80E47C9BAE3217A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadDecimal_m0AE7D5057B858DB3A6C838CF3DF716707F3FA1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadDouble_m5800AF1FD52D7DB9047FE7B58A0BD38E23C94281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadGameObject_m50C52A705CA8F13E6B80746CB3F001CD82D42404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadGuid_m4BEDE3B6CE956D9B64BFF779754151F49B7A82CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadInt16_m125C98DDE87D530D04BA663BCA9CF9FADC69731D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadInt64_mAD215AD6D6571611F19D26468F422D93EE3029C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadMatrix4x4_m8C9D3E72F015488DA355F6E26FDCF6E0C52FC7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadNetworkBehaviourSyncVar_mC735015AC984ED517FB5EC9469C0A70181E6838F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadNetworkBehaviour_mAEDC6923777D5F941348F24C73586BB93353E492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadNetworkIdentity_m52CEFB599F366ADD367C0C23CFA163EBB0F6C764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadPlane_m5D8E59014B3ADD6108143CBB2C25DAA1DDD291C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadQuaternion_m2946D7DD55E1ED8EDEF82536F0D4246D42A22E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadRay_mD2A5A24032CB890240D7F5D94E8399E2766C05EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadRect_m75BCEF76E5C1CFEBE794A2FE5F52AA55DFBF3F85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadSByte_m8D3F2D88094079D5E0495FBBB3815DBAECB71CC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadSingle_m2DF644789D260209004F87C7996C41D6022D542F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadString_mA74E4612F529683A4AEEDB55C369CDEA32D222CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadTransform_m81B5B4E6C64D5C011B52262BDCDB1F34E0B50034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadUInt16_mA7151420E3D5805C98EE41B169CAA0DB313B33CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadUInt32_mF65B5680DA763162DCD1BCB53B225C38ACAE3C08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadUInt64_mF8CBCE7593E37A4C819D8D5461746D1360975252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadUri_m4D5B6761CC4A07C3E7F223B2DDF88EF4CACC3A3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadVector2Int_m0B0397F7BA2F4DE1E1A555E9EFEE676C38ECE40C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadVector2_mADCA4D375C619EE39C7ED83BC352C870897FEF6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadVector3Int_mD9A574478D0EC900DB9C50B000AE39148A429F68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkReaderExtensions_ReadVector4_m26621D658FD76A6A4D8EE73CE81739620A706997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteBoolean_m1286C9865F21B0EB024250572C0ADDC319782162_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteByte_mFFEFC20C5AB176841BBBE10C1E4A866EAF369B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteBytesAndSizeSegment_mAD214D7E8A080A5615D400A6C3F2F5218F3AD11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteBytesAndSize_mB11A8C12622432C14420D616F763F130DD1A91C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteChar_m14899B6388B37CA68D9BA49CF0BE0C3EE956E49E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteColor32_mC430555DAD65FA8A1ACA7117122960F6412B3079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteColor_m7EA61C4CEE7C0F49BCAF7339D1A76F4ECA50626E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteDecimal_m1F5400E8F7D91C15538FC724A4B430A818479431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteDouble_m40D19C266720079063B22A53B6940E1CF6482BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteGameObject_m461FDFA27D93D42B1C6C1B5F84EC2314E479E45B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteGuid_m1700462B08DC1D6B80FF00521C50C5A85E781AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteInt16_m5C7AE32A24F49E8EE8F42BE01BF5B5D7065FB47F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteInt64_m381C3EB4FED2C7C18CD6630ACCAC174FFC5E3C9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteMatrix4x4_m40B7941CFBB2912FA11AFB35F5729E4F2383BEAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteNetworkBehaviour_mCA7167729B04CFA80D5F7AB5D9C43FC24B4DF20D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteNetworkIdentity_m6B7BF775A09551E47F1E98F2603E0C3B8358FC64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WritePlane_m75F27F25C9E50A60C635D376D4C1D993D1376A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteQuaternion_m96A981CD95861D3F23358155CD1CCBCDF185D909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteRay_mF907AD59F7170BBB74CF49611FBBAF069DD6D1F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteRect_m1C462FFD3B7FE7B73B6F733CDECEDCBFFF9F3A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteSByte_m9AA9E2E5390BD4AC9CEA8A05EAE1234D9C48B8C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteTransform_m3118EFCE291DE2182B785E099FE30B3D68F36830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteUInt16_m7F8221AB37BDB8AC0765BDA883C6CA916CC812F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteUri_mECC3E974CD9C900CEBB24E5E4743DF2D41E3533F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteVector2Int_mDA0A622A19099A741DE393233204CD6FB89FF75A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteVector2_m52B333B1242AC5E0490DA980D5954157FDF9949F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteVector3Int_m4911D397D68D855E386699BB99ECF4BD0F5F7060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkWriterExtensions_WriteVector4_mE75893C683F8C655244CE272B0B050662E751414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerSoZ_InvokeUserCode_CmdTakeDamage_mADB0900557AD377C0044D5E8A293FF96210FB9B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerSoZ_InvokeUserCode_RpcTakeDamage_m3AD936204DB58D3C59B46E59C70604986EEFB9D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerSoZ_U3CAwakeU3Eb__6_0_m29B70F95406CEBC35CE5CCF357A271E0C03477E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerSoZ_U3CDoDamageU3Eb__15_0_m2C158F2B3CA5D255E3753EA269B3F5241CE79144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TCP_ConnectCallback_m1043C7C7057AE846610BB11A33906829CEA1CFB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t CameraFollow_Update_m9762CC5B7A2D28B7B8116BA8DE2342AFB654AB08_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Awake_mA2BD61DAA9395B0112C514E14DCAE22ADFED1C31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Start_mAA0DEE4ED95ED2398717EAEACBE426E281CCD7B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client__cctor_m5C60BAD649F302A787619657A38D96FECD07698A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client__ctor_mDA08C15041143F5993C7248B23E4DAC5E119C5D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode_InitReadWriters_mF3F676E480CD76ED8819C76E79234EED4737891B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_CommandMessage_mECC34FB337A5D4B6EB3947644B7E02B8E8B00FC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_ErrorMessage_m8A7F1680078AF95C443FFFABDF4BB63726437225_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_NetworkPingMessage_mC2B3B4ACDDB56A809D86D120286A8173DBE447A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_NetworkPongMessage_m9386EC63A77EFEC9FDDEC75BB13EAFDDDAFC81F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_ObjectDestroyMessage_m48B7D38F474720778F7EF9BCFC37F0B067357B03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_ObjectHideMessage_m0042FF82016C1FBA7250DA8ECC0BE2724CDC881A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_RpcMessage_m4D257364102F49B28E19CFCBF861C74C71C88CF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_SceneMessage_m4B63289E3849B01FD601A21B8E29E2F1ED1119B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_SceneOperation_m7DEB9A4BFB06C5A38C93BBAC31D4813AD99FD91D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_SpawnMessage_m31EC8220FAEFB8761E8DE1103A248C7BA2DE3783_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Read_Mirror_UpdateVarsMessage_m6724C811B71DDE48CA81100D01CA6FF40676B261_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_CommandMessage_mA1685BE9E0633761FE517E4171DE64FFBDC397B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_ErrorMessage_m5D80CC10A68818B9350AFA24544361806086FDD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_NetworkPingMessage_m6D621F939E48C0B3CA2E6149D71069C358ABDF93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_NetworkPongMessage_mCAC90209C64184AED8759A6972F1E69D26DDC000_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_ObjectDestroyMessage_m843E69EF0CDF268B178138CDA80905687BAFEADA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_ObjectHideMessage_m1A8003BDD951D23C981F6F7BAB6F9F1569D0425C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_RpcMessage_m3CFE1651CE89811888902FBB31AB092514F79F60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_SceneMessage_mE1645ADD480391AB601EFE6065B1CDDD1E3B00C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_SceneOperation_m006CA70F6FCA7971B6FEC0A3A0EDE3D7BE1678E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_SpawnMessage_mD4D895651BE0B432E3FEB3132D0C374A30F73F9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GeneratedNetworkCode__Write_Mirror_UpdateVarsMessage_mE21DBDE7895DDD45CB9430868877CFB93E9C86FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HealthBar__ctor_m0D26699B0FC0E360EE6F5D4B80FE0D2622F0AA48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseActions_SetCallbacks_m5C86CFC6BD59C9570695F61F95251F6040A29CC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseInput_Dispose_m599C2147166A02B43015CB536AFC86B2E27EC510_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseInput__ctor_mC64FF7F96156B5BBDFEAAB066D719045D14760B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveByMouse_Awake_mB4F757ADA2F83078C2B9958CDE26B210C7E01694_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveByMouse_MouseClickRight_m443738338EC4F90923C52535284E8F3302042AF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveByMouse_Start_mD828C1D54B3D8EBC13D03831C4A0237B96AA6565_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveByMouse_Update_mFDAD52F77EED73364E23DF81F00412F2019AD868_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveByMouse__ctor_mC329E75DE797194EA3E4B2B1DDAACF66993D1567_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEEAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_Awake_m843F2B63E5EECB5E85A2E856C89372BF4D942DCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_CmdTakeDamage_m7FEC161B1FC55EC82F91B0EBED1ACE13FA1F2F73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_DeserializeSyncVars_m58E891DA48F824C8905E7CEA9AAB911D6646EB23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_DoDamage_m954EF247F2FDE813EF69D5294A2F61F63855549D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_InvokeUserCode_CmdTakeDamage_mADB0900557AD377C0044D5E8A293FF96210FB9B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_InvokeUserCode_RpcTakeDamage_m3AD936204DB58D3C59B46E59C70604986EEFB9D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_OnStartLocalPlayer_m8FF414263DF16F93A33259CA08FBC72C90AB79FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_RpcTakeDamage_mEDBF19EDAC999A99EAA8E6C2280F7776A296974F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_SerializeSyncVars_m9F8BD94056113C6C72F510F3ADB816688337B215_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_U3CDoDamageU3Eb__15_0_m2C158F2B3CA5D255E3753EA269B3F5241CE79144_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_UserCode_RpcTakeDamage_m335743DF7BBB17604A4B3A7389599CCF4410854E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ__cctor_m4367790B1BFB83B426AB77F11E13C0BEDC499D32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ__ctor_m015633265F35A7FA605E4A9B101A3E55B729F77F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerSoZ_set_NetworkcurrentHealth_mB06220DA77F987429358921E55DBBCFDBB0610EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Start_m22151FA41E5A2827E81A9CB2C61920A7D6F8612A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Update_mED10059C893497EC4235F83FF1A0692A8FE68A7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server__ctor_m6B8BA5160800C8C0C908BB87079C08476F6709A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TCP_ConnectCallback_m1043C7C7057AE846610BB11A33906829CEA1CFB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TCP_Connect_m646BEC747EB079EAE7CC9631039F4A2F83EB2F1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_Awake_mCED93604270B1E209B4E0D32F6A26DDC5AB06E30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_ConnectedToServer_mBDC9E0EC2E062A6705E651C5BDFBB650CA3F39CF_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// Client_TCP
struct  TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F  : public RuntimeObject
{
public:
	// System.Net.Sockets.TcpClient Client_TCP::socket
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___socket_0;
	// System.Net.Sockets.NetworkStream Client_TCP::stream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream_1;
	// System.Byte[] Client_TCP::receiveBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___receiveBuffer_2;

public:
	inline static int32_t get_offset_of_socket_0() { return static_cast<int32_t>(offsetof(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F, ___socket_0)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get_socket_0() const { return ___socket_0; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of_socket_0() { return &___socket_0; }
	inline void set_socket_0(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		___socket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_0), (void*)value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F, ___stream_1)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_stream_1() const { return ___stream_1; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_receiveBuffer_2() { return static_cast<int32_t>(offsetof(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F, ___receiveBuffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_receiveBuffer_2() const { return ___receiveBuffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_receiveBuffer_2() { return &___receiveBuffer_2; }
	inline void set_receiveBuffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___receiveBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveBuffer_2), (void*)value);
	}
};


// Mirror.GeneratedNetworkCode
struct  GeneratedNetworkCode_tA5DCDE73EABE64446CC3985FE891D3CA9B55A51E  : public RuntimeObject
{
public:

public:
};


// Mirror.NetworkConnection
struct  NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::visList
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___visList_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkConnection::messageHandlers
	Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * ___messageHandlers_3;
	// System.Int32 Mirror.NetworkConnection::connectionId
	int32_t ___connectionId_4;
	// System.Boolean Mirror.NetworkConnection::isAuthenticated
	bool ___isAuthenticated_5;
	// System.Object Mirror.NetworkConnection::authenticationData
	RuntimeObject * ___authenticationData_6;
	// System.Boolean Mirror.NetworkConnection::isReady
	bool ___isReady_7;
	// System.Single Mirror.NetworkConnection::lastMessageTime
	float ___lastMessageTime_8;
	// Mirror.NetworkIdentity Mirror.NetworkConnection::<identity>k__BackingField
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___U3CidentityU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::clientOwnedObjects
	HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * ___clientOwnedObjects_10;

public:
	inline static int32_t get_offset_of_visList_2() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___visList_2)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get_visList_2() const { return ___visList_2; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of_visList_2() { return &___visList_2; }
	inline void set_visList_2(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		___visList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visList_2), (void*)value);
	}

	inline static int32_t get_offset_of_messageHandlers_3() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___messageHandlers_3)); }
	inline Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * get_messageHandlers_3() const { return ___messageHandlers_3; }
	inline Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB ** get_address_of_messageHandlers_3() { return &___messageHandlers_3; }
	inline void set_messageHandlers_3(Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * value)
	{
		___messageHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHandlers_3), (void*)value);
	}

	inline static int32_t get_offset_of_connectionId_4() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___connectionId_4)); }
	inline int32_t get_connectionId_4() const { return ___connectionId_4; }
	inline int32_t* get_address_of_connectionId_4() { return &___connectionId_4; }
	inline void set_connectionId_4(int32_t value)
	{
		___connectionId_4 = value;
	}

	inline static int32_t get_offset_of_isAuthenticated_5() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___isAuthenticated_5)); }
	inline bool get_isAuthenticated_5() const { return ___isAuthenticated_5; }
	inline bool* get_address_of_isAuthenticated_5() { return &___isAuthenticated_5; }
	inline void set_isAuthenticated_5(bool value)
	{
		___isAuthenticated_5 = value;
	}

	inline static int32_t get_offset_of_authenticationData_6() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___authenticationData_6)); }
	inline RuntimeObject * get_authenticationData_6() const { return ___authenticationData_6; }
	inline RuntimeObject ** get_address_of_authenticationData_6() { return &___authenticationData_6; }
	inline void set_authenticationData_6(RuntimeObject * value)
	{
		___authenticationData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticationData_6), (void*)value);
	}

	inline static int32_t get_offset_of_isReady_7() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___isReady_7)); }
	inline bool get_isReady_7() const { return ___isReady_7; }
	inline bool* get_address_of_isReady_7() { return &___isReady_7; }
	inline void set_isReady_7(bool value)
	{
		___isReady_7 = value;
	}

	inline static int32_t get_offset_of_lastMessageTime_8() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___lastMessageTime_8)); }
	inline float get_lastMessageTime_8() const { return ___lastMessageTime_8; }
	inline float* get_address_of_lastMessageTime_8() { return &___lastMessageTime_8; }
	inline void set_lastMessageTime_8(float value)
	{
		___lastMessageTime_8 = value;
	}

	inline static int32_t get_offset_of_U3CidentityU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___U3CidentityU3Ek__BackingField_9)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_U3CidentityU3Ek__BackingField_9() const { return ___U3CidentityU3Ek__BackingField_9; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_U3CidentityU3Ek__BackingField_9() { return &___U3CidentityU3Ek__BackingField_9; }
	inline void set_U3CidentityU3Ek__BackingField_9(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___U3CidentityU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidentityU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_clientOwnedObjects_10() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311, ___clientOwnedObjects_10)); }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * get_clientOwnedObjects_10() const { return ___clientOwnedObjects_10; }
	inline HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB ** get_address_of_clientOwnedObjects_10() { return &___clientOwnedObjects_10; }
	inline void set_clientOwnedObjects_10(HashSet_1_t19F8A6C377BCFE856EC71FD9AFD391FB6B07C9FB * value)
	{
		___clientOwnedObjects_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientOwnedObjects_10), (void*)value);
	}
};

struct NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkConnection::logger
	RuntimeObject* ___logger_1;

public:
	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311_StaticFields, ___logger_1)); }
	inline RuntimeObject* get_logger_1() const { return ___logger_1; }
	inline RuntimeObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(RuntimeObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_1), (void*)value);
	}
};


// Mirror.NetworkReaderExtensions
struct  NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8  : public RuntimeObject
{
public:

public:
};

struct NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkReaderExtensions::logger
	RuntimeObject* ___logger_0;
	// System.Text.UTF8Encoding Mirror.NetworkReaderExtensions::encoding
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding_1;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_StaticFields, ___logger_0)); }
	inline RuntimeObject* get_logger_0() const { return ___logger_0; }
	inline RuntimeObject** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(RuntimeObject* value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_0), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_StaticFields, ___encoding_1)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get_encoding_1() const { return ___encoding_1; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_1), (void*)value);
	}
};


// Mirror.NetworkServer
struct  NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD  : public RuntimeObject
{
public:

public:
};

struct NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkServer::logger
	RuntimeObject* ___logger_0;
	// System.Boolean Mirror.NetworkServer::initialized
	bool ___initialized_1;
	// System.Int32 Mirror.NetworkServer::maxConnections
	int32_t ___maxConnections_2;
	// Mirror.NetworkConnectionToClient Mirror.NetworkServer::<localConnection>k__BackingField
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___U3ClocalConnectionU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient> Mirror.NetworkServer::connections
	Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * ___connections_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkServer::handlers
	Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * ___handlers_5;
	// System.Boolean Mirror.NetworkServer::dontListen
	bool ___dontListen_6;
	// System.Boolean Mirror.NetworkServer::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_7;
	// System.Boolean Mirror.NetworkServer::disconnectInactiveConnections
	bool ___disconnectInactiveConnections_8;
	// System.Single Mirror.NetworkServer::disconnectInactiveTimeout
	float ___disconnectInactiveTimeout_9;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___logger_0)); }
	inline RuntimeObject* get_logger_0() const { return ___logger_0; }
	inline RuntimeObject** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(RuntimeObject* value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_0), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_maxConnections_2() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___maxConnections_2)); }
	inline int32_t get_maxConnections_2() const { return ___maxConnections_2; }
	inline int32_t* get_address_of_maxConnections_2() { return &___maxConnections_2; }
	inline void set_maxConnections_2(int32_t value)
	{
		___maxConnections_2 = value;
	}

	inline static int32_t get_offset_of_U3ClocalConnectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___U3ClocalConnectionU3Ek__BackingField_3)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get_U3ClocalConnectionU3Ek__BackingField_3() const { return ___U3ClocalConnectionU3Ek__BackingField_3; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of_U3ClocalConnectionU3Ek__BackingField_3() { return &___U3ClocalConnectionU3Ek__BackingField_3; }
	inline void set_U3ClocalConnectionU3Ek__BackingField_3(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		___U3ClocalConnectionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalConnectionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_connections_4() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___connections_4)); }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * get_connections_4() const { return ___connections_4; }
	inline Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 ** get_address_of_connections_4() { return &___connections_4; }
	inline void set_connections_4(Dictionary_2_tAD6238DE65EB68DD8A388524E59EB7B8AA098999 * value)
	{
		___connections_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_4), (void*)value);
	}

	inline static int32_t get_offset_of_handlers_5() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___handlers_5)); }
	inline Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * get_handlers_5() const { return ___handlers_5; }
	inline Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB ** get_address_of_handlers_5() { return &___handlers_5; }
	inline void set_handlers_5(Dictionary_2_tC3C248F59C2707C10E1B8F9FE8600CF35FE29EDB * value)
	{
		___handlers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_5), (void*)value);
	}

	inline static int32_t get_offset_of_dontListen_6() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___dontListen_6)); }
	inline bool get_dontListen_6() const { return ___dontListen_6; }
	inline bool* get_address_of_dontListen_6() { return &___dontListen_6; }
	inline void set_dontListen_6(bool value)
	{
		___dontListen_6 = value;
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___U3CactiveU3Ek__BackingField_7)); }
	inline bool get_U3CactiveU3Ek__BackingField_7() const { return ___U3CactiveU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_7() { return &___U3CactiveU3Ek__BackingField_7; }
	inline void set_U3CactiveU3Ek__BackingField_7(bool value)
	{
		___U3CactiveU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_disconnectInactiveConnections_8() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___disconnectInactiveConnections_8)); }
	inline bool get_disconnectInactiveConnections_8() const { return ___disconnectInactiveConnections_8; }
	inline bool* get_address_of_disconnectInactiveConnections_8() { return &___disconnectInactiveConnections_8; }
	inline void set_disconnectInactiveConnections_8(bool value)
	{
		___disconnectInactiveConnections_8 = value;
	}

	inline static int32_t get_offset_of_disconnectInactiveTimeout_9() { return static_cast<int32_t>(offsetof(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields, ___disconnectInactiveTimeout_9)); }
	inline float get_disconnectInactiveTimeout_9() const { return ___disconnectInactiveTimeout_9; }
	inline float* get_address_of_disconnectInactiveTimeout_9() { return &___disconnectInactiveTimeout_9; }
	inline void set_disconnectInactiveTimeout_9(float value)
	{
		___disconnectInactiveTimeout_9 = value;
	}
};


// Mirror.NetworkWriter
struct  NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A  : public RuntimeObject
{
public:
	// System.Byte[] Mirror.NetworkWriter::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_2;
	// System.Int32 Mirror.NetworkWriter::position
	int32_t ___position_3;
	// System.Int32 Mirror.NetworkWriter::length
	int32_t ___length_4;

public:
	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___buffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_2() const { return ___buffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___position_3)); }
	inline int32_t get_position_3() const { return ___position_3; }
	inline int32_t* get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(int32_t value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}
};

struct NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkWriter::logger
	RuntimeObject* ___logger_0;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A_StaticFields, ___logger_0)); }
	inline RuntimeObject* get_logger_0() const { return ___logger_0; }
	inline RuntimeObject** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(RuntimeObject* value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_0), (void*)value);
	}
};


// Mirror.NetworkWriterExtensions
struct  NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2  : public RuntimeObject
{
public:

public:
};

struct NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkWriterExtensions::logger
	RuntimeObject* ___logger_0;
	// System.Text.UTF8Encoding Mirror.NetworkWriterExtensions::encoding
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding_1;
	// System.Byte[] Mirror.NetworkWriterExtensions::stringBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___stringBuffer_2;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields, ___logger_0)); }
	inline RuntimeObject* get_logger_0() const { return ___logger_0; }
	inline RuntimeObject** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(RuntimeObject* value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_0), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields, ___encoding_1)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get_encoding_1() const { return ___encoding_1; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_stringBuffer_2() { return static_cast<int32_t>(offsetof(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_StaticFields, ___stringBuffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_stringBuffer_2() const { return ___stringBuffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_stringBuffer_2() { return &___stringBuffer_2; }
	inline void set_stringBuffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___stringBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringBuffer_2), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.AddPlayerMessage>
struct  Reader_1_t23490D67AC0FE905168B2E5D08980FED9381EC5F  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t23490D67AC0FE905168B2E5D08980FED9381EC5F_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t23490D67AC0FE905168B2E5D08980FED9381EC5F_StaticFields, ___read_0)); }
	inline Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1 * get_read_0() const { return ___read_0; }
	inline Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.CommandMessage>
struct  Reader_1_tA8EB3C44C1069B23FC475A54CE066FB2652E0963  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tA8EB3C44C1069B23FC475A54CE066FB2652E0963_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tA8EB3C44C1069B23FC475A54CE066FB2652E0963_StaticFields, ___read_0)); }
	inline Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E * get_read_0() const { return ___read_0; }
	inline Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ConnectMessage>
struct  Reader_1_t4D942A4723544426C6071DF37465EB5E82878B1B  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t4D942A4723544426C6071DF37465EB5E82878B1B_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t4D942A4723544426C6071DF37465EB5E82878B1B_StaticFields, ___read_0)); }
	inline Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C * get_read_0() const { return ___read_0; }
	inline Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.DisconnectMessage>
struct  Reader_1_tF7730493A0864940B2C34DAECDF81E56AF524CD5  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tF7730493A0864940B2C34DAECDF81E56AF524CD5_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tF7730493A0864940B2C34DAECDF81E56AF524CD5_StaticFields, ___read_0)); }
	inline Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0 * get_read_0() const { return ___read_0; }
	inline Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ErrorMessage>
struct  Reader_1_t28097C6BE3F1165A7E9A049C1D10508E06599F10  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t28097C6BE3F1165A7E9A049C1D10508E06599F10_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t28097C6BE3F1165A7E9A049C1D10508E06599F10_StaticFields, ___read_0)); }
	inline Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504 * get_read_0() const { return ___read_0; }
	inline Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NetworkBehaviour_NetworkBehaviourSyncVar>
struct  Reader_1_t5D243F5EADD994ACD26E6C77FBB35DB2B7864A8B  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t5D243F5EADD994ACD26E6C77FBB35DB2B7864A8B_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t04EF3A5777F40A74EFD067B934A0450866148824 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t5D243F5EADD994ACD26E6C77FBB35DB2B7864A8B_StaticFields, ___read_0)); }
	inline Func_2_t04EF3A5777F40A74EFD067B934A0450866148824 * get_read_0() const { return ___read_0; }
	inline Func_2_t04EF3A5777F40A74EFD067B934A0450866148824 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t04EF3A5777F40A74EFD067B934A0450866148824 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NetworkBehaviour>
struct  Reader_1_tC23BCC5B3A17A1A5143D0F4972C65BEDEAF43D0E  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tC23BCC5B3A17A1A5143D0F4972C65BEDEAF43D0E_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tC23BCC5B3A17A1A5143D0F4972C65BEDEAF43D0E_StaticFields, ___read_0)); }
	inline Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7 * get_read_0() const { return ___read_0; }
	inline Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NetworkIdentity>
struct  Reader_1_t2D4A904E32DE6891875456A545C0BE46816CB0DF  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t2D4A904E32DE6891875456A545C0BE46816CB0DF_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t2D4A904E32DE6891875456A545C0BE46816CB0DF_StaticFields, ___read_0)); }
	inline Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996 * get_read_0() const { return ___read_0; }
	inline Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NetworkPingMessage>
struct  Reader_1_t87C017328FEB29BF3E76B8764C7606A27FF2F89A  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t87C017328FEB29BF3E76B8764C7606A27FF2F89A_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t87C017328FEB29BF3E76B8764C7606A27FF2F89A_StaticFields, ___read_0)); }
	inline Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532 * get_read_0() const { return ___read_0; }
	inline Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NetworkPongMessage>
struct  Reader_1_t4F4D4C3C395F0597BC569A6D5BFDB3DA83344FE1  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t4F4D4C3C395F0597BC569A6D5BFDB3DA83344FE1_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t4F4D4C3C395F0597BC569A6D5BFDB3DA83344FE1_StaticFields, ___read_0)); }
	inline Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F * get_read_0() const { return ___read_0; }
	inline Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.NotReadyMessage>
struct  Reader_1_tC4C890374E32D9A3E639294998A070FB501E1118  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tC4C890374E32D9A3E639294998A070FB501E1118_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tC4C890374E32D9A3E639294998A070FB501E1118_StaticFields, ___read_0)); }
	inline Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3 * get_read_0() const { return ___read_0; }
	inline Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ObjectDestroyMessage>
struct  Reader_1_tD524544E894714A1FFAF1DE987881EEBD2EDBCA9  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tD524544E894714A1FFAF1DE987881EEBD2EDBCA9_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tD524544E894714A1FFAF1DE987881EEBD2EDBCA9_StaticFields, ___read_0)); }
	inline Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1 * get_read_0() const { return ___read_0; }
	inline Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ObjectHideMessage>
struct  Reader_1_t5B3DE2694EBA81CB860269A44E9264CBBAE5EA58  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t5B3DE2694EBA81CB860269A44E9264CBBAE5EA58_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t5B3DE2694EBA81CB860269A44E9264CBBAE5EA58_StaticFields, ___read_0)); }
	inline Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6 * get_read_0() const { return ___read_0; }
	inline Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ObjectSpawnFinishedMessage>
struct  Reader_1_t671D99F3FDF3E8352FB9385ECF9FE87EB4884819  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t671D99F3FDF3E8352FB9385ECF9FE87EB4884819_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t671D99F3FDF3E8352FB9385ECF9FE87EB4884819_StaticFields, ___read_0)); }
	inline Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03 * get_read_0() const { return ___read_0; }
	inline Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ObjectSpawnStartedMessage>
struct  Reader_1_tBC4E6E25BAC8AD54B793870CE9A9D2AF01C98504  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tBC4E6E25BAC8AD54B793870CE9A9D2AF01C98504_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tBC4E6E25BAC8AD54B793870CE9A9D2AF01C98504_StaticFields, ___read_0)); }
	inline Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A * get_read_0() const { return ___read_0; }
	inline Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.ReadyMessage>
struct  Reader_1_t2C78F7653A80DB3B637D2505598C62E3A81A88C8  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t2C78F7653A80DB3B637D2505598C62E3A81A88C8_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t61544C42F8B241A1233CC53D76C007FD59735486 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t2C78F7653A80DB3B637D2505598C62E3A81A88C8_StaticFields, ___read_0)); }
	inline Func_2_t61544C42F8B241A1233CC53D76C007FD59735486 * get_read_0() const { return ___read_0; }
	inline Func_2_t61544C42F8B241A1233CC53D76C007FD59735486 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t61544C42F8B241A1233CC53D76C007FD59735486 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.RpcMessage>
struct  Reader_1_t349D9B742117C8073A7EE742CDA91941B6124122  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t349D9B742117C8073A7EE742CDA91941B6124122_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t349D9B742117C8073A7EE742CDA91941B6124122_StaticFields, ___read_0)); }
	inline Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585 * get_read_0() const { return ___read_0; }
	inline Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.SceneMessage>
struct  Reader_1_tF218968FA7DD9B32C7A20F23160E9AB28512B113  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tF218968FA7DD9B32C7A20F23160E9AB28512B113_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tF218968FA7DD9B32C7A20F23160E9AB28512B113_StaticFields, ___read_0)); }
	inline Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89 * get_read_0() const { return ___read_0; }
	inline Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.SceneOperation>
struct  Reader_1_t1618FCE933BA5C4142B26CD9BDAC4BE2B9CE47E0  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t1618FCE933BA5C4142B26CD9BDAC4BE2B9CE47E0_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t1618FCE933BA5C4142B26CD9BDAC4BE2B9CE47E0_StaticFields, ___read_0)); }
	inline Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD * get_read_0() const { return ___read_0; }
	inline Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.SpawnMessage>
struct  Reader_1_t8ADEFFD86BD11014D6D2EEA66E24FE5F3B8D0DC3  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t8ADEFFD86BD11014D6D2EEA66E24FE5F3B8D0DC3_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t8ADEFFD86BD11014D6D2EEA66E24FE5F3B8D0DC3_StaticFields, ___read_0)); }
	inline Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB * get_read_0() const { return ___read_0; }
	inline Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<Mirror.UpdateVarsMessage>
struct  Reader_1_t357063289723594A62AA25F643AB8979B11971CE  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t357063289723594A62AA25F643AB8979B11971CE_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t357063289723594A62AA25F643AB8979B11971CE_StaticFields, ___read_0)); }
	inline Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D * get_read_0() const { return ___read_0; }
	inline Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.ArraySegment`1<System.Byte>>
struct  Reader_1_t7A2156954D69733C46101A0628D92FC71B73AB88  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t7A2156954D69733C46101A0628D92FC71B73AB88_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t7A2156954D69733C46101A0628D92FC71B73AB88_StaticFields, ___read_0)); }
	inline Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4 * get_read_0() const { return ___read_0; }
	inline Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Boolean>
struct  Reader_1_tC45C4092A00BA402903F615C613FD0E1B36900A3  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tC45C4092A00BA402903F615C613FD0E1B36900A3_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tC45C4092A00BA402903F615C613FD0E1B36900A3_StaticFields, ___read_0)); }
	inline Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7 * get_read_0() const { return ___read_0; }
	inline Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Byte>
struct  Reader_1_t734F310639852E155413223CE0DE830EADFF4EE1  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t734F310639852E155413223CE0DE830EADFF4EE1_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t734F310639852E155413223CE0DE830EADFF4EE1_StaticFields, ___read_0)); }
	inline Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C * get_read_0() const { return ___read_0; }
	inline Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Byte[]>
struct  Reader_1_tADFE5277B2E01215CC9A6A026DABB39EB2741C24  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tADFE5277B2E01215CC9A6A026DABB39EB2741C24_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tADFE5277B2E01215CC9A6A026DABB39EB2741C24_StaticFields, ___read_0)); }
	inline Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591 * get_read_0() const { return ___read_0; }
	inline Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Char>
struct  Reader_1_t2F750CA385B83B85E1825D294279C6DB9B937143  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t2F750CA385B83B85E1825D294279C6DB9B937143_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t2F750CA385B83B85E1825D294279C6DB9B937143_StaticFields, ___read_0)); }
	inline Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6 * get_read_0() const { return ___read_0; }
	inline Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Decimal>
struct  Reader_1_t66EB11CF15C6A06B2871B34E7777578BBDF5277F  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t66EB11CF15C6A06B2871B34E7777578BBDF5277F_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t66EB11CF15C6A06B2871B34E7777578BBDF5277F_StaticFields, ___read_0)); }
	inline Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA * get_read_0() const { return ___read_0; }
	inline Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Double>
struct  Reader_1_tCABE8B3791B8C7E935792A5B7B994627C06FB1A6  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tCABE8B3791B8C7E935792A5B7B994627C06FB1A6_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tCABE8B3791B8C7E935792A5B7B994627C06FB1A6_StaticFields, ___read_0)); }
	inline Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD * get_read_0() const { return ___read_0; }
	inline Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Guid>
struct  Reader_1_tB68D5B89BF0CAA842F2197C7AAA3CE80621F04BB  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tB68D5B89BF0CAA842F2197C7AAA3CE80621F04BB_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tB68D5B89BF0CAA842F2197C7AAA3CE80621F04BB_StaticFields, ___read_0)); }
	inline Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7 * get_read_0() const { return ___read_0; }
	inline Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Int16>
struct  Reader_1_tF6F4BA71FF996017CE3A9DEE4CA96E9709BC28A8  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tF6F4BA71FF996017CE3A9DEE4CA96E9709BC28A8_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tB004921AE76C91000E3C564021526D419AA05415 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tF6F4BA71FF996017CE3A9DEE4CA96E9709BC28A8_StaticFields, ___read_0)); }
	inline Func_2_tB004921AE76C91000E3C564021526D419AA05415 * get_read_0() const { return ___read_0; }
	inline Func_2_tB004921AE76C91000E3C564021526D419AA05415 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tB004921AE76C91000E3C564021526D419AA05415 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Int32>
struct  Reader_1_tE671022E5A800674B392A84CDBB5D96E94D8714B  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tE671022E5A800674B392A84CDBB5D96E94D8714B_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tE671022E5A800674B392A84CDBB5D96E94D8714B_StaticFields, ___read_0)); }
	inline Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701 * get_read_0() const { return ___read_0; }
	inline Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Int64>
struct  Reader_1_tCB14FA9E272CD82A17C7089576D4D8CBAF87FF37  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tCB14FA9E272CD82A17C7089576D4D8CBAF87FF37_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tCB14FA9E272CD82A17C7089576D4D8CBAF87FF37_StaticFields, ___read_0)); }
	inline Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806 * get_read_0() const { return ___read_0; }
	inline Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.SByte>
struct  Reader_1_t51AE9286919DF853F6D3DDC634D1FBCE90823305  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t51AE9286919DF853F6D3DDC634D1FBCE90823305_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t51AE9286919DF853F6D3DDC634D1FBCE90823305_StaticFields, ___read_0)); }
	inline Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A * get_read_0() const { return ___read_0; }
	inline Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Single>
struct  Reader_1_t083D8ECCB58680FD5D919A27D42D5ACF0F5CBDF8  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t083D8ECCB58680FD5D919A27D42D5ACF0F5CBDF8_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t083D8ECCB58680FD5D919A27D42D5ACF0F5CBDF8_StaticFields, ___read_0)); }
	inline Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3 * get_read_0() const { return ___read_0; }
	inline Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.String>
struct  Reader_1_t31289F731ED08C00E01D693A5FA6C20632712F60  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t31289F731ED08C00E01D693A5FA6C20632712F60_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t31289F731ED08C00E01D693A5FA6C20632712F60_StaticFields, ___read_0)); }
	inline Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1 * get_read_0() const { return ___read_0; }
	inline Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.UInt16>
struct  Reader_1_tBF17B5E508DC08A8555F20F9FB3E74192C4FC3FB  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tBF17B5E508DC08A8555F20F9FB3E74192C4FC3FB_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tBF17B5E508DC08A8555F20F9FB3E74192C4FC3FB_StaticFields, ___read_0)); }
	inline Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD * get_read_0() const { return ___read_0; }
	inline Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.UInt32>
struct  Reader_1_tD0E87201714A7263546D1E4A18123B2182244756  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tD0E87201714A7263546D1E4A18123B2182244756_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tD0E87201714A7263546D1E4A18123B2182244756_StaticFields, ___read_0)); }
	inline Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071 * get_read_0() const { return ___read_0; }
	inline Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.UInt64>
struct  Reader_1_tF622DB33D28AD6D261EA88CED4B6703F7E1AA809  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tF622DB33D28AD6D261EA88CED4B6703F7E1AA809_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tF622DB33D28AD6D261EA88CED4B6703F7E1AA809_StaticFields, ___read_0)); }
	inline Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A * get_read_0() const { return ___read_0; }
	inline Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<System.Uri>
struct  Reader_1_t69D56AD78A1DBE6BC2A1A780EAFA93CFD7E83308  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t69D56AD78A1DBE6BC2A1A780EAFA93CFD7E83308_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t69D56AD78A1DBE6BC2A1A780EAFA93CFD7E83308_StaticFields, ___read_0)); }
	inline Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857 * get_read_0() const { return ___read_0; }
	inline Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Color32>
struct  Reader_1_tB2C17950979DE98266B4EB12BA5ED44FE934BEAC  : public RuntimeObject
{
public:

public:
};

struct Reader_1_tB2C17950979DE98266B4EB12BA5ED44FE934BEAC_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_tB2C17950979DE98266B4EB12BA5ED44FE934BEAC_StaticFields, ___read_0)); }
	inline Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25 * get_read_0() const { return ___read_0; }
	inline Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Color>
struct  Reader_1_t1D0C9C19E706375FB5BB1E0E6AEFF24F2046FFF6  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t1D0C9C19E706375FB5BB1E0E6AEFF24F2046FFF6_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t884310CBAF609B1E4C14090750447709C5A58716 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t1D0C9C19E706375FB5BB1E0E6AEFF24F2046FFF6_StaticFields, ___read_0)); }
	inline Func_2_t884310CBAF609B1E4C14090750447709C5A58716 * get_read_0() const { return ___read_0; }
	inline Func_2_t884310CBAF609B1E4C14090750447709C5A58716 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t884310CBAF609B1E4C14090750447709C5A58716 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.GameObject>
struct  Reader_1_t5F26DA7CE87D41B03444F13381535B6CAA00437A  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t5F26DA7CE87D41B03444F13381535B6CAA00437A_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t5F26DA7CE87D41B03444F13381535B6CAA00437A_StaticFields, ___read_0)); }
	inline Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4 * get_read_0() const { return ___read_0; }
	inline Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Matrix4x4>
struct  Reader_1_t60302CAB2F448EBAFF6DF4F492A5C97E3E6DCF2B  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t60302CAB2F448EBAFF6DF4F492A5C97E3E6DCF2B_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t60302CAB2F448EBAFF6DF4F492A5C97E3E6DCF2B_StaticFields, ___read_0)); }
	inline Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B * get_read_0() const { return ___read_0; }
	inline Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Plane>
struct  Reader_1_t35983FA9F2854E6C345A3FF9706A1D27239CD747  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t35983FA9F2854E6C345A3FF9706A1D27239CD747_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t35983FA9F2854E6C345A3FF9706A1D27239CD747_StaticFields, ___read_0)); }
	inline Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D * get_read_0() const { return ___read_0; }
	inline Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Quaternion>
struct  Reader_1_t99BD16A088D1484FABA49E4992D9C1934F233F26  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t99BD16A088D1484FABA49E4992D9C1934F233F26_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t99BD16A088D1484FABA49E4992D9C1934F233F26_StaticFields, ___read_0)); }
	inline Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC * get_read_0() const { return ___read_0; }
	inline Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Ray>
struct  Reader_1_t5FB02F93316B95C8CD2ADA4302E0E52F3CC1C9D3  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t5FB02F93316B95C8CD2ADA4302E0E52F3CC1C9D3_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t5FB02F93316B95C8CD2ADA4302E0E52F3CC1C9D3_StaticFields, ___read_0)); }
	inline Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094 * get_read_0() const { return ___read_0; }
	inline Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Rect>
struct  Reader_1_t972E81DF5DE331AC45F67EE1FB8402DC7B95C121  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t972E81DF5DE331AC45F67EE1FB8402DC7B95C121_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t972E81DF5DE331AC45F67EE1FB8402DC7B95C121_StaticFields, ___read_0)); }
	inline Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3 * get_read_0() const { return ___read_0; }
	inline Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Transform>
struct  Reader_1_t340D3F9239427DD62799EBE36ADE5274D9C780D4  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t340D3F9239427DD62799EBE36ADE5274D9C780D4_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t340D3F9239427DD62799EBE36ADE5274D9C780D4_StaticFields, ___read_0)); }
	inline Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06 * get_read_0() const { return ___read_0; }
	inline Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Vector2>
struct  Reader_1_t3E0B740FC5A808266198C5E4269046DF99FD33B7  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t3E0B740FC5A808266198C5E4269046DF99FD33B7_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t3E0B740FC5A808266198C5E4269046DF99FD33B7_StaticFields, ___read_0)); }
	inline Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85 * get_read_0() const { return ___read_0; }
	inline Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Vector2Int>
struct  Reader_1_t9B16EB42C995B6F650D19DC1C1E561AAF2B7F073  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t9B16EB42C995B6F650D19DC1C1E561AAF2B7F073_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t9B16EB42C995B6F650D19DC1C1E561AAF2B7F073_StaticFields, ___read_0)); }
	inline Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B * get_read_0() const { return ___read_0; }
	inline Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Vector3>
struct  Reader_1_t52506F20E01104A02733385E5D2D21E0CC0D0E0B  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t52506F20E01104A02733385E5D2D21E0CC0D0E0B_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538 * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t52506F20E01104A02733385E5D2D21E0CC0D0E0B_StaticFields, ___read_0)); }
	inline Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538 * get_read_0() const { return ___read_0; }
	inline Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538 ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538 * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Vector3Int>
struct  Reader_1_t6ABFAAFEFF96CF19AEDE63D808EFBAA36DB06408  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t6ABFAAFEFF96CF19AEDE63D808EFBAA36DB06408_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t6ABFAAFEFF96CF19AEDE63D808EFBAA36DB06408_StaticFields, ___read_0)); }
	inline Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB * get_read_0() const { return ___read_0; }
	inline Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Reader`1<UnityEngine.Vector4>
struct  Reader_1_t0E048401E8CB5EA23C09C23DFF292DD90C284489  : public RuntimeObject
{
public:

public:
};

struct Reader_1_t0E048401E8CB5EA23C09C23DFF292DD90C284489_StaticFields
{
public:
	// System.Func`2<Mirror.NetworkReader,T> Mirror.Reader`1::read
	Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A * ___read_0;

public:
	inline static int32_t get_offset_of_read_0() { return static_cast<int32_t>(offsetof(Reader_1_t0E048401E8CB5EA23C09C23DFF292DD90C284489_StaticFields, ___read_0)); }
	inline Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A * get_read_0() const { return ___read_0; }
	inline Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A ** get_address_of_read_0() { return &___read_0; }
	inline void set_read_0(Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A * value)
	{
		___read_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___read_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.AddPlayerMessage>
struct  Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE_StaticFields, ___write_0)); }
	inline Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * get_write_0() const { return ___write_0; }
	inline Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.CommandMessage>
struct  Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45_StaticFields, ___write_0)); }
	inline Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * get_write_0() const { return ___write_0; }
	inline Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ConnectMessage>
struct  Writer_1_tB0323AC0C818A4B8702754ABC81BBE76AD203D94  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tB0323AC0C818A4B8702754ABC81BBE76AD203D94_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tB0323AC0C818A4B8702754ABC81BBE76AD203D94_StaticFields, ___write_0)); }
	inline Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA * get_write_0() const { return ___write_0; }
	inline Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.DisconnectMessage>
struct  Writer_1_t4AD49574A8C2D2A5625C36BFB2C8D8ED547FEF6D  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4AD49574A8C2D2A5625C36BFB2C8D8ED547FEF6D_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4AD49574A8C2D2A5625C36BFB2C8D8ED547FEF6D_StaticFields, ___write_0)); }
	inline Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067 * get_write_0() const { return ___write_0; }
	inline Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ErrorMessage>
struct  Writer_1_t93FF8F49891220AC926A6994ABAAAC1FCCC69813  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t93FF8F49891220AC926A6994ABAAAC1FCCC69813_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t66675A75775137108E5F7FAB965F44B552778C26 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t93FF8F49891220AC926A6994ABAAAC1FCCC69813_StaticFields, ___write_0)); }
	inline Action_2_t66675A75775137108E5F7FAB965F44B552778C26 * get_write_0() const { return ___write_0; }
	inline Action_2_t66675A75775137108E5F7FAB965F44B552778C26 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t66675A75775137108E5F7FAB965F44B552778C26 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkBehaviour>
struct  Writer_1_tAEAB6C44B9377EFAA5D77E2DCD1D7A5B8D701681  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tAEAB6C44B9377EFAA5D77E2DCD1D7A5B8D701681_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tAEAB6C44B9377EFAA5D77E2DCD1D7A5B8D701681_StaticFields, ___write_0)); }
	inline Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6 * get_write_0() const { return ___write_0; }
	inline Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkIdentity>
struct  Writer_1_t65DC0A2F1017439CFEE3D2BE7553E1966A5697D0  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t65DC0A2F1017439CFEE3D2BE7553E1966A5697D0_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t65DC0A2F1017439CFEE3D2BE7553E1966A5697D0_StaticFields, ___write_0)); }
	inline Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77 * get_write_0() const { return ___write_0; }
	inline Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkPingMessage>
struct  Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3_StaticFields, ___write_0)); }
	inline Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * get_write_0() const { return ___write_0; }
	inline Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NetworkPongMessage>
struct  Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED_StaticFields, ___write_0)); }
	inline Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * get_write_0() const { return ___write_0; }
	inline Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.NotReadyMessage>
struct  Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C_StaticFields, ___write_0)); }
	inline Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * get_write_0() const { return ___write_0; }
	inline Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectDestroyMessage>
struct  Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042_StaticFields, ___write_0)); }
	inline Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * get_write_0() const { return ___write_0; }
	inline Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectHideMessage>
struct  Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636_StaticFields, ___write_0)); }
	inline Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * get_write_0() const { return ___write_0; }
	inline Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectSpawnFinishedMessage>
struct  Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77_StaticFields, ___write_0)); }
	inline Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * get_write_0() const { return ___write_0; }
	inline Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ObjectSpawnStartedMessage>
struct  Writer_1_t68972DB064C6BF5998674584511650B183CAACDE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t68972DB064C6BF5998674584511650B183CAACDE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t68972DB064C6BF5998674584511650B183CAACDE_StaticFields, ___write_0)); }
	inline Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * get_write_0() const { return ___write_0; }
	inline Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.ReadyMessage>
struct  Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737_StaticFields, ___write_0)); }
	inline Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * get_write_0() const { return ___write_0; }
	inline Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.RpcMessage>
struct  Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55_StaticFields, ___write_0)); }
	inline Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * get_write_0() const { return ___write_0; }
	inline Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.SceneMessage>
struct  Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074_StaticFields, ___write_0)); }
	inline Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * get_write_0() const { return ___write_0; }
	inline Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.SceneOperation>
struct  Writer_1_t48BB1FBA5084DD891ADF80CAF010D36894B21B71  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t48BB1FBA5084DD891ADF80CAF010D36894B21B71_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t48BB1FBA5084DD891ADF80CAF010D36894B21B71_StaticFields, ___write_0)); }
	inline Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07 * get_write_0() const { return ___write_0; }
	inline Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.SpawnMessage>
struct  Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A_StaticFields, ___write_0)); }
	inline Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * get_write_0() const { return ___write_0; }
	inline Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<Mirror.UpdateVarsMessage>
struct  Writer_1_t0715B02972DFC0935C9B2E48C57B51CE550E513D  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0715B02972DFC0935C9B2E48C57B51CE550E513D_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t5A3703D259887235527744E2BD7095928D420ADD * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0715B02972DFC0935C9B2E48C57B51CE550E513D_StaticFields, ___write_0)); }
	inline Action_2_t5A3703D259887235527744E2BD7095928D420ADD * get_write_0() const { return ___write_0; }
	inline Action_2_t5A3703D259887235527744E2BD7095928D420ADD ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t5A3703D259887235527744E2BD7095928D420ADD * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.ArraySegment`1<System.Byte>>
struct  Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0_StaticFields, ___write_0)); }
	inline Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * get_write_0() const { return ___write_0; }
	inline Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Boolean>
struct  Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A_StaticFields, ___write_0)); }
	inline Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * get_write_0() const { return ___write_0; }
	inline Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Byte>
struct  Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD_StaticFields, ___write_0)); }
	inline Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * get_write_0() const { return ___write_0; }
	inline Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Byte[]>
struct  Writer_1_tEED5FDB6FE6385A9AD6B02D5C74B35CFB433B4BC  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tEED5FDB6FE6385A9AD6B02D5C74B35CFB433B4BC_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tEED5FDB6FE6385A9AD6B02D5C74B35CFB433B4BC_StaticFields, ___write_0)); }
	inline Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992 * get_write_0() const { return ___write_0; }
	inline Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Char>
struct  Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26_StaticFields, ___write_0)); }
	inline Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * get_write_0() const { return ___write_0; }
	inline Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Decimal>
struct  Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5_StaticFields, ___write_0)); }
	inline Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * get_write_0() const { return ___write_0; }
	inline Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Double>
struct  Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973_StaticFields, ___write_0)); }
	inline Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * get_write_0() const { return ___write_0; }
	inline Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Guid>
struct  Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F_StaticFields, ___write_0)); }
	inline Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * get_write_0() const { return ___write_0; }
	inline Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int16>
struct  Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091_StaticFields, ___write_0)); }
	inline Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * get_write_0() const { return ___write_0; }
	inline Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int32>
struct  Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23_StaticFields, ___write_0)); }
	inline Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * get_write_0() const { return ___write_0; }
	inline Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Int64>
struct  Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C_StaticFields, ___write_0)); }
	inline Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * get_write_0() const { return ___write_0; }
	inline Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.SByte>
struct  Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C_StaticFields, ___write_0)); }
	inline Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * get_write_0() const { return ___write_0; }
	inline Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Single>
struct  Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16_StaticFields, ___write_0)); }
	inline Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * get_write_0() const { return ___write_0; }
	inline Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.String>
struct  Writer_1_t4B0E2F18F0DAB051EEA9161CDE2DDFB6E0752F6D  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t4B0E2F18F0DAB051EEA9161CDE2DDFB6E0752F6D_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t4B0E2F18F0DAB051EEA9161CDE2DDFB6E0752F6D_StaticFields, ___write_0)); }
	inline Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088 * get_write_0() const { return ___write_0; }
	inline Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt16>
struct  Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE_StaticFields, ___write_0)); }
	inline Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * get_write_0() const { return ___write_0; }
	inline Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt32>
struct  Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350_StaticFields, ___write_0)); }
	inline Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * get_write_0() const { return ___write_0; }
	inline Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.UInt64>
struct  Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB_StaticFields, ___write_0)); }
	inline Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * get_write_0() const { return ___write_0; }
	inline Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<System.Uri>
struct  Writer_1_tCB081B0DDD2F9B8DCEB63F6D061832A40CF1B253  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tCB081B0DDD2F9B8DCEB63F6D061832A40CF1B253_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t928C90600628DF3301846464535E0CBE3D956042 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tCB081B0DDD2F9B8DCEB63F6D061832A40CF1B253_StaticFields, ___write_0)); }
	inline Action_2_t928C90600628DF3301846464535E0CBE3D956042 * get_write_0() const { return ___write_0; }
	inline Action_2_t928C90600628DF3301846464535E0CBE3D956042 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t928C90600628DF3301846464535E0CBE3D956042 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Color32>
struct  Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0_StaticFields, ___write_0)); }
	inline Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * get_write_0() const { return ___write_0; }
	inline Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Color>
struct  Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05_StaticFields, ___write_0)); }
	inline Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * get_write_0() const { return ___write_0; }
	inline Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.GameObject>
struct  Writer_1_tD346A524FDC0859D72436D2387BE7ECF7A0B8D2C  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tD346A524FDC0859D72436D2387BE7ECF7A0B8D2C_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tD346A524FDC0859D72436D2387BE7ECF7A0B8D2C_StaticFields, ___write_0)); }
	inline Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568 * get_write_0() const { return ___write_0; }
	inline Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Matrix4x4>
struct  Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3_StaticFields, ___write_0)); }
	inline Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * get_write_0() const { return ___write_0; }
	inline Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Plane>
struct  Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993_StaticFields, ___write_0)); }
	inline Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * get_write_0() const { return ___write_0; }
	inline Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Quaternion>
struct  Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945_StaticFields, ___write_0)); }
	inline Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * get_write_0() const { return ___write_0; }
	inline Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Ray>
struct  Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3_StaticFields, ___write_0)); }
	inline Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * get_write_0() const { return ___write_0; }
	inline Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Rect>
struct  Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4_StaticFields, ___write_0)); }
	inline Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * get_write_0() const { return ___write_0; }
	inline Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Transform>
struct  Writer_1_t5DD65F78B74F3A48D19CE8E6DF017A29AC88CC6B  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t5DD65F78B74F3A48D19CE8E6DF017A29AC88CC6B_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t5DD65F78B74F3A48D19CE8E6DF017A29AC88CC6B_StaticFields, ___write_0)); }
	inline Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1 * get_write_0() const { return ___write_0; }
	inline Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector2>
struct  Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4_StaticFields, ___write_0)); }
	inline Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * get_write_0() const { return ___write_0; }
	inline Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector2Int>
struct  Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906_StaticFields, ___write_0)); }
	inline Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * get_write_0() const { return ___write_0; }
	inline Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector3>
struct  Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6  : public RuntimeObject
{
public:

public:
};

struct Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6_StaticFields, ___write_0)); }
	inline Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * get_write_0() const { return ___write_0; }
	inline Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector3Int>
struct  Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF_StaticFields, ___write_0)); }
	inline Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * get_write_0() const { return ___write_0; }
	inline Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// Mirror.Writer`1<UnityEngine.Vector4>
struct  Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC  : public RuntimeObject
{
public:

public:
};

struct Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC_StaticFields
{
public:
	// System.Action`2<Mirror.NetworkWriter,T> Mirror.Writer`1::write
	Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * ___write_0;

public:
	inline static int32_t get_offset_of_write_0() { return static_cast<int32_t>(offsetof(Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC_StaticFields, ___write_0)); }
	inline Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * get_write_0() const { return ___write_0; }
	inline Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 ** get_address_of_write_0() { return &___write_0; }
	inline void set_write_0(Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * value)
	{
		___write_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___write_0), (void*)value);
	}
};


// MouseInput
struct  MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionAsset MouseInput::<asset>k__BackingField
	InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap MouseInput::m_Mouse
	InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * ___m_Mouse_1;
	// MouseInput_IMouseActions MouseInput::m_MouseActionsCallbackInterface
	RuntimeObject* ___m_MouseActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction MouseInput::m_Mouse_MouseClickRight
	InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * ___m_Mouse_MouseClickRight_3;
	// UnityEngine.InputSystem.InputAction MouseInput::m_Mouse_MousePosition
	InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * ___m_Mouse_MousePosition_4;
	// UnityEngine.InputSystem.InputAction MouseInput::m_Mouse_MouseClickLeft
	InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * ___m_Mouse_MouseClickLeft_5;

public:
	inline static int32_t get_offset_of_U3CassetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5, ___U3CassetU3Ek__BackingField_0)); }
	inline InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * get_U3CassetU3Ek__BackingField_0() const { return ___U3CassetU3Ek__BackingField_0; }
	inline InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 ** get_address_of_U3CassetU3Ek__BackingField_0() { return &___U3CassetU3Ek__BackingField_0; }
	inline void set_U3CassetU3Ek__BackingField_0(InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * value)
	{
		___U3CassetU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassetU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Mouse_1() { return static_cast<int32_t>(offsetof(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5, ___m_Mouse_1)); }
	inline InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * get_m_Mouse_1() const { return ___m_Mouse_1; }
	inline InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 ** get_address_of_m_Mouse_1() { return &___m_Mouse_1; }
	inline void set_m_Mouse_1(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * value)
	{
		___m_Mouse_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mouse_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseActionsCallbackInterface_2() { return static_cast<int32_t>(offsetof(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5, ___m_MouseActionsCallbackInterface_2)); }
	inline RuntimeObject* get_m_MouseActionsCallbackInterface_2() const { return ___m_MouseActionsCallbackInterface_2; }
	inline RuntimeObject** get_address_of_m_MouseActionsCallbackInterface_2() { return &___m_MouseActionsCallbackInterface_2; }
	inline void set_m_MouseActionsCallbackInterface_2(RuntimeObject* value)
	{
		___m_MouseActionsCallbackInterface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseActionsCallbackInterface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Mouse_MouseClickRight_3() { return static_cast<int32_t>(offsetof(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5, ___m_Mouse_MouseClickRight_3)); }
	inline InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * get_m_Mouse_MouseClickRight_3() const { return ___m_Mouse_MouseClickRight_3; }
	inline InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 ** get_address_of_m_Mouse_MouseClickRight_3() { return &___m_Mouse_MouseClickRight_3; }
	inline void set_m_Mouse_MouseClickRight_3(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * value)
	{
		___m_Mouse_MouseClickRight_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mouse_MouseClickRight_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Mouse_MousePosition_4() { return static_cast<int32_t>(offsetof(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5, ___m_Mouse_MousePosition_4)); }
	inline InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * get_m_Mouse_MousePosition_4() const { return ___m_Mouse_MousePosition_4; }
	inline InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 ** get_address_of_m_Mouse_MousePosition_4() { return &___m_Mouse_MousePosition_4; }
	inline void set_m_Mouse_MousePosition_4(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * value)
	{
		___m_Mouse_MousePosition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mouse_MousePosition_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Mouse_MouseClickLeft_5() { return static_cast<int32_t>(offsetof(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5, ___m_Mouse_MouseClickLeft_5)); }
	inline InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * get_m_Mouse_MouseClickLeft_5() const { return ___m_Mouse_MouseClickLeft_5; }
	inline InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 ** get_address_of_m_Mouse_MouseClickLeft_5() { return &___m_Mouse_MouseClickLeft_5; }
	inline void set_m_Mouse_MouseClickLeft_5(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * value)
	{
		___m_Mouse_MouseClickLeft_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mouse_MouseClickLeft_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.Networking.HostTopology
struct  HostTopology_t268779309BB2D69F29D1A182662C79818813892B  : public RuntimeObject
{
public:
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;

public:
	inline static int32_t get_offset_of_m_DefConfig_0() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_DefConfig_0)); }
	inline ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * get_m_DefConfig_0() const { return ___m_DefConfig_0; }
	inline ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A ** get_address_of_m_DefConfig_0() { return &___m_DefConfig_0; }
	inline void set_m_DefConfig_0(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * value)
	{
		___m_DefConfig_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefConfig_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxDefConnections_1() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_MaxDefConnections_1)); }
	inline int32_t get_m_MaxDefConnections_1() const { return ___m_MaxDefConnections_1; }
	inline int32_t* get_address_of_m_MaxDefConnections_1() { return &___m_MaxDefConnections_1; }
	inline void set_m_MaxDefConnections_1(int32_t value)
	{
		___m_MaxDefConnections_1 = value;
	}

	inline static int32_t get_offset_of_m_SpecialConnections_2() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_SpecialConnections_2)); }
	inline List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * get_m_SpecialConnections_2() const { return ___m_SpecialConnections_2; }
	inline List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE ** get_address_of_m_SpecialConnections_2() { return &___m_SpecialConnections_2; }
	inline void set_m_SpecialConnections_2(List_1_t46489AA4DB932B33C96BA58827F21F14C831C2DE * value)
	{
		___m_SpecialConnections_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SpecialConnections_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReceivedMessagePoolSize_3() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_ReceivedMessagePoolSize_3)); }
	inline uint16_t get_m_ReceivedMessagePoolSize_3() const { return ___m_ReceivedMessagePoolSize_3; }
	inline uint16_t* get_address_of_m_ReceivedMessagePoolSize_3() { return &___m_ReceivedMessagePoolSize_3; }
	inline void set_m_ReceivedMessagePoolSize_3(uint16_t value)
	{
		___m_ReceivedMessagePoolSize_3 = value;
	}

	inline static int32_t get_offset_of_m_SentMessagePoolSize_4() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_SentMessagePoolSize_4)); }
	inline uint16_t get_m_SentMessagePoolSize_4() const { return ___m_SentMessagePoolSize_4; }
	inline uint16_t* get_address_of_m_SentMessagePoolSize_4() { return &___m_SentMessagePoolSize_4; }
	inline void set_m_SentMessagePoolSize_4(uint16_t value)
	{
		___m_SentMessagePoolSize_4 = value;
	}

	inline static int32_t get_offset_of_m_MessagePoolSizeGrowthFactor_5() { return static_cast<int32_t>(offsetof(HostTopology_t268779309BB2D69F29D1A182662C79818813892B, ___m_MessagePoolSizeGrowthFactor_5)); }
	inline float get_m_MessagePoolSizeGrowthFactor_5() const { return ___m_MessagePoolSizeGrowthFactor_5; }
	inline float* get_address_of_m_MessagePoolSizeGrowthFactor_5() { return &___m_MessagePoolSizeGrowthFactor_5; }
	inline void set_m_MessagePoolSizeGrowthFactor_5(float value)
	{
		___m_MessagePoolSizeGrowthFactor_5 = value;
	}
};


// Mirror.AddPlayerMessage
struct  AddPlayerMessage_tC591734CDEE195588BB541BDE5B208A1C7468278 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AddPlayerMessage_tC591734CDEE195588BB541BDE5B208A1C7468278__padding[1];
	};

public:
};


// Mirror.ConnectMessage
struct  ConnectMessage_t7DC3F290175BA6D5D7DDE20152754BAA74B8DE25 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ConnectMessage_t7DC3F290175BA6D5D7DDE20152754BAA74B8DE25__padding[1];
	};

public:
};


// Mirror.DisconnectMessage
struct  DisconnectMessage_t3FAABBE8271302DEEB5A9B04975BBBBDD3097F7E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DisconnectMessage_t3FAABBE8271302DEEB5A9B04975BBBBDD3097F7E__padding[1];
	};

public:
};


// Mirror.ErrorMessage
struct  ErrorMessage_tCAD52284FF4B5DCF485A812F3616B1F1A4FED735 
{
public:
	// System.Byte Mirror.ErrorMessage::value
	uint8_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(ErrorMessage_tCAD52284FF4B5DCF485A812F3616B1F1A4FED735, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}
};


// Mirror.NetworkBehaviour_NetworkBehaviourSyncVar
struct  NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F 
{
public:
	// System.UInt32 Mirror.NetworkBehaviour_NetworkBehaviourSyncVar::netId
	uint32_t ___netId_0;
	// System.Byte Mirror.NetworkBehaviour_NetworkBehaviourSyncVar::componentIndex
	uint8_t ___componentIndex_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_componentIndex_1() { return static_cast<int32_t>(offsetof(NetworkBehaviourSyncVar_tBE7B70C5893AFCD4361BCA295334B005C2DE2F4F, ___componentIndex_1)); }
	inline uint8_t get_componentIndex_1() const { return ___componentIndex_1; }
	inline uint8_t* get_address_of_componentIndex_1() { return &___componentIndex_1; }
	inline void set_componentIndex_1(uint8_t value)
	{
		___componentIndex_1 = value;
	}
};


// Mirror.NetworkConnectionToClient
struct  NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A  : public NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311
{
public:

public:
};

struct NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkConnectionToClient::logger
	RuntimeObject* ___logger_11;

public:
	inline static int32_t get_offset_of_logger_11() { return static_cast<int32_t>(offsetof(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A_StaticFields, ___logger_11)); }
	inline RuntimeObject* get_logger_11() const { return ___logger_11; }
	inline RuntimeObject** get_address_of_logger_11() { return &___logger_11; }
	inline void set_logger_11(RuntimeObject* value)
	{
		___logger_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_11), (void*)value);
	}
};


// Mirror.NetworkPingMessage
struct  NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396 
{
public:
	// System.Double Mirror.NetworkPingMessage::clientTime
	double ___clientTime_0;

public:
	inline static int32_t get_offset_of_clientTime_0() { return static_cast<int32_t>(offsetof(NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396, ___clientTime_0)); }
	inline double get_clientTime_0() const { return ___clientTime_0; }
	inline double* get_address_of_clientTime_0() { return &___clientTime_0; }
	inline void set_clientTime_0(double value)
	{
		___clientTime_0 = value;
	}
};


// Mirror.NetworkPongMessage
struct  NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2 
{
public:
	// System.Double Mirror.NetworkPongMessage::clientTime
	double ___clientTime_0;
	// System.Double Mirror.NetworkPongMessage::serverTime
	double ___serverTime_1;

public:
	inline static int32_t get_offset_of_clientTime_0() { return static_cast<int32_t>(offsetof(NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2, ___clientTime_0)); }
	inline double get_clientTime_0() const { return ___clientTime_0; }
	inline double* get_address_of_clientTime_0() { return &___clientTime_0; }
	inline void set_clientTime_0(double value)
	{
		___clientTime_0 = value;
	}

	inline static int32_t get_offset_of_serverTime_1() { return static_cast<int32_t>(offsetof(NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2, ___serverTime_1)); }
	inline double get_serverTime_1() const { return ___serverTime_1; }
	inline double* get_address_of_serverTime_1() { return &___serverTime_1; }
	inline void set_serverTime_1(double value)
	{
		___serverTime_1 = value;
	}
};


// Mirror.NotReadyMessage
struct  NotReadyMessage_tC37B711AF95DDBD12C8A04898AB3966BDBD7398D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NotReadyMessage_tC37B711AF95DDBD12C8A04898AB3966BDBD7398D__padding[1];
	};

public:
};


// Mirror.ObjectDestroyMessage
struct  ObjectDestroyMessage_tA991B06A64D9E787AAB3791462F563BF50C6130D 
{
public:
	// System.UInt32 Mirror.ObjectDestroyMessage::netId
	uint32_t ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectDestroyMessage_tA991B06A64D9E787AAB3791462F563BF50C6130D, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}
};


// Mirror.ObjectHideMessage
struct  ObjectHideMessage_tB6B01B9672314B0D65651FD275286092433892CE 
{
public:
	// System.UInt32 Mirror.ObjectHideMessage::netId
	uint32_t ___netId_0;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectHideMessage_tB6B01B9672314B0D65651FD275286092433892CE, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}
};


// Mirror.ObjectSpawnFinishedMessage
struct  ObjectSpawnFinishedMessage_t6E1E7CC5B237E736E906B7C9B335D2CAFB3C67A7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ObjectSpawnFinishedMessage_t6E1E7CC5B237E736E906B7C9B335D2CAFB3C67A7__padding[1];
	};

public:
};


// Mirror.ObjectSpawnStartedMessage
struct  ObjectSpawnStartedMessage_tD7D009DD36048BE07917801633EDDEFC2FB19177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ObjectSpawnStartedMessage_tD7D009DD36048BE07917801633EDDEFC2FB19177__padding[1];
	};

public:
};


// Mirror.PooledNetworkWriter
struct  PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118  : public NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A
{
public:

public:
};


// Mirror.ReadyMessage
struct  ReadyMessage_t5AA7A133054594669567080C16DDDC1403A2A9BB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ReadyMessage_t5AA7A133054594669567080C16DDDC1403A2A9BB__padding[1];
	};

public:
};


// MouseInput_MouseActions
struct  MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 
{
public:
	// MouseInput MouseInput_MouseActions::m_Wrapper
	MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * ___m_Wrapper_0;

public:
	inline static int32_t get_offset_of_m_Wrapper_0() { return static_cast<int32_t>(offsetof(MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2, ___m_Wrapper_0)); }
	inline MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * get_m_Wrapper_0() const { return ___m_Wrapper_0; }
	inline MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 ** get_address_of_m_Wrapper_0() { return &___m_Wrapper_0; }
	inline void set_m_Wrapper_0(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * value)
	{
		___m_Wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Wrapper_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of MouseInput/MouseActions
struct MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshaled_pinvoke
{
	MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * ___m_Wrapper_0;
};
// Native definition for COM marshalling of MouseInput/MouseActions
struct MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshaled_com
{
	MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * ___m_Wrapper_0;
};

// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
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
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// UnityEngine.InputSystem.InputAction_CallbackContext
struct  CallbackContext_t4252E0C6C8122087B48A4CCA0F224843702F948E 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction_CallbackContext::m_State
	InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction_CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_t4252E0C6C8122087B48A4CCA0F224843702F948E, ___m_State_0)); }
	inline InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_t4252E0C6C8122087B48A4CCA0F224843702F948E, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t4252E0C6C8122087B48A4CCA0F224843702F948E_marshaled_pinvoke
{
	InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t4252E0C6C8122087B48A4CCA0F224843702F948E_marshaled_com
{
	InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction_CallbackContext>>
struct  InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t699F71D324A4A1848FDA7FB1A88EEF27E8BD0E88* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C, ___firstValue_1)); }
	inline Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C, ___additionalValues_2)); }
	inline Action_1U5BU5D_t699F71D324A4A1848FDA7FB1A88EEF27E8BD0E88* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t699F71D324A4A1848FDA7FB1A88EEF27E8BD0E88** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t699F71D324A4A1848FDA7FB1A88EEF27E8BD0E88* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct  ReadOnlyArray_1_t991887378608C1733BC8E6CF8C76A3145C6A1311 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tB7367D1166814016C7E1BD0732A41DBA0FA33622* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t991887378608C1733BC8E6CF8C76A3145C6A1311, ___m_Array_0)); }
	inline InputControlSchemeU5BU5D_tB7367D1166814016C7E1BD0732A41DBA0FA33622* get_m_Array_0() const { return ___m_Array_0; }
	inline InputControlSchemeU5BU5D_tB7367D1166814016C7E1BD0732A41DBA0FA33622** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputControlSchemeU5BU5D_tB7367D1166814016C7E1BD0732A41DBA0FA33622* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t991887378608C1733BC8E6CF8C76A3145C6A1311, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t991887378608C1733BC8E6CF8C76A3145C6A1311, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct  ReadOnlyArray_1_t311C8B3200B0D3E10C288FC9B56958510AB8E3FB 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t311C8B3200B0D3E10C288FC9B56958510AB8E3FB, ___m_Array_0)); }
	inline InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70* get_m_Array_0() const { return ___m_Array_0; }
	inline InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t311C8B3200B0D3E10C288FC9B56958510AB8E3FB, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t311C8B3200B0D3E10C288FC9B56958510AB8E3FB, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
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
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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


// UnityEngine.Vector2Int
struct  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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


// UnityEngine.Vector3Int
struct  Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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


// Mirror.CommandMessage
struct  CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6 
{
public:
	// System.UInt32 Mirror.CommandMessage::netId
	uint32_t ___netId_0;
	// System.Int32 Mirror.CommandMessage::componentIndex
	int32_t ___componentIndex_1;
	// System.Int32 Mirror.CommandMessage::functionHash
	int32_t ___functionHash_2;
	// System.ArraySegment`1<System.Byte> Mirror.CommandMessage::payload
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_componentIndex_1() { return static_cast<int32_t>(offsetof(CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6, ___componentIndex_1)); }
	inline int32_t get_componentIndex_1() const { return ___componentIndex_1; }
	inline int32_t* get_address_of_componentIndex_1() { return &___componentIndex_1; }
	inline void set_componentIndex_1(int32_t value)
	{
		___componentIndex_1 = value;
	}

	inline static int32_t get_offset_of_functionHash_2() { return static_cast<int32_t>(offsetof(CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6, ___functionHash_2)); }
	inline int32_t get_functionHash_2() const { return ___functionHash_2; }
	inline int32_t* get_address_of_functionHash_2() { return &___functionHash_2; }
	inline void set_functionHash_2(int32_t value)
	{
		___functionHash_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6, ___payload_3)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_payload_3() const { return ___payload_3; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_3))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.CommandMessage
struct CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6_marshaled_pinvoke
{
	uint32_t ___netId_0;
	int32_t ___componentIndex_1;
	int32_t ___functionHash_2;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_3;
};
// Native definition for COM marshalling of Mirror.CommandMessage
struct CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6_marshaled_com
{
	uint32_t ___netId_0;
	int32_t ___componentIndex_1;
	int32_t ___functionHash_2;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_3;
};

// Mirror.NetworkReader
struct  NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9  : public RuntimeObject
{
public:
	// System.ArraySegment`1<System.Byte> Mirror.NetworkReader::buffer
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___buffer_1;
	// System.Int32 Mirror.NetworkReader::Position
	int32_t ___Position_2;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9, ___buffer_1)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_buffer_1() const { return ___buffer_1; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___buffer_1))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}
};

struct NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkReader::logger
	RuntimeObject* ___logger_0;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9_StaticFields, ___logger_0)); }
	inline RuntimeObject* get_logger_0() const { return ___logger_0; }
	inline RuntimeObject** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(RuntimeObject* value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_0), (void*)value);
	}
};


// Mirror.RpcMessage
struct  RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A 
{
public:
	// System.UInt32 Mirror.RpcMessage::netId
	uint32_t ___netId_0;
	// System.Int32 Mirror.RpcMessage::componentIndex
	int32_t ___componentIndex_1;
	// System.Int32 Mirror.RpcMessage::functionHash
	int32_t ___functionHash_2;
	// System.ArraySegment`1<System.Byte> Mirror.RpcMessage::payload
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_componentIndex_1() { return static_cast<int32_t>(offsetof(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A, ___componentIndex_1)); }
	inline int32_t get_componentIndex_1() const { return ___componentIndex_1; }
	inline int32_t* get_address_of_componentIndex_1() { return &___componentIndex_1; }
	inline void set_componentIndex_1(int32_t value)
	{
		___componentIndex_1 = value;
	}

	inline static int32_t get_offset_of_functionHash_2() { return static_cast<int32_t>(offsetof(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A, ___functionHash_2)); }
	inline int32_t get_functionHash_2() const { return ___functionHash_2; }
	inline int32_t* get_address_of_functionHash_2() { return &___functionHash_2; }
	inline void set_functionHash_2(int32_t value)
	{
		___functionHash_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A, ___payload_3)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_payload_3() const { return ___payload_3; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_3))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.RpcMessage
struct RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshaled_pinvoke
{
	uint32_t ___netId_0;
	int32_t ___componentIndex_1;
	int32_t ___functionHash_2;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_3;
};
// Native definition for COM marshalling of Mirror.RpcMessage
struct RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A_marshaled_com
{
	uint32_t ___netId_0;
	int32_t ___componentIndex_1;
	int32_t ___functionHash_2;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_3;
};

// Mirror.SceneOperation
struct  SceneOperation_t43180D185C1D8F6FF33FC8A61F3AC3528627667E 
{
public:
	// System.Byte Mirror.SceneOperation::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneOperation_t43180D185C1D8F6FF33FC8A61F3AC3528627667E, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Mirror.SpawnMessage
struct  SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A 
{
public:
	// System.UInt32 Mirror.SpawnMessage::netId
	uint32_t ___netId_0;
	// System.Boolean Mirror.SpawnMessage::isLocalPlayer
	bool ___isLocalPlayer_1;
	// System.Boolean Mirror.SpawnMessage::isOwner
	bool ___isOwner_2;
	// System.UInt64 Mirror.SpawnMessage::sceneId
	uint64_t ___sceneId_3;
	// System.Guid Mirror.SpawnMessage::assetId
	Guid_t  ___assetId_4;
	// UnityEngine.Vector3 Mirror.SpawnMessage::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_5;
	// UnityEngine.Quaternion Mirror.SpawnMessage::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_6;
	// UnityEngine.Vector3 Mirror.SpawnMessage::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_7;
	// System.ArraySegment`1<System.Byte> Mirror.SpawnMessage::payload
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_8;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_isLocalPlayer_1() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___isLocalPlayer_1)); }
	inline bool get_isLocalPlayer_1() const { return ___isLocalPlayer_1; }
	inline bool* get_address_of_isLocalPlayer_1() { return &___isLocalPlayer_1; }
	inline void set_isLocalPlayer_1(bool value)
	{
		___isLocalPlayer_1 = value;
	}

	inline static int32_t get_offset_of_isOwner_2() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___isOwner_2)); }
	inline bool get_isOwner_2() const { return ___isOwner_2; }
	inline bool* get_address_of_isOwner_2() { return &___isOwner_2; }
	inline void set_isOwner_2(bool value)
	{
		___isOwner_2 = value;
	}

	inline static int32_t get_offset_of_sceneId_3() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___sceneId_3)); }
	inline uint64_t get_sceneId_3() const { return ___sceneId_3; }
	inline uint64_t* get_address_of_sceneId_3() { return &___sceneId_3; }
	inline void set_sceneId_3(uint64_t value)
	{
		___sceneId_3 = value;
	}

	inline static int32_t get_offset_of_assetId_4() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___assetId_4)); }
	inline Guid_t  get_assetId_4() const { return ___assetId_4; }
	inline Guid_t * get_address_of_assetId_4() { return &___assetId_4; }
	inline void set_assetId_4(Guid_t  value)
	{
		___assetId_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___position_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_5() const { return ___position_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_rotation_6() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___rotation_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_6() const { return ___rotation_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_6() { return &___rotation_6; }
	inline void set_rotation_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_6 = value;
	}

	inline static int32_t get_offset_of_scale_7() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___scale_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_7() const { return ___scale_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_7() { return &___scale_7; }
	inline void set_scale_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_7 = value;
	}

	inline static int32_t get_offset_of_payload_8() { return static_cast<int32_t>(offsetof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A, ___payload_8)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_payload_8() const { return ___payload_8; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_payload_8() { return &___payload_8; }
	inline void set_payload_8(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___payload_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_8))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.SpawnMessage
struct SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshaled_pinvoke
{
	uint32_t ___netId_0;
	int32_t ___isLocalPlayer_1;
	int32_t ___isOwner_2;
	uint64_t ___sceneId_3;
	Guid_t  ___assetId_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_5;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_7;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_8;
};
// Native definition for COM marshalling of Mirror.SpawnMessage
struct SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A_marshaled_com
{
	uint32_t ___netId_0;
	int32_t ___isLocalPlayer_1;
	int32_t ___isOwner_2;
	uint64_t ___sceneId_3;
	Guid_t  ___assetId_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_5;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_7;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_8;
};

// Mirror.SyncMode
struct  SyncMode_t01A8CEC78393EC5639637113BC865A2E829842C2 
{
public:
	// System.Int32 Mirror.SyncMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SyncMode_t01A8CEC78393EC5639637113BC865A2E829842C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.UpdateVarsMessage
struct  UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1 
{
public:
	// System.UInt32 Mirror.UpdateVarsMessage::netId
	uint32_t ___netId_0;
	// System.ArraySegment`1<System.Byte> Mirror.UpdateVarsMessage::payload
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_1;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1, ___netId_0)); }
	inline uint32_t get_netId_0() const { return ___netId_0; }
	inline uint32_t* get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(uint32_t value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1, ___payload_1)); }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  get_payload_1() const { return ___payload_1; }
	inline ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___payload_1))->____array_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Mirror.UpdateVarsMessage
struct UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshaled_pinvoke
{
	uint32_t ___netId_0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_1;
};
// Native definition for COM marshalling of Mirror.UpdateVarsMessage
struct UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1_marshaled_com
{
	uint32_t ___netId_0;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload_1;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
struct  Exception_t  : public RuntimeObject
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

// System.Net.Sockets.AddressFamily
struct  AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.NetworkStream
struct  NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_StreamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_8;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_12;

public:
	inline static int32_t get_offset_of_m_StreamSocket_5() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_StreamSocket_5)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_StreamSocket_5() const { return ___m_StreamSocket_5; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_StreamSocket_5() { return &___m_StreamSocket_5; }
	inline void set_m_StreamSocket_5(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_StreamSocket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Readable_6)); }
	inline bool get_m_Readable_6() const { return ___m_Readable_6; }
	inline bool* get_address_of_m_Readable_6() { return &___m_Readable_6; }
	inline void set_m_Readable_6(bool value)
	{
		___m_Readable_6 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_7() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Writeable_7)); }
	inline bool get_m_Writeable_7() const { return ___m_Writeable_7; }
	inline bool* get_address_of_m_Writeable_7() { return &___m_Writeable_7; }
	inline void set_m_Writeable_7(bool value)
	{
		___m_Writeable_7 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_8() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_OwnsSocket_8)); }
	inline bool get_m_OwnsSocket_8() const { return ___m_OwnsSocket_8; }
	inline bool* get_address_of_m_OwnsSocket_8() { return &___m_OwnsSocket_8; }
	inline void set_m_OwnsSocket_8(bool value)
	{
		___m_OwnsSocket_8 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_9() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CloseTimeout_9)); }
	inline int32_t get_m_CloseTimeout_9() const { return ___m_CloseTimeout_9; }
	inline int32_t* get_address_of_m_CloseTimeout_9() { return &___m_CloseTimeout_9; }
	inline void set_m_CloseTimeout_9(int32_t value)
	{
		___m_CloseTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_10() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CleanedUp_10)); }
	inline bool get_m_CleanedUp_10() const { return ___m_CleanedUp_10; }
	inline bool* get_address_of_m_CleanedUp_10() { return &___m_CleanedUp_10; }
	inline void set_m_CleanedUp_10(bool value)
	{
		___m_CleanedUp_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentReadTimeout_11)); }
	inline int32_t get_m_CurrentReadTimeout_11() const { return ___m_CurrentReadTimeout_11; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_11() { return &___m_CurrentReadTimeout_11; }
	inline void set_m_CurrentReadTimeout_11(int32_t value)
	{
		___m_CurrentReadTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_12() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentWriteTimeout_12)); }
	inline int32_t get_m_CurrentWriteTimeout_12() const { return ___m_CurrentWriteTimeout_12; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_12() { return &___m_CurrentWriteTimeout_12; }
	inline void set_m_CurrentWriteTimeout_12(int32_t value)
	{
		___m_CurrentWriteTimeout_12 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct  Nullable_1_tF2D463C19029E483FF34BFD76C7DEE3065D4E8BB 
{
public:
	// T System.Nullable`1::value
	ReadOnlyArray_1_t311C8B3200B0D3E10C288FC9B56958510AB8E3FB  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF2D463C19029E483FF34BFD76C7DEE3065D4E8BB, ___value_0)); }
	inline ReadOnlyArray_1_t311C8B3200B0D3E10C288FC9B56958510AB8E3FB  get_value_0() const { return ___value_0; }
	inline ReadOnlyArray_1_t311C8B3200B0D3E10C288FC9B56958510AB8E3FB * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ReadOnlyArray_1_t311C8B3200B0D3E10C288FC9B56958510AB8E3FB  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF2D463C19029E483FF34BFD76C7DEE3065D4E8BB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// System.Uri_Flags
struct  Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri_Flags::value__
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


// System.UriFormat
struct  UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
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


// System.UriKind
struct  UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionType
struct  InputActionType_t44FF263AEF32AC4089917CCFA9EE154BC4DDAF78 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t44FF263AEF32AC4089917CCFA9EE154BC4DDAF78, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding_Flags
struct  Flags_t57ECD762CE75826E67C150962C28D2F7FCDA890C 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding_Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t57ECD762CE75826E67C150962C28D2F7FCDA890C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.ConnectionAcksType
struct  ConnectionAcksType_t4F4B2573A461869C52F77783DD9C379C97A5473B 
{
public:
	// System.Int32 UnityEngine.Networking.ConnectionAcksType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionAcksType_t4F4B2573A461869C52F77783DD9C379C97A5473B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.NetworkEventType
struct  NetworkEventType_t145BD45D629C9B92E4172F8728C2639A9198A1A0 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkEventType_t145BD45D629C9B92E4172F8728C2639A9198A1A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.QosType
struct  QosType_tAD0DC2835CF976743FCBBFDD0B4BC1B6392A2293 
{
public:
	// System.Int32 UnityEngine.Networking.QosType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QosType_tAD0DC2835CF976743FCBBFDD0B4BC1B6392A2293, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.ReactorModel
struct  ReactorModel_tA949EB04FA3D4C0920C729636C7CD64D4A84A141 
{
public:
	// System.Int32 UnityEngine.Networking.ReactorModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReactorModel_tA949EB04FA3D4C0920C729636C7CD64D4A84A141, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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
struct  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
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


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider_Direction
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider_Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.SceneMessage
struct  SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE 
{
public:
	// System.String Mirror.SceneMessage::sceneName
	String_t* ___sceneName_0;
	// Mirror.SceneOperation Mirror.SceneMessage::sceneOperation
	uint8_t ___sceneOperation_1;
	// System.Boolean Mirror.SceneMessage::customHandling
	bool ___customHandling_2;

public:
	inline static int32_t get_offset_of_sceneName_0() { return static_cast<int32_t>(offsetof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE, ___sceneName_0)); }
	inline String_t* get_sceneName_0() const { return ___sceneName_0; }
	inline String_t** get_address_of_sceneName_0() { return &___sceneName_0; }
	inline void set_sceneName_0(String_t* value)
	{
		___sceneName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_0), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOperation_1() { return static_cast<int32_t>(offsetof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE, ___sceneOperation_1)); }
	inline uint8_t get_sceneOperation_1() const { return ___sceneOperation_1; }
	inline uint8_t* get_address_of_sceneOperation_1() { return &___sceneOperation_1; }
	inline void set_sceneOperation_1(uint8_t value)
	{
		___sceneOperation_1 = value;
	}

	inline static int32_t get_offset_of_customHandling_2() { return static_cast<int32_t>(offsetof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE, ___customHandling_2)); }
	inline bool get_customHandling_2() const { return ___customHandling_2; }
	inline bool* get_address_of_customHandling_2() { return &___customHandling_2; }
	inline void set_customHandling_2(bool value)
	{
		___customHandling_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Mirror.SceneMessage
struct SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_pinvoke
{
	char* ___sceneName_0;
	uint8_t ___sceneOperation_1;
	int32_t ___customHandling_2;
};
// Native definition for COM marshalling of Mirror.SceneMessage
struct SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE_marshaled_com
{
	Il2CppChar* ___sceneName_0;
	uint8_t ___sceneOperation_1;
	int32_t ___customHandling_2;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.Net.Sockets.TcpClient
struct  TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_ClientSocket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_DataStream_2)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// System.Uri
struct  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
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
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

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

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding
struct  InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF 
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
	// UnityEngine.InputSystem.InputBinding_Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF_marshaled_pinvoke
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
struct InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF_marshaled_com
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

// UnityEngine.Networking.ConnectionConfig
struct  ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A  : public RuntimeObject
{
public:
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_0;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_1;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_8;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_11;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_13;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_16;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_17;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_18;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_19;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_20;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_21;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_22;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_25;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * ___m_Channels_26;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * ___m_SharedOrderChannels_27;

public:
	inline static int32_t get_offset_of_m_PacketSize_0() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_PacketSize_0)); }
	inline uint16_t get_m_PacketSize_0() const { return ___m_PacketSize_0; }
	inline uint16_t* get_address_of_m_PacketSize_0() { return &___m_PacketSize_0; }
	inline void set_m_PacketSize_0(uint16_t value)
	{
		___m_PacketSize_0 = value;
	}

	inline static int32_t get_offset_of_m_FragmentSize_1() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_FragmentSize_1)); }
	inline uint16_t get_m_FragmentSize_1() const { return ___m_FragmentSize_1; }
	inline uint16_t* get_address_of_m_FragmentSize_1() { return &___m_FragmentSize_1; }
	inline void set_m_FragmentSize_1(uint16_t value)
	{
		___m_FragmentSize_1 = value;
	}

	inline static int32_t get_offset_of_m_ResendTimeout_2() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_ResendTimeout_2)); }
	inline uint32_t get_m_ResendTimeout_2() const { return ___m_ResendTimeout_2; }
	inline uint32_t* get_address_of_m_ResendTimeout_2() { return &___m_ResendTimeout_2; }
	inline void set_m_ResendTimeout_2(uint32_t value)
	{
		___m_ResendTimeout_2 = value;
	}

	inline static int32_t get_offset_of_m_DisconnectTimeout_3() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_DisconnectTimeout_3)); }
	inline uint32_t get_m_DisconnectTimeout_3() const { return ___m_DisconnectTimeout_3; }
	inline uint32_t* get_address_of_m_DisconnectTimeout_3() { return &___m_DisconnectTimeout_3; }
	inline void set_m_DisconnectTimeout_3(uint32_t value)
	{
		___m_DisconnectTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_ConnectTimeout_4() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_ConnectTimeout_4)); }
	inline uint32_t get_m_ConnectTimeout_4() const { return ___m_ConnectTimeout_4; }
	inline uint32_t* get_address_of_m_ConnectTimeout_4() { return &___m_ConnectTimeout_4; }
	inline void set_m_ConnectTimeout_4(uint32_t value)
	{
		___m_ConnectTimeout_4 = value;
	}

	inline static int32_t get_offset_of_m_MinUpdateTimeout_5() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MinUpdateTimeout_5)); }
	inline uint32_t get_m_MinUpdateTimeout_5() const { return ___m_MinUpdateTimeout_5; }
	inline uint32_t* get_address_of_m_MinUpdateTimeout_5() { return &___m_MinUpdateTimeout_5; }
	inline void set_m_MinUpdateTimeout_5(uint32_t value)
	{
		___m_MinUpdateTimeout_5 = value;
	}

	inline static int32_t get_offset_of_m_PingTimeout_6() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_PingTimeout_6)); }
	inline uint32_t get_m_PingTimeout_6() const { return ___m_PingTimeout_6; }
	inline uint32_t* get_address_of_m_PingTimeout_6() { return &___m_PingTimeout_6; }
	inline void set_m_PingTimeout_6(uint32_t value)
	{
		___m_PingTimeout_6 = value;
	}

	inline static int32_t get_offset_of_m_ReducedPingTimeout_7() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_ReducedPingTimeout_7)); }
	inline uint32_t get_m_ReducedPingTimeout_7() const { return ___m_ReducedPingTimeout_7; }
	inline uint32_t* get_address_of_m_ReducedPingTimeout_7() { return &___m_ReducedPingTimeout_7; }
	inline void set_m_ReducedPingTimeout_7(uint32_t value)
	{
		___m_ReducedPingTimeout_7 = value;
	}

	inline static int32_t get_offset_of_m_AllCostTimeout_8() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_AllCostTimeout_8)); }
	inline uint32_t get_m_AllCostTimeout_8() const { return ___m_AllCostTimeout_8; }
	inline uint32_t* get_address_of_m_AllCostTimeout_8() { return &___m_AllCostTimeout_8; }
	inline void set_m_AllCostTimeout_8(uint32_t value)
	{
		___m_AllCostTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_NetworkDropThreshold_9() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_NetworkDropThreshold_9)); }
	inline uint8_t get_m_NetworkDropThreshold_9() const { return ___m_NetworkDropThreshold_9; }
	inline uint8_t* get_address_of_m_NetworkDropThreshold_9() { return &___m_NetworkDropThreshold_9; }
	inline void set_m_NetworkDropThreshold_9(uint8_t value)
	{
		___m_NetworkDropThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_OverflowDropThreshold_10() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_OverflowDropThreshold_10)); }
	inline uint8_t get_m_OverflowDropThreshold_10() const { return ___m_OverflowDropThreshold_10; }
	inline uint8_t* get_address_of_m_OverflowDropThreshold_10() { return &___m_OverflowDropThreshold_10; }
	inline void set_m_OverflowDropThreshold_10(uint8_t value)
	{
		___m_OverflowDropThreshold_10 = value;
	}

	inline static int32_t get_offset_of_m_MaxConnectionAttempt_11() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxConnectionAttempt_11)); }
	inline uint8_t get_m_MaxConnectionAttempt_11() const { return ___m_MaxConnectionAttempt_11; }
	inline uint8_t* get_address_of_m_MaxConnectionAttempt_11() { return &___m_MaxConnectionAttempt_11; }
	inline void set_m_MaxConnectionAttempt_11(uint8_t value)
	{
		___m_MaxConnectionAttempt_11 = value;
	}

	inline static int32_t get_offset_of_m_AckDelay_12() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_AckDelay_12)); }
	inline uint32_t get_m_AckDelay_12() const { return ___m_AckDelay_12; }
	inline uint32_t* get_address_of_m_AckDelay_12() { return &___m_AckDelay_12; }
	inline void set_m_AckDelay_12(uint32_t value)
	{
		___m_AckDelay_12 = value;
	}

	inline static int32_t get_offset_of_m_SendDelay_13() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SendDelay_13)); }
	inline uint32_t get_m_SendDelay_13() const { return ___m_SendDelay_13; }
	inline uint32_t* get_address_of_m_SendDelay_13() { return &___m_SendDelay_13; }
	inline void set_m_SendDelay_13(uint32_t value)
	{
		___m_SendDelay_13 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageSize_14() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxCombinedReliableMessageSize_14)); }
	inline uint16_t get_m_MaxCombinedReliableMessageSize_14() const { return ___m_MaxCombinedReliableMessageSize_14; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageSize_14() { return &___m_MaxCombinedReliableMessageSize_14; }
	inline void set_m_MaxCombinedReliableMessageSize_14(uint16_t value)
	{
		___m_MaxCombinedReliableMessageSize_14 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageCount_15() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxCombinedReliableMessageCount_15)); }
	inline uint16_t get_m_MaxCombinedReliableMessageCount_15() const { return ___m_MaxCombinedReliableMessageCount_15; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageCount_15() { return &___m_MaxCombinedReliableMessageCount_15; }
	inline void set_m_MaxCombinedReliableMessageCount_15(uint16_t value)
	{
		___m_MaxCombinedReliableMessageCount_15 = value;
	}

	inline static int32_t get_offset_of_m_MaxSentMessageQueueSize_16() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_MaxSentMessageQueueSize_16)); }
	inline uint16_t get_m_MaxSentMessageQueueSize_16() const { return ___m_MaxSentMessageQueueSize_16; }
	inline uint16_t* get_address_of_m_MaxSentMessageQueueSize_16() { return &___m_MaxSentMessageQueueSize_16; }
	inline void set_m_MaxSentMessageQueueSize_16(uint16_t value)
	{
		___m_MaxSentMessageQueueSize_16 = value;
	}

	inline static int32_t get_offset_of_m_AcksType_17() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_AcksType_17)); }
	inline int32_t get_m_AcksType_17() const { return ___m_AcksType_17; }
	inline int32_t* get_address_of_m_AcksType_17() { return &___m_AcksType_17; }
	inline void set_m_AcksType_17(int32_t value)
	{
		___m_AcksType_17 = value;
	}

	inline static int32_t get_offset_of_m_UsePlatformSpecificProtocols_18() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_UsePlatformSpecificProtocols_18)); }
	inline bool get_m_UsePlatformSpecificProtocols_18() const { return ___m_UsePlatformSpecificProtocols_18; }
	inline bool* get_address_of_m_UsePlatformSpecificProtocols_18() { return &___m_UsePlatformSpecificProtocols_18; }
	inline void set_m_UsePlatformSpecificProtocols_18(bool value)
	{
		___m_UsePlatformSpecificProtocols_18 = value;
	}

	inline static int32_t get_offset_of_m_InitialBandwidth_19() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_InitialBandwidth_19)); }
	inline uint32_t get_m_InitialBandwidth_19() const { return ___m_InitialBandwidth_19; }
	inline uint32_t* get_address_of_m_InitialBandwidth_19() { return &___m_InitialBandwidth_19; }
	inline void set_m_InitialBandwidth_19(uint32_t value)
	{
		___m_InitialBandwidth_19 = value;
	}

	inline static int32_t get_offset_of_m_BandwidthPeakFactor_20() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_BandwidthPeakFactor_20)); }
	inline float get_m_BandwidthPeakFactor_20() const { return ___m_BandwidthPeakFactor_20; }
	inline float* get_address_of_m_BandwidthPeakFactor_20() { return &___m_BandwidthPeakFactor_20; }
	inline void set_m_BandwidthPeakFactor_20(float value)
	{
		___m_BandwidthPeakFactor_20 = value;
	}

	inline static int32_t get_offset_of_m_WebSocketReceiveBufferMaxSize_21() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_WebSocketReceiveBufferMaxSize_21)); }
	inline uint16_t get_m_WebSocketReceiveBufferMaxSize_21() const { return ___m_WebSocketReceiveBufferMaxSize_21; }
	inline uint16_t* get_address_of_m_WebSocketReceiveBufferMaxSize_21() { return &___m_WebSocketReceiveBufferMaxSize_21; }
	inline void set_m_WebSocketReceiveBufferMaxSize_21(uint16_t value)
	{
		___m_WebSocketReceiveBufferMaxSize_21 = value;
	}

	inline static int32_t get_offset_of_m_UdpSocketReceiveBufferMaxSize_22() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_UdpSocketReceiveBufferMaxSize_22)); }
	inline uint32_t get_m_UdpSocketReceiveBufferMaxSize_22() const { return ___m_UdpSocketReceiveBufferMaxSize_22; }
	inline uint32_t* get_address_of_m_UdpSocketReceiveBufferMaxSize_22() { return &___m_UdpSocketReceiveBufferMaxSize_22; }
	inline void set_m_UdpSocketReceiveBufferMaxSize_22(uint32_t value)
	{
		___m_UdpSocketReceiveBufferMaxSize_22 = value;
	}

	inline static int32_t get_offset_of_m_SSLCertFilePath_23() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SSLCertFilePath_23)); }
	inline String_t* get_m_SSLCertFilePath_23() const { return ___m_SSLCertFilePath_23; }
	inline String_t** get_address_of_m_SSLCertFilePath_23() { return &___m_SSLCertFilePath_23; }
	inline void set_m_SSLCertFilePath_23(String_t* value)
	{
		___m_SSLCertFilePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLCertFilePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_SSLPrivateKeyFilePath_24() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SSLPrivateKeyFilePath_24)); }
	inline String_t* get_m_SSLPrivateKeyFilePath_24() const { return ___m_SSLPrivateKeyFilePath_24; }
	inline String_t** get_address_of_m_SSLPrivateKeyFilePath_24() { return &___m_SSLPrivateKeyFilePath_24; }
	inline void set_m_SSLPrivateKeyFilePath_24(String_t* value)
	{
		___m_SSLPrivateKeyFilePath_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLPrivateKeyFilePath_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_SSLCAFilePath_25() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SSLCAFilePath_25)); }
	inline String_t* get_m_SSLCAFilePath_25() const { return ___m_SSLCAFilePath_25; }
	inline String_t** get_address_of_m_SSLCAFilePath_25() { return &___m_SSLCAFilePath_25; }
	inline void set_m_SSLCAFilePath_25(String_t* value)
	{
		___m_SSLCAFilePath_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SSLCAFilePath_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_Channels_26() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_Channels_26)); }
	inline List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * get_m_Channels_26() const { return ___m_Channels_26; }
	inline List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 ** get_address_of_m_Channels_26() { return &___m_Channels_26; }
	inline void set_m_Channels_26(List_1_t4A161C6204A381DADE144FA5F63CF0E3E7E11E33 * value)
	{
		___m_Channels_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Channels_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedOrderChannels_27() { return static_cast<int32_t>(offsetof(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A, ___m_SharedOrderChannels_27)); }
	inline List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * get_m_SharedOrderChannels_27() const { return ___m_SharedOrderChannels_27; }
	inline List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B ** get_address_of_m_SharedOrderChannels_27() { return &___m_SharedOrderChannels_27; }
	inline void set_m_SharedOrderChannels_27(List_1_t74C85CD2BEE64FE69AE8BF4BAB62A4186A73655B * value)
	{
		___m_SharedOrderChannels_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedOrderChannels_27), (void*)value);
	}
};


// UnityEngine.Networking.GlobalConfig
struct  GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66  : public RuntimeObject
{
public:
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_ThreadAwakeTimeout
	uint32_t ___m_ThreadAwakeTimeout_0;
	// UnityEngine.Networking.ReactorModel UnityEngine.Networking.GlobalConfig::m_ReactorModel
	int32_t ___m_ReactorModel_1;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_ReactorMaximumReceivedMessages
	uint16_t ___m_ReactorMaximumReceivedMessages_2;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_ReactorMaximumSentMessages
	uint16_t ___m_ReactorMaximumSentMessages_3;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_MaxPacketSize
	uint16_t ___m_MaxPacketSize_4;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_MaxHosts
	uint16_t ___m_MaxHosts_5;
	// System.Byte UnityEngine.Networking.GlobalConfig::m_ThreadPoolSize
	uint8_t ___m_ThreadPoolSize_6;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MinTimerTimeout
	uint32_t ___m_MinTimerTimeout_7;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MaxTimerTimeout
	uint32_t ___m_MaxTimerTimeout_8;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MinNetSimulatorTimeout
	uint32_t ___m_MinNetSimulatorTimeout_9;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MaxNetSimulatorTimeout
	uint32_t ___m_MaxNetSimulatorTimeout_10;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Networking.GlobalConfig::m_ConnectionReadyForSend
	Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * ___m_ConnectionReadyForSend_11;
	// System.Action`1<System.Int32> UnityEngine.Networking.GlobalConfig::m_NetworkEventAvailable
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___m_NetworkEventAvailable_12;

public:
	inline static int32_t get_offset_of_m_ThreadAwakeTimeout_0() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ThreadAwakeTimeout_0)); }
	inline uint32_t get_m_ThreadAwakeTimeout_0() const { return ___m_ThreadAwakeTimeout_0; }
	inline uint32_t* get_address_of_m_ThreadAwakeTimeout_0() { return &___m_ThreadAwakeTimeout_0; }
	inline void set_m_ThreadAwakeTimeout_0(uint32_t value)
	{
		___m_ThreadAwakeTimeout_0 = value;
	}

	inline static int32_t get_offset_of_m_ReactorModel_1() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ReactorModel_1)); }
	inline int32_t get_m_ReactorModel_1() const { return ___m_ReactorModel_1; }
	inline int32_t* get_address_of_m_ReactorModel_1() { return &___m_ReactorModel_1; }
	inline void set_m_ReactorModel_1(int32_t value)
	{
		___m_ReactorModel_1 = value;
	}

	inline static int32_t get_offset_of_m_ReactorMaximumReceivedMessages_2() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ReactorMaximumReceivedMessages_2)); }
	inline uint16_t get_m_ReactorMaximumReceivedMessages_2() const { return ___m_ReactorMaximumReceivedMessages_2; }
	inline uint16_t* get_address_of_m_ReactorMaximumReceivedMessages_2() { return &___m_ReactorMaximumReceivedMessages_2; }
	inline void set_m_ReactorMaximumReceivedMessages_2(uint16_t value)
	{
		___m_ReactorMaximumReceivedMessages_2 = value;
	}

	inline static int32_t get_offset_of_m_ReactorMaximumSentMessages_3() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ReactorMaximumSentMessages_3)); }
	inline uint16_t get_m_ReactorMaximumSentMessages_3() const { return ___m_ReactorMaximumSentMessages_3; }
	inline uint16_t* get_address_of_m_ReactorMaximumSentMessages_3() { return &___m_ReactorMaximumSentMessages_3; }
	inline void set_m_ReactorMaximumSentMessages_3(uint16_t value)
	{
		___m_ReactorMaximumSentMessages_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxPacketSize_4() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MaxPacketSize_4)); }
	inline uint16_t get_m_MaxPacketSize_4() const { return ___m_MaxPacketSize_4; }
	inline uint16_t* get_address_of_m_MaxPacketSize_4() { return &___m_MaxPacketSize_4; }
	inline void set_m_MaxPacketSize_4(uint16_t value)
	{
		___m_MaxPacketSize_4 = value;
	}

	inline static int32_t get_offset_of_m_MaxHosts_5() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MaxHosts_5)); }
	inline uint16_t get_m_MaxHosts_5() const { return ___m_MaxHosts_5; }
	inline uint16_t* get_address_of_m_MaxHosts_5() { return &___m_MaxHosts_5; }
	inline void set_m_MaxHosts_5(uint16_t value)
	{
		___m_MaxHosts_5 = value;
	}

	inline static int32_t get_offset_of_m_ThreadPoolSize_6() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ThreadPoolSize_6)); }
	inline uint8_t get_m_ThreadPoolSize_6() const { return ___m_ThreadPoolSize_6; }
	inline uint8_t* get_address_of_m_ThreadPoolSize_6() { return &___m_ThreadPoolSize_6; }
	inline void set_m_ThreadPoolSize_6(uint8_t value)
	{
		___m_ThreadPoolSize_6 = value;
	}

	inline static int32_t get_offset_of_m_MinTimerTimeout_7() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MinTimerTimeout_7)); }
	inline uint32_t get_m_MinTimerTimeout_7() const { return ___m_MinTimerTimeout_7; }
	inline uint32_t* get_address_of_m_MinTimerTimeout_7() { return &___m_MinTimerTimeout_7; }
	inline void set_m_MinTimerTimeout_7(uint32_t value)
	{
		___m_MinTimerTimeout_7 = value;
	}

	inline static int32_t get_offset_of_m_MaxTimerTimeout_8() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MaxTimerTimeout_8)); }
	inline uint32_t get_m_MaxTimerTimeout_8() const { return ___m_MaxTimerTimeout_8; }
	inline uint32_t* get_address_of_m_MaxTimerTimeout_8() { return &___m_MaxTimerTimeout_8; }
	inline void set_m_MaxTimerTimeout_8(uint32_t value)
	{
		___m_MaxTimerTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_MinNetSimulatorTimeout_9() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MinNetSimulatorTimeout_9)); }
	inline uint32_t get_m_MinNetSimulatorTimeout_9() const { return ___m_MinNetSimulatorTimeout_9; }
	inline uint32_t* get_address_of_m_MinNetSimulatorTimeout_9() { return &___m_MinNetSimulatorTimeout_9; }
	inline void set_m_MinNetSimulatorTimeout_9(uint32_t value)
	{
		___m_MinNetSimulatorTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_MaxNetSimulatorTimeout_10() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_MaxNetSimulatorTimeout_10)); }
	inline uint32_t get_m_MaxNetSimulatorTimeout_10() const { return ___m_MaxNetSimulatorTimeout_10; }
	inline uint32_t* get_address_of_m_MaxNetSimulatorTimeout_10() { return &___m_MaxNetSimulatorTimeout_10; }
	inline void set_m_MaxNetSimulatorTimeout_10(uint32_t value)
	{
		___m_MaxNetSimulatorTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionReadyForSend_11() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_ConnectionReadyForSend_11)); }
	inline Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * get_m_ConnectionReadyForSend_11() const { return ___m_ConnectionReadyForSend_11; }
	inline Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 ** get_address_of_m_ConnectionReadyForSend_11() { return &___m_ConnectionReadyForSend_11; }
	inline void set_m_ConnectionReadyForSend_11(Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 * value)
	{
		___m_ConnectionReadyForSend_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionReadyForSend_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkEventAvailable_12() { return static_cast<int32_t>(offsetof(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66, ___m_NetworkEventAvailable_12)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_m_NetworkEventAvailable_12() const { return ___m_NetworkEventAvailable_12; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_m_NetworkEventAvailable_12() { return &___m_NetworkEventAvailable_12; }
	inline void set_m_NetworkEventAvailable_12(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___m_NetworkEventAvailable_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkEventAvailable_12), (void*)value);
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_1)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;
};

// Mirror.RemoteCalls.CmdDelegate
struct  CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.InputSystem.InputAction_CallbackContext>
struct  Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.AddPlayerMessage>
struct  Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.CommandMessage>
struct  Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ConnectMessage>
struct  Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.DisconnectMessage>
struct  Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ErrorMessage>
struct  Action_2_t66675A75775137108E5F7FAB965F44B552778C26  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkBehaviour>
struct  Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkIdentity>
struct  Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPingMessage>
struct  Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPongMessage>
struct  Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.NotReadyMessage>
struct  Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectDestroyMessage>
struct  Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectHideMessage>
struct  Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnFinishedMessage>
struct  Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnStartedMessage>
struct  Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.ReadyMessage>
struct  Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.RpcMessage>
struct  Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.SceneMessage>
struct  Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.SceneOperation>
struct  Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.SpawnMessage>
struct  Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,Mirror.UpdateVarsMessage>
struct  Action_2_t5A3703D259887235527744E2BD7095928D420ADD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>>
struct  Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Boolean>
struct  Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Byte>
struct  Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Byte[]>
struct  Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Char>
struct  Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Decimal>
struct  Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Double>
struct  Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Guid>
struct  Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Int16>
struct  Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Int32>
struct  Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Int64>
struct  Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.SByte>
struct  Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Single>
struct  Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.String>
struct  Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.UInt16>
struct  Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.UInt32>
struct  Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.UInt64>
struct  Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,System.Uri>
struct  Action_2_t928C90600628DF3301846464535E0CBE3D956042  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color32>
struct  Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Color>
struct  Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.GameObject>
struct  Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Matrix4x4>
struct  Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Plane>
struct  Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Quaternion>
struct  Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Ray>
struct  Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Rect>
struct  Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Transform>
struct  Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2>
struct  Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2Int>
struct  Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3>
struct  Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3Int>
struct  Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector4>
struct  Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.AddPlayerMessage>
struct  Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.CommandMessage>
struct  Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ConnectMessage>
struct  Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.DisconnectMessage>
struct  Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ErrorMessage>
struct  Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour_NetworkBehaviourSyncVar>
struct  Func_2_t04EF3A5777F40A74EFD067B934A0450866148824  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour>
struct  Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NetworkIdentity>
struct  Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NetworkPingMessage>
struct  Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NetworkPongMessage>
struct  Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.NotReadyMessage>
struct  Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ObjectDestroyMessage>
struct  Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ObjectHideMessage>
struct  Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnFinishedMessage>
struct  Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnStartedMessage>
struct  Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.ReadyMessage>
struct  Func_2_t61544C42F8B241A1233CC53D76C007FD59735486  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.RpcMessage>
struct  Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.SceneMessage>
struct  Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.SceneOperation>
struct  Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.SpawnMessage>
struct  Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,Mirror.UpdateVarsMessage>
struct  Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.ArraySegment`1<System.Byte>>
struct  Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Boolean>
struct  Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Byte>
struct  Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Byte[]>
struct  Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Char>
struct  Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Decimal>
struct  Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Double>
struct  Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Guid>
struct  Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Int16>
struct  Func_2_tB004921AE76C91000E3C564021526D419AA05415  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Int32>
struct  Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Int64>
struct  Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.SByte>
struct  Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Single>
struct  Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.String>
struct  Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.UInt16>
struct  Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.UInt32>
struct  Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.UInt64>
struct  Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,System.Uri>
struct  Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Color32>
struct  Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Color>
struct  Func_2_t884310CBAF609B1E4C14090750447709C5A58716  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.GameObject>
struct  Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Matrix4x4>
struct  Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Plane>
struct  Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Quaternion>
struct  Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Ray>
struct  Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Rect>
struct  Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Transform>
struct  Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2>
struct  Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2Int>
struct  Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3>
struct  Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3Int>
struct  Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Mirror.NetworkReader,UnityEngine.Vector4>
struct  Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.RaycastHit2D,System.Boolean>
struct  Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct  Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4 
{
public:
	// T System.Nullable`1::value
	InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4, ___value_0)); }
	inline InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF  get_value_0() const { return ___value_0; }
	inline InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t2C7457AFCCF50030513513C37B805982E52783DF  value)
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

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.InputSystem.InputAction
struct  InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502  : public RuntimeObject
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
	InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD* ___m_SingletonActionBindings_6;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  ___m_BindingMask_7;
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
	InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * ___m_ActionMap_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction_CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  ___m_OnStarted_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction_CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  ___m_OnCanceled_15;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction_CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  ___m_OnPerformed_16;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_7() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_BindingMask_7)); }
	inline Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  get_m_BindingMask_7() const { return ___m_BindingMask_7; }
	inline Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4 * get_address_of_m_BindingMask_7() { return &___m_BindingMask_7; }
	inline void set_m_BindingMask_7(Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  value)
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

	inline static int32_t get_offset_of_m_BindingsStartIndex_8() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_BindingsStartIndex_8)); }
	inline int32_t get_m_BindingsStartIndex_8() const { return ___m_BindingsStartIndex_8; }
	inline int32_t* get_address_of_m_BindingsStartIndex_8() { return &___m_BindingsStartIndex_8; }
	inline void set_m_BindingsStartIndex_8(int32_t value)
	{
		___m_BindingsStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_9() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_BindingsCount_9)); }
	inline int32_t get_m_BindingsCount_9() const { return ___m_BindingsCount_9; }
	inline int32_t* get_address_of_m_BindingsCount_9() { return &___m_BindingsCount_9; }
	inline void set_m_BindingsCount_9(int32_t value)
	{
		___m_BindingsCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_ControlStartIndex_10)); }
	inline int32_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline int32_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(int32_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_11() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_ControlCount_11)); }
	inline int32_t get_m_ControlCount_11() const { return ___m_ControlCount_11; }
	inline int32_t* get_address_of_m_ControlCount_11() { return &___m_ControlCount_11; }
	inline void set_m_ControlCount_11(int32_t value)
	{
		___m_ControlCount_11 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_12() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_ActionIndexInState_12)); }
	inline int32_t get_m_ActionIndexInState_12() const { return ___m_ActionIndexInState_12; }
	inline int32_t* get_address_of_m_ActionIndexInState_12() { return &___m_ActionIndexInState_12; }
	inline void set_m_ActionIndexInState_12(int32_t value)
	{
		___m_ActionIndexInState_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_13() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_ActionMap_13)); }
	inline InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * get_m_ActionMap_13() const { return ___m_ActionMap_13; }
	inline InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 ** get_address_of_m_ActionMap_13() { return &___m_ActionMap_13; }
	inline void set_m_ActionMap_13(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * value)
	{
		___m_ActionMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_14() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_OnStarted_14)); }
	inline InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  get_m_OnStarted_14() const { return ___m_OnStarted_14; }
	inline InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C * get_address_of_m_OnStarted_14() { return &___m_OnStarted_14; }
	inline void set_m_OnStarted_14(InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  value)
	{
		___m_OnStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_15() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_OnCanceled_15)); }
	inline InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  get_m_OnCanceled_15() const { return ___m_OnCanceled_15; }
	inline InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C * get_address_of_m_OnCanceled_15() { return &___m_OnCanceled_15; }
	inline void set_m_OnCanceled_15(InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  value)
	{
		___m_OnCanceled_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_16() { return static_cast<int32_t>(offsetof(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502, ___m_OnPerformed_16)); }
	inline InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  get_m_OnPerformed_16() const { return ___m_OnPerformed_16; }
	inline InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C * get_address_of_m_OnPerformed_16() { return &___m_OnPerformed_16; }
	inline void set_m_OnPerformed_16(InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  value)
	{
		___m_OnPerformed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputActionAsset
struct  InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t7984DCECF082AB5EF114332E0A00AD4B3582A372* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tB7367D1166814016C7E1BD0732A41DBA0FA33622* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_DevicesCount
	int32_t ___m_DevicesCount_9;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionAsset::m_DevicesArray
	InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70* ___m_DevicesArray_10;

public:
	inline static int32_t get_offset_of_m_ActionMaps_5() { return static_cast<int32_t>(offsetof(InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98, ___m_ActionMaps_5)); }
	inline InputActionMapU5BU5D_t7984DCECF082AB5EF114332E0A00AD4B3582A372* get_m_ActionMaps_5() const { return ___m_ActionMaps_5; }
	inline InputActionMapU5BU5D_t7984DCECF082AB5EF114332E0A00AD4B3582A372** get_address_of_m_ActionMaps_5() { return &___m_ActionMaps_5; }
	inline void set_m_ActionMaps_5(InputActionMapU5BU5D_t7984DCECF082AB5EF114332E0A00AD4B3582A372* value)
	{
		___m_ActionMaps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMaps_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemes_6() { return static_cast<int32_t>(offsetof(InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98, ___m_ControlSchemes_6)); }
	inline InputControlSchemeU5BU5D_tB7367D1166814016C7E1BD0732A41DBA0FA33622* get_m_ControlSchemes_6() const { return ___m_ControlSchemes_6; }
	inline InputControlSchemeU5BU5D_tB7367D1166814016C7E1BD0732A41DBA0FA33622** get_address_of_m_ControlSchemes_6() { return &___m_ControlSchemes_6; }
	inline void set_m_ControlSchemes_6(InputControlSchemeU5BU5D_tB7367D1166814016C7E1BD0732A41DBA0FA33622* value)
	{
		___m_ControlSchemes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlSchemes_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedStateForAllMaps_7() { return static_cast<int32_t>(offsetof(InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98, ___m_SharedStateForAllMaps_7)); }
	inline InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * get_m_SharedStateForAllMaps_7() const { return ___m_SharedStateForAllMaps_7; }
	inline InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A ** get_address_of_m_SharedStateForAllMaps_7() { return &___m_SharedStateForAllMaps_7; }
	inline void set_m_SharedStateForAllMaps_7(InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * value)
	{
		___m_SharedStateForAllMaps_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedStateForAllMaps_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98, ___m_BindingMask_8)); }
	inline Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4 * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_9() { return static_cast<int32_t>(offsetof(InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98, ___m_DevicesCount_9)); }
	inline int32_t get_m_DevicesCount_9() const { return ___m_DevicesCount_9; }
	inline int32_t* get_address_of_m_DevicesCount_9() { return &___m_DevicesCount_9; }
	inline void set_m_DevicesCount_9(int32_t value)
	{
		___m_DevicesCount_9 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_10() { return static_cast<int32_t>(offsetof(InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98, ___m_DevicesArray_10)); }
	inline InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70* get_m_DevicesArray_10() const { return ___m_DevicesArray_10; }
	inline InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70** get_address_of_m_DevicesArray_10() { return &___m_DevicesArray_10; }
	inline void set_m_DevicesArray_10(InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70* value)
	{
		___m_DevicesArray_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_10), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionMap
struct  InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6E8F55A3C3BAB2D7A66E5472A0CFA1B79551B329* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_tF0AEF1018EBA3AD9FF6D7CF527CF1767FFE5DEF7* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * ___m_State_10;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_11;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  ___m_BindingMask_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_DevicesCount
	int32_t ___m_DevicesCount_13;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap::m_DevicesArray
	InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70* ___m_DevicesArray_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction_CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  ___m_ActionCallbacks_15;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_Id_1)); }
	inline String_t* get_m_Id_1() const { return ___m_Id_1; }
	inline String_t** get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(String_t* value)
	{
		___m_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Asset_2() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_Asset_2)); }
	inline InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * get_m_Asset_2() const { return ___m_Asset_2; }
	inline InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 ** get_address_of_m_Asset_2() { return &___m_Asset_2; }
	inline void set_m_Asset_2(InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * value)
	{
		___m_Asset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Actions_3() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_Actions_3)); }
	inline InputActionU5BU5D_t6E8F55A3C3BAB2D7A66E5472A0CFA1B79551B329* get_m_Actions_3() const { return ___m_Actions_3; }
	inline InputActionU5BU5D_t6E8F55A3C3BAB2D7A66E5472A0CFA1B79551B329** get_address_of_m_Actions_3() { return &___m_Actions_3; }
	inline void set_m_Actions_3(InputActionU5BU5D_t6E8F55A3C3BAB2D7A66E5472A0CFA1B79551B329* value)
	{
		___m_Actions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Bindings_4() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_Bindings_4)); }
	inline InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD* get_m_Bindings_4() const { return ___m_Bindings_4; }
	inline InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD** get_address_of_m_Bindings_4() { return &___m_Bindings_4; }
	inline void set_m_Bindings_4(InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD* value)
	{
		___m_Bindings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingsForEachAction_5() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_BindingsForEachAction_5)); }
	inline InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD* get_m_BindingsForEachAction_5() const { return ___m_BindingsForEachAction_5; }
	inline InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD** get_address_of_m_BindingsForEachAction_5() { return &___m_BindingsForEachAction_5; }
	inline void set_m_BindingsForEachAction_5(InputBindingU5BU5D_tAB66DAAEBC8A0FB61184F49CC043D256EDDD99FD* value)
	{
		___m_BindingsForEachAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingsForEachAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlsForEachAction_6() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_ControlsForEachAction_6)); }
	inline InputControlU5BU5D_tF0AEF1018EBA3AD9FF6D7CF527CF1767FFE5DEF7* get_m_ControlsForEachAction_6() const { return ___m_ControlsForEachAction_6; }
	inline InputControlU5BU5D_tF0AEF1018EBA3AD9FF6D7CF527CF1767FFE5DEF7** get_address_of_m_ControlsForEachAction_6() { return &___m_ControlsForEachAction_6; }
	inline void set_m_ControlsForEachAction_6(InputControlU5BU5D_tF0AEF1018EBA3AD9FF6D7CF527CF1767FFE5DEF7* value)
	{
		___m_ControlsForEachAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlsForEachAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnabledActionsCount_7() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_EnabledActionsCount_7)); }
	inline int32_t get_m_EnabledActionsCount_7() const { return ___m_EnabledActionsCount_7; }
	inline int32_t* get_address_of_m_EnabledActionsCount_7() { return &___m_EnabledActionsCount_7; }
	inline void set_m_EnabledActionsCount_7(int32_t value)
	{
		___m_EnabledActionsCount_7 = value;
	}

	inline static int32_t get_offset_of_m_SingletonAction_8() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_SingletonAction_8)); }
	inline InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * get_m_SingletonAction_8() const { return ___m_SingletonAction_8; }
	inline InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 ** get_address_of_m_SingletonAction_8() { return &___m_SingletonAction_8; }
	inline void set_m_SingletonAction_8(InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * value)
	{
		___m_SingletonAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_MapIndexInState_9() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_MapIndexInState_9)); }
	inline int32_t get_m_MapIndexInState_9() const { return ___m_MapIndexInState_9; }
	inline int32_t* get_address_of_m_MapIndexInState_9() { return &___m_MapIndexInState_9; }
	inline void set_m_MapIndexInState_9(int32_t value)
	{
		___m_MapIndexInState_9 = value;
	}

	inline static int32_t get_offset_of_m_State_10() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_State_10)); }
	inline InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * get_m_State_10() const { return ___m_State_10; }
	inline InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A ** get_address_of_m_State_10() { return &___m_State_10; }
	inline void set_m_State_10(InputActionState_tB900EC1672B9AA430B328C018EF67C86BC3FBC1A * value)
	{
		___m_State_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeedToResolveBindings_11() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_NeedToResolveBindings_11)); }
	inline bool get_m_NeedToResolveBindings_11() const { return ___m_NeedToResolveBindings_11; }
	inline bool* get_address_of_m_NeedToResolveBindings_11() { return &___m_NeedToResolveBindings_11; }
	inline void set_m_NeedToResolveBindings_11(bool value)
	{
		___m_NeedToResolveBindings_11 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_12() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_BindingMask_12)); }
	inline Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  get_m_BindingMask_12() const { return ___m_BindingMask_12; }
	inline Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4 * get_address_of_m_BindingMask_12() { return &___m_BindingMask_12; }
	inline void set_m_BindingMask_12(Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  value)
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

	inline static int32_t get_offset_of_m_DevicesCount_13() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_DevicesCount_13)); }
	inline int32_t get_m_DevicesCount_13() const { return ___m_DevicesCount_13; }
	inline int32_t* get_address_of_m_DevicesCount_13() { return &___m_DevicesCount_13; }
	inline void set_m_DevicesCount_13(int32_t value)
	{
		___m_DevicesCount_13 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_14() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_DevicesArray_14)); }
	inline InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70* get_m_DevicesArray_14() const { return ___m_DevicesArray_14; }
	inline InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70** get_address_of_m_DevicesArray_14() { return &___m_DevicesArray_14; }
	inline void set_m_DevicesArray_14(InputDeviceU5BU5D_t314268D70D6DAB22959AFB288C1727982B9B7A70* value)
	{
		___m_DevicesArray_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionCallbacks_15() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6, ___m_ActionCallbacks_15)); }
	inline InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  get_m_ActionCallbacks_15() const { return ___m_ActionCallbacks_15; }
	inline InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C * get_address_of_m_ActionCallbacks_15() { return &___m_ActionCallbacks_15; }
	inline void set_m_ActionCallbacks_15(InlinedArray_1_tDB27D6F8161BC69A490F653B56EA327042FD091C  value)
	{
		___m_ActionCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

struct InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6_StaticFields
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_16;

public:
	inline static int32_t get_offset_of_s_DeferBindingResolution_16() { return static_cast<int32_t>(offsetof(InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6_StaticFields, ___s_DeferBindingResolution_16)); }
	inline int32_t get_s_DeferBindingResolution_16() const { return ___s_DeferBindingResolution_16; }
	inline int32_t* get_address_of_s_DeferBindingResolution_16() { return &___s_DeferBindingResolution_16; }
	inline void set_s_DeferBindingResolution_16(int32_t value)
	{
		___s_DeferBindingResolution_16 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// CameraFollow
struct  CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraFollow::playerTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playerTransform_4;
	// System.Int32 CameraFollow::depth
	int32_t ___depth_5;

public:
	inline static int32_t get_offset_of_playerTransform_4() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___playerTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_playerTransform_4() const { return ___playerTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_playerTransform_4() { return &___playerTransform_4; }
	inline void set_playerTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___playerTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_depth_5() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___depth_5)); }
	inline int32_t get_depth_5() const { return ___depth_5; }
	inline int32_t* get_address_of_depth_5() { return &___depth_5; }
	inline void set_depth_5(int32_t value)
	{
		___depth_5 = value;
	}
};


// Client
struct  Client_t8953F633032099609444F417EEFFBED62649CECB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Client::ip
	String_t* ___ip_6;
	// System.Int32 Client::port
	int32_t ___port_7;
	// System.Int32 Client::myId
	int32_t ___myId_8;
	// Client_TCP Client::tcp
	TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * ___tcp_9;

public:
	inline static int32_t get_offset_of_ip_6() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB, ___ip_6)); }
	inline String_t* get_ip_6() const { return ___ip_6; }
	inline String_t** get_address_of_ip_6() { return &___ip_6; }
	inline void set_ip_6(String_t* value)
	{
		___ip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ip_6), (void*)value);
	}

	inline static int32_t get_offset_of_port_7() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB, ___port_7)); }
	inline int32_t get_port_7() const { return ___port_7; }
	inline int32_t* get_address_of_port_7() { return &___port_7; }
	inline void set_port_7(int32_t value)
	{
		___port_7 = value;
	}

	inline static int32_t get_offset_of_myId_8() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB, ___myId_8)); }
	inline int32_t get_myId_8() const { return ___myId_8; }
	inline int32_t* get_address_of_myId_8() { return &___myId_8; }
	inline void set_myId_8(int32_t value)
	{
		___myId_8 = value;
	}

	inline static int32_t get_offset_of_tcp_9() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB, ___tcp_9)); }
	inline TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * get_tcp_9() const { return ___tcp_9; }
	inline TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F ** get_address_of_tcp_9() { return &___tcp_9; }
	inline void set_tcp_9(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * value)
	{
		___tcp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcp_9), (void*)value);
	}
};

struct Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields
{
public:
	// Client Client::instance
	Client_t8953F633032099609444F417EEFFBED62649CECB * ___instance_4;
	// System.Int32 Client::dataBufferSize
	int32_t ___dataBufferSize_5;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields, ___instance_4)); }
	inline Client_t8953F633032099609444F417EEFFBED62649CECB * get_instance_4() const { return ___instance_4; }
	inline Client_t8953F633032099609444F417EEFFBED62649CECB ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(Client_t8953F633032099609444F417EEFFBED62649CECB * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_dataBufferSize_5() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields, ___dataBufferSize_5)); }
	inline int32_t get_dataBufferSize_5() const { return ___dataBufferSize_5; }
	inline int32_t* get_address_of_dataBufferSize_5() { return &___dataBufferSize_5; }
	inline void set_dataBufferSize_5(int32_t value)
	{
		___dataBufferSize_5 = value;
	}
};


// Mirror.NetworkBehaviour
struct  NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Mirror.NetworkBehaviour::lastSyncTime
	float ___lastSyncTime_5;
	// Mirror.SyncMode Mirror.NetworkBehaviour::syncMode
	int32_t ___syncMode_6;
	// System.Single Mirror.NetworkBehaviour::syncInterval
	float ___syncInterval_7;
	// System.UInt64 Mirror.NetworkBehaviour::<syncVarDirtyBits>k__BackingField
	uint64_t ___U3CsyncVarDirtyBitsU3Ek__BackingField_8;
	// System.UInt64 Mirror.NetworkBehaviour::syncVarHookGuard
	uint64_t ___syncVarHookGuard_9;
	// System.Collections.Generic.List`1<Mirror.SyncObject> Mirror.NetworkBehaviour::syncObjects
	List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * ___syncObjects_10;
	// Mirror.NetworkIdentity Mirror.NetworkBehaviour::netIdentityCache
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___netIdentityCache_11;

public:
	inline static int32_t get_offset_of_lastSyncTime_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___lastSyncTime_5)); }
	inline float get_lastSyncTime_5() const { return ___lastSyncTime_5; }
	inline float* get_address_of_lastSyncTime_5() { return &___lastSyncTime_5; }
	inline void set_lastSyncTime_5(float value)
	{
		___lastSyncTime_5 = value;
	}

	inline static int32_t get_offset_of_syncMode_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncMode_6)); }
	inline int32_t get_syncMode_6() const { return ___syncMode_6; }
	inline int32_t* get_address_of_syncMode_6() { return &___syncMode_6; }
	inline void set_syncMode_6(int32_t value)
	{
		___syncMode_6 = value;
	}

	inline static int32_t get_offset_of_syncInterval_7() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncInterval_7)); }
	inline float get_syncInterval_7() const { return ___syncInterval_7; }
	inline float* get_address_of_syncInterval_7() { return &___syncInterval_7; }
	inline void set_syncInterval_7(float value)
	{
		___syncInterval_7 = value;
	}

	inline static int32_t get_offset_of_U3CsyncVarDirtyBitsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___U3CsyncVarDirtyBitsU3Ek__BackingField_8)); }
	inline uint64_t get_U3CsyncVarDirtyBitsU3Ek__BackingField_8() const { return ___U3CsyncVarDirtyBitsU3Ek__BackingField_8; }
	inline uint64_t* get_address_of_U3CsyncVarDirtyBitsU3Ek__BackingField_8() { return &___U3CsyncVarDirtyBitsU3Ek__BackingField_8; }
	inline void set_U3CsyncVarDirtyBitsU3Ek__BackingField_8(uint64_t value)
	{
		___U3CsyncVarDirtyBitsU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_syncVarHookGuard_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncVarHookGuard_9)); }
	inline uint64_t get_syncVarHookGuard_9() const { return ___syncVarHookGuard_9; }
	inline uint64_t* get_address_of_syncVarHookGuard_9() { return &___syncVarHookGuard_9; }
	inline void set_syncVarHookGuard_9(uint64_t value)
	{
		___syncVarHookGuard_9 = value;
	}

	inline static int32_t get_offset_of_syncObjects_10() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___syncObjects_10)); }
	inline List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * get_syncObjects_10() const { return ___syncObjects_10; }
	inline List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 ** get_address_of_syncObjects_10() { return &___syncObjects_10; }
	inline void set_syncObjects_10(List_1_t51966D9FDD8DBE9C5685D80FC3B72F573EDC7156 * value)
	{
		___syncObjects_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncObjects_10), (void*)value);
	}

	inline static int32_t get_offset_of_netIdentityCache_11() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4, ___netIdentityCache_11)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_netIdentityCache_11() const { return ___netIdentityCache_11; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_netIdentityCache_11() { return &___netIdentityCache_11; }
	inline void set_netIdentityCache_11(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___netIdentityCache_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___netIdentityCache_11), (void*)value);
	}
};

struct NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkBehaviour::logger
	RuntimeObject* ___logger_4;

public:
	inline static int32_t get_offset_of_logger_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4_StaticFields, ___logger_4)); }
	inline RuntimeObject* get_logger_4() const { return ___logger_4; }
	inline RuntimeObject** get_address_of_logger_4() { return &___logger_4; }
	inline void set_logger_4(RuntimeObject* value)
	{
		___logger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_4), (void*)value);
	}
};


// Mirror.NetworkIdentity
struct  NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Mirror.NetworkBehaviour[] Mirror.NetworkIdentity::networkBehavioursCache
	NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* ___networkBehavioursCache_5;
	// System.Boolean Mirror.NetworkIdentity::<isClient>k__BackingField
	bool ___U3CisClientU3Ek__BackingField_6;
	// System.Boolean Mirror.NetworkIdentity::<isServer>k__BackingField
	bool ___U3CisServerU3Ek__BackingField_7;
	// System.Boolean Mirror.NetworkIdentity::<hasAuthority>k__BackingField
	bool ___U3ChasAuthorityU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnection> Mirror.NetworkIdentity::observers
	Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 * ___observers_9;
	// System.UInt32 Mirror.NetworkIdentity::<netId>k__BackingField
	uint32_t ___U3CnetIdU3Ek__BackingField_10;
	// System.UInt64 Mirror.NetworkIdentity::sceneId
	uint64_t ___sceneId_11;
	// System.Boolean Mirror.NetworkIdentity::serverOnly
	bool ___serverOnly_12;
	// System.Boolean Mirror.NetworkIdentity::destroyCalled
	bool ___destroyCalled_13;
	// Mirror.NetworkConnection Mirror.NetworkIdentity::<connectionToServer>k__BackingField
	NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * ___U3CconnectionToServerU3Ek__BackingField_14;
	// Mirror.NetworkConnectionToClient Mirror.NetworkIdentity::_connectionToClient
	NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ____connectionToClient_15;
	// Mirror.NetworkVisibility Mirror.NetworkIdentity::visibilityCache
	NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * ___visibilityCache_17;
	// System.String Mirror.NetworkIdentity::m_AssetId
	String_t* ___m_AssetId_18;
	// System.Boolean Mirror.NetworkIdentity::hasSpawned
	bool ___hasSpawned_22;
	// System.Boolean Mirror.NetworkIdentity::<SpawnedFromInstantiate>k__BackingField
	bool ___U3CSpawnedFromInstantiateU3Ek__BackingField_23;
	// System.Boolean Mirror.NetworkIdentity::clientStarted
	bool ___clientStarted_24;
	// System.Boolean Mirror.NetworkIdentity::hadAuthority
	bool ___hadAuthority_26;

public:
	inline static int32_t get_offset_of_networkBehavioursCache_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___networkBehavioursCache_5)); }
	inline NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* get_networkBehavioursCache_5() const { return ___networkBehavioursCache_5; }
	inline NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC** get_address_of_networkBehavioursCache_5() { return &___networkBehavioursCache_5; }
	inline void set_networkBehavioursCache_5(NetworkBehaviourU5BU5D_t88F442C3B8452017C596F9367CB7F74F7B07C8CC* value)
	{
		___networkBehavioursCache_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkBehavioursCache_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisClientU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CisClientU3Ek__BackingField_6)); }
	inline bool get_U3CisClientU3Ek__BackingField_6() const { return ___U3CisClientU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisClientU3Ek__BackingField_6() { return &___U3CisClientU3Ek__BackingField_6; }
	inline void set_U3CisClientU3Ek__BackingField_6(bool value)
	{
		___U3CisClientU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CisServerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CisServerU3Ek__BackingField_7)); }
	inline bool get_U3CisServerU3Ek__BackingField_7() const { return ___U3CisServerU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CisServerU3Ek__BackingField_7() { return &___U3CisServerU3Ek__BackingField_7; }
	inline void set_U3CisServerU3Ek__BackingField_7(bool value)
	{
		___U3CisServerU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3ChasAuthorityU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3ChasAuthorityU3Ek__BackingField_8)); }
	inline bool get_U3ChasAuthorityU3Ek__BackingField_8() const { return ___U3ChasAuthorityU3Ek__BackingField_8; }
	inline bool* get_address_of_U3ChasAuthorityU3Ek__BackingField_8() { return &___U3ChasAuthorityU3Ek__BackingField_8; }
	inline void set_U3ChasAuthorityU3Ek__BackingField_8(bool value)
	{
		___U3ChasAuthorityU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_observers_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___observers_9)); }
	inline Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 * get_observers_9() const { return ___observers_9; }
	inline Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 ** get_address_of_observers_9() { return &___observers_9; }
	inline void set_observers_9(Dictionary_2_tA2BBDBE70FB362315A9DAEFAAF9DABFDAD7E4E59 * value)
	{
		___observers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observers_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetIdU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CnetIdU3Ek__BackingField_10)); }
	inline uint32_t get_U3CnetIdU3Ek__BackingField_10() const { return ___U3CnetIdU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CnetIdU3Ek__BackingField_10() { return &___U3CnetIdU3Ek__BackingField_10; }
	inline void set_U3CnetIdU3Ek__BackingField_10(uint32_t value)
	{
		___U3CnetIdU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_sceneId_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___sceneId_11)); }
	inline uint64_t get_sceneId_11() const { return ___sceneId_11; }
	inline uint64_t* get_address_of_sceneId_11() { return &___sceneId_11; }
	inline void set_sceneId_11(uint64_t value)
	{
		___sceneId_11 = value;
	}

	inline static int32_t get_offset_of_serverOnly_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___serverOnly_12)); }
	inline bool get_serverOnly_12() const { return ___serverOnly_12; }
	inline bool* get_address_of_serverOnly_12() { return &___serverOnly_12; }
	inline void set_serverOnly_12(bool value)
	{
		___serverOnly_12 = value;
	}

	inline static int32_t get_offset_of_destroyCalled_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___destroyCalled_13)); }
	inline bool get_destroyCalled_13() const { return ___destroyCalled_13; }
	inline bool* get_address_of_destroyCalled_13() { return &___destroyCalled_13; }
	inline void set_destroyCalled_13(bool value)
	{
		___destroyCalled_13 = value;
	}

	inline static int32_t get_offset_of_U3CconnectionToServerU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CconnectionToServerU3Ek__BackingField_14)); }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * get_U3CconnectionToServerU3Ek__BackingField_14() const { return ___U3CconnectionToServerU3Ek__BackingField_14; }
	inline NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 ** get_address_of_U3CconnectionToServerU3Ek__BackingField_14() { return &___U3CconnectionToServerU3Ek__BackingField_14; }
	inline void set_U3CconnectionToServerU3Ek__BackingField_14(NetworkConnection_t5DD5A384AFA5946D766F7D3A5F8E5418FAB10311 * value)
	{
		___U3CconnectionToServerU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CconnectionToServerU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of__connectionToClient_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ____connectionToClient_15)); }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * get__connectionToClient_15() const { return ____connectionToClient_15; }
	inline NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A ** get_address_of__connectionToClient_15() { return &____connectionToClient_15; }
	inline void set__connectionToClient_15(NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * value)
	{
		____connectionToClient_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionToClient_15), (void*)value);
	}

	inline static int32_t get_offset_of_visibilityCache_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___visibilityCache_17)); }
	inline NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * get_visibilityCache_17() const { return ___visibilityCache_17; }
	inline NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 ** get_address_of_visibilityCache_17() { return &___visibilityCache_17; }
	inline void set_visibilityCache_17(NetworkVisibility_t11F3E314460EB47EA3971A1B1B3C88D6B69B1B07 * value)
	{
		___visibilityCache_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibilityCache_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_AssetId_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___m_AssetId_18)); }
	inline String_t* get_m_AssetId_18() const { return ___m_AssetId_18; }
	inline String_t** get_address_of_m_AssetId_18() { return &___m_AssetId_18; }
	inline void set_m_AssetId_18(String_t* value)
	{
		___m_AssetId_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AssetId_18), (void*)value);
	}

	inline static int32_t get_offset_of_hasSpawned_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___hasSpawned_22)); }
	inline bool get_hasSpawned_22() const { return ___hasSpawned_22; }
	inline bool* get_address_of_hasSpawned_22() { return &___hasSpawned_22; }
	inline void set_hasSpawned_22(bool value)
	{
		___hasSpawned_22 = value;
	}

	inline static int32_t get_offset_of_U3CSpawnedFromInstantiateU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___U3CSpawnedFromInstantiateU3Ek__BackingField_23)); }
	inline bool get_U3CSpawnedFromInstantiateU3Ek__BackingField_23() const { return ___U3CSpawnedFromInstantiateU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CSpawnedFromInstantiateU3Ek__BackingField_23() { return &___U3CSpawnedFromInstantiateU3Ek__BackingField_23; }
	inline void set_U3CSpawnedFromInstantiateU3Ek__BackingField_23(bool value)
	{
		___U3CSpawnedFromInstantiateU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_clientStarted_24() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___clientStarted_24)); }
	inline bool get_clientStarted_24() const { return ___clientStarted_24; }
	inline bool* get_address_of_clientStarted_24() { return &___clientStarted_24; }
	inline void set_clientStarted_24(bool value)
	{
		___clientStarted_24 = value;
	}

	inline static int32_t get_offset_of_hadAuthority_26() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6, ___hadAuthority_26)); }
	inline bool get_hadAuthority_26() const { return ___hadAuthority_26; }
	inline bool* get_address_of_hadAuthority_26() { return &___hadAuthority_26; }
	inline void set_hadAuthority_26(bool value)
	{
		___hadAuthority_26 = value;
	}
};

struct NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkIdentity::logger
	RuntimeObject* ___logger_4;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Mirror.NetworkIdentity> Mirror.NetworkIdentity::spawned
	Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * ___spawned_16;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Mirror.NetworkIdentity> Mirror.NetworkIdentity::sceneIds
	Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * ___sceneIds_19;
	// System.UInt32 Mirror.NetworkIdentity::nextNetworkId
	uint32_t ___nextNetworkId_20;
	// Mirror.NetworkIdentity_ClientAuthorityCallback Mirror.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * ___clientAuthorityCallback_21;
	// Mirror.NetworkIdentity Mirror.NetworkIdentity::previousLocalPlayer
	NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * ___previousLocalPlayer_25;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkConnection> Mirror.NetworkIdentity::newObservers
	HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * ___newObservers_27;

public:
	inline static int32_t get_offset_of_logger_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___logger_4)); }
	inline RuntimeObject* get_logger_4() const { return ___logger_4; }
	inline RuntimeObject** get_address_of_logger_4() { return &___logger_4; }
	inline void set_logger_4(RuntimeObject* value)
	{
		___logger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawned_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___spawned_16)); }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * get_spawned_16() const { return ___spawned_16; }
	inline Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 ** get_address_of_spawned_16() { return &___spawned_16; }
	inline void set_spawned_16(Dictionary_2_tC47464E755F7C5EDFD2B178067DAA88CBFDA1817 * value)
	{
		___spawned_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawned_16), (void*)value);
	}

	inline static int32_t get_offset_of_sceneIds_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___sceneIds_19)); }
	inline Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * get_sceneIds_19() const { return ___sceneIds_19; }
	inline Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C ** get_address_of_sceneIds_19() { return &___sceneIds_19; }
	inline void set_sceneIds_19(Dictionary_2_tA1C4AE7C6548102346AE92D5AF868D200E74F27C * value)
	{
		___sceneIds_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneIds_19), (void*)value);
	}

	inline static int32_t get_offset_of_nextNetworkId_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___nextNetworkId_20)); }
	inline uint32_t get_nextNetworkId_20() const { return ___nextNetworkId_20; }
	inline uint32_t* get_address_of_nextNetworkId_20() { return &___nextNetworkId_20; }
	inline void set_nextNetworkId_20(uint32_t value)
	{
		___nextNetworkId_20 = value;
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___clientAuthorityCallback_21)); }
	inline ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * get_clientAuthorityCallback_21() const { return ___clientAuthorityCallback_21; }
	inline ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 ** get_address_of_clientAuthorityCallback_21() { return &___clientAuthorityCallback_21; }
	inline void set_clientAuthorityCallback_21(ClientAuthorityCallback_t661AE911AB52266E53A07F3C757CAF292AE3E041 * value)
	{
		___clientAuthorityCallback_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_21), (void*)value);
	}

	inline static int32_t get_offset_of_previousLocalPlayer_25() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___previousLocalPlayer_25)); }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * get_previousLocalPlayer_25() const { return ___previousLocalPlayer_25; }
	inline NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 ** get_address_of_previousLocalPlayer_25() { return &___previousLocalPlayer_25; }
	inline void set_previousLocalPlayer_25(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6 * value)
	{
		___previousLocalPlayer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousLocalPlayer_25), (void*)value);
	}

	inline static int32_t get_offset_of_newObservers_27() { return static_cast<int32_t>(offsetof(NetworkIdentity_t70E508ECD2AC55E14D9D2BBD15BB341AEE0BB0B6_StaticFields, ___newObservers_27)); }
	inline HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * get_newObservers_27() const { return ___newObservers_27; }
	inline HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 ** get_address_of_newObservers_27() { return &___newObservers_27; }
	inline void set_newObservers_27(HashSet_1_t88C982F0214E22EE005391488913223DBE0F6D05 * value)
	{
		___newObservers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newObservers_27), (void*)value);
	}
};


// Server
struct  Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Server::reliableChannelId
	int32_t ___reliableChannelId_9;
	// System.Int32 Server::unreliableChannelId
	int32_t ___unreliableChannelId_10;
	// System.Int32 Server::hostId
	int32_t ___hostId_11;
	// System.Int32 Server::webHostId
	int32_t ___webHostId_12;
	// System.Boolean Server::isInit
	bool ___isInit_13;
	// System.Byte[] Server::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_14;

public:
	inline static int32_t get_offset_of_reliableChannelId_9() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273, ___reliableChannelId_9)); }
	inline int32_t get_reliableChannelId_9() const { return ___reliableChannelId_9; }
	inline int32_t* get_address_of_reliableChannelId_9() { return &___reliableChannelId_9; }
	inline void set_reliableChannelId_9(int32_t value)
	{
		___reliableChannelId_9 = value;
	}

	inline static int32_t get_offset_of_unreliableChannelId_10() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273, ___unreliableChannelId_10)); }
	inline int32_t get_unreliableChannelId_10() const { return ___unreliableChannelId_10; }
	inline int32_t* get_address_of_unreliableChannelId_10() { return &___unreliableChannelId_10; }
	inline void set_unreliableChannelId_10(int32_t value)
	{
		___unreliableChannelId_10 = value;
	}

	inline static int32_t get_offset_of_hostId_11() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273, ___hostId_11)); }
	inline int32_t get_hostId_11() const { return ___hostId_11; }
	inline int32_t* get_address_of_hostId_11() { return &___hostId_11; }
	inline void set_hostId_11(int32_t value)
	{
		___hostId_11 = value;
	}

	inline static int32_t get_offset_of_webHostId_12() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273, ___webHostId_12)); }
	inline int32_t get_webHostId_12() const { return ___webHostId_12; }
	inline int32_t* get_address_of_webHostId_12() { return &___webHostId_12; }
	inline void set_webHostId_12(int32_t value)
	{
		___webHostId_12 = value;
	}

	inline static int32_t get_offset_of_isInit_13() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273, ___isInit_13)); }
	inline bool get_isInit_13() const { return ___isInit_13; }
	inline bool* get_address_of_isInit_13() { return &___isInit_13; }
	inline void set_isInit_13(bool value)
	{
		___isInit_13 = value;
	}

	inline static int32_t get_offset_of_buffer_14() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273, ___buffer_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_14() const { return ___buffer_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_14() { return &___buffer_14; }
	inline void set_buffer_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_14), (void*)value);
	}
};


// UIManager
struct  UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UIManager::startMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___startMenu_5;
	// UnityEngine.UI.InputField UIManager::usernameField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___usernameField_6;

public:
	inline static int32_t get_offset_of_startMenu_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___startMenu_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_startMenu_5() const { return ___startMenu_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_startMenu_5() { return &___startMenu_5; }
	inline void set_startMenu_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___startMenu_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startMenu_5), (void*)value);
	}

	inline static int32_t get_offset_of_usernameField_6() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___usernameField_6)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_usernameField_6() const { return ___usernameField_6; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_usernameField_6() { return &___usernameField_6; }
	inline void set_usernameField_6(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___usernameField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usernameField_6), (void*)value);
	}
};

struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields
{
public:
	// UIManager UIManager::instance
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields, ___instance_4)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_instance_4() const { return ___instance_4; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// HealthBar
struct  HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// UnityEngine.UI.Slider HealthBar::hpSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___hpSlider_12;

public:
	inline static int32_t get_offset_of_hpSlider_12() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___hpSlider_12)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_hpSlider_12() const { return ___hpSlider_12; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_hpSlider_12() { return &___hpSlider_12; }
	inline void set_hpSlider_12(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___hpSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hpSlider_12), (void*)value);
	}
};


// MoveByMouse
struct  MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// UnityEngine.Tilemaps.Tilemap MoveByMouse::map
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___map_12;
	// MouseInput MoveByMouse::mouseInput
	MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * ___mouseInput_13;
	// System.Single MoveByMouse::movementSpeed
	float ___movementSpeed_14;
	// UnityEngine.Vector3 MoveByMouse::destination
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___destination_15;

public:
	inline static int32_t get_offset_of_map_12() { return static_cast<int32_t>(offsetof(MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E, ___map_12)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_map_12() const { return ___map_12; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_map_12() { return &___map_12; }
	inline void set_map_12(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___map_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_12), (void*)value);
	}

	inline static int32_t get_offset_of_mouseInput_13() { return static_cast<int32_t>(offsetof(MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E, ___mouseInput_13)); }
	inline MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * get_mouseInput_13() const { return ___mouseInput_13; }
	inline MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 ** get_address_of_mouseInput_13() { return &___mouseInput_13; }
	inline void set_mouseInput_13(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * value)
	{
		___mouseInput_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseInput_13), (void*)value);
	}

	inline static int32_t get_offset_of_movementSpeed_14() { return static_cast<int32_t>(offsetof(MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E, ___movementSpeed_14)); }
	inline float get_movementSpeed_14() const { return ___movementSpeed_14; }
	inline float* get_address_of_movementSpeed_14() { return &___movementSpeed_14; }
	inline void set_movementSpeed_14(float value)
	{
		___movementSpeed_14 = value;
	}

	inline static int32_t get_offset_of_destination_15() { return static_cast<int32_t>(offsetof(MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E, ___destination_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_destination_15() const { return ___destination_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_destination_15() { return &___destination_15; }
	inline void set_destination_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___destination_15 = value;
	}
};


// PlayerSoZ
struct  PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1  : public NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4
{
public:
	// System.Single PlayerSoZ::damageRadius
	float ___damageRadius_12;
	// System.Int32 PlayerSoZ::maxHealth
	int32_t ___maxHealth_13;
	// System.Int32 PlayerSoZ::currentHealth
	int32_t ___currentHealth_14;
	// HealthBar PlayerSoZ::healthBar
	HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * ___healthBar_15;
	// MouseInput PlayerSoZ::mouseInput
	MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * ___mouseInput_16;
	// PlayerSoZ PlayerSoZ::enemy
	PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * ___enemy_17;

public:
	inline static int32_t get_offset_of_damageRadius_12() { return static_cast<int32_t>(offsetof(PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1, ___damageRadius_12)); }
	inline float get_damageRadius_12() const { return ___damageRadius_12; }
	inline float* get_address_of_damageRadius_12() { return &___damageRadius_12; }
	inline void set_damageRadius_12(float value)
	{
		___damageRadius_12 = value;
	}

	inline static int32_t get_offset_of_maxHealth_13() { return static_cast<int32_t>(offsetof(PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1, ___maxHealth_13)); }
	inline int32_t get_maxHealth_13() const { return ___maxHealth_13; }
	inline int32_t* get_address_of_maxHealth_13() { return &___maxHealth_13; }
	inline void set_maxHealth_13(int32_t value)
	{
		___maxHealth_13 = value;
	}

	inline static int32_t get_offset_of_currentHealth_14() { return static_cast<int32_t>(offsetof(PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1, ___currentHealth_14)); }
	inline int32_t get_currentHealth_14() const { return ___currentHealth_14; }
	inline int32_t* get_address_of_currentHealth_14() { return &___currentHealth_14; }
	inline void set_currentHealth_14(int32_t value)
	{
		___currentHealth_14 = value;
	}

	inline static int32_t get_offset_of_healthBar_15() { return static_cast<int32_t>(offsetof(PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1, ___healthBar_15)); }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * get_healthBar_15() const { return ___healthBar_15; }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 ** get_address_of_healthBar_15() { return &___healthBar_15; }
	inline void set_healthBar_15(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * value)
	{
		___healthBar_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthBar_15), (void*)value);
	}

	inline static int32_t get_offset_of_mouseInput_16() { return static_cast<int32_t>(offsetof(PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1, ___mouseInput_16)); }
	inline MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * get_mouseInput_16() const { return ___mouseInput_16; }
	inline MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 ** get_address_of_mouseInput_16() { return &___mouseInput_16; }
	inline void set_mouseInput_16(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * value)
	{
		___mouseInput_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseInput_16), (void*)value);
	}

	inline static int32_t get_offset_of_enemy_17() { return static_cast<int32_t>(offsetof(PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1, ___enemy_17)); }
	inline PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * get_enemy_17() const { return ___enemy_17; }
	inline PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 ** get_address_of_enemy_17() { return &___enemy_17; }
	inline void set_enemy_17(PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * value)
	{
		___enemy_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_17), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider_Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider_SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
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
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  m_Items[1];

public:
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`2<System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m8904BB66DE3A72894CDBDF7864E1028A804E23FF_gshared (Action_2_t067DD870904608BD9E0396FBC4C88914D12F124D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.SByte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mADDE1DDE100760129FE77B982FC2E36CD9B046FD_gshared (Action_2_tB935837546BC1C736EFA1B6F0A6DA401389B29DA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Char>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mA684CE30087F9306BA81633802CB7E73D03D91A9_gshared (Action_2_t3BC7FFE7D540E809EDCCE405A0BBD1C0C0C6541B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mF25B58BCEED1ADAB1ECAA8070229667422ABA543_gshared (Action_2_tB46DEF21BEFDF9B046381C5FE787F08B0397DAB5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.UInt16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m819C0DD9AA1617758992F2BF1FA83534559ED20C_gshared (Action_2_tBD5203288592592FFA881175A33A37FE9B6E3222 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m5E14E1C5EC931A0173B284F1A658F0E9F7A1FCCB_gshared (Action_2_t3F0E1FBF6CCFC5D7DFFADBD80C886FB226CC187D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m4E4A90C0AF963FE20A02A389CCC8840F5CF9516A_gshared (Action_2_t7F130367D5A7BDB052649BAB1AF26213FA9B8B5F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mF242FCD2A773E7BFE1E1C8EDA50D427413B2A097_gshared (Action_2_t0E8CFD7D8A4393070552ED14F07C6D3B5AD0ED57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m29424B352C5E780B0C1F763E7F42D983A567B4C4_gshared (Action_2_tBCA583C92388A0FA097DD0AB25A3EC38FE21EF33 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m078694AB3D6969E4873495BB4E25982FC9416562_gshared (Action_2_tF2E4E5A9734EA571C61DC7DE4225669282B47B68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC02484A79B8D355859AEEB221A9E14EDFF289389_gshared (Action_2_t2056F1952FEC365612A9796772AFE1F7E907E69F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m26AD2400050683B657C6D35FC42D71E3BA6A5324_gshared (Action_2_t8209F6EF5BC73661942B8FA0993EEBEF943F5116 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Decimal>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m8C7F0F0A4E2483A64FDE0CA872C1B4CA857F9508_gshared (Action_2_t02BF29623EF16FDC93DEEF617F16336956C7E822 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mFD37421275134D0C2E6086E73A1288E7F50978E0_gshared (Action_2_tAA940E060B7300EF141FF12EAA8D1F0378214DBC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m839F901CE9F3CB2EDFCD29E0954804F3696ABA68_gshared (Action_2_t7EA78A942A6E6B745C0E80B8378C88D72C93CA6D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m58345DB0D6BB032A6447B3B071C1C601382A7A98_gshared (Action_2_tC4F931CD0175EC39EFAF6E68B9BCA1FCFE776EB8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mDB648904BAD43DAF9D039B4EE0A990400DC8D890_gshared (Action_2_t19EDFFB61222396A5C84BDDDE7B973C76FD75900 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Vector2Int>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m3765022BEA2294A2C8E971DD4CD53450860605B0_gshared (Action_2_tC857F1C88DCD628300822D3FFBD4200C821F5186 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Vector3Int>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m24D61A85C4271F545DDD2D1FEA379A25678A10B6_gshared (Action_2_t359DC5E2A697F5C659090CA3E3722AB1E911E21B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m86F5F9DFA8E5C3DA94E502EA3A7DA368D24E9FD9_gshared (Action_2_tA115706E18DF04DC2FE89DB5AE302F7A84C851CA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m28AD70BD8E65173E9E26CD43EEDBDC9F5E44F2CD_gshared (Action_2_tF3DD1CEFC2B121035D0814F1EFB7A33388E0AB5F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Quaternion>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m75C696305517ED3EDB663573DD3720E980EF46E8_gshared (Action_2_t1C31D5FE30754B8440CEE70BCB51178718DD50BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Rect>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m1F06726034439BED45CA9D30EBBC5693C0EDBE73_gshared (Action_2_t001C5ECC68ACFCBDB75B48AB4D8657F55950E508 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Plane>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE747D6459422AD7BCA87462A239187EB84380CA0_gshared (Action_2_t22FFCFCB63107E883BE58E2B8C50A234EB186D38 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Ray>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m8316D1F3DABE0FEB1FE80ED9B3C822E2C4D49ABE_gshared (Action_2_tC946F6433AAC6A0934AB6D04D5C129876F813C11 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,UnityEngine.Matrix4x4>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m030AE4A63D998E05004E11B3221B4F6979ED48DB_gshared (Action_2_tA02836AC743A5AB8D2BEC360116DD34502174E69 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Guid>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m5A32F916F4E3DAE84DD4298C6FF1860374CBB793_gshared (Action_2_t578850E4652CB53E03714DEDBD8DFA2AF467E8AB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ErrorMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m49BCBF4E07511F68F7B9D63AAD7C9CFD205261C5_gshared (Action_2_t0F7CD0A01AFAFF0CFA102BF2BF180C1C98DB64F9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ReadyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m14D2AC01753716584CE4BEE2A353DCF764B4F3C2_gshared (Action_2_t0C1EE81686E0E7E2A61617EF2996EEF95752680A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.NotReadyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6F8CB7558DC7F26B7560DF4F41F09C0D94CD6682_gshared (Action_2_t5FA88A277C6A22E485C6693490028F435C7F0B48 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.AddPlayerMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m945A790FCE45E48C65F2F4F570D472583C45ED54_gshared (Action_2_tC98A5D849247411F3C777D9BD422986B278A9B9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.DisconnectMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mF0F0D40C9C006DFAF1F0B68E03F8BC7AECB6DD70_gshared (Action_2_tA588457BF9116A829CE6B86A0458E2B8BB430213 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ConnectMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m894CC64C8E1FAA826F3F9CB39325F501B6037902_gshared (Action_2_tA078BD690D0E0F1E2815875FDBD3D640F4358E82 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.SceneMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mBCE7A6A4A56374B316F20912A62655852ECFBF2C_gshared (Action_2_tF7A2CE72502B34ACDE8FE02553BFD4C7DD4F023A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.ByteEnum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m00C87FA59243E64D5D7E11EE842FBB7D057BD8E0_gshared (Action_2_t55DA0BCAC47803ECA6F1903087E195B658D3D238 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.CommandMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mA0BF7F4D974F0F2E26AE1B8843886D188D7FCF83_gshared (Action_2_tD0E7640900EFD9C89316B51592C6FBA1E8ADEC0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.RpcMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m035005115821666C3DA2AF136260AC2FC73D352B_gshared (Action_2_t3EC6A7CB14968E96DDEF3BAE7F21EA4CD2E543C6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.SpawnMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC97348C255C6688FAF9D38B374797028022C1197_gshared (Action_2_t9D8250905FAF0E0CF5E418F4EC169108C92FC8E4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ObjectSpawnStartedMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m5DBBC910730DF09776EC1624A98BE43FEEE9478B_gshared (Action_2_tBF22EAE2244CC73738E409BCD1486CE62A5DFC5C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ObjectSpawnFinishedMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m9DF356A3EA148BA41A583FF11864963F1898BA2D_gshared (Action_2_tBE0502D2FC8C69678BE76CAA179422478055F400 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ObjectDestroyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m3E1BB9D62B046E7B369756250D183E283F878BDE_gshared (Action_2_t9866EC0F1615A4684C8639B2393F024E0CB821FB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.ObjectHideMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m324F3FDE7EB768923E683306B8D3E3C88F3B6E91_gshared (Action_2_t5E946766BA98A3E914F4DD3CEAD91A946E1B52B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.UpdateVarsMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE22DEF33B0C1BBD3AEE31B0747864B5C878E8BA5_gshared (Action_2_tDFF1A2E1446BF38E2172C70E563EE1596B4FD7ED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.NetworkPingMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m7D81FE763F9B5FCC3B46B244BDB09DA4846B78B8_gshared (Action_2_t1118E4C975F9D64160E4C1A0D3A154C5B25259AA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,Mirror.NetworkPongMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m3FAD2CF5E89F70B6FD0F11ADD61AA7801A7F4BD9_gshared (Action_2_tAC082F1978A2D09BAE2A7A431172694DD86C9E70 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m3D7A74BA2E95EDC11F7132B4F9556A567B60ABDF_gshared (Func_2_tE5F3BE6DF234656E6AD3639DC12B2B44B40936E1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.SByte>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m182029526D8F642E6D46C75CFF93E3F943768559_gshared (Func_2_tAA3B27E852740E1101BE364792E9F241442A3CA5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Char>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m5398A38881E6CE2D0276638E572FC57490CD83D5_gshared (Func_2_t6965B5A2E0DB61FB4E397E393EA5C47254757B2F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m0511D5F19A70C542B2B07D580AF00AFDB026DC61_gshared (Func_2_t5AD002B975C98F5B9904CFAB15CCDC3CB956F52A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.UInt16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA10B7D751C501A5690A14BF68A658129DF54C36D_gshared (Func_2_tFF20C43795822C78FB88C2359D6E89095055A274 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m93714777F9B026912C289C05D92630AB14704A92_gshared (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEA9328DF6C8BD6F589A535D69DF79CD8E617E6E5_gshared (Func_2_tC3246CBAFBB962E2C6075141A9B6BFC365266428 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE7E90EE652A3403E8CB8A7A308F86B6048861A3F_gshared (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m79AC1B8D988EA374BB50B68A992FE4809E21A6B7_gshared (Func_2_t8C72441750D7147A0EDA017A81A318AD339FB950 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m58A51FA150C3A0C8F5868AF68C4FEA3896ED1752_gshared (Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mB8131FF1876ECC5CF69D636E9445CE2A7B99185F_gshared (Func_2_t32F4E81162C0EB5B67EF4324ABCC54A453AB7B22 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Decimal>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m47419A7BE6C12AE23418AFB5CC6AEE6C9E416FFD_gshared (Func_2_t849BC6BC29946D6D8A1A3EB4E4406C8ADBD11CAA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m38BFB4E17884E47B43D000B35BFA327B7362EE9F_gshared (Func_2_tB0D8F7463934429993EC080E603BDE919F0E8A86 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mFDDF69C28D3B47552FB463D39A47AC9F828AA92A_gshared (Func_2_t2FD07C5341AC1EAB0842671D1F6C9DDCE7984BA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m8C832864CE21DAC7D48D256FAA7CDDE651916B3A_gshared (Func_2_t3BAEFBC83B1F104F246CC17B449E3775D5E6881A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mC048A8EF76B0869BC3BD3A5B556B3595D6C95A27_gshared (Func_2_tFD4CFE66EC69C75B14AF028C7E410048B49CF76B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Vector2Int>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE150DF6729174C0E60328108B5230D10E870A5DD_gshared (Func_2_t729AA81D5AAAE1FA4BB7D67FF231CF9B335AF0E4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Vector3Int>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9BA2FADD611BE254B100AE9E2F2D6B87B9671729_gshared (Func_2_tED9D06B010C47140D19A9F12069EC70E636DD6B2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m8C706718E7D062DEDEFEEE58C3FD701C58BF91BB_gshared (Func_2_tC0A3DCAC2A732AA1EE91C95DC2E4241BAF8A3D81 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m1004BAAACC9086DA72C20935EA40F2F48ADC8EC1_gshared (Func_2_tD7951F750B6AC916BA4CBE39D580D41B769EF02F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Quaternion>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mD5E3D4EE8868339CD19433A9345518FFF71F205F_gshared (Func_2_t0E69E4403F4EC271082D0BB3EA52A971E129EFEF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Rect>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m546844D6517458F1A63FC1186AF05AB5F7D4D1F7_gshared (Func_2_t65D819D89391C79060CA0397D1032B14F6D053D8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Plane>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mFCD84BE636DAF996BBFD216AAA533436DF6817B0_gshared (Func_2_tCCB3697D722273F7809338F86AC39642C7087C83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Ray>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m81E498E9FD5F60496EAAB53407C092F1B0BDE2E6_gshared (Func_2_t6C6298983A5173397C057316A1B1234E68C2A9ED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,UnityEngine.Matrix4x4>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF64DA72DB0438C43CC9C041CF5DDA113D1F5A06F_gshared (Func_2_tE0EF22E14F9A7480E3EE85CE00F61E99253A40F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Guid>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m459E79D8D4720579D5C20B2A64DB5994746D75C4_gshared (Func_2_tD9B94F80D2178DA2905DED31543DCC2719F75B1E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.NetworkBehaviour/NetworkBehaviourSyncVar>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m8E21B5FF26E80911D221A13F5C6967CD93E64BFE_gshared (Func_2_tF0F1FBB0AAD62EF5689E3AA3BC86C855DE5CBD59 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ErrorMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m375DE4C8F73574B43FFE1BB621A19E45CBCDCBFC_gshared (Func_2_t64843353AC69E4BDE0341AD4DD0B07F8A8896B21 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ReadyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m8ED109983E25BCA8E87100232FEF942034524D99_gshared (Func_2_t237DF9796C01927AFCBCA243960EC02556E2654F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.NotReadyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mD4D0EE01EA1C670983509712CE3A37583AF352F7_gshared (Func_2_t0FDE6ADC73EE6A8C57350DDA440EA9358762D143 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.AddPlayerMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m2AABD4E7482C73D75905C80B8B9BE0ABCA810919_gshared (Func_2_t9B48EBB76BCBF6C1981D100649FC54EC7BE7EE8A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.DisconnectMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m663C248DF5A4A697576A01854FEF65B917F476DF_gshared (Func_2_t93FD92511A917EE962F990B11986735138F02291 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ConnectMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m27594009041234EE0B1AEC03CA1E7A099AAAA371_gshared (Func_2_t98C6E330F8F01CD890A29BEC32302E37F928B110 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.SceneMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m8E7B39FAFB3FF20B103E7ED8CD5BB0E40F9EDDDA_gshared (Func_2_t878173F60F27CA5C8E397DA88CE84CFF643042C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.ByteEnum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m2AC795A8F1BB79009EACC81991889122A76E4C76_gshared (Func_2_t7FCF7219A5C8D05BF113BC44B97747F782D9FC2F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.CommandMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m2E3573AD1E216B96B4D9A50FC8291CCA782DD62A_gshared (Func_2_tB134286F168FEC0A802CA7C8CDD6A6B6BE3C0B29 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.RpcMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m974CF006DA0B8972F698F0CA7EAD036F343B4964_gshared (Func_2_t4B52C0F8027FD2962CEDBCE37FEE02C00EC9A8EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.SpawnMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9208EC17EF7601A7BAB51CC19E7F47179E56E80F_gshared (Func_2_tA016808D6E4F29AA6B932BFD2897EDDAB478508F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ObjectSpawnStartedMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE457E1FBE35929002C43E5EC3202CAB9B7BD71E5_gshared (Func_2_tC9862C3F9E8CB60249A35FA4B80BD13050C6D59D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ObjectSpawnFinishedMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7785C1C2B2A83DC7F3F0180205AF93CB006A0489_gshared (Func_2_tA53BAA5AF1A52ADC5B3E4F6573A6D8EEAC2DEF7B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ObjectDestroyMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m83337D3823E864AEBE6EAE85E203549411A0B8CF_gshared (Func_2_t20108D8FB44F9316EA26DA1480984F546990C7F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.ObjectHideMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m2767889023E278985479615BDCF9B417330EDC87_gshared (Func_2_tCF4E3800BB4FC2CF3672ED26C95D49DE2D3F557E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.UpdateVarsMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m486F6FAE058E785D03AFB617045A6DC419DB7946_gshared (Func_2_tCC2335ED6E18138B2E59AAB0BBCFBE9C0245CE1E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.NetworkPingMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m0F84F9CFBC8EAEB88E6B572E141F28883F8B90D9_gshared (Func_2_t265AEC25107BC051D64C640B24FF144219E469FB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,Mirror.NetworkPongMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF780885C9CBB00E0EE4652DD3DC819581A0F9954_gshared (Func_2_t5EF0590E69314A14792C14C5A3CB4EAAB0A9F2FC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_gshared (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mEA100777A815D7AD063E7C08485928DEFF124C29_gshared (InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.RaycastHit2D,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m62C83AD97E869810AA1D2FDEBB0531CBC977828F_gshared (Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.RaycastHit2D>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_mAFF3C52C8DC3A598C936360E97FC50B4B179D1E8_gshared (RuntimeObject* ___source0, Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC * ___predicate1, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::SyncVarEqual<System.Int32>(!!0,!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_SyncVarEqual_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B8AF1B3A139B3F543BC207AA2FE60B2D9FEF3E3_gshared (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, int32_t ___value0, int32_t* ___fieldValue1, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::SetSyncVar<System.Int32>(!!0,!!0&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_SetSyncVar_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB92AEF3F7E574E08410F051A969F1C955C85C8EF_gshared (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, int32_t ___value0, int32_t* ___fieldValue1, uint64_t ___dirtyBit2, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Client/TCP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP__ctor_mCF3631391CF61BEB60D77F7E451EEA57521F4142 (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, const RuntimeMethod* method);
// System.Void Client/TCP::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Connect_m646BEC747EB079EAE7CC9631039F4A2F83EB2F1D (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, const RuntimeMethod* method);
// System.Byte Mirror.NetworkReaderExtensions::ReadByte(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkReaderExtensions_ReadByte_m86E3D12D2C1E2C447A4C2F20B808117DAA69571C (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteByte(Mirror.NetworkWriter,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteByte_mFFEFC20C5AB176841BBBE10C1E4A866EAF369B96 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint8_t ___value1, const RuntimeMethod* method);
// System.String Mirror.NetworkReaderExtensions::ReadString(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkReaderExtensions_ReadString_mA74E4612F529683A4AEEDB55C369CDEA32D222CC (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// Mirror.SceneOperation Mirror.GeneratedNetworkCode::_Read_Mirror.SceneOperation(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t GeneratedNetworkCode__Read_Mirror_SceneOperation_m7DEB9A4BFB06C5A38C93BBAC31D4813AD99FD91D (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkReaderExtensions::ReadBoolean(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkReaderExtensions_ReadBoolean_mA9AED23EBC6083FDFFD749EED46F03BAFC6F0ED8 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteString(Mirror.NetworkWriter,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.SceneOperation(Mirror.NetworkWriter,Mirror.SceneOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_SceneOperation_m006CA70F6FCA7971B6FEC0A3A0EDE3D7BE1678E6 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint8_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteBoolean(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteBoolean_m1286C9865F21B0EB024250572C0ADDC319782162 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, bool ___value1, const RuntimeMethod* method);
// System.UInt32 Mirror.NetworkReaderExtensions::ReadUInt32(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReaderExtensions_ReadUInt32_mF65B5680DA763162DCD1BCB53B225C38ACAE3C08 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Int32 Mirror.NetworkReaderExtensions::ReadInt32(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.ArraySegment`1<System.Byte> Mirror.NetworkReaderExtensions::ReadBytesAndSizeSegment(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  NetworkReaderExtensions_ReadBytesAndSizeSegment_m1750D52A666869DA2EC3C3A25E767834B9DA9E2E (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteUInt32(Mirror.NetworkWriter,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint32_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteInt32(Mirror.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteBytesAndSizeSegment(Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteBytesAndSizeSegment_mAD214D7E8A080A5615D400A6C3F2F5218F3AD11B (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___buffer1, const RuntimeMethod* method);
// System.UInt64 Mirror.NetworkReaderExtensions::ReadUInt64(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkReaderExtensions_ReadUInt64_mF8CBCE7593E37A4C819D8D5461746D1360975252 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Guid Mirror.NetworkReaderExtensions::ReadGuid(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  NetworkReaderExtensions_ReadGuid_m4BEDE3B6CE956D9B64BFF779754151F49B7A82CE (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// UnityEngine.Vector3 Mirror.NetworkReaderExtensions::ReadVector3(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// UnityEngine.Quaternion Mirror.NetworkReaderExtensions::ReadQuaternion(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  NetworkReaderExtensions_ReadQuaternion_m2946D7DD55E1ED8EDEF82536F0D4246D42A22E19 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteUInt64(Mirror.NetworkWriter,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteGuid(Mirror.NetworkWriter,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteGuid_m1700462B08DC1D6B80FF00521C50C5A85E781AFB (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Guid_t  ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteVector3(Mirror.NetworkWriter,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value1, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteQuaternion(Mirror.NetworkWriter,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteQuaternion_m96A981CD95861D3F23358155CD1CCBCDF185D909 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value1, const RuntimeMethod* method);
// System.Double Mirror.NetworkReaderExtensions::ReadDouble(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkReaderExtensions_ReadDouble_m5800AF1FD52D7DB9047FE7B58A0BD38E23C94281 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterExtensions::WriteDouble(Mirror.NetworkWriter,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterExtensions_WriteDouble_m40D19C266720079063B22A53B6940E1CF6482BFC (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, double ___value1, const RuntimeMethod* method);
// System.Void System.Action`2<Mirror.NetworkWriter,System.Byte>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m5F20D89DCC6459F8E9E7F8FF48CB7690053A3020 (Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m8904BB66DE3A72894CDBDF7864E1028A804E23FF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.SByte>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3136806DDFFA4F43DB62D141E811C23CE771F09C (Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mADDE1DDE100760129FE77B982FC2E36CD9B046FD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Char>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m483B17469257E2DA23721B287300CAF7C524BA7F (Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mA684CE30087F9306BA81633802CB7E73D03D91A9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mFB657F4245B20C4ABFADDD00C89EC25727CEE967 (Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mF25B58BCEED1ADAB1ECAA8070229667422ABA543_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.UInt16>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m298F331E1E183EAA83607B14D4A20E09303CD594 (Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m819C0DD9AA1617758992F2BF1FA83534559ED20C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Int16>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m1AC2689951B7F51F80CD4E4758F9005A64A73BCD (Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m5E14E1C5EC931A0173B284F1A658F0E9F7A1FCCB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mABD9B647262242BFBF9DF30B2F09209CDB0E9C0D (Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m4E4A90C0AF963FE20A02A389CCC8840F5CF9516A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m2E22F83A42E4D0460B184F70743E66E58C4CF77D (Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mF242FCD2A773E7BFE1E1C8EDA50D427413B2A097_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.UInt64>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m1548A69A3B376F12C561974718E174940AA8FBE7 (Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m29424B352C5E780B0C1F763E7F42D983A567B4C4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mCDC7DFCFB5EA8376AC8594484F8B3C7BBB3D78C9 (Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m078694AB3D6969E4873495BB4E25982FC9416562_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m261CC068AA9083B9077FF472CF00237591F24B16 (Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mC02484A79B8D355859AEEB221A9E14EDFF289389_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Double>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA4E9C882696FD433AD0A0874172CCB18D379AC74 (Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m26AD2400050683B657C6D35FC42D71E3BA6A5324_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Decimal>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m6883EDC5D3AE13CB023C1A016DB71EB923975345 (Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m8C7F0F0A4E2483A64FDE0CA872C1B4CA857F9508_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m86612E2752088A7F8E97BDC84CAD5A28260BD4FA (Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA305F287E550F414D82F54D26BA4F566DF3BDD85 (Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m8C4CBBDA44317866DF41D68074EB2DF53C2AA5D4 (Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mFD37421275134D0C2E6086E73A1288E7F50978E0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m6AA5E587A8D69613E23F8FF6F5A35270920E99DE (Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m839F901CE9F3CB2EDFCD29E0954804F3696ABA68_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mBAE5DEDD1B5DD112878F1C6AD8C0835A64873286 (Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m58345DB0D6BB032A6447B3B071C1C601382A7A98_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m2365593AD21B593345E2FD3E29EC4E371FA17768 (Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mDB648904BAD43DAF9D039B4EE0A990400DC8D890_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector2Int>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mEA7A5BDFCD93241D636555FE072F97A2296A5D04 (Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m3765022BEA2294A2C8E971DD4CD53450860605B0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Vector3Int>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m5E692933983CFB71B4321878D30D1DFEE3B36A58 (Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m24D61A85C4271F545DDD2D1FEA379A25678A10B6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mE32D982104F660FC5785EA3DBF9A4428D2C9503A (Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m86F5F9DFA8E5C3DA94E502EA3A7DA368D24E9FD9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m68E4871F1CA24036CEDC75FDE15FB81A266B60B8 (Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m28AD70BD8E65173E9E26CD43EEDBDC9F5E44F2CD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Quaternion>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF1EACD375A560B2CBCC6367753DCFE495736687F (Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m75C696305517ED3EDB663573DD3720E980EF46E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Rect>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m97C100FB2660EF471A0A7235179256541AA5497B (Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m1F06726034439BED45CA9D30EBBC5693C0EDBE73_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Plane>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m91B84B10A0E634282727565405A71EED418144A8 (Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE747D6459422AD7BCA87462A239187EB84380CA0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Ray>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mE3BE2C7CBD6BC6718335212AB39B68475C30E7BF (Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m8316D1F3DABE0FEB1FE80ED9B3C822E2C4D49ABE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Matrix4x4>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m7D555F1B8617CCAF5FAC8589E41742D733ECE93B (Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m030AE4A63D998E05004E11B3221B4F6979ED48DB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Guid>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mB8BF1B3FD49FA72B97EDEFA1C274D22C57BBBED5 (Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m5A32F916F4E3DAE84DD4298C6FF1860374CBB793_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.NetworkIdentity>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m336BDEA9FF0F2B02D75D3005644D0903857486EE (Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.NetworkBehaviour>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0D482C7DA8A8651ED207A7E65D8F0354933ED753 (Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m1CAFBAC36CA210FB9C0587864E1DF9CA4422A3C7 (Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mFB28F85055E20B6EECEF6A83D99A471E2E61EBE6 (Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,System.Uri>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mB7DE8C4035310EC77D6EECE2B5C475FB1749DEB7 (Action_2_t928C90600628DF3301846464535E0CBE3D956042 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t928C90600628DF3301846464535E0CBE3D956042 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ErrorMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m2A1F7D2C9775763CEE8063E554AE9F8ECF017D99 (Action_2_t66675A75775137108E5F7FAB965F44B552778C26 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t66675A75775137108E5F7FAB965F44B552778C26 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m49BCBF4E07511F68F7B9D63AAD7C9CFD205261C5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ReadyMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mC7E7DA96BA1FBF07C92E0B7E21EF59AE9C0282BF (Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m14D2AC01753716584CE4BEE2A353DCF764B4F3C2_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.NotReadyMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mC028AAEBCD414F3C888993D73AFD2A4F1EC1AD1F (Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m6F8CB7558DC7F26B7560DF4F41F09C0D94CD6682_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.AddPlayerMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m091F880AADDFD87B4518374CC00C37B91B4B456D (Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m945A790FCE45E48C65F2F4F570D472583C45ED54_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.DisconnectMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m5A1D161A3D700A96BE1F2FDE9645BB34A864CE53 (Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mF0F0D40C9C006DFAF1F0B68E03F8BC7AECB6DD70_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ConnectMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m77708866B66D42375A39FBC272272CFEEA4AB3EC (Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m894CC64C8E1FAA826F3F9CB39325F501B6037902_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.SceneMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m492AC2BFBB4037EDCE4738F185A8BCD663A46AFA (Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mBCE7A6A4A56374B316F20912A62655852ECFBF2C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.SceneOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m4F330BA675F7662A6BB1E17073779F6ACFA40366 (Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m00C87FA59243E64D5D7E11EE842FBB7D057BD8E0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.CommandMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mC600CBEAB837FB52C0BC72AEAB8013F4D88FA68E (Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mA0BF7F4D974F0F2E26AE1B8843886D188D7FCF83_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.RpcMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA6524E64904D3CBEB386888C78CBC4C921FA15C3 (Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m035005115821666C3DA2AF136260AC2FC73D352B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.SpawnMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mE5BE1B7B82D964AF74A0C18DE66B8663C35DF1E6 (Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mC97348C255C6688FAF9D38B374797028022C1197_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnStartedMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m9B479585ED08803A9F0C2721E5900D38B3E76F72 (Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m5DBBC910730DF09776EC1624A98BE43FEEE9478B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ObjectSpawnFinishedMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m4E201B98D59A318F8CF143177AC43F923E76B34F (Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m9DF356A3EA148BA41A583FF11864963F1898BA2D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ObjectDestroyMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m8D10022EA4A6355224AAD8CE821B28C845296B76 (Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m3E1BB9D62B046E7B369756250D183E283F878BDE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.ObjectHideMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m7F88F339DD9921BFEA0BF7F21CB7A28A1580B100 (Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m324F3FDE7EB768923E683306B8D3E3C88F3B6E91_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.UpdateVarsMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m1025F6BC82608A23274E63C46219199F5FEB6862 (Action_2_t5A3703D259887235527744E2BD7095928D420ADD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t5A3703D259887235527744E2BD7095928D420ADD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE22DEF33B0C1BBD3AEE31B0747864B5C878E8BA5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPingMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m1369D981F15BE3F5035215288D05882EA40F6388 (Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m7D81FE763F9B5FCC3B46B244BDB09DA4846B78B8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<Mirror.NetworkWriter,Mirror.NetworkPongMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m9ADF7DA49508540415C7C8134DD2560676BD4965 (Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m3FAD2CF5E89F70B6FD0F11ADD61AA7801A7F4BD9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Byte>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0840E6B2B87D2A7D3039422E284043A0F01EBF8F (Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m3D7A74BA2E95EDC11F7132B4F9556A567B60ABDF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.SByte>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFBE309B39B6DD81476653893EF9FB1F0FE3E7B29 (Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m182029526D8F642E6D46C75CFF93E3F943768559_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Char>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m50056E08735B45FFB2F9F6589D3765FDECECB5EF (Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5398A38881E6CE2D0276638E572FC57490CD83D5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFCD7CB3E82D103FF5A8BDCE78BF6626DFD88E432 (Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Int16>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDE86F805FEC5DC8663A291366E5F7A952D26005E (Func_2_tB004921AE76C91000E3C564021526D419AA05415 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB004921AE76C91000E3C564021526D419AA05415 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m0511D5F19A70C542B2B07D580AF00AFDB026DC61_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.UInt16>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCFDAC257445CEAAB044AACD13D941445D6E3A1BC (Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA10B7D751C501A5690A14BF68A658129DF54C36D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBCF604956DBB47124B5F8C992562A69AC77CBA00 (Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m93714777F9B026912C289C05D92630AB14704A92_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE3A3003655A3E8ECD0D97C48D350AD4106D8250E (Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mEA9328DF6C8BD6F589A535D69DF79CD8E617E6E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC7DEC070006E37253207DE0DDF15ACCEC753C5E5 (Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE7E90EE652A3403E8CB8A7A308F86B6048861A3F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.UInt64>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC230719162D7FF22A1F60979486519A3206109C1 (Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m79AC1B8D988EA374BB50B68A992FE4809E21A6B7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m307FD2EC7E1632076EF9EB169C9E3FDDBAE31633 (Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m58A51FA150C3A0C8F5868AF68C4FEA3896ED1752_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Double>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC0ECF79C8E98B8A38907F969023CF92FB8D65850 (Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mB8131FF1876ECC5CF69D636E9445CE2A7B99185F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Decimal>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0181C851DC29BF07BFF0781C797FA08B6F94EC1E (Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m47419A7BE6C12AE23418AFB5CC6AEE6C9E416FFD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC35B5C0805198C69EAD7F374F774AC7E0D12A151 (Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m30E5DEA1E27F9B92E336B03EB6A01D575C75D891 (Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8F22D119560FDD4C3D1B5DBDCF178F11F1ADB95E (Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m38BFB4E17884E47B43D000B35BFA327B7362EE9F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m073C360C200A6DBB113F0963509A2D5E032DDA3A (Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mFDDF69C28D3B47552FB463D39A47AC9F828AA92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA7369B28D9217CB9FAB17B5B5CA1DF44B22E14E2 (Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m8C832864CE21DAC7D48D256FAA7CDDE651916B3A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8CD1F4AFF1384E81A4BB8381EF45024549E63991 (Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mC048A8EF76B0869BC3BD3A5B556B3595D6C95A27_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Vector2Int>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA426F174B65F45CAD4647A6A43F74DA115E2286B (Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE150DF6729174C0E60328108B5230D10E870A5DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Vector3Int>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF1BE232B010C7CA6B4FBC3D16835237A238223FA (Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m9BA2FADD611BE254B100AE9E2F2D6B87B9671729_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD145095A425FE0BA2744DD262256014FAF23DD5F (Func_2_t884310CBAF609B1E4C14090750447709C5A58716 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t884310CBAF609B1E4C14090750447709C5A58716 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m8C706718E7D062DEDEFEEE58C3FD701C58BF91BB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9EBF03A8086223DA8C4B925E039CA211AD13F008 (Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1004BAAACC9086DA72C20935EA40F2F48ADC8EC1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Quaternion>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m93F3AACA6955FF8232F7687AC3C865CA3D6EAB6F (Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mD5E3D4EE8868339CD19433A9345518FFF71F205F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Rect>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6CAE0D9ABD9E0A2D049597EFEDFFB37214A771E4 (Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m546844D6517458F1A63FC1186AF05AB5F7D4D1F7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Plane>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA3F3B589E0AF9F5EBA00933C929283A857625BC0 (Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mFCD84BE636DAF996BBFD216AAA533436DF6817B0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Ray>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF68DA57BD57D394A290AC7CFDE46C915724DF971 (Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m81E498E9FD5F60496EAAB53407C092F1B0BDE2E6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Matrix4x4>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m40B2C3EF473C99701C93B4D94BB71B19E7893782 (Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mF64DA72DB0438C43CC9C041CF5DDA113D1F5A06F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Guid>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC991B1B6B04195EF9D115D209AB08EEDD7AB6CAA (Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m459E79D8D4720579D5C20B2A64DB5994746D75C4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m27EF1A3EC84C69F8C913CD59E9D3780AF6A69844 (Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m41A790ECFA64EE0EE44A1D76055FE365D5DF27B6 (Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NetworkIdentity>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7F1F6989B89215B3E9E809EF6BE4BD19C4BB9512 (Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2364D67B58BCBF14EB1FC0069E908C2390A2FAC7 (Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NetworkBehaviour/NetworkBehaviourSyncVar>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1E7E4E1A84E7651BA0D1DB67D52265E804813BF9 (Func_2_t04EF3A5777F40A74EFD067B934A0450866148824 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t04EF3A5777F40A74EFD067B934A0450866148824 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m8E21B5FF26E80911D221A13F5C6967CD93E64BFE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,System.Uri>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2EE7A55A352620604356D8A08DB8059C51773874 (Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ErrorMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2978459CDF08053F19BBCD50A43CCA2E7B6BE21E (Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m375DE4C8F73574B43FFE1BB621A19E45CBCDCBFC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ReadyMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m68858CA20D9BB1A805424453E6C46E0C10C27EED (Func_2_t61544C42F8B241A1233CC53D76C007FD59735486 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t61544C42F8B241A1233CC53D76C007FD59735486 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m8ED109983E25BCA8E87100232FEF942034524D99_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NotReadyMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF9DB01A6563F9C748912BA28F2C9EB9A76637F57 (Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mD4D0EE01EA1C670983509712CE3A37583AF352F7_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.AddPlayerMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA70654B46B479B60C0A33856B45BAE7E2F58F296 (Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2AABD4E7482C73D75905C80B8B9BE0ABCA810919_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.DisconnectMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB5627FA811AF407E96C3E26A01471E19B1F2F202 (Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m663C248DF5A4A697576A01854FEF65B917F476DF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ConnectMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8B28C387FA72ABB1529AA64815D6B6E3C95DCECA (Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m27594009041234EE0B1AEC03CA1E7A099AAAA371_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.SceneMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9EF272CBC76494FFB93487082DB09BE929E54CFE (Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m8E7B39FAFB3FF20B103E7ED8CD5BB0E40F9EDDDA_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.SceneOperation>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9DAC470AF53A5F300E583FEE06190D4B5376539E (Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2AC795A8F1BB79009EACC81991889122A76E4C76_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.CommandMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF4F3D5E183C6BCD218E57D59FA388C19936C0788 (Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2E3573AD1E216B96B4D9A50FC8291CCA782DD62A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.RpcMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7D4C8B71BB03B86CE5155A2EF2527CF9DB8EDD65 (Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m974CF006DA0B8972F698F0CA7EAD036F343B4964_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.SpawnMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBE33BD4233BFFD381FE29248D0C1686869702006 (Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m9208EC17EF7601A7BAB51CC19E7F47179E56E80F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnStartedMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB426AD57D56B3D11DEA09AF4DE5AF1A6D6730884 (Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE457E1FBE35929002C43E5EC3202CAB9B7BD71E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ObjectSpawnFinishedMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m59B3766E83584D7101A826CC4841619F4AF5CA71 (Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m7785C1C2B2A83DC7F3F0180205AF93CB006A0489_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ObjectDestroyMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m25CDF42A2DF0659E3E45029511615A7BAF70B8C8 (Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m83337D3823E864AEBE6EAE85E203549411A0B8CF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.ObjectHideMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1AE09E66C0339B68037DC93F6D51062D3AB2B38D (Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2767889023E278985479615BDCF9B417330EDC87_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.UpdateVarsMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m818209E8857F6A8D1F300E7369B28685E8C861EE (Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m486F6FAE058E785D03AFB617045A6DC419DB7946_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NetworkPingMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6D263A67A11BF8079C28C7C34E830D2DF0D7AA9E (Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m0F84F9CFBC8EAEB88E6B572E141F28883F8B90D9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<Mirror.NetworkReader,Mirror.NetworkPongMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2985267B7382331DBF5FDA2425D9CBB2C9D677F8 (Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mF780885C9CBB00E0EE4652DD3DC819581A0F9954_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, float ___value0, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_mB98FF8F52DCEBEB3BC7679DE03FA50785207EE78 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * InputActionAsset_FromJson_m4E51A654EB6331FDEC21FFB1D06EF394ECF5EA74 (String_t* ___json0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionAsset MouseInput::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * InputActionAsset_FindActionMap_m0F329C9F6BC2E8F00B359BA40013867FAEB2F1BF (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * InputActionMap_FindAction_m40A1461C552A8109639A314F17D9628FAB87E05D (InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  InputActionAsset_get_bindingMask_m6DF3FE53763D887C37A58573B3BE7D90DDD2C28C_inline (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_m6524C13FE6DBFF8420E58763499467B4024CA7A3 (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  ___value0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tF2D463C19029E483FF34BFD76C7DEE3065D4E8BB  InputActionAsset_get_devices_m07A7EAFF5C405387310174A067762276DCEF8217 (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m002176E98507C34BDC8953DB3C3303267E7CBFD4 (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, Nullable_1_tF2D463C19029E483FF34BFD76C7DEE3065D4E8BB  ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t991887378608C1733BC8E6CF8C76A3145C6A1311  InputActionAsset_get_controlSchemes_m2059B485CBD376CCDA1B715440769400C7FFBA8D (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_m9AF9B6A031C0F7EB1BB49A92B6598CB03DFD7C6B (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * ___action0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_mE655357D67B956E9505F2B2376AE6EFD935279B6 (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> MouseInput::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseInput_GetEnumerator_m85D84573D799F10CACADC11EEEF3E3A9BC5659DC (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m151EF4E29D0192D22A46C21C28D3C5D6DADCFEE0 (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_mF6548CE28D3709F55D894D3FE2BDBDD27CF29518 (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, const RuntimeMethod* method);
// System.Void MouseInput/MouseActions::.ctor(MouseInput)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseActions__ctor_m187015F204711F1097F03B8578581273BA379799_inline (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * ___wrapper0, const RuntimeMethod* method);
// System.Void MouseInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInput__ctor_mC64FF7F96156B5BBDFEAAB066D719045D14760B3 (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method);
// System.Void MouseInput::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInput_Enable_m6859F66E534D2CF79A39632A356665CCEC3F206F (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method);
// System.Void MouseInput::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInput_Disable_m1828D1EBDADA5950B127B7C2AF23C5CFA128FC46 (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method);
// MouseInput/MouseActions MouseInput::get_Mouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  MouseInput_get_Mouse_mC8315610511AD4D092234193CF6B2483AC0F166C (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction MouseInput/MouseActions::get_MouseClickRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_mD6E1BB3348C9514F9464AE0CD80E92D0FCAE3699 (InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * __this, Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * ___value0, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::get_isLocalPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isLocalPlayer_mFA35EE97B42DEEE92E4FD5562C8C6A1717607DE0 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction MouseInput/MouseActions::get_MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mEA100777A815D7AD063E7C08485928DEFF124C29 (InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 *, const RuntimeMethod*))InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mEA100777A815D7AD063E7C08485928DEFF124C29_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void MoveByMouse::MouseClickRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByMouse_MouseClickRight_m443738338EC4F90923C52535284E8F3302042AF4 (MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction MouseInput/MouseActions::get_MouseClickLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method);
// System.Void PlayerSoZ::set_NetworkcurrentHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_set_NetworkcurrentHealth_mB06220DA77F987429358921E55DBBCFDBB0610EB (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void HealthBar::SetMaxHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetMaxHealth_m785D009EF3219F59C1E49ED0C83D86C20AA1DFDA (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<CameraFollow>()
inline CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * Component_GetComponent_TisCameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_m3709A2CCCDD05C8FCB003F8D423FC55F4970F318 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void CameraFollow::setTarget(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_setTarget_m0FB67F6B0DD997E45A4BE17540473C66ACA245D7_inline (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// System.Void HealthBar::SetHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::get_isServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isServer_m6CF3499812C1F2679BB924165AA79C59E6D2EBCF (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Void PlayerSoZ::RpcTakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_RpcTakeDamage_mEDBF19EDAC999A99EAA8E6C2280F7776A296974F (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method);
// System.Void PlayerSoZ::CmdTakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_CmdTakeDamage_m7FEC161B1FC55EC82F91B0EBED1ACE13FA1F2F73 (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method);
// Mirror.PooledNetworkWriter Mirror.NetworkWriterPool::GetWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * NetworkWriterPool_GetWriter_m53506C8016911951C82F2F83E45592CE2F9A85AE (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::SendCommandInternal(System.Type,System.String,Mirror.NetworkWriter,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_SendCommandInternal_m81D09DA3B313767B581AFB3F5BC4535807CC5700 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, Type_t * ___invokeClass0, String_t* ___cmdName1, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer2, int32_t ___channelId3, bool ___ignoreAuthority4, const RuntimeMethod* method);
// System.Void Mirror.NetworkWriterPool::Recycle(Mirror.PooledNetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3 (PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * ___writer0, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::SendRPCInternal(System.Type,System.String,Mirror.NetworkWriter,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_SendRPCInternal_m3E76275A3E52E54BF11483D924A21D58285586DF (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, Type_t * ___invokeClass0, String_t* ___rpcName1, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer2, int32_t ___channelId3, bool ___excludeOwner4, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::CircleCastAll(UnityEngine.Vector2,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* Physics2D_CircleCastAll_m8C6DA5CC984701D4713B324D02AF58E2413848E5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, float ___radius1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction2, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.RaycastHit2D,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m62C83AD97E869810AA1D2FDEBB0531CBC977828F (Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m62C83AD97E869810AA1D2FDEBB0531CBC977828F_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.RaycastHit2D>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisRaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_mAFF3C52C8DC3A598C936360E97FC50B4B179D1E8 (RuntimeObject* ___source0, Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC *, const RuntimeMethod*))Enumerable_Where_TisRaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_mAFF3C52C8DC3A598C936360E97FC50B4B179D1E8_gshared)(___source0, ___predicate1, method);
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerSoZ>()
inline PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * Component_GetComponent_TisPlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_m73186B2B19D4C242E0E336B023CBC8EA445C188C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void PlayerSoZ::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_TakeDamage_m2A40D984E341D917326D7F42D8BCDF0EB5451523 (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method);
// System.Void PlayerSoZ::DoDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_DoDamage_m954EF247F2FDE813EF69D5294A2F61F63855549D (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::SyncVarEqual<System.Int32>(!!0,!!0&)
inline bool NetworkBehaviour_SyncVarEqual_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B8AF1B3A139B3F543BC207AA2FE60B2D9FEF3E3 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, int32_t ___value0, int32_t* ___fieldValue1, const RuntimeMethod* method)
{
	return ((  bool (*) (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *, int32_t, int32_t*, const RuntimeMethod*))NetworkBehaviour_SyncVarEqual_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B8AF1B3A139B3F543BC207AA2FE60B2D9FEF3E3_gshared)(__this, ___value0, ___fieldValue1, method);
}
// System.Void Mirror.NetworkBehaviour::SetSyncVar<System.Int32>(!!0,!!0&,System.UInt64)
inline void NetworkBehaviour_SetSyncVar_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB92AEF3F7E574E08410F051A969F1C955C85C8EF (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, int32_t ___value0, int32_t* ___fieldValue1, uint64_t ___dirtyBit2, const RuntimeMethod* method)
{
	((  void (*) (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 *, int32_t, int32_t*, uint64_t, const RuntimeMethod*))NetworkBehaviour_SetSyncVar_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB92AEF3F7E574E08410F051A969F1C955C85C8EF_gshared)(__this, ___value0, ___fieldValue1, ___dirtyBit2, method);
}
// System.Boolean Mirror.NetworkServer::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void PlayerSoZ::UserCode_CmdTakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_UserCode_CmdTakeDamage_m5EF0DF95498A8745109F690112EFC0E3018A202F (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkClient::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkClient_get_active_m80C7ACA728DE7F6F6B5DC6C0E80B5AD0D287EA37 (const RuntimeMethod* method);
// System.Void PlayerSoZ::UserCode_RpcTakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_UserCode_RpcTakeDamage_m335743DF7BBB17604A4B3A7389599CCF4410854E (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.CmdDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CmdDelegate__ctor_m25AAD7CB2265BEF6CC263E5F620322D0B874CAD8 (CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.RemoteCallHelper::RegisterCommandDelegate(System.Type,System.String,Mirror.RemoteCalls.CmdDelegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallHelper_RegisterCommandDelegate_m196440B96E1D7A909D38037A770734FC5139842F (Type_t * ___invokeClass0, String_t* ___cmdName1, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___func2, bool ___ignoreAuthority3, const RuntimeMethod* method);
// System.Void Mirror.RemoteCalls.RemoteCallHelper::RegisterRpcDelegate(System.Type,System.String,Mirror.RemoteCalls.CmdDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCallHelper_RegisterRpcDelegate_m3381432C36F433DF9E6D924514BEBAD8B37B7AC9 (Type_t * ___invokeClass0, String_t* ___rpcName1, CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * ___func2, const RuntimeMethod* method);
// System.Boolean Mirror.NetworkBehaviour::SerializeSyncVars(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_SerializeSyncVars_m4AF8BE097726BA018E3762C14E33BDBF3A5C4819 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, bool ___initialState1, const RuntimeMethod* method);
// System.UInt64 Mirror.NetworkBehaviour::get_syncVarDirtyBits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkBehaviour::DeserializeSyncVars(Mirror.NetworkReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour_DeserializeSyncVars_mC87ECFD6F9C2D5C1306ABDF2CF6498864C84677A (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, bool ___initialState1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalConfig__ctor_m866AAD8ED24D864385AD4E717249FCFDBC1C2888 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::Init(UnityEngine.Networking.GlobalConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Init_m8AC1E8A78F9FE38D1C540568ED589A223FFB4557 (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_mCB0E2B50103AB6B3917758DC5FC0E52AD153DED3 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6 (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244 (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * __this, ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * ___defaultConfig0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_mEBF87FF57C336EC3EB6A2F69575172A71620B5CE (HostTopology_t268779309BB2D69F29D1A182662C79818813892B * ___topology0, int32_t ___port1, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::Receive(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Receive_mC6C0C2677D78E1D3DB7F0EE02A8AC913E978A850 (int32_t* ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Client::ConnectedToServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ConnectedToServer_mF320F37C419F94953606530B7B68BFAB32B243D1 (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_m04BD4EDA03D1AE7183FC99DB886BD93CF85D2F2C (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_ReceiveBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_ReceiveBufferSize_m9451660573B28BD95582D1215CF064FAD4A474F0 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_SendBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_SendBufferSize_m7DA51C3FA45E79EC33648F6817F5AC036556B714 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TcpClient_BeginConnect_mAF5D929DCA6FFD78BC0DE6E0F448B5F911CD8303 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, String_t* ___host0, int32_t ___port1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___requestCallback2, RuntimeObject * ___state3, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::EndConnect(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_EndConnect_m8A878839804034D19DA751A6FC9C11736017782D (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.TcpClient::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_get_Connected_m6F6E0D5E8CDF2D56756C34960B53D505640F481A (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap MouseInput/MouseActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * MouseActions_Get_mF8191FF6DFDD699BC31A51F1933ED81F48ED6766 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_m721C522123764840D97CD5AC35AD3D44A36B1276 (InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * __this, const RuntimeMethod* method);
// System.Void MouseInput/MouseActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseActions_Enable_m319189AE7A0B2C3D5190B299912C294C0BCB7350 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_mD3766C6376AAF4E63D235D526F25F5118EA84606 (InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * __this, const RuntimeMethod* method);
// System.Void MouseInput/MouseActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseActions_Disable_mA91698B68868CEFFC4D77C2BD7558FA87191157B (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_m347AA47FE78805A4EC176832960179E01CDA367F (InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * __this, const RuntimeMethod* method);
// System.Boolean MouseInput/MouseActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseActions_get_enabled_m30CB1B2524CA3C9BE1C01A0FB9439230A9B0FE94 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m846BDD1BCC195F2EA26477F1B2C67FF1741523AB (InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * __this, Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m501B077CE13549986109D7A3751E6E8F14259C46 (InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * __this, Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_mD3CA5D8C8D3726E6F56750ACA07B37FA1D63E39B (InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * __this, Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m063F013FA66D3D6567AA9DF2720D981D50E6F7EC (InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * __this, Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m412328C76A987C115A9B01E6A6E10A04535892C1 (InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * __this, Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * ___value0, const RuntimeMethod* method);
// System.Void MouseInput/MouseActions::SetCallbacks(MouseInput/IMouseActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseActions_SetCallbacks_m5C86CFC6BD59C9570695F61F95251F6040A29CC3 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
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
// System.Void CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_m9762CC5B7A2D28B7B8116BA8DE2342AFB654AB08 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_Update_m9762CC5B7A2D28B7B8116BA8DE2342AFB654AB08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_playerTransform_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// transform.position = playerTransform.position + new Vector3(0, 0, depth);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_playerTransform_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_depth_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (0.0f), (((float)((float)L_5))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_6, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_7, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void CameraFollow::setTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_setTarget_m0FB67F6B0DD997E45A4BE17540473C66ACA245D7 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method)
{
	{
		// playerTransform = target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___target0;
		__this->set_playerTransform_4(L_0);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m29F88CCFD2ED12A7BCC75A9BBA892CEF179C83DE (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		// public int depth = -20;
		__this->set_depth_5(((int32_t)-20));
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
// System.Void Client::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Awake_mA2BD61DAA9395B0112C514E14DCAE22ADFED1C31 (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Awake_mA2BD61DAA9395B0112C514E14DCAE22ADFED1C31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_0 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}

IL_0014:
	{
		// else if (instance != this)
		IL2CPP_RUNTIME_CLASS_INIT(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_2 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.Log("Instance already exists, destroying object!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral97C687FE2BA83A46207E9F527A74483A969631E0, /*hidden argument*/NULL);
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Client::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Start_mAA0DEE4ED95ED2398717EAEACBE426E281CCD7B6 (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Start_mAA0DEE4ED95ED2398717EAEACBE426E281CCD7B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tcp = new TCP();
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_0 = (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F *)il2cpp_codegen_object_new(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F_il2cpp_TypeInfo_var);
		TCP__ctor_mCF3631391CF61BEB60D77F7E451EEA57521F4142(L_0, /*hidden argument*/NULL);
		__this->set_tcp_9(L_0);
		// }
		return;
	}
}
// System.Void Client::ConnectedToServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ConnectedToServer_mF320F37C419F94953606530B7B68BFAB32B243D1 (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, const RuntimeMethod* method)
{
	{
		// tcp.Connect();
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_0 = __this->get_tcp_9();
		TCP_Connect_m646BEC747EB079EAE7CC9631039F4A2F83EB2F1D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mDA08C15041143F5993C7248B23E4DAC5E119C5D6 (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client__ctor_mDA08C15041143F5993C7248B23E4DAC5E119C5D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ip = "127.0.0.1";
		__this->set_ip_6(_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		// public int port = 26950;
		__this->set_port_7(((int32_t)26950));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Client::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__cctor_m5C60BAD649F302A787619657A38D96FECD07698A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client__cctor_m5C60BAD649F302A787619657A38D96FECD07698A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int dataBufferSize = 4096;
		((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->set_dataBufferSize_5(((int32_t)4096));
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
// Mirror.ErrorMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ErrorMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorMessage_tCAD52284FF4B5DCF485A812F3616B1F1A4FED735  GeneratedNetworkCode__Read_Mirror_ErrorMessage_m8A7F1680078AF95C443FFFABDF4BB63726437225 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_ErrorMessage_m8A7F1680078AF95C443FFFABDF4BB63726437225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorMessage_tCAD52284FF4B5DCF485A812F3616B1F1A4FED735  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ErrorMessage_tCAD52284FF4B5DCF485A812F3616B1F1A4FED735 ));
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint8_t L_1 = NetworkReaderExtensions_ReadByte_m86E3D12D2C1E2C447A4C2F20B808117DAA69571C(L_0, /*hidden argument*/NULL);
		(&V_0)->set_value_0(L_1);
		ErrorMessage_tCAD52284FF4B5DCF485A812F3616B1F1A4FED735  L_2 = V_0;
		return L_2;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ErrorMessage(Mirror.NetworkWriter,Mirror.ErrorMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ErrorMessage_m5D80CC10A68818B9350AFA24544361806086FDD1 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ErrorMessage_tCAD52284FF4B5DCF485A812F3616B1F1A4FED735  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_ErrorMessage_m5D80CC10A68818B9350AFA24544361806086FDD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		ErrorMessage_tCAD52284FF4B5DCF485A812F3616B1F1A4FED735  L_1 = ___value1;
		uint8_t L_2 = L_1.get_value_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteByte_mFFEFC20C5AB176841BBBE10C1E4A866EAF369B96(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.ReadyMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ReadyMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadyMessage_t5AA7A133054594669567080C16DDDC1403A2A9BB  GeneratedNetworkCode__Read_Mirror_ReadyMessage_mE2B956FB18C72DB2AAF97D93CD7A1412D4A6B0BF (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	ReadyMessage_t5AA7A133054594669567080C16DDDC1403A2A9BB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadyMessage_t5AA7A133054594669567080C16DDDC1403A2A9BB ));
		ReadyMessage_t5AA7A133054594669567080C16DDDC1403A2A9BB  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ReadyMessage(Mirror.NetworkWriter,Mirror.ReadyMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ReadyMessage_mDEE6F839CBFBC4FA67F9E4AB3E00479144EFE706 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ReadyMessage_t5AA7A133054594669567080C16DDDC1403A2A9BB  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.NotReadyMessage Mirror.GeneratedNetworkCode::_Read_Mirror.NotReadyMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotReadyMessage_tC37B711AF95DDBD12C8A04898AB3966BDBD7398D  GeneratedNetworkCode__Read_Mirror_NotReadyMessage_mC6EA3B5AED8C4F9906B2F6C0312D1498D5DAA8E0 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	NotReadyMessage_tC37B711AF95DDBD12C8A04898AB3966BDBD7398D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NotReadyMessage_tC37B711AF95DDBD12C8A04898AB3966BDBD7398D ));
		NotReadyMessage_tC37B711AF95DDBD12C8A04898AB3966BDBD7398D  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.NotReadyMessage(Mirror.NetworkWriter,Mirror.NotReadyMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_NotReadyMessage_m6C94EAA192195ACB7BCCB7E8A5FB2083FB0C7005 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, NotReadyMessage_tC37B711AF95DDBD12C8A04898AB3966BDBD7398D  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.AddPlayerMessage Mirror.GeneratedNetworkCode::_Read_Mirror.AddPlayerMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AddPlayerMessage_tC591734CDEE195588BB541BDE5B208A1C7468278  GeneratedNetworkCode__Read_Mirror_AddPlayerMessage_m4C2E06F848D1B94DDC640AA0EFD0CA9C36721502 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	AddPlayerMessage_tC591734CDEE195588BB541BDE5B208A1C7468278  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AddPlayerMessage_tC591734CDEE195588BB541BDE5B208A1C7468278 ));
		AddPlayerMessage_tC591734CDEE195588BB541BDE5B208A1C7468278  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.AddPlayerMessage(Mirror.NetworkWriter,Mirror.AddPlayerMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_AddPlayerMessage_mAF8C12F87F2F0E51FA42578D82E57D5DE3AF01B9 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, AddPlayerMessage_tC591734CDEE195588BB541BDE5B208A1C7468278  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.DisconnectMessage Mirror.GeneratedNetworkCode::_Read_Mirror.DisconnectMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisconnectMessage_t3FAABBE8271302DEEB5A9B04975BBBBDD3097F7E  GeneratedNetworkCode__Read_Mirror_DisconnectMessage_m590A66EBCEFE4A86249504263DE3C8A9CEFC1A1F (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	DisconnectMessage_t3FAABBE8271302DEEB5A9B04975BBBBDD3097F7E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DisconnectMessage_t3FAABBE8271302DEEB5A9B04975BBBBDD3097F7E ));
		DisconnectMessage_t3FAABBE8271302DEEB5A9B04975BBBBDD3097F7E  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.DisconnectMessage(Mirror.NetworkWriter,Mirror.DisconnectMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_DisconnectMessage_mB1CA54449AEAACC9259E5E7949EE4AA31EC8833A (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, DisconnectMessage_t3FAABBE8271302DEEB5A9B04975BBBBDD3097F7E  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.ConnectMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ConnectMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectMessage_t7DC3F290175BA6D5D7DDE20152754BAA74B8DE25  GeneratedNetworkCode__Read_Mirror_ConnectMessage_m93BA23C93888B0D7173C2B91A9E594A1B0B9C810 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	ConnectMessage_t7DC3F290175BA6D5D7DDE20152754BAA74B8DE25  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectMessage_t7DC3F290175BA6D5D7DDE20152754BAA74B8DE25 ));
		ConnectMessage_t7DC3F290175BA6D5D7DDE20152754BAA74B8DE25  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ConnectMessage(Mirror.NetworkWriter,Mirror.ConnectMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ConnectMessage_mD53F8B44F1D11F3BA468ADD169F17D73737DF978 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ConnectMessage_t7DC3F290175BA6D5D7DDE20152754BAA74B8DE25  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.SceneMessage Mirror.GeneratedNetworkCode::_Read_Mirror.SceneMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  GeneratedNetworkCode__Read_Mirror_SceneMessage_m4B63289E3849B01FD601A21B8E29E2F1ED1119B8 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_SceneMessage_m4B63289E3849B01FD601A21B8E29E2F1ED1119B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE ));
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		String_t* L_1 = NetworkReaderExtensions_ReadString_mA74E4612F529683A4AEEDB55C369CDEA32D222CC(L_0, /*hidden argument*/NULL);
		(&V_0)->set_sceneName_0(L_1);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader0;
		uint8_t L_3 = GeneratedNetworkCode__Read_Mirror_SceneOperation_m7DEB9A4BFB06C5A38C93BBAC31D4813AD99FD91D(L_2, /*hidden argument*/NULL);
		(&V_0)->set_sceneOperation_1(L_3);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_4 = ___reader0;
		bool L_5 = NetworkReaderExtensions_ReadBoolean_mA9AED23EBC6083FDFFD749EED46F03BAFC6F0ED8(L_4, /*hidden argument*/NULL);
		(&V_0)->set_customHandling_2(L_5);
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_6 = V_0;
		return L_6;
	}
}
// Mirror.SceneOperation Mirror.GeneratedNetworkCode::_Read_Mirror.SceneOperation(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t GeneratedNetworkCode__Read_Mirror_SceneOperation_m7DEB9A4BFB06C5A38C93BBAC31D4813AD99FD91D (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_SceneOperation_m7DEB9A4BFB06C5A38C93BBAC31D4813AD99FD91D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint8_t L_1 = NetworkReaderExtensions_ReadByte_m86E3D12D2C1E2C447A4C2F20B808117DAA69571C(L_0, /*hidden argument*/NULL);
		return (uint8_t)(L_1);
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.SceneMessage(Mirror.NetworkWriter,Mirror.SceneMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_SceneMessage_mE1645ADD480391AB601EFE6065B1CDDD1E3B00C9 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_SceneMessage_mE1645ADD480391AB601EFE6065B1CDDD1E3B00C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_1 = ___value1;
		String_t* L_2 = L_1.get_sceneName_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_4 = ___value1;
		uint8_t L_5 = L_4.get_sceneOperation_1();
		GeneratedNetworkCode__Write_Mirror_SceneOperation_m006CA70F6FCA7971B6FEC0A3A0EDE3D7BE1678E6(L_3, L_5, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		SceneMessage_t0A4957B83C858A02D1D9F152ABB8D249C42751BE  L_7 = ___value1;
		bool L_8 = L_7.get_customHandling_2();
		NetworkWriterExtensions_WriteBoolean_m1286C9865F21B0EB024250572C0ADDC319782162(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.SceneOperation(Mirror.NetworkWriter,Mirror.SceneOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_SceneOperation_m006CA70F6FCA7971B6FEC0A3A0EDE3D7BE1678E6 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, uint8_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_SceneOperation_m006CA70F6FCA7971B6FEC0A3A0EDE3D7BE1678E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		uint8_t L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteByte_mFFEFC20C5AB176841BBBE10C1E4A866EAF369B96(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.CommandMessage Mirror.GeneratedNetworkCode::_Read_Mirror.CommandMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6  GeneratedNetworkCode__Read_Mirror_CommandMessage_mECC34FB337A5D4B6EB3947644B7E02B8E8B00FC0 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_CommandMessage_mECC34FB337A5D4B6EB3947644B7E02B8E8B00FC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6 ));
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt32_mF65B5680DA763162DCD1BCB53B225C38ACAE3C08(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader0;
		int32_t L_3 = NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3(L_2, /*hidden argument*/NULL);
		(&V_0)->set_componentIndex_1(L_3);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_4 = ___reader0;
		int32_t L_5 = NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3(L_4, /*hidden argument*/NULL);
		(&V_0)->set_functionHash_2(L_5);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_6 = ___reader0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7 = NetworkReaderExtensions_ReadBytesAndSizeSegment_m1750D52A666869DA2EC3C3A25E767834B9DA9E2E(L_6, /*hidden argument*/NULL);
		(&V_0)->set_payload_3(L_7);
		CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6  L_8 = V_0;
		return L_8;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.CommandMessage(Mirror.NetworkWriter,Mirror.CommandMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_CommandMessage_mA1685BE9E0633761FE517E4171DE64FFBDC397B1 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_CommandMessage_mA1685BE9E0633761FE517E4171DE64FFBDC397B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6  L_4 = ___value1;
		int32_t L_5 = L_4.get_componentIndex_1();
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_3, L_5, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6  L_7 = ___value1;
		int32_t L_8 = L_7.get_functionHash_2();
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_6, L_8, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_9 = ___writer0;
		CommandMessage_tE491A433F6DBE176C3B69EBFD0A127F0F1AC97E6  L_10 = ___value1;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_11 = L_10.get_payload_3();
		NetworkWriterExtensions_WriteBytesAndSizeSegment_mAD214D7E8A080A5615D400A6C3F2F5218F3AD11B(L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.RpcMessage Mirror.GeneratedNetworkCode::_Read_Mirror.RpcMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A  GeneratedNetworkCode__Read_Mirror_RpcMessage_m4D257364102F49B28E19CFCBF861C74C71C88CF5 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_RpcMessage_m4D257364102F49B28E19CFCBF861C74C71C88CF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A ));
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt32_mF65B5680DA763162DCD1BCB53B225C38ACAE3C08(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader0;
		int32_t L_3 = NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3(L_2, /*hidden argument*/NULL);
		(&V_0)->set_componentIndex_1(L_3);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_4 = ___reader0;
		int32_t L_5 = NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3(L_4, /*hidden argument*/NULL);
		(&V_0)->set_functionHash_2(L_5);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_6 = ___reader0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_7 = NetworkReaderExtensions_ReadBytesAndSizeSegment_m1750D52A666869DA2EC3C3A25E767834B9DA9E2E(L_6, /*hidden argument*/NULL);
		(&V_0)->set_payload_3(L_7);
		RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A  L_8 = V_0;
		return L_8;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.RpcMessage(Mirror.NetworkWriter,Mirror.RpcMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_RpcMessage_m3CFE1651CE89811888902FBB31AB092514F79F60 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_RpcMessage_m3CFE1651CE89811888902FBB31AB092514F79F60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A  L_4 = ___value1;
		int32_t L_5 = L_4.get_componentIndex_1();
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_3, L_5, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A  L_7 = ___value1;
		int32_t L_8 = L_7.get_functionHash_2();
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_6, L_8, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_9 = ___writer0;
		RpcMessage_t6DC6895DAE9E2100E66C5763B270A0DFEE1F362A  L_10 = ___value1;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_11 = L_10.get_payload_3();
		NetworkWriterExtensions_WriteBytesAndSizeSegment_mAD214D7E8A080A5615D400A6C3F2F5218F3AD11B(L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.SpawnMessage Mirror.GeneratedNetworkCode::_Read_Mirror.SpawnMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  GeneratedNetworkCode__Read_Mirror_SpawnMessage_m31EC8220FAEFB8761E8DE1103A248C7BA2DE3783 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_SpawnMessage_m31EC8220FAEFB8761E8DE1103A248C7BA2DE3783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A ));
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt32_mF65B5680DA763162DCD1BCB53B225C38ACAE3C08(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader0;
		bool L_3 = NetworkReaderExtensions_ReadBoolean_mA9AED23EBC6083FDFFD749EED46F03BAFC6F0ED8(L_2, /*hidden argument*/NULL);
		(&V_0)->set_isLocalPlayer_1(L_3);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_4 = ___reader0;
		bool L_5 = NetworkReaderExtensions_ReadBoolean_mA9AED23EBC6083FDFFD749EED46F03BAFC6F0ED8(L_4, /*hidden argument*/NULL);
		(&V_0)->set_isOwner_2(L_5);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_6 = ___reader0;
		uint64_t L_7 = NetworkReaderExtensions_ReadUInt64_mF8CBCE7593E37A4C819D8D5461746D1360975252(L_6, /*hidden argument*/NULL);
		(&V_0)->set_sceneId_3(L_7);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_8 = ___reader0;
		Guid_t  L_9 = NetworkReaderExtensions_ReadGuid_m4BEDE3B6CE956D9B64BFF779754151F49B7A82CE(L_8, /*hidden argument*/NULL);
		(&V_0)->set_assetId_4(L_9);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_10 = ___reader0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416(L_10, /*hidden argument*/NULL);
		(&V_0)->set_position_5(L_11);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_12 = ___reader0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = NetworkReaderExtensions_ReadQuaternion_m2946D7DD55E1ED8EDEF82536F0D4246D42A22E19(L_12, /*hidden argument*/NULL);
		(&V_0)->set_rotation_6(L_13);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_14 = ___reader0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416(L_14, /*hidden argument*/NULL);
		(&V_0)->set_scale_7(L_15);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_16 = ___reader0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_17 = NetworkReaderExtensions_ReadBytesAndSizeSegment_m1750D52A666869DA2EC3C3A25E767834B9DA9E2E(L_16, /*hidden argument*/NULL);
		(&V_0)->set_payload_8(L_17);
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_18 = V_0;
		return L_18;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.SpawnMessage(Mirror.NetworkWriter,Mirror.SpawnMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_SpawnMessage_mD4D895651BE0B432E3FEB3132D0C374A30F73F9A (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_SpawnMessage_mD4D895651BE0B432E3FEB3132D0C374A30F73F9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_4 = ___value1;
		bool L_5 = L_4.get_isLocalPlayer_1();
		NetworkWriterExtensions_WriteBoolean_m1286C9865F21B0EB024250572C0ADDC319782162(L_3, L_5, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_7 = ___value1;
		bool L_8 = L_7.get_isOwner_2();
		NetworkWriterExtensions_WriteBoolean_m1286C9865F21B0EB024250572C0ADDC319782162(L_6, L_8, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_9 = ___writer0;
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_10 = ___value1;
		uint64_t L_11 = L_10.get_sceneId_3();
		NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86(L_9, L_11, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_12 = ___writer0;
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_13 = ___value1;
		Guid_t  L_14 = L_13.get_assetId_4();
		NetworkWriterExtensions_WriteGuid_m1700462B08DC1D6B80FF00521C50C5A85E781AFB(L_12, L_14, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_15 = ___writer0;
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_16 = ___value1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = L_16.get_position_5();
		NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609(L_15, L_17, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_18 = ___writer0;
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_19 = ___value1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20 = L_19.get_rotation_6();
		NetworkWriterExtensions_WriteQuaternion_m96A981CD95861D3F23358155CD1CCBCDF185D909(L_18, L_20, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_21 = ___writer0;
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_22 = ___value1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = L_22.get_scale_7();
		NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609(L_21, L_23, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_24 = ___writer0;
		SpawnMessage_tEA41E7913041EA715054281B09A455EA3099820A  L_25 = ___value1;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_26 = L_25.get_payload_8();
		NetworkWriterExtensions_WriteBytesAndSizeSegment_mAD214D7E8A080A5615D400A6C3F2F5218F3AD11B(L_24, L_26, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.ObjectSpawnStartedMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ObjectSpawnStartedMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSpawnStartedMessage_tD7D009DD36048BE07917801633EDDEFC2FB19177  GeneratedNetworkCode__Read_Mirror_ObjectSpawnStartedMessage_mFD106C9DC9281FFB5C54E9D7AE09DB9907368A91 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	ObjectSpawnStartedMessage_tD7D009DD36048BE07917801633EDDEFC2FB19177  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectSpawnStartedMessage_tD7D009DD36048BE07917801633EDDEFC2FB19177 ));
		ObjectSpawnStartedMessage_tD7D009DD36048BE07917801633EDDEFC2FB19177  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ObjectSpawnStartedMessage(Mirror.NetworkWriter,Mirror.ObjectSpawnStartedMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ObjectSpawnStartedMessage_m78BBD4AC106546B7F0A36394701C996EB561A462 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ObjectSpawnStartedMessage_tD7D009DD36048BE07917801633EDDEFC2FB19177  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.ObjectSpawnFinishedMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ObjectSpawnFinishedMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectSpawnFinishedMessage_t6E1E7CC5B237E736E906B7C9B335D2CAFB3C67A7  GeneratedNetworkCode__Read_Mirror_ObjectSpawnFinishedMessage_m0B74EA49D498677A02AE9CABCD58AF792F7AA95D (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	ObjectSpawnFinishedMessage_t6E1E7CC5B237E736E906B7C9B335D2CAFB3C67A7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectSpawnFinishedMessage_t6E1E7CC5B237E736E906B7C9B335D2CAFB3C67A7 ));
		ObjectSpawnFinishedMessage_t6E1E7CC5B237E736E906B7C9B335D2CAFB3C67A7  L_0 = V_0;
		return L_0;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ObjectSpawnFinishedMessage(Mirror.NetworkWriter,Mirror.ObjectSpawnFinishedMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ObjectSpawnFinishedMessage_m725199CA24E68A0A89E22B5BC1D0AE903671D1A1 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ObjectSpawnFinishedMessage_t6E1E7CC5B237E736E906B7C9B335D2CAFB3C67A7  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mirror.ObjectDestroyMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ObjectDestroyMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectDestroyMessage_tA991B06A64D9E787AAB3791462F563BF50C6130D  GeneratedNetworkCode__Read_Mirror_ObjectDestroyMessage_m48B7D38F474720778F7EF9BCFC37F0B067357B03 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_ObjectDestroyMessage_m48B7D38F474720778F7EF9BCFC37F0B067357B03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectDestroyMessage_tA991B06A64D9E787AAB3791462F563BF50C6130D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectDestroyMessage_tA991B06A64D9E787AAB3791462F563BF50C6130D ));
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt32_mF65B5680DA763162DCD1BCB53B225C38ACAE3C08(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		ObjectDestroyMessage_tA991B06A64D9E787AAB3791462F563BF50C6130D  L_2 = V_0;
		return L_2;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ObjectDestroyMessage(Mirror.NetworkWriter,Mirror.ObjectDestroyMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ObjectDestroyMessage_m843E69EF0CDF268B178138CDA80905687BAFEADA (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ObjectDestroyMessage_tA991B06A64D9E787AAB3791462F563BF50C6130D  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_ObjectDestroyMessage_m843E69EF0CDF268B178138CDA80905687BAFEADA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		ObjectDestroyMessage_tA991B06A64D9E787AAB3791462F563BF50C6130D  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.ObjectHideMessage Mirror.GeneratedNetworkCode::_Read_Mirror.ObjectHideMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectHideMessage_tB6B01B9672314B0D65651FD275286092433892CE  GeneratedNetworkCode__Read_Mirror_ObjectHideMessage_m0042FF82016C1FBA7250DA8ECC0BE2724CDC881A (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_ObjectHideMessage_m0042FF82016C1FBA7250DA8ECC0BE2724CDC881A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectHideMessage_tB6B01B9672314B0D65651FD275286092433892CE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectHideMessage_tB6B01B9672314B0D65651FD275286092433892CE ));
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt32_mF65B5680DA763162DCD1BCB53B225C38ACAE3C08(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		ObjectHideMessage_tB6B01B9672314B0D65651FD275286092433892CE  L_2 = V_0;
		return L_2;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.ObjectHideMessage(Mirror.NetworkWriter,Mirror.ObjectHideMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_ObjectHideMessage_m1A8003BDD951D23C981F6F7BAB6F9F1569D0425C (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, ObjectHideMessage_tB6B01B9672314B0D65651FD275286092433892CE  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_ObjectHideMessage_m1A8003BDD951D23C981F6F7BAB6F9F1569D0425C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		ObjectHideMessage_tB6B01B9672314B0D65651FD275286092433892CE  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.UpdateVarsMessage Mirror.GeneratedNetworkCode::_Read_Mirror.UpdateVarsMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1  GeneratedNetworkCode__Read_Mirror_UpdateVarsMessage_m6724C811B71DDE48CA81100D01CA6FF40676B261 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_UpdateVarsMessage_m6724C811B71DDE48CA81100D01CA6FF40676B261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1 ));
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint32_t L_1 = NetworkReaderExtensions_ReadUInt32_mF65B5680DA763162DCD1BCB53B225C38ACAE3C08(L_0, /*hidden argument*/NULL);
		(&V_0)->set_netId_0(L_1);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_3 = NetworkReaderExtensions_ReadBytesAndSizeSegment_m1750D52A666869DA2EC3C3A25E767834B9DA9E2E(L_2, /*hidden argument*/NULL);
		(&V_0)->set_payload_1(L_3);
		UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1  L_4 = V_0;
		return L_4;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.UpdateVarsMessage(Mirror.NetworkWriter,Mirror.UpdateVarsMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_UpdateVarsMessage_mE21DBDE7895DDD45CB9430868877CFB93E9C86FA (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_UpdateVarsMessage_mE21DBDE7895DDD45CB9430868877CFB93E9C86FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1  L_1 = ___value1;
		uint32_t L_2 = L_1.get_netId_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		UpdateVarsMessage_tB1B51A465F56BE94115FA8886C52613AA7A267F1  L_4 = ___value1;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_5 = L_4.get_payload_1();
		NetworkWriterExtensions_WriteBytesAndSizeSegment_mAD214D7E8A080A5615D400A6C3F2F5218F3AD11B(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.NetworkPingMessage Mirror.GeneratedNetworkCode::_Read_Mirror.NetworkPingMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396  GeneratedNetworkCode__Read_Mirror_NetworkPingMessage_mC2B3B4ACDDB56A809D86D120286A8173DBE447A8 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_NetworkPingMessage_mC2B3B4ACDDB56A809D86D120286A8173DBE447A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396 ));
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		double L_1 = NetworkReaderExtensions_ReadDouble_m5800AF1FD52D7DB9047FE7B58A0BD38E23C94281(L_0, /*hidden argument*/NULL);
		(&V_0)->set_clientTime_0(L_1);
		NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396  L_2 = V_0;
		return L_2;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.NetworkPingMessage(Mirror.NetworkWriter,Mirror.NetworkPingMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_NetworkPingMessage_m6D621F939E48C0B3CA2E6149D71069C358ABDF93 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_NetworkPingMessage_m6D621F939E48C0B3CA2E6149D71069C358ABDF93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		NetworkPingMessage_t75EF593654896AFF0D8EA6D0CAB78F6309459396  L_1 = ___value1;
		double L_2 = L_1.get_clientTime_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteDouble_m40D19C266720079063B22A53B6940E1CF6482BFC(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Mirror.NetworkPongMessage Mirror.GeneratedNetworkCode::_Read_Mirror.NetworkPongMessage(Mirror.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  GeneratedNetworkCode__Read_Mirror_NetworkPongMessage_m9386EC63A77EFEC9FDDEC75BB13EAFDDDAFC81F8 (NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Read_Mirror_NetworkPongMessage_m9386EC63A77EFEC9FDDEC75BB13EAFDDDAFC81F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2 ));
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		double L_1 = NetworkReaderExtensions_ReadDouble_m5800AF1FD52D7DB9047FE7B58A0BD38E23C94281(L_0, /*hidden argument*/NULL);
		(&V_0)->set_clientTime_0(L_1);
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader0;
		double L_3 = NetworkReaderExtensions_ReadDouble_m5800AF1FD52D7DB9047FE7B58A0BD38E23C94281(L_2, /*hidden argument*/NULL);
		(&V_0)->set_serverTime_1(L_3);
		NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  L_4 = V_0;
		return L_4;
	}
}
// System.Void Mirror.GeneratedNetworkCode::_Write_Mirror.NetworkPongMessage(Mirror.NetworkWriter,Mirror.NetworkPongMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode__Write_Mirror_NetworkPongMessage_mCAC90209C64184AED8759A6972F1E69D26DDC000 (NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode__Write_Mirror_NetworkPongMessage_mCAC90209C64184AED8759A6972F1E69D26DDC000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  L_1 = ___value1;
		double L_2 = L_1.get_clientTime_0();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteDouble_m40D19C266720079063B22A53B6940E1CF6482BFC(L_0, L_2, /*hidden argument*/NULL);
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_3 = ___writer0;
		NetworkPongMessage_t6D4E4D3F9D01734E35C31A58A5E5EFD9663340B2  L_4 = ___value1;
		double L_5 = L_4.get_serverTime_1();
		NetworkWriterExtensions_WriteDouble_m40D19C266720079063B22A53B6940E1CF6482BFC(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.GeneratedNetworkCode::InitReadWriters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedNetworkCode_InitReadWriters_mF3F676E480CD76ED8819C76E79234EED4737891B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GeneratedNetworkCode_InitReadWriters_mF3F676E480CD76ED8819C76E79234EED4737891B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 * L_0 = (Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922 *)il2cpp_codegen_object_new(Action_2_t52E7D1EBBA527DA63622EFF245A3775E80D17922_il2cpp_TypeInfo_var);
		Action_2__ctor_m5F20D89DCC6459F8E9E7F8FF48CB7690053A3020(L_0, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteByte_mFFEFC20C5AB176841BBBE10C1E4A866EAF369B96_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m5F20D89DCC6459F8E9E7F8FF48CB7690053A3020_RuntimeMethod_var);
		((Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tF8D3D9D035F0F6186ECD28DC867E016AD93D3EDD_il2cpp_TypeInfo_var))->set_write_0(L_0);
		Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA * L_1 = (Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA *)il2cpp_codegen_object_new(Action_2_t085EA0AB386F73454B4A2B2C2F826ADAFAB971FA_il2cpp_TypeInfo_var);
		Action_2__ctor_m3136806DDFFA4F43DB62D141E811C23CE771F09C(L_1, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteSByte_m9AA9E2E5390BD4AC9CEA8A05EAE1234D9C48B8C8_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m3136806DDFFA4F43DB62D141E811C23CE771F09C_RuntimeMethod_var);
		((Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t68A1693F3804A746ED80DDB507B20D8C67C2723C_il2cpp_TypeInfo_var))->set_write_0(L_1);
		Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 * L_2 = (Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25 *)il2cpp_codegen_object_new(Action_2_t6700F29FC1B7D4081C6FF866AD21B80187508E25_il2cpp_TypeInfo_var);
		Action_2__ctor_m483B17469257E2DA23721B287300CAF7C524BA7F(L_2, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteChar_m14899B6388B37CA68D9BA49CF0BE0C3EE956E49E_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m483B17469257E2DA23721B287300CAF7C524BA7F_RuntimeMethod_var);
		((Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t0A745353D77F9C3AC3C454C5A3ED98F709D5EB26_il2cpp_TypeInfo_var))->set_write_0(L_2);
		Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B * L_3 = (Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B *)il2cpp_codegen_object_new(Action_2_tF81685BA5FBB5DC20C0BB093365291FB712A401B_il2cpp_TypeInfo_var);
		Action_2__ctor_mFB657F4245B20C4ABFADDD00C89EC25727CEE967(L_3, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteBoolean_m1286C9865F21B0EB024250572C0ADDC319782162_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mFB657F4245B20C4ABFADDD00C89EC25727CEE967_RuntimeMethod_var);
		((Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t1D1C601A3EBCEA4C4302FF02FDFB7540C5A22F7A_il2cpp_TypeInfo_var))->set_write_0(L_3);
		Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F * L_4 = (Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F *)il2cpp_codegen_object_new(Action_2_tA14B2F1E192EF29D817F514EA3C5482459A0D19F_il2cpp_TypeInfo_var);
		Action_2__ctor_m298F331E1E183EAA83607B14D4A20E09303CD594(L_4, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteUInt16_m7F8221AB37BDB8AC0765BDA883C6CA916CC812F4_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m298F331E1E183EAA83607B14D4A20E09303CD594_RuntimeMethod_var);
		((Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t5F6D0C95DD3F5A6DB72B13671B6E34A764BB9ABE_il2cpp_TypeInfo_var))->set_write_0(L_4);
		Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 * L_5 = (Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869 *)il2cpp_codegen_object_new(Action_2_t7A28AF394FDC1CBC7C3BBF8DBB09C0389A227869_il2cpp_TypeInfo_var);
		Action_2__ctor_m1AC2689951B7F51F80CD4E4758F9005A64A73BCD(L_5, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteInt16_m5C7AE32A24F49E8EE8F42BE01BF5B5D7065FB47F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1AC2689951B7F51F80CD4E4758F9005A64A73BCD_RuntimeMethod_var);
		((Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t3BF5E9CEA437B8E3C06EE7AB80C714421A009091_il2cpp_TypeInfo_var))->set_write_0(L_5);
		Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 * L_6 = (Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401 *)il2cpp_codegen_object_new(Action_2_tA1355C08EF96E6E0F02FB4DE8BB4DA2728223401_il2cpp_TypeInfo_var);
		Action_2__ctor_mABD9B647262242BFBF9DF30B2F09209CDB0E9C0D(L_6, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteUInt32_mD459163C062BD8349BE6680BFAC598A96619F6F5_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mABD9B647262242BFBF9DF30B2F09209CDB0E9C0D_RuntimeMethod_var);
		((Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t0BDEB84E857A72ED3B57F39D5F0B270224D3C350_il2cpp_TypeInfo_var))->set_write_0(L_6);
		Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 * L_7 = (Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722 *)il2cpp_codegen_object_new(Action_2_tE6E09D310E833E4FB94E0D9B53FD0107A7C87722_il2cpp_TypeInfo_var);
		Action_2__ctor_m2E22F83A42E4D0460B184F70743E66E58C4CF77D(L_7, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m2E22F83A42E4D0460B184F70743E66E58C4CF77D_RuntimeMethod_var);
		((Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tBFABCD206CC703940F248E6351D0734D0AB13E23_il2cpp_TypeInfo_var))->set_write_0(L_7);
		Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E * L_8 = (Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E *)il2cpp_codegen_object_new(Action_2_tB350143B74E5F188F5AF606DD0B057DF2A111A0E_il2cpp_TypeInfo_var);
		Action_2__ctor_m1548A69A3B376F12C561974718E174940AA8FBE7(L_8, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1548A69A3B376F12C561974718E174940AA8FBE7_RuntimeMethod_var);
		((Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t3CDCADC5540B25844F790553308D724F25498DEB_il2cpp_TypeInfo_var))->set_write_0(L_8);
		Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 * L_9 = (Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45 *)il2cpp_codegen_object_new(Action_2_t0D878EB6F328F25995A8651ADB5EB50A2C1D5C45_il2cpp_TypeInfo_var);
		Action_2__ctor_mCDC7DFCFB5EA8376AC8594484F8B3C7BBB3D78C9(L_9, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteInt64_m381C3EB4FED2C7C18CD6630ACCAC174FFC5E3C9C_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mCDC7DFCFB5EA8376AC8594484F8B3C7BBB3D78C9_RuntimeMethod_var);
		((Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t968EAEA43EB6BD2E438C75DB711FDD4503C9218C_il2cpp_TypeInfo_var))->set_write_0(L_9);
		Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 * L_10 = (Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7 *)il2cpp_codegen_object_new(Action_2_tFC0C91DAAA53900B09A964EDDD9DE42DF1A78AC7_il2cpp_TypeInfo_var);
		Action_2__ctor_m261CC068AA9083B9077FF472CF00237591F24B16(L_10, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteSingle_m5EDC5A8935BAD2B074C652C5158281D2C253CB08_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m261CC068AA9083B9077FF472CF00237591F24B16_RuntimeMethod_var);
		((Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t28A96C28E7385D30393EE1C26AA0F75A46710B16_il2cpp_TypeInfo_var))->set_write_0(L_10);
		Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B * L_11 = (Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B *)il2cpp_codegen_object_new(Action_2_t32058A26C0F0DC50CDC4C093F62CB814CB700F4B_il2cpp_TypeInfo_var);
		Action_2__ctor_mA4E9C882696FD433AD0A0874172CCB18D379AC74(L_11, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteDouble_m40D19C266720079063B22A53B6940E1CF6482BFC_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA4E9C882696FD433AD0A0874172CCB18D379AC74_RuntimeMethod_var);
		((Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t4C98185AE070182574DBD49FA2AE4CA2D3923973_il2cpp_TypeInfo_var))->set_write_0(L_11);
		Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 * L_12 = (Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2 *)il2cpp_codegen_object_new(Action_2_tC3CD250E1D414503C04C35604A1AF9E1E3A3CCC2_il2cpp_TypeInfo_var);
		Action_2__ctor_m6883EDC5D3AE13CB023C1A016DB71EB923975345(L_12, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteDecimal_m1F5400E8F7D91C15538FC724A4B430A818479431_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6883EDC5D3AE13CB023C1A016DB71EB923975345_RuntimeMethod_var);
		((Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t3FB5DD8710039238F151652C7490AD2F8E3CCCB5_il2cpp_TypeInfo_var))->set_write_0(L_12);
		Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088 * L_13 = (Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088 *)il2cpp_codegen_object_new(Action_2_t76DFDEC9793FA77B0C6D3AE5128E8D14630DD088_il2cpp_TypeInfo_var);
		Action_2__ctor_m86612E2752088A7F8E97BDC84CAD5A28260BD4FA(L_13, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteString_m31C762A5BBACB77129E085AB7D7A9AEEB9ACA95F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m86612E2752088A7F8E97BDC84CAD5A28260BD4FA_RuntimeMethod_var);
		((Writer_1_t4B0E2F18F0DAB051EEA9161CDE2DDFB6E0752F6D_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t4B0E2F18F0DAB051EEA9161CDE2DDFB6E0752F6D_il2cpp_TypeInfo_var))->set_write_0(L_13);
		Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992 * L_14 = (Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992 *)il2cpp_codegen_object_new(Action_2_t7E89E4F32D129BCBC058BBF1FD6B36B4D4D73992_il2cpp_TypeInfo_var);
		Action_2__ctor_mA305F287E550F414D82F54D26BA4F566DF3BDD85(L_14, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteBytesAndSize_mB11A8C12622432C14420D616F763F130DD1A91C9_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA305F287E550F414D82F54D26BA4F566DF3BDD85_RuntimeMethod_var);
		((Writer_1_tEED5FDB6FE6385A9AD6B02D5C74B35CFB433B4BC_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tEED5FDB6FE6385A9AD6B02D5C74B35CFB433B4BC_il2cpp_TypeInfo_var))->set_write_0(L_14);
		Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B * L_15 = (Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B *)il2cpp_codegen_object_new(Action_2_tDDC16D9343F9862B1AEAFD3C2DD9F9074F056F3B_il2cpp_TypeInfo_var);
		Action_2__ctor_m8C4CBBDA44317866DF41D68074EB2DF53C2AA5D4(L_15, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteBytesAndSizeSegment_mAD214D7E8A080A5615D400A6C3F2F5218F3AD11B_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m8C4CBBDA44317866DF41D68074EB2DF53C2AA5D4_RuntimeMethod_var);
		((Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t9EB22B07802DC0F5592E9DBF85DD1C30DBFB37A0_il2cpp_TypeInfo_var))->set_write_0(L_15);
		Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A * L_16 = (Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A *)il2cpp_codegen_object_new(Action_2_t8CF52778C79A43BDF7F6EEA69C5EDD7FC1BAE71A_il2cpp_TypeInfo_var);
		Action_2__ctor_m6AA5E587A8D69613E23F8FF6F5A35270920E99DE(L_16, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteVector2_m52B333B1242AC5E0490DA980D5954157FDF9949F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m6AA5E587A8D69613E23F8FF6F5A35270920E99DE_RuntimeMethod_var);
		((Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tA86C54E9ABE4626DBB0C42E69D595B56E0CA25A4_il2cpp_TypeInfo_var))->set_write_0(L_16);
		Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B * L_17 = (Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B *)il2cpp_codegen_object_new(Action_2_t7DEDA4797BBA6D349E1D5E61BF8E71AC0652161B_il2cpp_TypeInfo_var);
		Action_2__ctor_mBAE5DEDD1B5DD112878F1C6AD8C0835A64873286(L_17, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteVector3_m2895E336F7B2F52819808DC35F574B10D3317609_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mBAE5DEDD1B5DD112878F1C6AD8C0835A64873286_RuntimeMethod_var);
		((Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t329286E9C1ACF16856B66E5353F0F2F1FF9351E6_il2cpp_TypeInfo_var))->set_write_0(L_17);
		Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 * L_18 = (Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48 *)il2cpp_codegen_object_new(Action_2_tAB3708D43787E2BEB258158170A290B1B1A39C48_il2cpp_TypeInfo_var);
		Action_2__ctor_m2365593AD21B593345E2FD3E29EC4E371FA17768(L_18, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteVector4_mE75893C683F8C655244CE272B0B050662E751414_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m2365593AD21B593345E2FD3E29EC4E371FA17768_RuntimeMethod_var);
		((Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tC6B9EE764A70F34B579A86D354E4A7248FD7D8DC_il2cpp_TypeInfo_var))->set_write_0(L_18);
		Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 * L_19 = (Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4 *)il2cpp_codegen_object_new(Action_2_t1F7B553853A3C7E0059CB4C20171C89899F30FD4_il2cpp_TypeInfo_var);
		Action_2__ctor_mEA7A5BDFCD93241D636555FE072F97A2296A5D04(L_19, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteVector2Int_mDA0A622A19099A741DE393233204CD6FB89FF75A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mEA7A5BDFCD93241D636555FE072F97A2296A5D04_RuntimeMethod_var);
		((Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tED8D6640942315EDE018F6B1AB30914B9C775906_il2cpp_TypeInfo_var))->set_write_0(L_19);
		Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 * L_20 = (Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71 *)il2cpp_codegen_object_new(Action_2_tB5ECA8EFF4D4711766752DC8484C46D37E81BC71_il2cpp_TypeInfo_var);
		Action_2__ctor_m5E692933983CFB71B4321878D30D1DFEE3B36A58(L_20, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteVector3Int_m4911D397D68D855E386699BB99ECF4BD0F5F7060_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m5E692933983CFB71B4321878D30D1DFEE3B36A58_RuntimeMethod_var);
		((Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tC0CFA52D588406CAB430FECC3FE869471B5BA1AF_il2cpp_TypeInfo_var))->set_write_0(L_20);
		Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 * L_21 = (Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38 *)il2cpp_codegen_object_new(Action_2_t3BB1FCB4F61E8C68E154F8C82A7BC52D616CBC38_il2cpp_TypeInfo_var);
		Action_2__ctor_mE32D982104F660FC5785EA3DBF9A4428D2C9503A(L_21, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteColor_m7EA61C4CEE7C0F49BCAF7339D1A76F4ECA50626E_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mE32D982104F660FC5785EA3DBF9A4428D2C9503A_RuntimeMethod_var);
		((Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t785754E9E50AB0B928A06CDE0B21818B72405F05_il2cpp_TypeInfo_var))->set_write_0(L_21);
		Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 * L_22 = (Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575 *)il2cpp_codegen_object_new(Action_2_t1D4D976ADCDC1657604A1A6A367AABC1F078C575_il2cpp_TypeInfo_var);
		Action_2__ctor_m68E4871F1CA24036CEDC75FDE15FB81A266B60B8(L_22, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteColor32_mC430555DAD65FA8A1ACA7117122960F6412B3079_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m68E4871F1CA24036CEDC75FDE15FB81A266B60B8_RuntimeMethod_var);
		((Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tA9E5EA683CA8E516101F3E2CF673B35EFE6D12F0_il2cpp_TypeInfo_var))->set_write_0(L_22);
		Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 * L_23 = (Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232 *)il2cpp_codegen_object_new(Action_2_t8DE41CE4C1FB3126AEE417C1E8019088D77C6232_il2cpp_TypeInfo_var);
		Action_2__ctor_mF1EACD375A560B2CBCC6367753DCFE495736687F(L_23, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteQuaternion_m96A981CD95861D3F23358155CD1CCBCDF185D909_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF1EACD375A560B2CBCC6367753DCFE495736687F_RuntimeMethod_var);
		((Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t5381337CA1D8F2E2F6D94581F54C081D2DD3E945_il2cpp_TypeInfo_var))->set_write_0(L_23);
		Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 * L_24 = (Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18 *)il2cpp_codegen_object_new(Action_2_tE8BD8407D1975E5206315893612B6C8214D73A18_il2cpp_TypeInfo_var);
		Action_2__ctor_m97C100FB2660EF471A0A7235179256541AA5497B(L_24, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteRect_m1C462FFD3B7FE7B73B6F733CDECEDCBFFF9F3A05_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m97C100FB2660EF471A0A7235179256541AA5497B_RuntimeMethod_var);
		((Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t119DD70BAA40163A7DB9418E01DD77CA502F64E4_il2cpp_TypeInfo_var))->set_write_0(L_24);
		Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 * L_25 = (Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457 *)il2cpp_codegen_object_new(Action_2_tA515A444E6469FE7D36DCA796F08FF322F15B457_il2cpp_TypeInfo_var);
		Action_2__ctor_m91B84B10A0E634282727565405A71EED418144A8(L_25, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WritePlane_m75F27F25C9E50A60C635D376D4C1D993D1376A97_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m91B84B10A0E634282727565405A71EED418144A8_RuntimeMethod_var);
		((Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tB69666D7BE717D00E20F499C6213D5B20A2CF993_il2cpp_TypeInfo_var))->set_write_0(L_25);
		Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 * L_26 = (Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64 *)il2cpp_codegen_object_new(Action_2_t7E7869A9993026890A970ED24F90500F8D9A2D64_il2cpp_TypeInfo_var);
		Action_2__ctor_mE3BE2C7CBD6BC6718335212AB39B68475C30E7BF(L_26, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteRay_mF907AD59F7170BBB74CF49611FBBAF069DD6D1F2_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mE3BE2C7CBD6BC6718335212AB39B68475C30E7BF_RuntimeMethod_var);
		((Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tED3F8CBDFE6341688F6C5BA805F485023D2F4CD3_il2cpp_TypeInfo_var))->set_write_0(L_26);
		Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 * L_27 = (Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544 *)il2cpp_codegen_object_new(Action_2_t83434D1780C21F2935B5BDAC4C2874F9D742F544_il2cpp_TypeInfo_var);
		Action_2__ctor_m7D555F1B8617CCAF5FAC8589E41742D733ECE93B(L_27, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteMatrix4x4_m40B7941CFBB2912FA11AFB35F5729E4F2383BEAD_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m7D555F1B8617CCAF5FAC8589E41742D733ECE93B_RuntimeMethod_var);
		((Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t73B7A7BB5872D245C06CFE168A5170A911A8E1F3_il2cpp_TypeInfo_var))->set_write_0(L_27);
		Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 * L_28 = (Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309 *)il2cpp_codegen_object_new(Action_2_t64D8BF80DEA06ABF68F5460FFCDFA77975A12309_il2cpp_TypeInfo_var);
		Action_2__ctor_mB8BF1B3FD49FA72B97EDEFA1C274D22C57BBBED5(L_28, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteGuid_m1700462B08DC1D6B80FF00521C50C5A85E781AFB_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mB8BF1B3FD49FA72B97EDEFA1C274D22C57BBBED5_RuntimeMethod_var);
		((Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t421EBEBFE41A20B209803E282ECD6E97C70A6A6F_il2cpp_TypeInfo_var))->set_write_0(L_28);
		Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77 * L_29 = (Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77 *)il2cpp_codegen_object_new(Action_2_t5147D46917B95A0C512892EBBD5E73D6CBE32C77_il2cpp_TypeInfo_var);
		Action_2__ctor_m336BDEA9FF0F2B02D75D3005644D0903857486EE(L_29, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteNetworkIdentity_m6B7BF775A09551E47F1E98F2603E0C3B8358FC64_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m336BDEA9FF0F2B02D75D3005644D0903857486EE_RuntimeMethod_var);
		((Writer_1_t65DC0A2F1017439CFEE3D2BE7553E1966A5697D0_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t65DC0A2F1017439CFEE3D2BE7553E1966A5697D0_il2cpp_TypeInfo_var))->set_write_0(L_29);
		Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6 * L_30 = (Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6 *)il2cpp_codegen_object_new(Action_2_t2B9904C967DF23E9AA8C56FB1BCC9FD1F6F04CE6_il2cpp_TypeInfo_var);
		Action_2__ctor_m0D482C7DA8A8651ED207A7E65D8F0354933ED753(L_30, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteNetworkBehaviour_mCA7167729B04CFA80D5F7AB5D9C43FC24B4DF20D_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m0D482C7DA8A8651ED207A7E65D8F0354933ED753_RuntimeMethod_var);
		((Writer_1_tAEAB6C44B9377EFAA5D77E2DCD1D7A5B8D701681_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tAEAB6C44B9377EFAA5D77E2DCD1D7A5B8D701681_il2cpp_TypeInfo_var))->set_write_0(L_30);
		Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1 * L_31 = (Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1 *)il2cpp_codegen_object_new(Action_2_t72AA7D67E4ABDFC1FC806694AAE8D18E2D4623C1_il2cpp_TypeInfo_var);
		Action_2__ctor_m1CAFBAC36CA210FB9C0587864E1DF9CA4422A3C7(L_31, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteTransform_m3118EFCE291DE2182B785E099FE30B3D68F36830_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1CAFBAC36CA210FB9C0587864E1DF9CA4422A3C7_RuntimeMethod_var);
		((Writer_1_t5DD65F78B74F3A48D19CE8E6DF017A29AC88CC6B_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t5DD65F78B74F3A48D19CE8E6DF017A29AC88CC6B_il2cpp_TypeInfo_var))->set_write_0(L_31);
		Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568 * L_32 = (Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568 *)il2cpp_codegen_object_new(Action_2_t1C6BDFD4E5A8C8175C754B67EC4EB05C65971568_il2cpp_TypeInfo_var);
		Action_2__ctor_mFB28F85055E20B6EECEF6A83D99A471E2E61EBE6(L_32, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteGameObject_m461FDFA27D93D42B1C6C1B5F84EC2314E479E45B_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mFB28F85055E20B6EECEF6A83D99A471E2E61EBE6_RuntimeMethod_var);
		((Writer_1_tD346A524FDC0859D72436D2387BE7ECF7A0B8D2C_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tD346A524FDC0859D72436D2387BE7ECF7A0B8D2C_il2cpp_TypeInfo_var))->set_write_0(L_32);
		Action_2_t928C90600628DF3301846464535E0CBE3D956042 * L_33 = (Action_2_t928C90600628DF3301846464535E0CBE3D956042 *)il2cpp_codegen_object_new(Action_2_t928C90600628DF3301846464535E0CBE3D956042_il2cpp_TypeInfo_var);
		Action_2__ctor_mB7DE8C4035310EC77D6EECE2B5C475FB1749DEB7(L_33, NULL, (intptr_t)((intptr_t)NetworkWriterExtensions_WriteUri_mECC3E974CD9C900CEBB24E5E4743DF2D41E3533F_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mB7DE8C4035310EC77D6EECE2B5C475FB1749DEB7_RuntimeMethod_var);
		((Writer_1_tCB081B0DDD2F9B8DCEB63F6D061832A40CF1B253_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tCB081B0DDD2F9B8DCEB63F6D061832A40CF1B253_il2cpp_TypeInfo_var))->set_write_0(L_33);
		Action_2_t66675A75775137108E5F7FAB965F44B552778C26 * L_34 = (Action_2_t66675A75775137108E5F7FAB965F44B552778C26 *)il2cpp_codegen_object_new(Action_2_t66675A75775137108E5F7FAB965F44B552778C26_il2cpp_TypeInfo_var);
		Action_2__ctor_m2A1F7D2C9775763CEE8063E554AE9F8ECF017D99(L_34, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ErrorMessage_m5D80CC10A68818B9350AFA24544361806086FDD1_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m2A1F7D2C9775763CEE8063E554AE9F8ECF017D99_RuntimeMethod_var);
		((Writer_1_t93FF8F49891220AC926A6994ABAAAC1FCCC69813_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t93FF8F49891220AC926A6994ABAAAC1FCCC69813_il2cpp_TypeInfo_var))->set_write_0(L_34);
		Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 * L_35 = (Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4 *)il2cpp_codegen_object_new(Action_2_t62D233D13A577CA696A917DB6FCEAF9C3B9A2DA4_il2cpp_TypeInfo_var);
		Action_2__ctor_mC7E7DA96BA1FBF07C92E0B7E21EF59AE9C0282BF(L_35, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ReadyMessage_mDEE6F839CBFBC4FA67F9E4AB3E00479144EFE706_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mC7E7DA96BA1FBF07C92E0B7E21EF59AE9C0282BF_RuntimeMethod_var);
		((Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t7E02983786EF70322CFD3012C6ADE19BF166B737_il2cpp_TypeInfo_var))->set_write_0(L_35);
		Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 * L_36 = (Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6 *)il2cpp_codegen_object_new(Action_2_t8FF7BAABD6B3D74F5B72C10EBA66BE2E772D49D6_il2cpp_TypeInfo_var);
		Action_2__ctor_mC028AAEBCD414F3C888993D73AFD2A4F1EC1AD1F(L_36, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_NotReadyMessage_m6C94EAA192195ACB7BCCB7E8A5FB2083FB0C7005_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mC028AAEBCD414F3C888993D73AFD2A4F1EC1AD1F_RuntimeMethod_var);
		((Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t4D5903CA49577D5BE54EB11214C0AE34D7BBD26C_il2cpp_TypeInfo_var))->set_write_0(L_36);
		Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 * L_37 = (Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47 *)il2cpp_codegen_object_new(Action_2_t82C419A7B56F7761744D61A922F12158B8D99F47_il2cpp_TypeInfo_var);
		Action_2__ctor_m091F880AADDFD87B4518374CC00C37B91B4B456D(L_37, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_AddPlayerMessage_mAF8C12F87F2F0E51FA42578D82E57D5DE3AF01B9_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m091F880AADDFD87B4518374CC00C37B91B4B456D_RuntimeMethod_var);
		((Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t2EF0735D392E87510C608B3AF2157A96F0AA11CE_il2cpp_TypeInfo_var))->set_write_0(L_37);
		Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067 * L_38 = (Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067 *)il2cpp_codegen_object_new(Action_2_t198DBA9F14CEC2A781E4E45316FE2547793F9067_il2cpp_TypeInfo_var);
		Action_2__ctor_m5A1D161A3D700A96BE1F2FDE9645BB34A864CE53(L_38, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_DisconnectMessage_mB1CA54449AEAACC9259E5E7949EE4AA31EC8833A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m5A1D161A3D700A96BE1F2FDE9645BB34A864CE53_RuntimeMethod_var);
		((Writer_1_t4AD49574A8C2D2A5625C36BFB2C8D8ED547FEF6D_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t4AD49574A8C2D2A5625C36BFB2C8D8ED547FEF6D_il2cpp_TypeInfo_var))->set_write_0(L_38);
		Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA * L_39 = (Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA *)il2cpp_codegen_object_new(Action_2_tDC7B375614BB1A0FD5020CEEAEA8BEF69E428ACA_il2cpp_TypeInfo_var);
		Action_2__ctor_m77708866B66D42375A39FBC272272CFEEA4AB3EC(L_39, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ConnectMessage_mD53F8B44F1D11F3BA468ADD169F17D73737DF978_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m77708866B66D42375A39FBC272272CFEEA4AB3EC_RuntimeMethod_var);
		((Writer_1_tB0323AC0C818A4B8702754ABC81BBE76AD203D94_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tB0323AC0C818A4B8702754ABC81BBE76AD203D94_il2cpp_TypeInfo_var))->set_write_0(L_39);
		Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF * L_40 = (Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF *)il2cpp_codegen_object_new(Action_2_t31975E28E395308D781F896A4BDB268F6A4BD2CF_il2cpp_TypeInfo_var);
		Action_2__ctor_m492AC2BFBB4037EDCE4738F185A8BCD663A46AFA(L_40, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_SceneMessage_mE1645ADD480391AB601EFE6065B1CDDD1E3B00C9_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m492AC2BFBB4037EDCE4738F185A8BCD663A46AFA_RuntimeMethod_var);
		((Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tE4E7B4CDEDF41A88667DFEC6A6F36944765DE074_il2cpp_TypeInfo_var))->set_write_0(L_40);
		Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07 * L_41 = (Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07 *)il2cpp_codegen_object_new(Action_2_tBEEC02C1662E477FED76D260F54C67BD15246E07_il2cpp_TypeInfo_var);
		Action_2__ctor_m4F330BA675F7662A6BB1E17073779F6ACFA40366(L_41, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_SceneOperation_m006CA70F6FCA7971B6FEC0A3A0EDE3D7BE1678E6_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m4F330BA675F7662A6BB1E17073779F6ACFA40366_RuntimeMethod_var);
		((Writer_1_t48BB1FBA5084DD891ADF80CAF010D36894B21B71_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t48BB1FBA5084DD891ADF80CAF010D36894B21B71_il2cpp_TypeInfo_var))->set_write_0(L_41);
		Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 * L_42 = (Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379 *)il2cpp_codegen_object_new(Action_2_t574ECA56A14BC12A4F05C314A59A1A8D97077379_il2cpp_TypeInfo_var);
		Action_2__ctor_mC600CBEAB837FB52C0BC72AEAB8013F4D88FA68E(L_42, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_CommandMessage_mA1685BE9E0633761FE517E4171DE64FFBDC397B1_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mC600CBEAB837FB52C0BC72AEAB8013F4D88FA68E_RuntimeMethod_var);
		((Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t5AAF25D7AD0B5A0050574314AB2162EC3D52CE45_il2cpp_TypeInfo_var))->set_write_0(L_42);
		Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 * L_43 = (Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3 *)il2cpp_codegen_object_new(Action_2_t23DD120D884F3B807B80771416C8A68A2F6BF8D3_il2cpp_TypeInfo_var);
		Action_2__ctor_mA6524E64904D3CBEB386888C78CBC4C921FA15C3(L_43, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_RpcMessage_m3CFE1651CE89811888902FBB31AB092514F79F60_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA6524E64904D3CBEB386888C78CBC4C921FA15C3_RuntimeMethod_var);
		((Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t29ECC238BE9F40A401A3EA5245B481ACC90D5E55_il2cpp_TypeInfo_var))->set_write_0(L_43);
		Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC * L_44 = (Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC *)il2cpp_codegen_object_new(Action_2_t3D008DF47D7FC79BA0334D5FAC95607A63DCEFEC_il2cpp_TypeInfo_var);
		Action_2__ctor_mE5BE1B7B82D964AF74A0C18DE66B8663C35DF1E6(L_44, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_SpawnMessage_mD4D895651BE0B432E3FEB3132D0C374A30F73F9A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mE5BE1B7B82D964AF74A0C18DE66B8663C35DF1E6_RuntimeMethod_var);
		((Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tACE5341122A33176C173E8EF68DEF1EB63DB2F6A_il2cpp_TypeInfo_var))->set_write_0(L_44);
		Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF * L_45 = (Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF *)il2cpp_codegen_object_new(Action_2_tF4D77A930B8C759D9F217E2139A50B41CDD693FF_il2cpp_TypeInfo_var);
		Action_2__ctor_m9B479585ED08803A9F0C2721E5900D38B3E76F72(L_45, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ObjectSpawnStartedMessage_m78BBD4AC106546B7F0A36394701C996EB561A462_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m9B479585ED08803A9F0C2721E5900D38B3E76F72_RuntimeMethod_var);
		((Writer_1_t68972DB064C6BF5998674584511650B183CAACDE_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t68972DB064C6BF5998674584511650B183CAACDE_il2cpp_TypeInfo_var))->set_write_0(L_45);
		Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 * L_46 = (Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358 *)il2cpp_codegen_object_new(Action_2_t1F680FB9B379A0FDBFC5E7892311D7E923026358_il2cpp_TypeInfo_var);
		Action_2__ctor_m4E201B98D59A318F8CF143177AC43F923E76B34F(L_46, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ObjectSpawnFinishedMessage_m725199CA24E68A0A89E22B5BC1D0AE903671D1A1_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m4E201B98D59A318F8CF143177AC43F923E76B34F_RuntimeMethod_var);
		((Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_tDDDE75E49B17635C3FED1B96E0A4C780E85A7D77_il2cpp_TypeInfo_var))->set_write_0(L_46);
		Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 * L_47 = (Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9 *)il2cpp_codegen_object_new(Action_2_tEB24037407A50F8480D3C9DD97B9516B2A0D25B9_il2cpp_TypeInfo_var);
		Action_2__ctor_m8D10022EA4A6355224AAD8CE821B28C845296B76(L_47, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ObjectDestroyMessage_m843E69EF0CDF268B178138CDA80905687BAFEADA_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m8D10022EA4A6355224AAD8CE821B28C845296B76_RuntimeMethod_var);
		((Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t1A73150E35486CB62F7261F1A1F78849E8B0D042_il2cpp_TypeInfo_var))->set_write_0(L_47);
		Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 * L_48 = (Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375 *)il2cpp_codegen_object_new(Action_2_t4A2880C4D6F155F26BB53418979015EDB2534375_il2cpp_TypeInfo_var);
		Action_2__ctor_m7F88F339DD9921BFEA0BF7F21CB7A28A1580B100(L_48, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_ObjectHideMessage_m1A8003BDD951D23C981F6F7BAB6F9F1569D0425C_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m7F88F339DD9921BFEA0BF7F21CB7A28A1580B100_RuntimeMethod_var);
		((Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t9CF4AA7D870348D99425ABD745E721925CE41636_il2cpp_TypeInfo_var))->set_write_0(L_48);
		Action_2_t5A3703D259887235527744E2BD7095928D420ADD * L_49 = (Action_2_t5A3703D259887235527744E2BD7095928D420ADD *)il2cpp_codegen_object_new(Action_2_t5A3703D259887235527744E2BD7095928D420ADD_il2cpp_TypeInfo_var);
		Action_2__ctor_m1025F6BC82608A23274E63C46219199F5FEB6862(L_49, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_UpdateVarsMessage_mE21DBDE7895DDD45CB9430868877CFB93E9C86FA_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1025F6BC82608A23274E63C46219199F5FEB6862_RuntimeMethod_var);
		((Writer_1_t0715B02972DFC0935C9B2E48C57B51CE550E513D_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t0715B02972DFC0935C9B2E48C57B51CE550E513D_il2cpp_TypeInfo_var))->set_write_0(L_49);
		Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 * L_50 = (Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1 *)il2cpp_codegen_object_new(Action_2_tB680D97115FA0B1F28A63305DFFCB7F1A9F88FB1_il2cpp_TypeInfo_var);
		Action_2__ctor_m1369D981F15BE3F5035215288D05882EA40F6388(L_50, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_NetworkPingMessage_m6D621F939E48C0B3CA2E6149D71069C358ABDF93_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1369D981F15BE3F5035215288D05882EA40F6388_RuntimeMethod_var);
		((Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t535CE64ADF284193839F68FEFF9BA1A12FC59AF3_il2cpp_TypeInfo_var))->set_write_0(L_50);
		Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE * L_51 = (Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE *)il2cpp_codegen_object_new(Action_2_t766ADD1A7C8C2168D8745606774616F292054ABE_il2cpp_TypeInfo_var);
		Action_2__ctor_m9ADF7DA49508540415C7C8134DD2560676BD4965(L_51, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Write_Mirror_NetworkPongMessage_mCAC90209C64184AED8759A6972F1E69D26DDC000_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m9ADF7DA49508540415C7C8134DD2560676BD4965_RuntimeMethod_var);
		((Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED_StaticFields*)il2cpp_codegen_static_fields_for(Writer_1_t22A07BA35AF74EF402905B31A8158436292B30ED_il2cpp_TypeInfo_var))->set_write_0(L_51);
		Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C * L_52 = (Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C *)il2cpp_codegen_object_new(Func_2_t7B7DB3249B1D3630B87B2C99A511B32B87500E3C_il2cpp_TypeInfo_var);
		Func_2__ctor_m0840E6B2B87D2A7D3039422E284043A0F01EBF8F(L_52, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadByte_m86E3D12D2C1E2C447A4C2F20B808117DAA69571C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0840E6B2B87D2A7D3039422E284043A0F01EBF8F_RuntimeMethod_var);
		((Reader_1_t734F310639852E155413223CE0DE830EADFF4EE1_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t734F310639852E155413223CE0DE830EADFF4EE1_il2cpp_TypeInfo_var))->set_read_0(L_52);
		Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A * L_53 = (Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A *)il2cpp_codegen_object_new(Func_2_t23EAA8E386953DF7BDC542EAF3C2D7D73A73A02A_il2cpp_TypeInfo_var);
		Func_2__ctor_mFBE309B39B6DD81476653893EF9FB1F0FE3E7B29(L_53, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadSByte_m8D3F2D88094079D5E0495FBBB3815DBAECB71CC1_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mFBE309B39B6DD81476653893EF9FB1F0FE3E7B29_RuntimeMethod_var);
		((Reader_1_t51AE9286919DF853F6D3DDC634D1FBCE90823305_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t51AE9286919DF853F6D3DDC634D1FBCE90823305_il2cpp_TypeInfo_var))->set_read_0(L_53);
		Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6 * L_54 = (Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6 *)il2cpp_codegen_object_new(Func_2_tDFABE71FF0B4F7748C0E21A852A5B37FCEE22FE6_il2cpp_TypeInfo_var);
		Func_2__ctor_m50056E08735B45FFB2F9F6589D3765FDECECB5EF(L_54, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadChar_m1CD7BF565346230DFE2B29A62818C0DF4ED89AFD_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m50056E08735B45FFB2F9F6589D3765FDECECB5EF_RuntimeMethod_var);
		((Reader_1_t2F750CA385B83B85E1825D294279C6DB9B937143_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t2F750CA385B83B85E1825D294279C6DB9B937143_il2cpp_TypeInfo_var))->set_read_0(L_54);
		Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7 * L_55 = (Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7 *)il2cpp_codegen_object_new(Func_2_t6936C81C0429151CB12034F8F11EF10A43399CE7_il2cpp_TypeInfo_var);
		Func_2__ctor_mFCD7CB3E82D103FF5A8BDCE78BF6626DFD88E432(L_55, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadBoolean_mA9AED23EBC6083FDFFD749EED46F03BAFC6F0ED8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mFCD7CB3E82D103FF5A8BDCE78BF6626DFD88E432_RuntimeMethod_var);
		((Reader_1_tC45C4092A00BA402903F615C613FD0E1B36900A3_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tC45C4092A00BA402903F615C613FD0E1B36900A3_il2cpp_TypeInfo_var))->set_read_0(L_55);
		Func_2_tB004921AE76C91000E3C564021526D419AA05415 * L_56 = (Func_2_tB004921AE76C91000E3C564021526D419AA05415 *)il2cpp_codegen_object_new(Func_2_tB004921AE76C91000E3C564021526D419AA05415_il2cpp_TypeInfo_var);
		Func_2__ctor_mDE86F805FEC5DC8663A291366E5F7A952D26005E(L_56, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadInt16_m125C98DDE87D530D04BA663BCA9CF9FADC69731D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mDE86F805FEC5DC8663A291366E5F7A952D26005E_RuntimeMethod_var);
		((Reader_1_tF6F4BA71FF996017CE3A9DEE4CA96E9709BC28A8_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tF6F4BA71FF996017CE3A9DEE4CA96E9709BC28A8_il2cpp_TypeInfo_var))->set_read_0(L_56);
		Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD * L_57 = (Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD *)il2cpp_codegen_object_new(Func_2_tF192450621536A147CE7121C31E5D5C941C1B5BD_il2cpp_TypeInfo_var);
		Func_2__ctor_mCFDAC257445CEAAB044AACD13D941445D6E3A1BC(L_57, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadUInt16_mA7151420E3D5805C98EE41B169CAA0DB313B33CD_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCFDAC257445CEAAB044AACD13D941445D6E3A1BC_RuntimeMethod_var);
		((Reader_1_tBF17B5E508DC08A8555F20F9FB3E74192C4FC3FB_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tBF17B5E508DC08A8555F20F9FB3E74192C4FC3FB_il2cpp_TypeInfo_var))->set_read_0(L_57);
		Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701 * L_58 = (Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701 *)il2cpp_codegen_object_new(Func_2_tB987C71BE2BA77A168204966F5722BCF1B3B8701_il2cpp_TypeInfo_var);
		Func_2__ctor_mBCF604956DBB47124B5F8C992562A69AC77CBA00(L_58, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBCF604956DBB47124B5F8C992562A69AC77CBA00_RuntimeMethod_var);
		((Reader_1_tE671022E5A800674B392A84CDBB5D96E94D8714B_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tE671022E5A800674B392A84CDBB5D96E94D8714B_il2cpp_TypeInfo_var))->set_read_0(L_58);
		Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071 * L_59 = (Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071 *)il2cpp_codegen_object_new(Func_2_t25F0E5CF86E79212783B512BF0C622859C9E6071_il2cpp_TypeInfo_var);
		Func_2__ctor_mE3A3003655A3E8ECD0D97C48D350AD4106D8250E(L_59, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadUInt32_mF65B5680DA763162DCD1BCB53B225C38ACAE3C08_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE3A3003655A3E8ECD0D97C48D350AD4106D8250E_RuntimeMethod_var);
		((Reader_1_tD0E87201714A7263546D1E4A18123B2182244756_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tD0E87201714A7263546D1E4A18123B2182244756_il2cpp_TypeInfo_var))->set_read_0(L_59);
		Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806 * L_60 = (Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806 *)il2cpp_codegen_object_new(Func_2_t48C1F9FA82C80BBB2AAD9844BEFBC62963FB0806_il2cpp_TypeInfo_var);
		Func_2__ctor_mC7DEC070006E37253207DE0DDF15ACCEC753C5E5(L_60, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadInt64_mAD215AD6D6571611F19D26468F422D93EE3029C2_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC7DEC070006E37253207DE0DDF15ACCEC753C5E5_RuntimeMethod_var);
		((Reader_1_tCB14FA9E272CD82A17C7089576D4D8CBAF87FF37_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tCB14FA9E272CD82A17C7089576D4D8CBAF87FF37_il2cpp_TypeInfo_var))->set_read_0(L_60);
		Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A * L_61 = (Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A *)il2cpp_codegen_object_new(Func_2_tC2E817BF7A502C9CA61155DB144D0FF6896EFB1A_il2cpp_TypeInfo_var);
		Func_2__ctor_mC230719162D7FF22A1F60979486519A3206109C1(L_61, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadUInt64_mF8CBCE7593E37A4C819D8D5461746D1360975252_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC230719162D7FF22A1F60979486519A3206109C1_RuntimeMethod_var);
		((Reader_1_tF622DB33D28AD6D261EA88CED4B6703F7E1AA809_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tF622DB33D28AD6D261EA88CED4B6703F7E1AA809_il2cpp_TypeInfo_var))->set_read_0(L_61);
		Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3 * L_62 = (Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3 *)il2cpp_codegen_object_new(Func_2_tA2E81CA57AA8D5C8648EAD26DDF5AEC89C6472A3_il2cpp_TypeInfo_var);
		Func_2__ctor_m307FD2EC7E1632076EF9EB169C9E3FDDBAE31633(L_62, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadSingle_m2DF644789D260209004F87C7996C41D6022D542F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m307FD2EC7E1632076EF9EB169C9E3FDDBAE31633_RuntimeMethod_var);
		((Reader_1_t083D8ECCB58680FD5D919A27D42D5ACF0F5CBDF8_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t083D8ECCB58680FD5D919A27D42D5ACF0F5CBDF8_il2cpp_TypeInfo_var))->set_read_0(L_62);
		Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD * L_63 = (Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD *)il2cpp_codegen_object_new(Func_2_t5DB750DDC7BB1DCED5FC17A13927285DB7DAF6FD_il2cpp_TypeInfo_var);
		Func_2__ctor_mC0ECF79C8E98B8A38907F969023CF92FB8D65850(L_63, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadDouble_m5800AF1FD52D7DB9047FE7B58A0BD38E23C94281_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC0ECF79C8E98B8A38907F969023CF92FB8D65850_RuntimeMethod_var);
		((Reader_1_tCABE8B3791B8C7E935792A5B7B994627C06FB1A6_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tCABE8B3791B8C7E935792A5B7B994627C06FB1A6_il2cpp_TypeInfo_var))->set_read_0(L_63);
		Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA * L_64 = (Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA *)il2cpp_codegen_object_new(Func_2_t2A8AB9EC4E32A91645585C94ADB781384D865FCA_il2cpp_TypeInfo_var);
		Func_2__ctor_m0181C851DC29BF07BFF0781C797FA08B6F94EC1E(L_64, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadDecimal_m0AE7D5057B858DB3A6C838CF3DF716707F3FA1EC_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0181C851DC29BF07BFF0781C797FA08B6F94EC1E_RuntimeMethod_var);
		((Reader_1_t66EB11CF15C6A06B2871B34E7777578BBDF5277F_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t66EB11CF15C6A06B2871B34E7777578BBDF5277F_il2cpp_TypeInfo_var))->set_read_0(L_64);
		Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1 * L_65 = (Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1 *)il2cpp_codegen_object_new(Func_2_t997BBAB9ADDAC6089A69CD431D1BE4BDECB450C1_il2cpp_TypeInfo_var);
		Func_2__ctor_mC35B5C0805198C69EAD7F374F774AC7E0D12A151(L_65, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadString_mA74E4612F529683A4AEEDB55C369CDEA32D222CC_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC35B5C0805198C69EAD7F374F774AC7E0D12A151_RuntimeMethod_var);
		((Reader_1_t31289F731ED08C00E01D693A5FA6C20632712F60_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t31289F731ED08C00E01D693A5FA6C20632712F60_il2cpp_TypeInfo_var))->set_read_0(L_65);
		Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591 * L_66 = (Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591 *)il2cpp_codegen_object_new(Func_2_t69C27E8542D81B6F999C14CC2DAB98B84F441591_il2cpp_TypeInfo_var);
		Func_2__ctor_m30E5DEA1E27F9B92E336B03EB6A01D575C75D891(L_66, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadBytesAndSize_m2EED0B100EFEDF9E1A4D2E9A429DBF3D4F8EA623_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m30E5DEA1E27F9B92E336B03EB6A01D575C75D891_RuntimeMethod_var);
		((Reader_1_tADFE5277B2E01215CC9A6A026DABB39EB2741C24_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tADFE5277B2E01215CC9A6A026DABB39EB2741C24_il2cpp_TypeInfo_var))->set_read_0(L_66);
		Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4 * L_67 = (Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4 *)il2cpp_codegen_object_new(Func_2_tF6E80761A8D583D0617125A465543E30C9CA0CD4_il2cpp_TypeInfo_var);
		Func_2__ctor_m8F22D119560FDD4C3D1B5DBDCF178F11F1ADB95E(L_67, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadBytesAndSizeSegment_m1750D52A666869DA2EC3C3A25E767834B9DA9E2E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m8F22D119560FDD4C3D1B5DBDCF178F11F1ADB95E_RuntimeMethod_var);
		((Reader_1_t7A2156954D69733C46101A0628D92FC71B73AB88_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t7A2156954D69733C46101A0628D92FC71B73AB88_il2cpp_TypeInfo_var))->set_read_0(L_67);
		Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85 * L_68 = (Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85 *)il2cpp_codegen_object_new(Func_2_t84FEBFA7C1BC6964EC69CDD15F565A5D44767F85_il2cpp_TypeInfo_var);
		Func_2__ctor_m073C360C200A6DBB113F0963509A2D5E032DDA3A(L_68, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadVector2_mADCA4D375C619EE39C7ED83BC352C870897FEF6F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m073C360C200A6DBB113F0963509A2D5E032DDA3A_RuntimeMethod_var);
		((Reader_1_t3E0B740FC5A808266198C5E4269046DF99FD33B7_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t3E0B740FC5A808266198C5E4269046DF99FD33B7_il2cpp_TypeInfo_var))->set_read_0(L_68);
		Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538 * L_69 = (Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538 *)il2cpp_codegen_object_new(Func_2_t6158CD8D779E558068F0D6E02FD62ABC78738538_il2cpp_TypeInfo_var);
		Func_2__ctor_mA7369B28D9217CB9FAB17B5B5CA1DF44B22E14E2(L_69, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadVector3_mD9D5C83CB3177994353C71C8BC71495A79288416_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA7369B28D9217CB9FAB17B5B5CA1DF44B22E14E2_RuntimeMethod_var);
		((Reader_1_t52506F20E01104A02733385E5D2D21E0CC0D0E0B_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t52506F20E01104A02733385E5D2D21E0CC0D0E0B_il2cpp_TypeInfo_var))->set_read_0(L_69);
		Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A * L_70 = (Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A *)il2cpp_codegen_object_new(Func_2_tE02AD4190289B2D6ADFBDCB0718BF823AF08642A_il2cpp_TypeInfo_var);
		Func_2__ctor_m8CD1F4AFF1384E81A4BB8381EF45024549E63991(L_70, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadVector4_m26621D658FD76A6A4D8EE73CE81739620A706997_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m8CD1F4AFF1384E81A4BB8381EF45024549E63991_RuntimeMethod_var);
		((Reader_1_t0E048401E8CB5EA23C09C23DFF292DD90C284489_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t0E048401E8CB5EA23C09C23DFF292DD90C284489_il2cpp_TypeInfo_var))->set_read_0(L_70);
		Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B * L_71 = (Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B *)il2cpp_codegen_object_new(Func_2_t61D486EA7FACFFEE485DD636B31CCDC6C52A8C3B_il2cpp_TypeInfo_var);
		Func_2__ctor_mA426F174B65F45CAD4647A6A43F74DA115E2286B(L_71, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadVector2Int_m0B0397F7BA2F4DE1E1A555E9EFEE676C38ECE40C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA426F174B65F45CAD4647A6A43F74DA115E2286B_RuntimeMethod_var);
		((Reader_1_t9B16EB42C995B6F650D19DC1C1E561AAF2B7F073_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t9B16EB42C995B6F650D19DC1C1E561AAF2B7F073_il2cpp_TypeInfo_var))->set_read_0(L_71);
		Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB * L_72 = (Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB *)il2cpp_codegen_object_new(Func_2_tBD7650C2B1F589CD72C8E200310541831F63B9AB_il2cpp_TypeInfo_var);
		Func_2__ctor_mF1BE232B010C7CA6B4FBC3D16835237A238223FA(L_72, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadVector3Int_mD9A574478D0EC900DB9C50B000AE39148A429F68_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF1BE232B010C7CA6B4FBC3D16835237A238223FA_RuntimeMethod_var);
		((Reader_1_t6ABFAAFEFF96CF19AEDE63D808EFBAA36DB06408_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t6ABFAAFEFF96CF19AEDE63D808EFBAA36DB06408_il2cpp_TypeInfo_var))->set_read_0(L_72);
		Func_2_t884310CBAF609B1E4C14090750447709C5A58716 * L_73 = (Func_2_t884310CBAF609B1E4C14090750447709C5A58716 *)il2cpp_codegen_object_new(Func_2_t884310CBAF609B1E4C14090750447709C5A58716_il2cpp_TypeInfo_var);
		Func_2__ctor_mD145095A425FE0BA2744DD262256014FAF23DD5F(L_73, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadColor_m21E0B16FA466A4FDAEC8BE1C80E47C9BAE3217A7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD145095A425FE0BA2744DD262256014FAF23DD5F_RuntimeMethod_var);
		((Reader_1_t1D0C9C19E706375FB5BB1E0E6AEFF24F2046FFF6_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t1D0C9C19E706375FB5BB1E0E6AEFF24F2046FFF6_il2cpp_TypeInfo_var))->set_read_0(L_73);
		Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25 * L_74 = (Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25 *)il2cpp_codegen_object_new(Func_2_t26394E7FF4D36940AE9F56DA47C4CD1589628B25_il2cpp_TypeInfo_var);
		Func_2__ctor_m9EBF03A8086223DA8C4B925E039CA211AD13F008(L_74, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadColor32_m7926AFB64529E5FC7C51D390468AAB86722D01F7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m9EBF03A8086223DA8C4B925E039CA211AD13F008_RuntimeMethod_var);
		((Reader_1_tB2C17950979DE98266B4EB12BA5ED44FE934BEAC_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tB2C17950979DE98266B4EB12BA5ED44FE934BEAC_il2cpp_TypeInfo_var))->set_read_0(L_74);
		Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC * L_75 = (Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC *)il2cpp_codegen_object_new(Func_2_tFC0AA9AD5059EC2CA512A36A1532C73C0A5AC3AC_il2cpp_TypeInfo_var);
		Func_2__ctor_m93F3AACA6955FF8232F7687AC3C865CA3D6EAB6F(L_75, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadQuaternion_m2946D7DD55E1ED8EDEF82536F0D4246D42A22E19_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m93F3AACA6955FF8232F7687AC3C865CA3D6EAB6F_RuntimeMethod_var);
		((Reader_1_t99BD16A088D1484FABA49E4992D9C1934F233F26_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t99BD16A088D1484FABA49E4992D9C1934F233F26_il2cpp_TypeInfo_var))->set_read_0(L_75);
		Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3 * L_76 = (Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3 *)il2cpp_codegen_object_new(Func_2_t4DA1C0F275C87E36A890C4448516242133F1ECA3_il2cpp_TypeInfo_var);
		Func_2__ctor_m6CAE0D9ABD9E0A2D049597EFEDFFB37214A771E4(L_76, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadRect_m75BCEF76E5C1CFEBE794A2FE5F52AA55DFBF3F85_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6CAE0D9ABD9E0A2D049597EFEDFFB37214A771E4_RuntimeMethod_var);
		((Reader_1_t972E81DF5DE331AC45F67EE1FB8402DC7B95C121_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t972E81DF5DE331AC45F67EE1FB8402DC7B95C121_il2cpp_TypeInfo_var))->set_read_0(L_76);
		Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D * L_77 = (Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D *)il2cpp_codegen_object_new(Func_2_tD7DEA2AC5A03771A0F475E0C1D0E28C14EA1BD1D_il2cpp_TypeInfo_var);
		Func_2__ctor_mA3F3B589E0AF9F5EBA00933C929283A857625BC0(L_77, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadPlane_m5D8E59014B3ADD6108143CBB2C25DAA1DDD291C5_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA3F3B589E0AF9F5EBA00933C929283A857625BC0_RuntimeMethod_var);
		((Reader_1_t35983FA9F2854E6C345A3FF9706A1D27239CD747_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t35983FA9F2854E6C345A3FF9706A1D27239CD747_il2cpp_TypeInfo_var))->set_read_0(L_77);
		Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094 * L_78 = (Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094 *)il2cpp_codegen_object_new(Func_2_tB3B6297DA883A8E8DBA0E003CB4383F2ECF92094_il2cpp_TypeInfo_var);
		Func_2__ctor_mF68DA57BD57D394A290AC7CFDE46C915724DF971(L_78, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadRay_mD2A5A24032CB890240D7F5D94E8399E2766C05EA_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF68DA57BD57D394A290AC7CFDE46C915724DF971_RuntimeMethod_var);
		((Reader_1_t5FB02F93316B95C8CD2ADA4302E0E52F3CC1C9D3_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t5FB02F93316B95C8CD2ADA4302E0E52F3CC1C9D3_il2cpp_TypeInfo_var))->set_read_0(L_78);
		Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B * L_79 = (Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B *)il2cpp_codegen_object_new(Func_2_tC6A51B306312FB0D7406D137E3C6F03CA218C73B_il2cpp_TypeInfo_var);
		Func_2__ctor_m40B2C3EF473C99701C93B4D94BB71B19E7893782(L_79, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadMatrix4x4_m8C9D3E72F015488DA355F6E26FDCF6E0C52FC7D8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m40B2C3EF473C99701C93B4D94BB71B19E7893782_RuntimeMethod_var);
		((Reader_1_t60302CAB2F448EBAFF6DF4F492A5C97E3E6DCF2B_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t60302CAB2F448EBAFF6DF4F492A5C97E3E6DCF2B_il2cpp_TypeInfo_var))->set_read_0(L_79);
		Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7 * L_80 = (Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7 *)il2cpp_codegen_object_new(Func_2_tD9B2DF11BD8C05BB8122E407C1C54F2D3D7B60C7_il2cpp_TypeInfo_var);
		Func_2__ctor_mC991B1B6B04195EF9D115D209AB08EEDD7AB6CAA(L_80, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadGuid_m4BEDE3B6CE956D9B64BFF779754151F49B7A82CE_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mC991B1B6B04195EF9D115D209AB08EEDD7AB6CAA_RuntimeMethod_var);
		((Reader_1_tB68D5B89BF0CAA842F2197C7AAA3CE80621F04BB_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tB68D5B89BF0CAA842F2197C7AAA3CE80621F04BB_il2cpp_TypeInfo_var))->set_read_0(L_80);
		Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06 * L_81 = (Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06 *)il2cpp_codegen_object_new(Func_2_tE2C769F2209A541FAFBBEE3ED52701C02874ED06_il2cpp_TypeInfo_var);
		Func_2__ctor_m27EF1A3EC84C69F8C913CD59E9D3780AF6A69844(L_81, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadTransform_m81B5B4E6C64D5C011B52262BDCDB1F34E0B50034_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m27EF1A3EC84C69F8C913CD59E9D3780AF6A69844_RuntimeMethod_var);
		((Reader_1_t340D3F9239427DD62799EBE36ADE5274D9C780D4_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t340D3F9239427DD62799EBE36ADE5274D9C780D4_il2cpp_TypeInfo_var))->set_read_0(L_81);
		Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4 * L_82 = (Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4 *)il2cpp_codegen_object_new(Func_2_tE7C890B0A67A7DD0B4DED821D76B463FE90383F4_il2cpp_TypeInfo_var);
		Func_2__ctor_m41A790ECFA64EE0EE44A1D76055FE365D5DF27B6(L_82, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadGameObject_m50C52A705CA8F13E6B80746CB3F001CD82D42404_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m41A790ECFA64EE0EE44A1D76055FE365D5DF27B6_RuntimeMethod_var);
		((Reader_1_t5F26DA7CE87D41B03444F13381535B6CAA00437A_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t5F26DA7CE87D41B03444F13381535B6CAA00437A_il2cpp_TypeInfo_var))->set_read_0(L_82);
		Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996 * L_83 = (Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996 *)il2cpp_codegen_object_new(Func_2_tC428120E138BD5A337FADB7ED0A04DC778AC3996_il2cpp_TypeInfo_var);
		Func_2__ctor_m7F1F6989B89215B3E9E809EF6BE4BD19C4BB9512(L_83, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadNetworkIdentity_m52CEFB599F366ADD367C0C23CFA163EBB0F6C764_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m7F1F6989B89215B3E9E809EF6BE4BD19C4BB9512_RuntimeMethod_var);
		((Reader_1_t2D4A904E32DE6891875456A545C0BE46816CB0DF_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t2D4A904E32DE6891875456A545C0BE46816CB0DF_il2cpp_TypeInfo_var))->set_read_0(L_83);
		Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7 * L_84 = (Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7 *)il2cpp_codegen_object_new(Func_2_t8D65FE96A64063033052D591F5BC3862A88271C7_il2cpp_TypeInfo_var);
		Func_2__ctor_m2364D67B58BCBF14EB1FC0069E908C2390A2FAC7(L_84, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadNetworkBehaviour_mAEDC6923777D5F941348F24C73586BB93353E492_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2364D67B58BCBF14EB1FC0069E908C2390A2FAC7_RuntimeMethod_var);
		((Reader_1_tC23BCC5B3A17A1A5143D0F4972C65BEDEAF43D0E_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tC23BCC5B3A17A1A5143D0F4972C65BEDEAF43D0E_il2cpp_TypeInfo_var))->set_read_0(L_84);
		Func_2_t04EF3A5777F40A74EFD067B934A0450866148824 * L_85 = (Func_2_t04EF3A5777F40A74EFD067B934A0450866148824 *)il2cpp_codegen_object_new(Func_2_t04EF3A5777F40A74EFD067B934A0450866148824_il2cpp_TypeInfo_var);
		Func_2__ctor_m1E7E4E1A84E7651BA0D1DB67D52265E804813BF9(L_85, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadNetworkBehaviourSyncVar_mC735015AC984ED517FB5EC9469C0A70181E6838F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1E7E4E1A84E7651BA0D1DB67D52265E804813BF9_RuntimeMethod_var);
		((Reader_1_t5D243F5EADD994ACD26E6C77FBB35DB2B7864A8B_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t5D243F5EADD994ACD26E6C77FBB35DB2B7864A8B_il2cpp_TypeInfo_var))->set_read_0(L_85);
		Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857 * L_86 = (Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857 *)il2cpp_codegen_object_new(Func_2_tD8DABD62B0F2463C49752D5FE3844AC9910A5857_il2cpp_TypeInfo_var);
		Func_2__ctor_m2EE7A55A352620604356D8A08DB8059C51773874(L_86, NULL, (intptr_t)((intptr_t)NetworkReaderExtensions_ReadUri_m4D5B6761CC4A07C3E7F223B2DDF88EF4CACC3A3B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2EE7A55A352620604356D8A08DB8059C51773874_RuntimeMethod_var);
		((Reader_1_t69D56AD78A1DBE6BC2A1A780EAFA93CFD7E83308_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t69D56AD78A1DBE6BC2A1A780EAFA93CFD7E83308_il2cpp_TypeInfo_var))->set_read_0(L_86);
		Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504 * L_87 = (Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504 *)il2cpp_codegen_object_new(Func_2_t59539DC8836C31C5EAB799874B6DA3247FC0C504_il2cpp_TypeInfo_var);
		Func_2__ctor_m2978459CDF08053F19BBCD50A43CCA2E7B6BE21E(L_87, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ErrorMessage_m8A7F1680078AF95C443FFFABDF4BB63726437225_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2978459CDF08053F19BBCD50A43CCA2E7B6BE21E_RuntimeMethod_var);
		((Reader_1_t28097C6BE3F1165A7E9A049C1D10508E06599F10_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t28097C6BE3F1165A7E9A049C1D10508E06599F10_il2cpp_TypeInfo_var))->set_read_0(L_87);
		Func_2_t61544C42F8B241A1233CC53D76C007FD59735486 * L_88 = (Func_2_t61544C42F8B241A1233CC53D76C007FD59735486 *)il2cpp_codegen_object_new(Func_2_t61544C42F8B241A1233CC53D76C007FD59735486_il2cpp_TypeInfo_var);
		Func_2__ctor_m68858CA20D9BB1A805424453E6C46E0C10C27EED(L_88, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ReadyMessage_mE2B956FB18C72DB2AAF97D93CD7A1412D4A6B0BF_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m68858CA20D9BB1A805424453E6C46E0C10C27EED_RuntimeMethod_var);
		((Reader_1_t2C78F7653A80DB3B637D2505598C62E3A81A88C8_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t2C78F7653A80DB3B637D2505598C62E3A81A88C8_il2cpp_TypeInfo_var))->set_read_0(L_88);
		Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3 * L_89 = (Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3 *)il2cpp_codegen_object_new(Func_2_t9863597EC9054B77E76203EF0840DC157C221BF3_il2cpp_TypeInfo_var);
		Func_2__ctor_mF9DB01A6563F9C748912BA28F2C9EB9A76637F57(L_89, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_NotReadyMessage_mC6EA3B5AED8C4F9906B2F6C0312D1498D5DAA8E0_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF9DB01A6563F9C748912BA28F2C9EB9A76637F57_RuntimeMethod_var);
		((Reader_1_tC4C890374E32D9A3E639294998A070FB501E1118_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tC4C890374E32D9A3E639294998A070FB501E1118_il2cpp_TypeInfo_var))->set_read_0(L_89);
		Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1 * L_90 = (Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1 *)il2cpp_codegen_object_new(Func_2_t4359D47341654AC95B7469B0CE8D0D3F1A90D2C1_il2cpp_TypeInfo_var);
		Func_2__ctor_mA70654B46B479B60C0A33856B45BAE7E2F58F296(L_90, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_AddPlayerMessage_m4C2E06F848D1B94DDC640AA0EFD0CA9C36721502_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA70654B46B479B60C0A33856B45BAE7E2F58F296_RuntimeMethod_var);
		((Reader_1_t23490D67AC0FE905168B2E5D08980FED9381EC5F_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t23490D67AC0FE905168B2E5D08980FED9381EC5F_il2cpp_TypeInfo_var))->set_read_0(L_90);
		Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0 * L_91 = (Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0 *)il2cpp_codegen_object_new(Func_2_t2F5EAA5D712DAE5D2B206B1BDA7BB852575547D0_il2cpp_TypeInfo_var);
		Func_2__ctor_mB5627FA811AF407E96C3E26A01471E19B1F2F202(L_91, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_DisconnectMessage_m590A66EBCEFE4A86249504263DE3C8A9CEFC1A1F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB5627FA811AF407E96C3E26A01471E19B1F2F202_RuntimeMethod_var);
		((Reader_1_tF7730493A0864940B2C34DAECDF81E56AF524CD5_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tF7730493A0864940B2C34DAECDF81E56AF524CD5_il2cpp_TypeInfo_var))->set_read_0(L_91);
		Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C * L_92 = (Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C *)il2cpp_codegen_object_new(Func_2_tE77E97CB95433C336BA604A4AA1A28BFCBF8311C_il2cpp_TypeInfo_var);
		Func_2__ctor_m8B28C387FA72ABB1529AA64815D6B6E3C95DCECA(L_92, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ConnectMessage_m93BA23C93888B0D7173C2B91A9E594A1B0B9C810_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m8B28C387FA72ABB1529AA64815D6B6E3C95DCECA_RuntimeMethod_var);
		((Reader_1_t4D942A4723544426C6071DF37465EB5E82878B1B_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t4D942A4723544426C6071DF37465EB5E82878B1B_il2cpp_TypeInfo_var))->set_read_0(L_92);
		Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89 * L_93 = (Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89 *)il2cpp_codegen_object_new(Func_2_t879A9E5297D54E7F7BBDC8A09A3FE7B4E94F3D89_il2cpp_TypeInfo_var);
		Func_2__ctor_m9EF272CBC76494FFB93487082DB09BE929E54CFE(L_93, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_SceneMessage_m4B63289E3849B01FD601A21B8E29E2F1ED1119B8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m9EF272CBC76494FFB93487082DB09BE929E54CFE_RuntimeMethod_var);
		((Reader_1_tF218968FA7DD9B32C7A20F23160E9AB28512B113_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tF218968FA7DD9B32C7A20F23160E9AB28512B113_il2cpp_TypeInfo_var))->set_read_0(L_93);
		Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD * L_94 = (Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD *)il2cpp_codegen_object_new(Func_2_tC086C298D7732A094E4EFA0BBD6D851013F939DD_il2cpp_TypeInfo_var);
		Func_2__ctor_m9DAC470AF53A5F300E583FEE06190D4B5376539E(L_94, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_SceneOperation_m7DEB9A4BFB06C5A38C93BBAC31D4813AD99FD91D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m9DAC470AF53A5F300E583FEE06190D4B5376539E_RuntimeMethod_var);
		((Reader_1_t1618FCE933BA5C4142B26CD9BDAC4BE2B9CE47E0_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t1618FCE933BA5C4142B26CD9BDAC4BE2B9CE47E0_il2cpp_TypeInfo_var))->set_read_0(L_94);
		Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E * L_95 = (Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E *)il2cpp_codegen_object_new(Func_2_t80D87419FE30AB56873F7C69C276D92F9686BA7E_il2cpp_TypeInfo_var);
		Func_2__ctor_mF4F3D5E183C6BCD218E57D59FA388C19936C0788(L_95, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_CommandMessage_mECC34FB337A5D4B6EB3947644B7E02B8E8B00FC0_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF4F3D5E183C6BCD218E57D59FA388C19936C0788_RuntimeMethod_var);
		((Reader_1_tA8EB3C44C1069B23FC475A54CE066FB2652E0963_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tA8EB3C44C1069B23FC475A54CE066FB2652E0963_il2cpp_TypeInfo_var))->set_read_0(L_95);
		Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585 * L_96 = (Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585 *)il2cpp_codegen_object_new(Func_2_t5BE43EF6B4DC887B23FDB49B7F2F65A9F7412585_il2cpp_TypeInfo_var);
		Func_2__ctor_m7D4C8B71BB03B86CE5155A2EF2527CF9DB8EDD65(L_96, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_RpcMessage_m4D257364102F49B28E19CFCBF861C74C71C88CF5_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m7D4C8B71BB03B86CE5155A2EF2527CF9DB8EDD65_RuntimeMethod_var);
		((Reader_1_t349D9B742117C8073A7EE742CDA91941B6124122_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t349D9B742117C8073A7EE742CDA91941B6124122_il2cpp_TypeInfo_var))->set_read_0(L_96);
		Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB * L_97 = (Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB *)il2cpp_codegen_object_new(Func_2_tD5ED0D51E1A9AFA3E18A89AF24177A4B793ECECB_il2cpp_TypeInfo_var);
		Func_2__ctor_mBE33BD4233BFFD381FE29248D0C1686869702006(L_97, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_SpawnMessage_m31EC8220FAEFB8761E8DE1103A248C7BA2DE3783_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBE33BD4233BFFD381FE29248D0C1686869702006_RuntimeMethod_var);
		((Reader_1_t8ADEFFD86BD11014D6D2EEA66E24FE5F3B8D0DC3_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t8ADEFFD86BD11014D6D2EEA66E24FE5F3B8D0DC3_il2cpp_TypeInfo_var))->set_read_0(L_97);
		Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A * L_98 = (Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A *)il2cpp_codegen_object_new(Func_2_t94BBCF6E7AC441948B8C9FF92A4541025783230A_il2cpp_TypeInfo_var);
		Func_2__ctor_mB426AD57D56B3D11DEA09AF4DE5AF1A6D6730884(L_98, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ObjectSpawnStartedMessage_mFD106C9DC9281FFB5C54E9D7AE09DB9907368A91_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB426AD57D56B3D11DEA09AF4DE5AF1A6D6730884_RuntimeMethod_var);
		((Reader_1_tBC4E6E25BAC8AD54B793870CE9A9D2AF01C98504_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tBC4E6E25BAC8AD54B793870CE9A9D2AF01C98504_il2cpp_TypeInfo_var))->set_read_0(L_98);
		Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03 * L_99 = (Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03 *)il2cpp_codegen_object_new(Func_2_t5A7E74E743D254AFB20225CBA949B9EC57C27C03_il2cpp_TypeInfo_var);
		Func_2__ctor_m59B3766E83584D7101A826CC4841619F4AF5CA71(L_99, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ObjectSpawnFinishedMessage_m0B74EA49D498677A02AE9CABCD58AF792F7AA95D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m59B3766E83584D7101A826CC4841619F4AF5CA71_RuntimeMethod_var);
		((Reader_1_t671D99F3FDF3E8352FB9385ECF9FE87EB4884819_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t671D99F3FDF3E8352FB9385ECF9FE87EB4884819_il2cpp_TypeInfo_var))->set_read_0(L_99);
		Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1 * L_100 = (Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1 *)il2cpp_codegen_object_new(Func_2_t8FE3710981793ABC39E194D4B9843714F29BCDE1_il2cpp_TypeInfo_var);
		Func_2__ctor_m25CDF42A2DF0659E3E45029511615A7BAF70B8C8(L_100, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ObjectDestroyMessage_m48B7D38F474720778F7EF9BCFC37F0B067357B03_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m25CDF42A2DF0659E3E45029511615A7BAF70B8C8_RuntimeMethod_var);
		((Reader_1_tD524544E894714A1FFAF1DE987881EEBD2EDBCA9_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_tD524544E894714A1FFAF1DE987881EEBD2EDBCA9_il2cpp_TypeInfo_var))->set_read_0(L_100);
		Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6 * L_101 = (Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6 *)il2cpp_codegen_object_new(Func_2_tA07F35F51CF3C7C25DB1598B7F671C92630E5ED6_il2cpp_TypeInfo_var);
		Func_2__ctor_m1AE09E66C0339B68037DC93F6D51062D3AB2B38D(L_101, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_ObjectHideMessage_m0042FF82016C1FBA7250DA8ECC0BE2724CDC881A_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m1AE09E66C0339B68037DC93F6D51062D3AB2B38D_RuntimeMethod_var);
		((Reader_1_t5B3DE2694EBA81CB860269A44E9264CBBAE5EA58_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t5B3DE2694EBA81CB860269A44E9264CBBAE5EA58_il2cpp_TypeInfo_var))->set_read_0(L_101);
		Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D * L_102 = (Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D *)il2cpp_codegen_object_new(Func_2_t2412797CCFA89CD44700A7E23148BF54BEFAA78D_il2cpp_TypeInfo_var);
		Func_2__ctor_m818209E8857F6A8D1F300E7369B28685E8C861EE(L_102, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_UpdateVarsMessage_m6724C811B71DDE48CA81100D01CA6FF40676B261_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m818209E8857F6A8D1F300E7369B28685E8C861EE_RuntimeMethod_var);
		((Reader_1_t357063289723594A62AA25F643AB8979B11971CE_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t357063289723594A62AA25F643AB8979B11971CE_il2cpp_TypeInfo_var))->set_read_0(L_102);
		Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532 * L_103 = (Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532 *)il2cpp_codegen_object_new(Func_2_tAEFA9E8D5D2D904076EA2B7C47419B305C146532_il2cpp_TypeInfo_var);
		Func_2__ctor_m6D263A67A11BF8079C28C7C34E830D2DF0D7AA9E(L_103, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_NetworkPingMessage_mC2B3B4ACDDB56A809D86D120286A8173DBE447A8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6D263A67A11BF8079C28C7C34E830D2DF0D7AA9E_RuntimeMethod_var);
		((Reader_1_t87C017328FEB29BF3E76B8764C7606A27FF2F89A_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t87C017328FEB29BF3E76B8764C7606A27FF2F89A_il2cpp_TypeInfo_var))->set_read_0(L_103);
		Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F * L_104 = (Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F *)il2cpp_codegen_object_new(Func_2_t095EB1284219E0C8AE413FE05EEE02EC0062EA2F_il2cpp_TypeInfo_var);
		Func_2__ctor_m2985267B7382331DBF5FDA2425D9CBB2C9D677F8(L_104, NULL, (intptr_t)((intptr_t)GeneratedNetworkCode__Read_Mirror_NetworkPongMessage_m9386EC63A77EFEC9FDDEC75BB13EAFDDDAFC81F8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2985267B7382331DBF5FDA2425D9CBB2C9D677F8_RuntimeMethod_var);
		((Reader_1_t4F4D4C3C395F0597BC569A6D5BFDB3DA83344FE1_StaticFields*)il2cpp_codegen_static_fields_for(Reader_1_t4F4D4C3C395F0597BC569A6D5BFDB3DA83344FE1_il2cpp_TypeInfo_var))->set_read_0(L_104);
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
// System.Void HealthBar::SetMaxHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetMaxHealth_m785D009EF3219F59C1E49ED0C83D86C20AA1DFDA (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method)
{
	{
		// hpSlider.maxValue = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_hpSlider_12();
		int32_t L_1 = ___health0;
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_0, (((float)((float)L_1))), /*hidden argument*/NULL);
		// hpSlider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_hpSlider_12();
		int32_t L_3 = ___health0;
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, (((float)((float)L_3))));
		// }
		return;
	}
}
// System.Void HealthBar::SetHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, int32_t ___health0, const RuntimeMethod* method)
{
	{
		// hpSlider.value = health;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_hpSlider_12();
		int32_t L_1 = ___health0;
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (((float)((float)L_1))));
		// }
		return;
	}
}
// System.Void HealthBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar__ctor_m0D26699B0FC0E360EE6F5D4B80FE0D2622F0AA48 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HealthBar__ctor_m0D26699B0FC0E360EE6F5D4B80FE0D2622F0AA48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_mB98FF8F52DCEBEB3BC7679DE03FA50785207EE78(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HealthBar::MirrorProcessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_MirrorProcessed_m3BAF5BC622DC39E9CC81456E715CE3886908FA50 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	{
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
// UnityEngine.InputSystem.InputActionAsset MouseInput::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = __this->get_U3CassetU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void MouseInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInput__ctor_mC64FF7F96156B5BBDFEAAB066D719045D14760B3 (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseInput__ctor_mC64FF7F96156B5BBDFEAAB066D719045D14760B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public @MouseInput()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""Mouse"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Mouse"",
		//             ""id"": ""3993f6ca-dd80-4bed-9495-7c34f643ed85"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""MouseClickRight"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""73defc0f-fb94-4689-a410-95fcf9e57e7a"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""MousePosition"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""dc882edc-c5ea-4f55-a456-90a89fe4243d"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 },
		//                 {
		//                     ""name"": ""MouseClickLeft"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""c3954539-147a-4fbd-8a85-49b22d7b23e4"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""7444dc03-600d-4177-9e2a-868172ffddd6"",
		//                     ""path"": ""<Mouse>/rightButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""MouseClickRight"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""9679c15b-dba0-4b67-a2c2-f4f03916fca6"",
		//                     ""path"": ""<Mouse>/position"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""MousePosition"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""39e1106e-96c9-4eb8-87c4-62f19409ef9d"",
		//                     ""path"": ""<Mouse>/leftButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""MouseClickLeft"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": []
		// }");
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = InputActionAsset_FromJson_m4E51A654EB6331FDEC21FFB1D06EF394ECF5EA74(_stringLiteral496AC7BC87F25AB4A9E657BBCA5C85064ED5CAD3, /*hidden argument*/NULL);
		__this->set_U3CassetU3Ek__BackingField_0(L_0);
		// m_Mouse = asset.FindActionMap("Mouse", throwIfNotFound: true);
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_1 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * L_2 = InputActionAsset_FindActionMap_m0F329C9F6BC2E8F00B359BA40013867FAEB2F1BF(L_1, _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Mouse_1(L_2);
		// m_Mouse_MouseClickRight = m_Mouse.FindAction("MouseClickRight", throwIfNotFound: true);
		InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * L_3 = __this->get_m_Mouse_1();
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_4 = InputActionMap_FindAction_m40A1461C552A8109639A314F17D9628FAB87E05D(L_3, _stringLiteral0E25B1B36112CE405774F3AE89D20A4350F9E1BB, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Mouse_MouseClickRight_3(L_4);
		// m_Mouse_MousePosition = m_Mouse.FindAction("MousePosition", throwIfNotFound: true);
		InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * L_5 = __this->get_m_Mouse_1();
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_6 = InputActionMap_FindAction_m40A1461C552A8109639A314F17D9628FAB87E05D(L_5, _stringLiteralC14DCEA1BC16E3F4E76BA1E9FD3F6EDD2DD96708, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Mouse_MousePosition_4(L_6);
		// m_Mouse_MouseClickLeft = m_Mouse.FindAction("MouseClickLeft", throwIfNotFound: true);
		InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * L_7 = __this->get_m_Mouse_1();
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_8 = InputActionMap_FindAction_m40A1461C552A8109639A314F17D9628FAB87E05D(L_7, _stringLiteralD0B9183AF36803E008DBF965019A059B9130CA93, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Mouse_MouseClickLeft_5(L_8);
		// }
		return;
	}
}
// System.Void MouseInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInput_Dispose_m599C2147166A02B43015CB536AFC86B2E27EC510 (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseInput_Dispose_m599C2147166A02B43015CB536AFC86B2E27EC510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> MouseInput::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  MouseInput_get_bindingMask_m76D0C75C86E31C7C0CCCEA40470BD2B71BF50E13 (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  L_1 = InputActionAsset_get_bindingMask_m6DF3FE53763D887C37A58573B3BE7D90DDD2C28C_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void MouseInput::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInput_set_bindingMask_m10DBE776C9CA5C378488E85798D41623FE2D3A55 (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  ___value0, const RuntimeMethod* method)
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  L_1 = ___value0;
		InputActionAsset_set_bindingMask_m6524C13FE6DBFF8420E58763499467B4024CA7A3(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> MouseInput::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tF2D463C19029E483FF34BFD76C7DEE3065D4E8BB  MouseInput_get_devices_mB6D3AA0646949137945B850AFFC5F51D5DE0100A (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	{
		// get => asset.devices;
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		Nullable_1_tF2D463C19029E483FF34BFD76C7DEE3065D4E8BB  L_1 = InputActionAsset_get_devices_m07A7EAFF5C405387310174A067762276DCEF8217(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void MouseInput::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInput_set_devices_m9A0D4F7E86F73FC7603F6D73F289D51044CDC6B7 (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, Nullable_1_tF2D463C19029E483FF34BFD76C7DEE3065D4E8BB  ___value0, const RuntimeMethod* method)
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		Nullable_1_tF2D463C19029E483FF34BFD76C7DEE3065D4E8BB  L_1 = ___value0;
		InputActionAsset_set_devices_m002176E98507C34BDC8953DB3C3303267E7CBFD4(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> MouseInput::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t991887378608C1733BC8E6CF8C76A3145C6A1311  MouseInput_get_controlSchemes_m824656B2D2906BD4751CE55F5DD06437EE09F379 (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		ReadOnlyArray_1_t991887378608C1733BC8E6CF8C76A3145C6A1311  L_1 = InputActionAsset_get_controlSchemes_m2059B485CBD376CCDA1B715440769400C7FFBA8D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean MouseInput::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseInput_Contains_m9B385989FEB7377BB9292CC921B96B06EDE713AB (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * ___action0, const RuntimeMethod* method)
{
	{
		// return asset.Contains(action);
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_1 = ___action0;
		bool L_2 = InputActionAsset_Contains_m9AF9B6A031C0F7EB1BB49A92B6598CB03DFD7C6B(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> MouseInput::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseInput_GetEnumerator_m85D84573D799F10CACADC11EEEF3E3A9BC5659DC (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = InputActionAsset_GetEnumerator_mE655357D67B956E9505F2B2376AE6EFD935279B6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator MouseInput::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseInput_System_Collections_IEnumerable_GetEnumerator_m26F6275F4896293DF6212390F2E353C95FA62D05 (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0 = MouseInput_GetEnumerator_m85D84573D799F10CACADC11EEEF3E3A9BC5659DC(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void MouseInput::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInput_Enable_m6859F66E534D2CF79A39632A356665CCEC3F206F (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	{
		// asset.Enable();
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		InputActionAsset_Enable_m151EF4E29D0192D22A46C21C28D3C5D6DADCFEE0(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MouseInput::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseInput_Disable_m1828D1EBDADA5950B127B7C2AF23C5CFA128FC46 (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	{
		// asset.Disable();
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline(__this, /*hidden argument*/NULL);
		InputActionAsset_Disable_mF6548CE28D3709F55D894D3FE2BDBDD27CF29518(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// MouseInput_MouseActions MouseInput::get_Mouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  MouseInput_get_Mouse_mC8315610511AD4D092234193CF6B2483AC0F166C (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	{
		// public MouseActions @Mouse => new MouseActions(this);
		MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  L_0;
		memset((&L_0), 0, sizeof(L_0));
		MouseActions__ctor_m187015F204711F1097F03B8578581273BA379799_inline((&L_0), __this, /*hidden argument*/NULL);
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
// System.Void MoveByMouse::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByMouse_Awake_mB4F757ADA2F83078C2B9958CDE26B210C7E01694 (MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveByMouse_Awake_mB4F757ADA2F83078C2B9958CDE26B210C7E01694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mouseInput = new MouseInput();
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 *)il2cpp_codegen_object_new(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5_il2cpp_TypeInfo_var);
		MouseInput__ctor_mC64FF7F96156B5BBDFEAAB066D719045D14760B3(L_0, /*hidden argument*/NULL);
		__this->set_mouseInput_13(L_0);
		// }
		return;
	}
}
// System.Void MoveByMouse::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByMouse_OnEnable_m92476C7C69050D39213C5FB176B690EC210FF811 (MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E * __this, const RuntimeMethod* method)
{
	{
		// mouseInput.Enable();
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = __this->get_mouseInput_13();
		MouseInput_Enable_m6859F66E534D2CF79A39632A356665CCEC3F206F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveByMouse::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByMouse_OnDisable_m5B792CF482829778A10B984DC271FF192359F6D2 (MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E * __this, const RuntimeMethod* method)
{
	{
		// mouseInput.Disable();
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = __this->get_mouseInput_13();
		MouseInput_Disable_m1828D1EBDADA5950B127B7C2AF23C5CFA128FC46(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveByMouse::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByMouse_Start_mD828C1D54B3D8EBC13D03831C4A0237B96AA6565 (MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveByMouse_Start_mD828C1D54B3D8EBC13D03831C4A0237B96AA6565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// destination = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_destination_15(L_1);
		// mouseInput.Mouse.MouseClickRight.performed += _ => MouseClickRight();
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_2 = __this->get_mouseInput_13();
		MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  L_3 = MouseInput_get_Mouse_mC8315610511AD4D092234193CF6B2483AC0F166C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_4 = MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)(&V_0), /*hidden argument*/NULL);
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_5 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_5, __this, (intptr_t)((intptr_t)MoveByMouse_U3CStartU3Eb__7_0_mF465D36FCAE3943ECBDD80DE233296AF95A048D8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_performed_mD6E1BB3348C9514F9464AE0CD80E92D0FCAE3699(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveByMouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByMouse_Update_mFDAD52F77EED73364E23DF81F00412F2019AD868 (MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveByMouse_Update_mFDAD52F77EED73364E23DF81F00412F2019AD868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.isLocalPlayer)
		bool L_0 = NetworkBehaviour_get_isLocalPlayer_mFA35EE97B42DEEE92E4FD5562C8C6A1717607DE0(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		// if (Vector3.Distance(transform.position, destination) > 0.1f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_destination_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		float L_4 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_2, L_3, /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)(0.100000001f)))))
		{
			goto IL_0052;
		}
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, destination, movementSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_destination_15();
		float L_9 = __this->get_movementSpeed_14();
		float L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_7, L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_11, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void MoveByMouse::MouseClickRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByMouse_MouseClickRight_m443738338EC4F90923C52535284E8F3302042AF4 (MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveByMouse_MouseClickRight_m443738338EC4F90923C52535284E8F3302042AF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 mousePosition = mouseInput.Mouse.MousePosition.ReadValue<Vector2>();
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = __this->get_mouseInput_13();
		MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  L_1 = MouseInput_get_Mouse_mC8315610511AD4D092234193CF6B2483AC0F166C(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_2 = MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mEA100777A815D7AD063E7C08485928DEFF124C29(L_2, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mEA100777A815D7AD063E7C08485928DEFF124C29_RuntimeMethod_var);
		V_0 = L_3;
		// mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_4, L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// destination = mousePosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_9, /*hidden argument*/NULL);
		__this->set_destination_15(L_10);
		// }
		return;
	}
}
// System.Void MoveByMouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByMouse__ctor_mC329E75DE797194EA3E4B2B1DDAACF66993D1567 (MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveByMouse__ctor_mC329E75DE797194EA3E4B2B1DDAACF66993D1567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_mB98FF8F52DCEBEB3BC7679DE03FA50785207EE78(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveByMouse::<Start>b__7_0(UnityEngine.InputSystem.InputAction_CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByMouse_U3CStartU3Eb__7_0_mF465D36FCAE3943ECBDD80DE233296AF95A048D8 (MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E * __this, CallbackContext_t4252E0C6C8122087B48A4CCA0F224843702F948E  ____0, const RuntimeMethod* method)
{
	{
		// mouseInput.Mouse.MouseClickRight.performed += _ => MouseClickRight();
		MoveByMouse_MouseClickRight_m443738338EC4F90923C52535284E8F3302042AF4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveByMouse::MirrorProcessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByMouse_MirrorProcessed_mF3D095FF4894DB87EE6067D8F3B48E21872D9DBF (MoveByMouse_tCA0A5A8F1CDC28465384F6301BFD24368236100E * __this, const RuntimeMethod* method)
{
	{
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
// System.Void PlayerSoZ::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_Awake_m843F2B63E5EECB5E85A2E856C89372BF4D942DCA (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_Awake_m843F2B63E5EECB5E85A2E856C89372BF4D942DCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// mouseInput = new MouseInput();
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 *)il2cpp_codegen_object_new(MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5_il2cpp_TypeInfo_var);
		MouseInput__ctor_mC64FF7F96156B5BBDFEAAB066D719045D14760B3(L_0, /*hidden argument*/NULL);
		__this->set_mouseInput_16(L_0);
		// mouseInput.Mouse.MouseClickLeft.performed += ctx => DoDamage(20);
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_1 = __this->get_mouseInput_16();
		MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  L_2 = MouseInput_get_Mouse_mC8315610511AD4D092234193CF6B2483AC0F166C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_3 = MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)(&V_0), /*hidden argument*/NULL);
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_4 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_4, __this, (intptr_t)((intptr_t)PlayerSoZ_U3CAwakeU3Eb__6_0_m29B70F95406CEBC35CE5CCF357A271E0C03477E2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_performed_mD6E1BB3348C9514F9464AE0CD80E92D0FCAE3699(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerSoZ::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_OnEnable_mEED26F7CADFE1F014E0043379DA8B232955A9F3D (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, const RuntimeMethod* method)
{
	{
		// mouseInput.Enable();
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = __this->get_mouseInput_16();
		MouseInput_Enable_m6859F66E534D2CF79A39632A356665CCEC3F206F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerSoZ::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_OnDisable_m208772D7AF20DE13C2C4DD13F6D736FC2A20BE4C (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, const RuntimeMethod* method)
{
	{
		// mouseInput.Disable();
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = __this->get_mouseInput_16();
		MouseInput_Disable_m1828D1EBDADA5950B127B7C2AF23C5CFA128FC46(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerSoZ::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_Start_mB2F2FCDB95269915D6137B11401CA25837C7F52F (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, const RuntimeMethod* method)
{
	{
		// currentHealth = maxHealth;
		int32_t L_0 = __this->get_maxHealth_13();
		PlayerSoZ_set_NetworkcurrentHealth_mB06220DA77F987429358921E55DBBCFDBB0610EB(__this, L_0, /*hidden argument*/NULL);
		// healthBar.SetMaxHealth(maxHealth);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_1 = __this->get_healthBar_15();
		int32_t L_2 = __this->get_maxHealth_13();
		HealthBar_SetMaxHealth_m785D009EF3219F59C1E49ED0C83D86C20AA1DFDA(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerSoZ::OnStartLocalPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_OnStartLocalPlayer_m8FF414263DF16F93A33259CA08FBC72C90AB79FF (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_OnStartLocalPlayer_m8FF414263DF16F93A33259CA08FBC72C90AB79FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Camera.main.GetComponent<CameraFollow>().setTarget(gameObject.transform);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * L_1 = Component_GetComponent_TisCameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_m3709A2CCCDD05C8FCB003F8D423FC55F4970F318(L_0, /*hidden argument*/Component_GetComponent_TisCameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_m3709A2CCCDD05C8FCB003F8D423FC55F4970F318_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		CameraFollow_setTarget_m0FB67F6B0DD997E45A4BE17540473C66ACA245D7_inline(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerSoZ::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_Update_mE842883ABD5A90C901B77D1BE751332613A3339B (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, const RuntimeMethod* method)
{
	{
		// healthBar.SetHealth(currentHealth);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_0 = __this->get_healthBar_15();
		int32_t L_1 = __this->get_currentHealth_14();
		HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerSoZ::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_TakeDamage_m2A40D984E341D917326D7F42D8BCDF0EB5451523 (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// if (isServer)
		bool L_0 = NetworkBehaviour_get_isServer_m6CF3499812C1F2679BB924165AA79C59E6D2EBCF(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// RpcTakeDamage(damage);
		int32_t L_1 = ___damage0;
		PlayerSoZ_RpcTakeDamage_mEDBF19EDAC999A99EAA8E6C2280F7776A296974F(__this, L_1, /*hidden argument*/NULL);
		return;
	}

IL_0010:
	{
		// CmdTakeDamage(damage);
		int32_t L_2 = ___damage0;
		PlayerSoZ_CmdTakeDamage_m7FEC161B1FC55EC82F91B0EBED1ACE13FA1F2F73(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerSoZ::CmdTakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_CmdTakeDamage_m7FEC161B1FC55EC82F91B0EBED1ACE13FA1F2F73 (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_CmdTakeDamage_m7FEC161B1FC55EC82F91B0EBED1ACE13FA1F2F73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_0 = NetworkWriterPool_GetWriter_m53506C8016911951C82F2F83E45592CE2F9A85AE(/*hidden argument*/NULL);
		V_0 = L_0;
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_1 = V_0;
		int32_t L_2 = ___damage0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_1, L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_5 = V_0;
		NetworkBehaviour_SendCommandInternal_m81D09DA3B313767B581AFB3F5BC4535807CC5700(__this, L_4, _stringLiteralAD916F41F847F4F5D39F47B90FC786789477A715, L_5, ((int32_t)0), (bool)1, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_6 = V_0;
		NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerSoZ::RpcTakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_RpcTakeDamage_mEDBF19EDAC999A99EAA8E6C2280F7776A296974F (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_RpcTakeDamage_mEDBF19EDAC999A99EAA8E6C2280F7776A296974F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterPool_tE8E92B378A1C09F9FF212B4D2EE02264A94E06C0_il2cpp_TypeInfo_var);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_0 = NetworkWriterPool_GetWriter_m53506C8016911951C82F2F83E45592CE2F9A85AE(/*hidden argument*/NULL);
		V_0 = L_0;
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_1 = V_0;
		int32_t L_2 = ___damage0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_1, L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_5 = V_0;
		NetworkBehaviour_SendRPCInternal_m3E76275A3E52E54BF11483D924A21D58285586DF(__this, L_4, _stringLiteralECE71252A47A7F50194E20A1AE3D7E53FE2A6D71, L_5, ((int32_t)0), (bool)0, /*hidden argument*/NULL);
		PooledNetworkWriter_t7D974C252C835B625FA8A80A5994EE66A64CB118 * L_6 = V_0;
		NetworkWriterPool_Recycle_m8E7D8C8ED6F0856380CE750DBEF1D0EC5BAF8FB3(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerSoZ::DoDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_DoDamage_m954EF247F2FDE813EF69D5294A2F61F63855549D (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_DoDamage_m954EF247F2FDE813EF69D5294A2F61F63855549D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (this.isLocalPlayer)
		bool L_0 = NetworkBehaviour_get_isLocalPlayer_mFA35EE97B42DEEE92E4FD5562C8C6A1717607DE0(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_010b;
		}
	}
	{
		// Vector2 mousePosition = mouseInput.Mouse.MousePosition.ReadValue<Vector2>();
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_1 = __this->get_mouseInput_16();
		MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  L_2 = MouseInput_get_Mouse_mC8315610511AD4D092234193CF6B2483AC0F166C(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_3 = MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mEA100777A815D7AD063E7C08485928DEFF124C29(L_3, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mEA100777A815D7AD063E7C08485928DEFF124C29_RuntimeMethod_var);
		V_0 = L_4;
		// mousePosition = Camera.main.ScreenToWorldPoint(mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_5, L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// Vector2 playerPosition = this.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_11, /*hidden argument*/NULL);
		// if (Vector2.Distance(playerPosition, mousePosition) <= damageRadius)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		float L_14 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_12, L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_damageRadius_12();
		if ((!(((float)L_14) <= ((float)L_15))))
		{
			goto IL_010b;
		}
	}
	{
		// RaycastHit2D[] hitColliders = Physics2D.CircleCastAll(mousePosition, damageRadius, mousePosition);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = V_0;
		float L_17 = __this->get_damageRadius_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_tDEABD9FBBA32C695C932A32A1B8FB9C06A496F09* L_19 = Physics2D_CircleCastAll_m8C6DA5CC984701D4713B324D02AF58E2413848E5(L_16, L_17, L_18, /*hidden argument*/NULL);
		// foreach (var hitCollider in hitColliders.Where(x => x.transform.position != new Vector3(0, 0, 0) && x.transform.position != this.transform.position))
		Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC * L_20 = (Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC *)il2cpp_codegen_object_new(Func_2_t67431FB5063D555D1D1D8DCC5FA6247A2A7CA2EC_il2cpp_TypeInfo_var);
		Func_2__ctor_m62C83AD97E869810AA1D2FDEBB0531CBC977828F(L_20, __this, (intptr_t)((intptr_t)PlayerSoZ_U3CDoDamageU3Eb__15_0_m2C158F2B3CA5D255E3753EA269B3F5241CE79144_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m62C83AD97E869810AA1D2FDEBB0531CBC977828F_RuntimeMethod_var);
		RuntimeObject* L_21 = Enumerable_Where_TisRaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_mAFF3C52C8DC3A598C936360E97FC50B4B179D1E8((RuntimeObject*)(RuntimeObject*)L_19, L_20, /*hidden argument*/Enumerable_Where_TisRaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_mAFF3C52C8DC3A598C936360E97FC50B4B179D1E8_RuntimeMethod_var);
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit2D>::GetEnumerator() */, IEnumerable_1_t49175DFA50AF85687547911DDB384AE5C4946F04_il2cpp_TypeInfo_var, L_21);
		V_2 = L_22;
	}

IL_007f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f7;
		}

IL_0081:
		{
			// foreach (var hitCollider in hitColliders.Where(x => x.transform.position != new Vector3(0, 0, 0) && x.transform.position != this.transform.position))
			RuntimeObject* L_23 = V_2;
			RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_24 = InterfaceFuncInvoker0< RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit2D>::get_Current() */, IEnumerator_1_tB7C81A9166E0421E20BDEB36BB480064E959BAD6_il2cpp_TypeInfo_var, L_23);
			V_3 = L_24;
			// Debug.Log(hitCollider.transform.position);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_3), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = L_26;
			RuntimeObject * L_28 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_27);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_28, /*hidden argument*/NULL);
			// Debug.Log(hitCollider.collider.tag);
			Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_29 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_3), /*hidden argument*/NULL);
			String_t* L_30 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_29, /*hidden argument*/NULL);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_30, /*hidden argument*/NULL);
			// if (hitCollider.collider.tag == this.tag)
			Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_31 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_3), /*hidden argument*/NULL);
			String_t* L_32 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_31, /*hidden argument*/NULL);
			String_t* L_33 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(__this, /*hidden argument*/NULL);
			bool L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_32, L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_00f7;
			}
		}

IL_00c8:
		{
			// enemy = hitCollider.collider.GetComponent<PlayerSoZ>();
			Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_35 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_3), /*hidden argument*/NULL);
			PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * L_36 = Component_GetComponent_TisPlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_m73186B2B19D4C242E0E336B023CBC8EA445C188C(L_35, /*hidden argument*/Component_GetComponent_TisPlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_m73186B2B19D4C242E0E336B023CBC8EA445C188C_RuntimeMethod_var);
			__this->set_enemy_17(L_36);
			// Debug.Log(enemy.tag);
			PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * L_37 = __this->get_enemy_17();
			String_t* L_38 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_37, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_38, /*hidden argument*/NULL);
			// enemy.TakeDamage(20);
			PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * L_39 = __this->get_enemy_17();
			PlayerSoZ_TakeDamage_m2A40D984E341D917326D7F42D8BCDF0EB5451523(L_39, ((int32_t)20), /*hidden argument*/NULL);
		}

IL_00f7:
		{
			// foreach (var hitCollider in hitColliders.Where(x => x.transform.position != new Vector3(0, 0, 0) && x.transform.position != this.transform.position))
			RuntimeObject* L_40 = V_2;
			bool L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_40);
			if (L_41)
			{
				goto IL_0081;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x10B, FINALLY_0101);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0101;
	}

FINALLY_0101:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_42 = V_2;
			if (!L_42)
			{
				goto IL_010a;
			}
		}

IL_0104:
		{
			RuntimeObject* L_43 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_43);
		}

IL_010a:
		{
			IL2CPP_END_FINALLY(257)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(257)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10B, IL_010b)
	}

IL_010b:
	{
		// }
		return;
	}
}
// System.Void PlayerSoZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ__ctor_m015633265F35A7FA605E4A9B101A3E55B729F77F (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ__ctor_m015633265F35A7FA605E4A9B101A3E55B729F77F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float damageRadius = 1.5f;
		__this->set_damageRadius_12((1.5f));
		// public int maxHealth = 100;
		__this->set_maxHealth_13(((int32_t)100));
		IL2CPP_RUNTIME_CLASS_INIT(NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_mB98FF8F52DCEBEB3BC7679DE03FA50785207EE78(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerSoZ::<Awake>b__6_0(UnityEngine.InputSystem.InputAction_CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_U3CAwakeU3Eb__6_0_m29B70F95406CEBC35CE5CCF357A271E0C03477E2 (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, CallbackContext_t4252E0C6C8122087B48A4CCA0F224843702F948E  ___ctx0, const RuntimeMethod* method)
{
	{
		// mouseInput.Mouse.MouseClickLeft.performed += ctx => DoDamage(20);
		PlayerSoZ_DoDamage_m954EF247F2FDE813EF69D5294A2F61F63855549D(__this, ((int32_t)20), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PlayerSoZ::<DoDamage>b__15_0(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerSoZ_U3CDoDamageU3Eb__15_0_m2C158F2B3CA5D255E3753EA269B3F5241CE79144 (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_U3CDoDamageU3Eb__15_0_m2C158F2B3CA5D255E3753EA269B3F5241CE79144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foreach (var hitCollider in hitColliders.Where(x => x.transform.position != new Vector3(0, 0, 0) && x.transform.position != this.transform.position))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&___x0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		bool L_3 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&___x0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		bool L_8 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0044:
	{
		return (bool)0;
	}
}
// System.Void PlayerSoZ::MirrorProcessed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_MirrorProcessed_mB4807F1A4E949361B23236191A62606F92F9FCE1 (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 PlayerSoZ::get_NetworkcurrentHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerSoZ_get_NetworkcurrentHealth_m161A312662E93C5FDE4AB5B6E094F2B291E1058F (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_currentHealth_14();
		return L_0;
	}
}
// System.Void PlayerSoZ::set_NetworkcurrentHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_set_NetworkcurrentHealth_mB06220DA77F987429358921E55DBBCFDBB0610EB (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_set_NetworkcurrentHealth_mB06220DA77F987429358921E55DBBCFDBB0610EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t* L_1 = __this->get_address_of_currentHealth_14();
		bool L_2 = NetworkBehaviour_SyncVarEqual_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B8AF1B3A139B3F543BC207AA2FE60B2D9FEF3E3(__this, L_0, (int32_t*)L_1, /*hidden argument*/NetworkBehaviour_SyncVarEqual_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m2B8AF1B3A139B3F543BC207AA2FE60B2D9FEF3E3_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = __this->get_currentHealth_14();
		V_0 = L_3;
		int32_t L_4 = ___value0;
		int32_t* L_5 = __this->get_address_of_currentHealth_14();
		NetworkBehaviour_SetSyncVar_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB92AEF3F7E574E08410F051A969F1C955C85C8EF(__this, L_4, (int32_t*)L_5, ((int64_t)1LL), /*hidden argument*/NetworkBehaviour_SetSyncVar_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB92AEF3F7E574E08410F051A969F1C955C85C8EF_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Void PlayerSoZ::UserCode_CmdTakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_UserCode_CmdTakeDamage_m5EF0DF95498A8745109F690112EFC0E3018A202F (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// RpcTakeDamage(damage);
		int32_t L_0 = ___damage0;
		PlayerSoZ_RpcTakeDamage_mEDBF19EDAC999A99EAA8E6C2280F7776A296974F(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerSoZ::InvokeUserCode_CmdTakeDamage(Mirror.NetworkBehaviour,Mirror.NetworkReader,Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_InvokeUserCode_CmdTakeDamage_mADB0900557AD377C0044D5E8A293FF96210FB9B9 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___obj0, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader1, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___senderConnection2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_InvokeUserCode_CmdTakeDamage_mADB0900557AD377C0044D5E8A293FF96210FB9B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0 = NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral91A1E86A4A1ACCB4CD55EEC0117CBDF58A9F021F, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_1 = ___obj0;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		int32_t L_3 = NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3(L_2, /*hidden argument*/NULL);
		PlayerSoZ_UserCode_CmdTakeDamage_m5EF0DF95498A8745109F690112EFC0E3018A202F(((PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 *)CastclassClass((RuntimeObject*)L_1, PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_il2cpp_TypeInfo_var)), L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerSoZ::UserCode_RpcTakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_UserCode_RpcTakeDamage_m335743DF7BBB17604A4B3A7389599CCF4410854E (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_UserCode_RpcTakeDamage_m335743DF7BBB17604A4B3A7389599CCF4410854E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.currentHealth -= damage;
		int32_t L_0 = __this->get_currentHealth_14();
		int32_t L_1 = ___damage0;
		PlayerSoZ_set_NetworkcurrentHealth_mB06220DA77F987429358921E55DBBCFDBB0610EB(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// healthBar.SetHealth(currentHealth);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_2 = __this->get_healthBar_15();
		int32_t L_3 = __this->get_currentHealth_14();
		HealthBar_SetHealth_m93EA48185AB1C03D13E8E169753C93AE4E560463(L_2, L_3, /*hidden argument*/NULL);
		// if (this.currentHealth <= 0)
		int32_t L_4 = __this->get_currentHealth_14();
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void PlayerSoZ::InvokeUserCode_RpcTakeDamage(Mirror.NetworkBehaviour,Mirror.NetworkReader,Mirror.NetworkConnectionToClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_InvokeUserCode_RpcTakeDamage_m3AD936204DB58D3C59B46E59C70604986EEFB9D4 (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * ___obj0, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader1, NetworkConnectionToClient_t1F03600677CE78028515063A567ADA023FBF2D8A * ___senderConnection2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_InvokeUserCode_RpcTakeDamage_m3AD936204DB58D3C59B46E59C70604986EEFB9D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkClient_tF61522EC557C7933F89A0585FE392566A428AE15_il2cpp_TypeInfo_var);
		bool L_0 = NetworkClient_get_active_m80C7ACA728DE7F6F6B5DC6C0E80B5AD0D287EA37(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralC8C04E31AE674380D16A947716FD138FE7F17B50, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * L_1 = ___obj0;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_2 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		int32_t L_3 = NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3(L_2, /*hidden argument*/NULL);
		PlayerSoZ_UserCode_RpcTakeDamage_m335743DF7BBB17604A4B3A7389599CCF4410854E(((PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 *)CastclassClass((RuntimeObject*)L_1, PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_il2cpp_TypeInfo_var)), L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerSoZ::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ__cctor_m4367790B1BFB83B426AB77F11E13C0BEDC499D32 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ__cctor_m4367790B1BFB83B426AB77F11E13C0BEDC499D32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_2 = (CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF *)il2cpp_codegen_object_new(CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF_il2cpp_TypeInfo_var);
		CmdDelegate__ctor_m25AAD7CB2265BEF6CC263E5F620322D0B874CAD8(L_2, NULL, (intptr_t)((intptr_t)PlayerSoZ_InvokeUserCode_CmdTakeDamage_mADB0900557AD377C0044D5E8A293FF96210FB9B9_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemoteCallHelper_t698E15E60D843C81D10564E744E4D9829DB33D02_il2cpp_TypeInfo_var);
		RemoteCallHelper_RegisterCommandDelegate_m196440B96E1D7A909D38037A770734FC5139842F(L_1, _stringLiteralAD916F41F847F4F5D39F47B90FC786789477A715, L_2, (bool)1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1_0_0_0_var) };
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF * L_5 = (CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF *)il2cpp_codegen_object_new(CmdDelegate_t6EA291A026854A08A12F2EE197904131DAFA3AFF_il2cpp_TypeInfo_var);
		CmdDelegate__ctor_m25AAD7CB2265BEF6CC263E5F620322D0B874CAD8(L_5, NULL, (intptr_t)((intptr_t)PlayerSoZ_InvokeUserCode_RpcTakeDamage_m3AD936204DB58D3C59B46E59C70604986EEFB9D4_RuntimeMethod_var), /*hidden argument*/NULL);
		RemoteCallHelper_RegisterRpcDelegate_m3381432C36F433DF9E6D924514BEBAD8B37B7AC9(L_4, _stringLiteralECE71252A47A7F50194E20A1AE3D7E53FE2A6D71, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PlayerSoZ::SerializeSyncVars(Mirror.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerSoZ_SerializeSyncVars_m9F8BD94056113C6C72F510F3ADB816688337B215 (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * ___writer0, bool ___forceAll1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_SerializeSyncVars_m9F8BD94056113C6C72F510F3ADB816688337B215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_0 = ___writer0;
		bool L_1 = ___forceAll1;
		bool L_2 = NetworkBehaviour_SerializeSyncVars_m4AF8BE097726BA018E3762C14E33BDBF3A5C4819(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = ___forceAll1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_4 = ___writer0;
		int32_t L_5 = __this->get_currentHealth_14();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_4, L_5, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_001d:
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_6 = ___writer0;
		uint64_t L_7 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteUInt64_mD91BA22C056821BD989BFF2480CCCA9A65120A86(L_6, L_7, /*hidden argument*/NULL);
		uint64_t L_8 = NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline(__this, /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_8&(int64_t)((int64_t)1LL))))
		{
			goto IL_004d;
		}
	}
	{
		NetworkWriter_t5132AE3A2F4CA663A808D4A914B8F74239B6DD9A * L_9 = ___writer0;
		int32_t L_10 = __this->get_currentHealth_14();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkWriterExtensions_t4E0050A4923BB33CFBAF091AFD346DEB02C573A2_il2cpp_TypeInfo_var);
		NetworkWriterExtensions_WriteInt32_m353DC0D60DCF2126D59A2F25E5C20B1ED74C9B3A(L_9, L_10, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_004d:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Void PlayerSoZ::DeserializeSyncVars(Mirror.NetworkReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoZ_DeserializeSyncVars_m58E891DA48F824C8905E7CEA9AAB911D6646EB23 (PlayerSoZ_t8CEB378FC0A62B7F4D9339BE313DD164BF16FDD1 * __this, NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * ___reader0, bool ___initialState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerSoZ_DeserializeSyncVars_m58E891DA48F824C8905E7CEA9AAB911D6646EB23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_0 = ___reader0;
		bool L_1 = ___initialState1;
		NetworkBehaviour_DeserializeSyncVars_mC87ECFD6F9C2D5C1306ABDF2CF6498864C84677A(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___initialState1;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = __this->get_currentHealth_14();
		V_1 = L_3;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_4 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		int32_t L_5 = NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3(L_4, /*hidden argument*/NULL);
		PlayerSoZ_set_NetworkcurrentHealth_mB06220DA77F987429358921E55DBBCFDBB0610EB(__this, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0025:
	{
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_6 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		uint64_t L_7 = NetworkReaderExtensions_ReadUInt64_mF8CBCE7593E37A4C819D8D5461746D1360975252(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int64_t L_8 = V_0;
		if (!((int64_t)((int64_t)L_8&(int64_t)((int64_t)1LL))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_9 = __this->get_currentHealth_14();
		V_2 = L_9;
		NetworkReader_t1C4ACC42044C39CEE1229C807B9274CF165A7CD9 * L_10 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkReaderExtensions_t14F164D4D08786641A7DA5C4FE5C03CBB19B9CB8_il2cpp_TypeInfo_var);
		int32_t L_11 = NetworkReaderExtensions_ReadInt32_mE0BA8E4FD647F4BC6F020B2480AF3EE8872A64A3(L_10, /*hidden argument*/NULL);
		PlayerSoZ_set_NetworkcurrentHealth_mB06220DA77F987429358921E55DBBCFDBB0610EB(__this, L_11, /*hidden argument*/NULL);
	}

IL_0053:
	{
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
// System.Void Server::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Start_m22151FA41E5A2827E81A9CB2C61920A7D6F8612A (Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Start_m22151FA41E5A2827E81A9CB2C61920A7D6F8612A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * V_0 = NULL;
	HostTopology_t268779309BB2D69F29D1A182662C79818813892B * V_1 = NULL;
	{
		// GlobalConfig config = new GlobalConfig();
		GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 * L_0 = (GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66 *)il2cpp_codegen_object_new(GlobalConfig_tD5592BEAD14194E067933D7B7655BF10AA9C4D66_il2cpp_TypeInfo_var);
		GlobalConfig__ctor_m866AAD8ED24D864385AD4E717249FCFDBC1C2888(L_0, /*hidden argument*/NULL);
		// NetworkTransport.Init(config);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		NetworkTransport_Init_m8AC1E8A78F9FE38D1C540568ED589A223FFB4557(L_0, /*hidden argument*/NULL);
		// ConnectionConfig cc = new ConnectionConfig();
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_1 = (ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A *)il2cpp_codegen_object_new(ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A_il2cpp_TypeInfo_var);
		ConnectionConfig__ctor_mCB0E2B50103AB6B3917758DC5FC0E52AD153DED3(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// reliableChannelId = cc.AddChannel(QosType.Reliable);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_2 = V_0;
		uint8_t L_3 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_2, 3, /*hidden argument*/NULL);
		__this->set_reliableChannelId_9(L_3);
		// unreliableChannelId = cc.AddChannel(QosType.Unreliable);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_4 = V_0;
		uint8_t L_5 = ConnectionConfig_AddChannel_mED78D9A5780E5148E29F653CEB1CB0A54DA869E6(L_4, 0, /*hidden argument*/NULL);
		__this->set_unreliableChannelId_10(L_5);
		// HostTopology topo = new HostTopology(cc, MAX_CONNECTIONS);
		ConnectionConfig_t9ED47EBC3397BFD65CEE4D075D9A63566743600A * L_6 = V_0;
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_7 = (HostTopology_t268779309BB2D69F29D1A182662C79818813892B *)il2cpp_codegen_object_new(HostTopology_t268779309BB2D69F29D1A182662C79818813892B_il2cpp_TypeInfo_var);
		HostTopology__ctor_m402906F2EFF083571541B3EDED1729CA3FDB6244(L_7, L_6, ((int32_t)100), /*hidden argument*/NULL);
		V_1 = L_7;
		// hostId = NetworkTransport.AddHost(topo, SERVER_PORT);
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_8 = V_1;
		int32_t L_9 = NetworkTransport_AddHost_mEBF87FF57C336EC3EB6A2F69575172A71620B5CE(L_8, ((int32_t)26950), /*hidden argument*/NULL);
		__this->set_hostId_11(L_9);
		// webHostId = NetworkTransport.AddHost(topo, SERVER_WEB_PORT);
		HostTopology_t268779309BB2D69F29D1A182662C79818813892B * L_10 = V_1;
		int32_t L_11 = NetworkTransport_AddHost_mEBF87FF57C336EC3EB6A2F69575172A71620B5CE(L_10, ((int32_t)26951), /*hidden argument*/NULL);
		__this->set_webHostId_12(L_11);
		// isInit = true;
		__this->set_isInit_13((bool)1);
		// }
		return;
	}
}
// System.Void Server::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Update_mED10059C893497EC4235F83FF1A0692A8FE68A7E (Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Update_mED10059C893497EC4235F83FF1A0692A8FE68A7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	{
		// if (!isInit)
		bool L_0 = __this->get_isInit_13();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// NetworkEventType e = NetworkTransport.Receive(out outHostId, out outConnectionId, out outConnectionId, buffer, buffer.Length, out receivedSize, out error);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_buffer_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_buffer_14();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1369B1490ACBBE45303AFD344210B4D0EA826D44_il2cpp_TypeInfo_var);
		int32_t L_3 = NetworkTransport_Receive_mC6C0C2677D78E1D3DB7F0EE02A8AC913E978A850((int32_t*)(&V_0), (int32_t*)(&V_1), (int32_t*)(&V_1), L_1, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), (int32_t*)(&V_2), (uint8_t*)(&V_3), /*hidden argument*/NULL);
		V_4 = L_3;
		// if (e == NetworkEventType.Nothing)
		int32_t L_4 = V_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_002e;
		}
	}
	{
		// return;
		return;
	}

IL_002e:
	{
		// switch (e)
		int32_t L_5 = V_4;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0049;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_0049;
			}
		}
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Server::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server__ctor_m6B8BA5160800C8C0C908BB87079C08476F6709A4 (Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server__ctor_m6B8BA5160800C8C0C908BB87079C08476F6709A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private byte[] buffer = new byte[BUFFER_SIZE];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->set_buffer_14(L_0);
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
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_mCED93604270B1E209B4E0D32F6A26DDC5AB06E30 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Awake_mCED93604270B1E209B4E0D32F6A26DDC5AB06E30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_0 = ((UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}

IL_0014:
	{
		// else if (instance != this)
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_2 = ((UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.Log("Instance already exists, destroying object!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral97C687FE2BA83A46207E9F527A74483A969631E0, /*hidden argument*/NULL);
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UIManager::ConnectedToServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ConnectedToServer_mBDC9E0EC2E062A6705E651C5BDFBB650CA3F39CF (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_ConnectedToServer_mBDC9E0EC2E062A6705E651C5BDFBB650CA3F39CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_startMenu_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Client.instance.ConnectedToServer();
		IL2CPP_RUNTIME_CLASS_INIT(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_1 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_instance_4();
		Client_ConnectedToServer_mF320F37C419F94953606530B7B68BFAB32B243D1(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
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
// System.Void Client_TCP::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Connect_m646BEC747EB079EAE7CC9631039F4A2F83EB2F1D (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TCP_Connect_m646BEC747EB079EAE7CC9631039F4A2F83EB2F1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// socket = new TcpClient
		// {
		//     ReceiveBufferSize = dataBufferSize,
		//     SendBufferSize = dataBufferSize
		// };
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)il2cpp_codegen_object_new(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var);
		TcpClient__ctor_m04BD4EDA03D1AE7183FC99DB886BD93CF85D2F2C(L_0, /*hidden argument*/NULL);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_dataBufferSize_5();
		TcpClient_set_ReceiveBufferSize_m9451660573B28BD95582D1215CF064FAD4A474F0(L_1, L_2, /*hidden argument*/NULL);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_3 = L_1;
		int32_t L_4 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_dataBufferSize_5();
		TcpClient_set_SendBufferSize_m7DA51C3FA45E79EC33648F6817F5AC036556B714(L_3, L_4, /*hidden argument*/NULL);
		__this->set_socket_0(L_3);
		// receiveBuffer = new byte[dataBufferSize];
		int32_t L_5 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_dataBufferSize_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->set_receiveBuffer_2(L_6);
		// socket.BeginConnect(instance.ip, instance.port, ConnectCallback, socket);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_7 = __this->get_socket_0();
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_8 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_instance_4();
		String_t* L_9 = L_8->get_ip_6();
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_10 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_11 = L_10->get_port_7();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_12 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_12, __this, (intptr_t)((intptr_t)TCP_ConnectCallback_m1043C7C7057AE846610BB11A33906829CEA1CFB4_RuntimeMethod_var), /*hidden argument*/NULL);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_13 = __this->get_socket_0();
		TcpClient_BeginConnect_mAF5D929DCA6FFD78BC0DE6E0F448B5F911CD8303(L_7, L_9, L_11, L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client_TCP::ConnectCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_ConnectCallback_m1043C7C7057AE846610BB11A33906829CEA1CFB4 (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TCP_ConnectCallback_m1043C7C7057AE846610BB11A33906829CEA1CFB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// socket.EndConnect(result);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = __this->get_socket_0();
		RuntimeObject* L_1 = ___result0;
		TcpClient_EndConnect_m8A878839804034D19DA751A6FC9C11736017782D(L_0, L_1, /*hidden argument*/NULL);
		// if (!socket.Connected)
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_2 = __this->get_socket_0();
		bool L_3 = TcpClient_get_Connected_m6F6E0D5E8CDF2D56756C34960B53D505640F481A(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		return;
	}

IL_001a:
	{
		// stream = socket.GetStream();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_4 = __this->get_socket_0();
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_5 = TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC(L_4, /*hidden argument*/NULL);
		__this->set_stream_1(L_5);
		// stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_6 = __this->get_stream_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_receiveBuffer_2();
		IL2CPP_RUNTIME_CLASS_INIT(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_dataBufferSize_5();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_9 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_9, __this, (intptr_t)((intptr_t)TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17_RuntimeMethod_var), /*hidden argument*/NULL);
		VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(16 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_6, L_7, 0, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Client_TCP::ReceiveCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17 (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// int _byteLength = stream.EndRead(result);
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_0 = __this->get_stream_1();
			RuntimeObject* L_1 = ___result0;
			int32_t L_2 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(17 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_0, L_1);
			V_0 = L_2;
			// if (_byteLength <= 0)
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) > ((int32_t)0)))
			{
				goto IL_0013;
			}
		}

IL_0011:
		{
			// return;
			goto IL_0051;
		}

IL_0013:
		{
			// byte[] _data = new byte[_byteLength];
			int32_t L_4 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_4);
			V_1 = L_5;
			// Array.Copy(receiveBuffer, _data, _byteLength);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_receiveBuffer_2();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_1;
			int32_t L_8 = V_0;
			Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
			// stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_9 = __this->get_stream_1();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_receiveBuffer_2();
			IL2CPP_RUNTIME_CLASS_INIT(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
			int32_t L_11 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_dataBufferSize_5();
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_12 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_12, __this, (intptr_t)((intptr_t)TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17_RuntimeMethod_var), /*hidden argument*/NULL);
			VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(16 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_9, L_10, 0, L_11, L_12, NULL);
			// }
			goto IL_0051;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004e;
		throw e;
	}

CATCH_004e:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// }
		goto IL_0051;
	} // end catch (depth: 1)

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Client_TCP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP__ctor_mCF3631391CF61BEB60D77F7E451EEA57521F4142 (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: MouseInput/MouseActions
IL2CPP_EXTERN_C void MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshal_pinvoke(const MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2& unmarshaled, MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'MouseActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshal_pinvoke_back(const MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshaled_pinvoke& marshaled, MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'MouseActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: MouseInput/MouseActions
IL2CPP_EXTERN_C void MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshal_pinvoke_cleanup(MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MouseInput/MouseActions
IL2CPP_EXTERN_C void MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshal_com(const MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2& unmarshaled, MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'MouseActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshal_com_back(const MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshaled_com& marshaled, MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'MouseActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: MouseInput/MouseActions
IL2CPP_EXTERN_C void MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshal_com_cleanup(MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2_marshaled_com& marshaled)
{
}
// System.Void MouseInput_MouseActions::.ctor(MouseInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseActions__ctor_m187015F204711F1097F03B8578581273BA379799 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public MouseActions(@MouseInput wrapper) { m_Wrapper = wrapper; }
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public MouseActions(@MouseInput wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void MouseActions__ctor_m187015F204711F1097F03B8578581273BA379799_AdjustorThunk (RuntimeObject * __this, MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * ___wrapper0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * _thisAdjusted = reinterpret_cast<MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *>(__this + _offset);
	MouseActions__ctor_m187015F204711F1097F03B8578581273BA379799_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction MouseInput_MouseActions::get_MouseClickRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @MouseClickRight => m_Wrapper.m_Mouse_MouseClickRight;
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_1 = L_0->get_m_Mouse_MouseClickRight_3();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * _thisAdjusted = reinterpret_cast<MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *>(__this + _offset);
	return MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2(_thisAdjusted, method);
}
// UnityEngine.InputSystem.InputAction MouseInput_MouseActions::get_MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @MousePosition => m_Wrapper.m_Mouse_MousePosition;
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_1 = L_0->get_m_Mouse_MousePosition_4();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * _thisAdjusted = reinterpret_cast<MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *>(__this + _offset);
	return MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF(_thisAdjusted, method);
}
// UnityEngine.InputSystem.InputAction MouseInput_MouseActions::get_MouseClickLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @MouseClickLeft => m_Wrapper.m_Mouse_MouseClickLeft;
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = __this->get_m_Wrapper_0();
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_1 = L_0->get_m_Mouse_MouseClickLeft_5();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * _thisAdjusted = reinterpret_cast<MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *>(__this + _offset);
	return MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E(_thisAdjusted, method);
}
// UnityEngine.InputSystem.InputActionMap MouseInput_MouseActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * MouseActions_Get_mF8191FF6DFDD699BC31A51F1933ED81F48ED6766 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_Mouse; }
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = __this->get_m_Wrapper_0();
		InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * L_1 = L_0->get_m_Mouse_1();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * MouseActions_Get_mF8191FF6DFDD699BC31A51F1933ED81F48ED6766_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * _thisAdjusted = reinterpret_cast<MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *>(__this + _offset);
	return MouseActions_Get_mF8191FF6DFDD699BC31A51F1933ED81F48ED6766(_thisAdjusted, method);
}
// System.Void MouseInput_MouseActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseActions_Enable_m319189AE7A0B2C3D5190B299912C294C0BCB7350 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method)
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * L_0 = MouseActions_Get_mF8191FF6DFDD699BC31A51F1933ED81F48ED6766((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		InputActionMap_Enable_m721C522123764840D97CD5AC35AD3D44A36B1276(L_0, /*hidden argument*/NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void MouseActions_Enable_m319189AE7A0B2C3D5190B299912C294C0BCB7350_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * _thisAdjusted = reinterpret_cast<MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *>(__this + _offset);
	MouseActions_Enable_m319189AE7A0B2C3D5190B299912C294C0BCB7350(_thisAdjusted, method);
}
// System.Void MouseInput_MouseActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseActions_Disable_mA91698B68868CEFFC4D77C2BD7558FA87191157B (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method)
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * L_0 = MouseActions_Get_mF8191FF6DFDD699BC31A51F1933ED81F48ED6766((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		InputActionMap_Disable_mD3766C6376AAF4E63D235D526F25F5118EA84606(L_0, /*hidden argument*/NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void MouseActions_Disable_mA91698B68868CEFFC4D77C2BD7558FA87191157B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * _thisAdjusted = reinterpret_cast<MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *>(__this + _offset);
	MouseActions_Disable_mA91698B68868CEFFC4D77C2BD7558FA87191157B(_thisAdjusted, method);
}
// System.Boolean MouseInput_MouseActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseActions_get_enabled_m30CB1B2524CA3C9BE1C01A0FB9439230A9B0FE94 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, const RuntimeMethod* method)
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * L_0 = MouseActions_Get_mF8191FF6DFDD699BC31A51F1933ED81F48ED6766((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		bool L_1 = InputActionMap_get_enabled_m347AA47FE78805A4EC176832960179E01CDA367F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool MouseActions_get_enabled_m30CB1B2524CA3C9BE1C01A0FB9439230A9B0FE94_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * _thisAdjusted = reinterpret_cast<MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *>(__this + _offset);
	return MouseActions_get_enabled_m30CB1B2524CA3C9BE1C01A0FB9439230A9B0FE94(_thisAdjusted, method);
}
// UnityEngine.InputSystem.InputActionMap MouseInput_MouseActions::op_Implicit(MouseInput_MouseActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * MouseActions_op_Implicit_m109024126C9B5CB2484E411D6C28590506AB0CB1 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2  ___set0, const RuntimeMethod* method)
{
	{
		// public static implicit operator InputActionMap(MouseActions set) { return set.Get(); }
		InputActionMap_t5B8B90ED8CD81D06C144AB1BC7E498BE53BF64E6 * L_0 = MouseActions_Get_mF8191FF6DFDD699BC31A51F1933ED81F48ED6766((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)(&___set0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void MouseInput_MouseActions::SetCallbacks(MouseInput_IMouseActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseActions_SetCallbacks_m5C86CFC6BD59C9570695F61F95251F6040A29CC3 (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseActions_SetCallbacks_m5C86CFC6BD59C9570695F61F95251F6040A29CC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_MouseActionsCallbackInterface != null)
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = __this->get_m_Wrapper_0();
		RuntimeObject* L_1 = L_0->get_m_MouseActionsCallbackInterface_2();
		if (!L_1)
		{
			goto IL_0142;
		}
	}
	{
		// @MouseClickRight.started -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickRight;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_2 = MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_3 = __this->get_m_Wrapper_0();
		RuntimeObject* L_4 = L_3->get_m_MouseActionsCallbackInterface_2();
		RuntimeObject* L_5 = L_4;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_6 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_6, L_5, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_5, 0, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_remove_started_m846BDD1BCC195F2EA26477F1B2C67FF1741523AB(L_2, L_6, /*hidden argument*/NULL);
		// @MouseClickRight.performed -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickRight;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_7 = MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_8 = __this->get_m_Wrapper_0();
		RuntimeObject* L_9 = L_8->get_m_MouseActionsCallbackInterface_2();
		RuntimeObject* L_10 = L_9;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_11 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_11, L_10, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_10, 0, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_remove_performed_m501B077CE13549986109D7A3751E6E8F14259C46(L_7, L_11, /*hidden argument*/NULL);
		// @MouseClickRight.canceled -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickRight;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_12 = MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_13 = __this->get_m_Wrapper_0();
		RuntimeObject* L_14 = L_13->get_m_MouseActionsCallbackInterface_2();
		RuntimeObject* L_15 = L_14;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_16 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_16, L_15, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_15, 0, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_remove_canceled_mD3CA5D8C8D3726E6F56750ACA07B37FA1D63E39B(L_12, L_16, /*hidden argument*/NULL);
		// @MousePosition.started -= m_Wrapper.m_MouseActionsCallbackInterface.OnMousePosition;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_17 = MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_18 = __this->get_m_Wrapper_0();
		RuntimeObject* L_19 = L_18->get_m_MouseActionsCallbackInterface_2();
		RuntimeObject* L_20 = L_19;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_21 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_21, L_20, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_20, 1, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_remove_started_m846BDD1BCC195F2EA26477F1B2C67FF1741523AB(L_17, L_21, /*hidden argument*/NULL);
		// @MousePosition.performed -= m_Wrapper.m_MouseActionsCallbackInterface.OnMousePosition;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_22 = MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_23 = __this->get_m_Wrapper_0();
		RuntimeObject* L_24 = L_23->get_m_MouseActionsCallbackInterface_2();
		RuntimeObject* L_25 = L_24;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_26 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_26, L_25, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_25, 1, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_remove_performed_m501B077CE13549986109D7A3751E6E8F14259C46(L_22, L_26, /*hidden argument*/NULL);
		// @MousePosition.canceled -= m_Wrapper.m_MouseActionsCallbackInterface.OnMousePosition;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_27 = MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_28 = __this->get_m_Wrapper_0();
		RuntimeObject* L_29 = L_28->get_m_MouseActionsCallbackInterface_2();
		RuntimeObject* L_30 = L_29;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_31 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_31, L_30, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_30, 1, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_remove_canceled_mD3CA5D8C8D3726E6F56750ACA07B37FA1D63E39B(L_27, L_31, /*hidden argument*/NULL);
		// @MouseClickLeft.started -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickLeft;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_32 = MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_33 = __this->get_m_Wrapper_0();
		RuntimeObject* L_34 = L_33->get_m_MouseActionsCallbackInterface_2();
		RuntimeObject* L_35 = L_34;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_36 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_36, L_35, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_35, 2, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_remove_started_m846BDD1BCC195F2EA26477F1B2C67FF1741523AB(L_32, L_36, /*hidden argument*/NULL);
		// @MouseClickLeft.performed -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickLeft;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_37 = MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_38 = __this->get_m_Wrapper_0();
		RuntimeObject* L_39 = L_38->get_m_MouseActionsCallbackInterface_2();
		RuntimeObject* L_40 = L_39;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_41 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_41, L_40, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_40, 2, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_remove_performed_m501B077CE13549986109D7A3751E6E8F14259C46(L_37, L_41, /*hidden argument*/NULL);
		// @MouseClickLeft.canceled -= m_Wrapper.m_MouseActionsCallbackInterface.OnMouseClickLeft;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_42 = MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_43 = __this->get_m_Wrapper_0();
		RuntimeObject* L_44 = L_43->get_m_MouseActionsCallbackInterface_2();
		RuntimeObject* L_45 = L_44;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_46 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_46, L_45, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_45, 2, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_remove_canceled_mD3CA5D8C8D3726E6F56750ACA07B37FA1D63E39B(L_42, L_46, /*hidden argument*/NULL);
	}

IL_0142:
	{
		// m_Wrapper.m_MouseActionsCallbackInterface = instance;
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_47 = __this->get_m_Wrapper_0();
		RuntimeObject* L_48 = ___instance0;
		L_47->set_m_MouseActionsCallbackInterface_2(L_48);
		// if (instance != null)
		RuntimeObject* L_49 = ___instance0;
		if (!L_49)
		{
			goto IL_022c;
		}
	}
	{
		// @MouseClickRight.started += instance.OnMouseClickRight;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_50 = MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_51 = ___instance0;
		RuntimeObject* L_52 = L_51;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_53 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_53, L_52, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_52, 0, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_started_m063F013FA66D3D6567AA9DF2720D981D50E6F7EC(L_50, L_53, /*hidden argument*/NULL);
		// @MouseClickRight.performed += instance.OnMouseClickRight;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_54 = MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_55 = ___instance0;
		RuntimeObject* L_56 = L_55;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_57 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_57, L_56, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_56, 0, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_performed_mD6E1BB3348C9514F9464AE0CD80E92D0FCAE3699(L_54, L_57, /*hidden argument*/NULL);
		// @MouseClickRight.canceled += instance.OnMouseClickRight;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_58 = MouseActions_get_MouseClickRight_mA90D273A9E99734CECA245D35F4C9359E92B55E2((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_59 = ___instance0;
		RuntimeObject* L_60 = L_59;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_61 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_61, L_60, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_60, 0, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_canceled_m412328C76A987C115A9B01E6A6E10A04535892C1(L_58, L_61, /*hidden argument*/NULL);
		// @MousePosition.started += instance.OnMousePosition;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_62 = MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_63 = ___instance0;
		RuntimeObject* L_64 = L_63;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_65 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_65, L_64, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_64, 1, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_started_m063F013FA66D3D6567AA9DF2720D981D50E6F7EC(L_62, L_65, /*hidden argument*/NULL);
		// @MousePosition.performed += instance.OnMousePosition;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_66 = MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_67 = ___instance0;
		RuntimeObject* L_68 = L_67;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_69 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_69, L_68, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_68, 1, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_performed_mD6E1BB3348C9514F9464AE0CD80E92D0FCAE3699(L_66, L_69, /*hidden argument*/NULL);
		// @MousePosition.canceled += instance.OnMousePosition;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_70 = MouseActions_get_MousePosition_mD4CA9225DF15576B8D8FAA80AE68FBB3F5DB17DF((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_71 = ___instance0;
		RuntimeObject* L_72 = L_71;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_73 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_73, L_72, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_72, 1, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_canceled_m412328C76A987C115A9B01E6A6E10A04535892C1(L_70, L_73, /*hidden argument*/NULL);
		// @MouseClickLeft.started += instance.OnMouseClickLeft;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_74 = MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_75 = ___instance0;
		RuntimeObject* L_76 = L_75;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_77 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_77, L_76, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_76, 2, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_started_m063F013FA66D3D6567AA9DF2720D981D50E6F7EC(L_74, L_77, /*hidden argument*/NULL);
		// @MouseClickLeft.performed += instance.OnMouseClickLeft;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_78 = MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_79 = ___instance0;
		RuntimeObject* L_80 = L_79;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_81 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_81, L_80, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_80, 2, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_performed_mD6E1BB3348C9514F9464AE0CD80E92D0FCAE3699(L_78, L_81, /*hidden argument*/NULL);
		// @MouseClickLeft.canceled += instance.OnMouseClickLeft;
		InputAction_tD10DAC6C8075BD386DDED09DA0633CBEDB585502 * L_82 = MouseActions_get_MouseClickLeft_m3AAD4BA383EE9A73CDA9DE1231B3BEEDCF2E6F1E((MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_83 = ___instance0;
		RuntimeObject* L_84 = L_83;
		Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD * L_85 = (Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD *)il2cpp_codegen_object_new(Action_1_tBE595DA3CADF43CB4898C122C05DC197B77B9DAD_il2cpp_TypeInfo_var);
		Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE(L_85, L_84, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_84, 2, IMouseActions_t5FCEA4A82E625DFDF05EE358536946EAD8B087E9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m66B2F3BF5C663DAFE0F1526CED624085E7E00CDE_RuntimeMethod_var);
		InputAction_add_canceled_m412328C76A987C115A9B01E6A6E10A04535892C1(L_82, L_85, /*hidden argument*/NULL);
	}

IL_022c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MouseActions_SetCallbacks_m5C86CFC6BD59C9570695F61F95251F6040A29CC3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * _thisAdjusted = reinterpret_cast<MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 *>(__this + _offset);
	MouseActions_SetCallbacks_m5C86CFC6BD59C9570695F61F95251F6040A29CC3(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * MouseInput_get_asset_m5E636B902F24806E2A954705305EEFE9A1BD02AC_inline (MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * L_0 = __this->get_U3CassetU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  InputActionAsset_get_bindingMask_m6DF3FE53763D887C37A58573B3BE7D90DDD2C28C_inline (InputActionAsset_tF6F8ADC22A1BF05DF21268327F7B767945A03F98 * __this, const RuntimeMethod* method)
{
	{
		// get => m_BindingMask;
		Nullable_1_t5B917C485BE025EEEFDE7606936008618070C4E4  L_0 = __this->get_m_BindingMask_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseActions__ctor_m187015F204711F1097F03B8578581273BA379799_inline (MouseActions_t68A16003404E821E51E01F3C4067E2404A31F3D2 * __this, MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public MouseActions(@MouseInput wrapper) { m_Wrapper = wrapper; }
		MouseInput_tC4BFB035FDD9342CC5C93E7FAEB4EEE689C55BD5 * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public MouseActions(@MouseInput wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFollow_setTarget_m0FB67F6B0DD997E45A4BE17540473C66ACA245D7_inline (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method)
{
	{
		// playerTransform = target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___target0;
		__this->set_playerTransform_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkServer_get_active_mF055B10F741C963266FE30D5667E781DBF44DEEEAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool active { get; internal set; }
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var);
		bool L_0 = ((NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_StaticFields*)il2cpp_codegen_static_fields_for(NetworkServer_t4D5B71F56CFD1B4C896E53C0FF169F22060E00AD_il2cpp_TypeInfo_var))->get_U3CactiveU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_syncVarDirtyBits_m1690C7716CF78A4CC6360088FB682385EE76C9E3_inline (NetworkBehaviour_t47DD4FB3737F8D6119DC03C10E899E61DFBDD9C4 * __this, const RuntimeMethod* method)
{
	{
		// protected ulong syncVarDirtyBits { get; private set; }
		uint64_t L_0 = __this->get_U3CsyncVarDirtyBitsU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
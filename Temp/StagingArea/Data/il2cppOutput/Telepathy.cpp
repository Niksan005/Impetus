#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Telepathy.Client
struct Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929;
// Telepathy.Common
struct Common_t25B06616A1695440B39152B4C426E18441C11E0F;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Telepathy.Server
struct Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Telepathy.Client/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000;
// Telepathy.Server/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131;
// Telepathy.Server/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447;
// Telepathy.Server/ClientToken
struct ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>
struct ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>
struct ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600;
// System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>
struct ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.Server/ClientToken>>
struct IEnumerator_1_tAC53BBA33DCFDD6F243F56C6E5D345B1DC6AD798;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_tAB5DF652A36FB48E9530C4C341616C66F406C205;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Queue`1<System.Byte[]>
struct Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4;
// Telepathy.SafeQueue`1<System.Byte[]>
struct SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438;
// Telepathy.SafeQueue`1<System.Object>
struct SafeQueue_1_t9B70ABB8F262968251E6DF08210E15079DE0383B;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<Telepathy.Message>
struct Segment_t795FB6D533E69A032C5620D7CFC75F984E9D992F;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Int32,Telepathy.Server/ClientToken>
struct Tables_tD31A59741B67EB99AFED2F6BF49EDFD1FDC16DCB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// System.Net.Sockets.TcpListener
struct TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAC53BBA33DCFDD6F243F56C6E5D345B1DC6AD798_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadInterruptedException_t79671BFC28D9946768F83A1CFE78A2D586FF02DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral21102DCAC41D97FC99CF6E7EB9947B2EBAEA391F;
IL2CPP_EXTERN_C String_t* _stringLiteral29EFA7B69EABF3CC848F04677350EBCCB484032A;
IL2CPP_EXTERN_C String_t* _stringLiteral2AE2ACB37456009F51EE9603197B18190A476313;
IL2CPP_EXTERN_C String_t* _stringLiteral2F6A3EAA59590A10BAF2FC00B84480CD6B40146D;
IL2CPP_EXTERN_C String_t* _stringLiteral380B755B17023C36F4FF9823E8E75595F0125871;
IL2CPP_EXTERN_C String_t* _stringLiteral3947D6FCC7FD025A80CDB56551285228ACE24D09;
IL2CPP_EXTERN_C String_t* _stringLiteral40FE124641630DD87D55A00B1E3EAF61E8E7780A;
IL2CPP_EXTERN_C String_t* _stringLiteral484D794F5E31CB1BBFD2C636C2C877C245206317;
IL2CPP_EXTERN_C String_t* _stringLiteral4D87D9F561182AA5628B8C78869C5C1AE33F0A33;
IL2CPP_EXTERN_C String_t* _stringLiteral51535E9E0618B351605C1CDB183CE725D2F1B60E;
IL2CPP_EXTERN_C String_t* _stringLiteral669E9BBF3EAA6140D2DBE7CB48975026F4D7CCBA;
IL2CPP_EXTERN_C String_t* _stringLiteral78BDF721B11718576BCF4DDEE144119DECDF4AE4;
IL2CPP_EXTERN_C String_t* _stringLiteral8020C7D6696CB083F06538A14CF53AFC87D4339B;
IL2CPP_EXTERN_C String_t* _stringLiteral813C2ECFD392D8A25AA9609C2EC1761E004EFE10;
IL2CPP_EXTERN_C String_t* _stringLiteral836FAE3C06390C4BBEF008C97F59F519B064497E;
IL2CPP_EXTERN_C String_t* _stringLiteral8CA3CC30341FE08793C351B1C0039EFB12120E14;
IL2CPP_EXTERN_C String_t* _stringLiteral9E9CE304B35E2CD4EF8C65E2BBD168076BF916D5;
IL2CPP_EXTERN_C String_t* _stringLiteralA00A6ED1079D9BFA0747625B3DBAEAB49075A9D7;
IL2CPP_EXTERN_C String_t* _stringLiteralA094D1FC9B83307C1079CEA3C810341FC29309A1;
IL2CPP_EXTERN_C String_t* _stringLiteralB6B2741769240CC9F111B4E04526A7EDDE77A6C0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE10DF21E57CA6066F041A1325EBE500B7537702C;
IL2CPP_EXTERN_C String_t* _stringLiteralF2ED48CD8488ED3A461DA6ACAB12DDF5260E04C5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3020C29380E843AD920758CE3613F4BE5BCFD87;
IL2CPP_EXTERN_C String_t* _stringLiteralF47863D6E0039D41ADF771D5253F35FCA7A40C28;
IL2CPP_EXTERN_C String_t* _stringLiteralF897DA240CE2C2852CEAB4B37E66C1E8CE1D8AD8;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_U3CReceiveThreadFunctionU3Eb__10_0_m7DEB3A6696908BE80013D0A83F7ED29D5E22B65F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_Clear_mF108F78FB20EE33D313DE974418398F292825F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_GetEnumerator_m64D7286EDE7EC249321F8A5A2211303EFA0D4ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_mB49A477C37FF3E72A9B03712C5F38A902C8C172A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryRemove_mB7F2E9F1BAB3CEC8E8F5AD95F420ACF7680BD7D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m415558106FD3ECF678C06D3287F081F48AF685CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_m749F9E94D4D66BBFFACB4CA3AD63224D568E4A54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_mE5F41B46AD84A7382C77884C2BBD78624DCBDFA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_mCAA526D9D64DD1C93B36BF6C49F82C4728F97E75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_m6CE6DEBA832A8CE2B3C3806EDD53206E9C534209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mA61F0E5A3ABBB6F28F06CA1295EC0A7FB10D84AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1_Clear_m22602DF06941AD6C90DB25988B02E1803E0AFAF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1_Enqueue_m7E704CE5C7C5B24C1AD9B8824B4BD10492523F75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1_TryDequeueAll_mC7B25DAFD96E16F1708FE95801B86047993FE53B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeQueue_1__ctor_m4880D0C48C4C777B5522C1A9A423BB427E3871B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CConnectU3Eb__0_m565E786C90BE24B06C9F7B2F63C08EA00FE5450F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__0_m10DB810FBF1825FEA42D056D67601672EDDC64D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__1_m1B96A615C44C7A88A103ADEAA8F65005E81EDADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CStartU3Eb__0_mCF256E6BA78CAA281A658AFAF63446746DD62079_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ClientToken__ctor_mDEE2BD6827019F81949045A0C3B6899588ABA7F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Connect_mDB197946B2907CF0830208C4A3B8B5E967B04401_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Disconnect_mAE664B949506BF0D4F3698B644416E7A95B35614_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_ReceiveThreadFunction_m90AEDC03B483FE6A45D5336CE078CABD026682A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_Send_m2441CF1B3DD6E1F14995AAEB513A1460444D194C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client_U3CReceiveThreadFunctionU3Eb__10_0_m7DEB3A6696908BE80013D0A83F7ED29D5E22B65F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Client__ctor_m9576963B4B800D4683DD06E883843EAB811E16C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_GetNextMessage_m3F49E815607BFB6E834437021C3859C53E63FA1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_ReadMessageBlocking_m297C3A502DB10ACB654A13D3E834A6221441BB66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_ReceiveLoop_mA9BC4F25EC3735B00FED39C16A6BBDEA31AF638B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_SendLoop_m0531175A13DC105C23A7E681C88ECB947E0011F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_SendMessagesBlocking_m9C1BEF625A1BDC07ABEB08F3840563D723C0D114_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common__cctor_mD552B7C53F8BC750B782C499A0D905000188DA81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common__ctor_m8519D1078F4B85DC870C3EE1BD0001CD67C94BAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Common_get_ReceiveQueueCount_m204E15F1732CEB18652AA5819DBF43DB92F653AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5ETelepathy_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Logger__cctor_m3610CDBBBEC44DA7B0EC7DFE6C19CCD7B3510FB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkStreamExtensions_ReadSafely_mB893276BBD1855945311D2857783DF1B847A608B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Disconnect_m81A37C7BA9C9D87CE54FF2886D018C7AA140AC5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_GetClientAddress_m9574ABDC812B05BDC6F04647C5E757400E1FCDC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Listen_mD18CE0EB1B3B66AD0B01DB22C7B3BB54AB3A3C33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Send_m79C3F768F221F67178C86A6A9FFA646E9B2AADFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Start_mA3609AF20E968EBDF19F8DC77776B69CA9E7A7EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server_Stop_m5D7C534FDE0D25A15B8498FF0A979FE856364C02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Server__ctor_mADC96E32E43739FEAE49F4782CDDD038712338E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__0_m10DB810FBF1825FEA42D056D67601672EDDC64D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__1_m1B96A615C44C7A88A103ADEAA8F65005E81EDADE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utils_IntToBytesBigEndian_m5DE9BE14BE4B433232BF2744B1225E5292F54230_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t82EB68D7CC1069C1EB930D54D8D0388C6D063DA9 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server_ClientToken>
struct  ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2_Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tD31A59741B67EB99AFED2F6BF49EDFD1FDC16DCB * ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;

public:
	inline static int32_t get_offset_of__tables_0() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA, ____tables_0)); }
	inline Tables_tD31A59741B67EB99AFED2F6BF49EDFD1FDC16DCB * get__tables_0() const { return ____tables_0; }
	inline Tables_tD31A59741B67EB99AFED2F6BF49EDFD1FDC16DCB ** get_address_of__tables_0() { return &____tables_0; }
	inline void set__tables_0(Tables_tD31A59741B67EB99AFED2F6BF49EDFD1FDC16DCB * value)
	{
		____tables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tables_0), (void*)value);
	}

	inline static int32_t get_offset_of__comparer_1() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA, ____comparer_1)); }
	inline RuntimeObject* get__comparer_1() const { return ____comparer_1; }
	inline RuntimeObject** get_address_of__comparer_1() { return &____comparer_1; }
	inline void set__comparer_1(RuntimeObject* value)
	{
		____comparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_1), (void*)value);
	}

	inline static int32_t get_offset_of__growLockArray_2() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA, ____growLockArray_2)); }
	inline bool get__growLockArray_2() const { return ____growLockArray_2; }
	inline bool* get_address_of__growLockArray_2() { return &____growLockArray_2; }
	inline void set__growLockArray_2(bool value)
	{
		____growLockArray_2 = value;
	}

	inline static int32_t get_offset_of__budget_3() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA, ____budget_3)); }
	inline int32_t get__budget_3() const { return ____budget_3; }
	inline int32_t* get_address_of__budget_3() { return &____budget_3; }
	inline void set__budget_3(int32_t value)
	{
		____budget_3 = value;
	}
};

struct ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA_StaticFields
{
public:
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_6;

public:
	inline static int32_t get_offset_of_s_isValueWriteAtomic_6() { return static_cast<int32_t>(offsetof(ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA_StaticFields, ___s_isValueWriteAtomic_6)); }
	inline bool get_s_isValueWriteAtomic_6() const { return ___s_isValueWriteAtomic_6; }
	inline bool* get_address_of_s_isValueWriteAtomic_6() { return &___s_isValueWriteAtomic_6; }
	inline void set_s_isValueWriteAtomic_6(bool value)
	{
		___s_isValueWriteAtomic_6 = value;
	}
};


// System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>
struct  ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636  : public RuntimeObject
{
public:
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject * ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1_Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t795FB6D533E69A032C5620D7CFC75F984E9D992F * ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1_Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t795FB6D533E69A032C5620D7CFC75F984E9D992F * ____head_4;

public:
	inline static int32_t get_offset_of__crossSegmentLock_2() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636, ____crossSegmentLock_2)); }
	inline RuntimeObject * get__crossSegmentLock_2() const { return ____crossSegmentLock_2; }
	inline RuntimeObject ** get_address_of__crossSegmentLock_2() { return &____crossSegmentLock_2; }
	inline void set__crossSegmentLock_2(RuntimeObject * value)
	{
		____crossSegmentLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossSegmentLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636, ____tail_3)); }
	inline Segment_t795FB6D533E69A032C5620D7CFC75F984E9D992F * get__tail_3() const { return ____tail_3; }
	inline Segment_t795FB6D533E69A032C5620D7CFC75F984E9D992F ** get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(Segment_t795FB6D533E69A032C5620D7CFC75F984E9D992F * value)
	{
		____tail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tail_3), (void*)value);
	}

	inline static int32_t get_offset_of__head_4() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636, ____head_4)); }
	inline Segment_t795FB6D533E69A032C5620D7CFC75F984E9D992F * get__head_4() const { return ____head_4; }
	inline Segment_t795FB6D533E69A032C5620D7CFC75F984E9D992F ** get_address_of__head_4() { return &____head_4; }
	inline void set__head_4(Segment_t795FB6D533E69A032C5620D7CFC75F984E9D992F * value)
	{
		____head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_4), (void*)value);
	}
};


// System.Console
struct  Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07  : public RuntimeObject
{
public:

public:
};

struct Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * ___cancel_event_5;
	// System.Console_InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * ___cancel_handler_6;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stdout_0)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdout_0), (void*)value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stderr_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stderr_1), (void*)value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___stdin_2)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdin_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___inputEncoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEncoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___outputEncoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputEncoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_event_5() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___cancel_event_5)); }
	inline ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * get_cancel_event_5() const { return ___cancel_event_5; }
	inline ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D ** get_address_of_cancel_event_5() { return &___cancel_event_5; }
	inline void set_cancel_event_5(ConsoleCancelEventHandler_tACD32787946439D2453F9D9512471685521C006D * value)
	{
		___cancel_event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_event_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_handler_6() { return static_cast<int32_t>(offsetof(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields, ___cancel_handler_6)); }
	inline InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * get_cancel_handler_6() const { return ___cancel_handler_6; }
	inline InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 ** get_address_of_cancel_handler_6() { return &___cancel_handler_6; }
	inline void set_cancel_handler_6(InternalCancelHandler_t7F0E9BBFE542C3B0E62620118961AC10E0DFB000 * value)
	{
		___cancel_handler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_handler_6), (void*)value);
	}
};


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

// System.Net.EndPoint
struct  EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// System.Net.Sockets.TcpListener
struct  TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint System.Net.Sockets.TcpListener::m_ServerSocketEP
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___m_ServerSocketEP_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::m_ServerSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ServerSocket_1;
	// System.Boolean System.Net.Sockets.TcpListener::m_Active
	bool ___m_Active_2;
	// System.Boolean System.Net.Sockets.TcpListener::m_ExclusiveAddressUse
	bool ___m_ExclusiveAddressUse_3;

public:
	inline static int32_t get_offset_of_m_ServerSocketEP_0() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ServerSocketEP_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_m_ServerSocketEP_0() const { return ___m_ServerSocketEP_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_m_ServerSocketEP_0() { return &___m_ServerSocketEP_0; }
	inline void set_m_ServerSocketEP_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___m_ServerSocketEP_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocketEP_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServerSocket_1() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ServerSocket_1)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ServerSocket_1() const { return ___m_ServerSocket_1; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ServerSocket_1() { return &___m_ServerSocket_1; }
	inline void set_m_ServerSocket_1(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ServerSocket_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocket_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_2() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_Active_2)); }
	inline bool get_m_Active_2() const { return ___m_Active_2; }
	inline bool* get_address_of_m_Active_2() { return &___m_Active_2; }
	inline void set_m_Active_2(bool value)
	{
		___m_Active_2 = value;
	}

	inline static int32_t get_offset_of_m_ExclusiveAddressUse_3() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ExclusiveAddressUse_3)); }
	inline bool get_m_ExclusiveAddressUse_3() const { return ___m_ExclusiveAddressUse_3; }
	inline bool* get_address_of_m_ExclusiveAddressUse_3() { return &___m_ExclusiveAddressUse_3; }
	inline void set_m_ExclusiveAddressUse_3(bool value)
	{
		___m_ExclusiveAddressUse_3 = value;
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
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

// Telepathy.Client_<>c__DisplayClass11_0
struct  U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C  : public RuntimeObject
{
public:
	// Telepathy.Client Telepathy.Client_<>c__DisplayClass11_0::<>4__this
	Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * ___U3CU3E4__this_0;
	// System.String Telepathy.Client_<>c__DisplayClass11_0::ip
	String_t* ___ip_1;
	// System.Int32 Telepathy.Client_<>c__DisplayClass11_0::port
	int32_t ___port_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C, ___U3CU3E4__this_0)); }
	inline Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_ip_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C, ___ip_1)); }
	inline String_t* get_ip_1() const { return ___ip_1; }
	inline String_t** get_address_of_ip_1() { return &___ip_1; }
	inline void set_ip_1(String_t* value)
	{
		___ip_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ip_1), (void*)value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}
};


// Telepathy.Common
struct  Common_t25B06616A1695440B39152B4C426E18441C11E0F  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message> Telepathy.Common::receiveQueue
	ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * ___receiveQueue_0;
	// System.Boolean Telepathy.Common::NoDelay
	bool ___NoDelay_2;
	// System.Int32 Telepathy.Common::MaxMessageSize
	int32_t ___MaxMessageSize_3;
	// System.Int32 Telepathy.Common::SendTimeout
	int32_t ___SendTimeout_4;

public:
	inline static int32_t get_offset_of_receiveQueue_0() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F, ___receiveQueue_0)); }
	inline ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * get_receiveQueue_0() const { return ___receiveQueue_0; }
	inline ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 ** get_address_of_receiveQueue_0() { return &___receiveQueue_0; }
	inline void set_receiveQueue_0(ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * value)
	{
		___receiveQueue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveQueue_0), (void*)value);
	}

	inline static int32_t get_offset_of_NoDelay_2() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F, ___NoDelay_2)); }
	inline bool get_NoDelay_2() const { return ___NoDelay_2; }
	inline bool* get_address_of_NoDelay_2() { return &___NoDelay_2; }
	inline void set_NoDelay_2(bool value)
	{
		___NoDelay_2 = value;
	}

	inline static int32_t get_offset_of_MaxMessageSize_3() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F, ___MaxMessageSize_3)); }
	inline int32_t get_MaxMessageSize_3() const { return ___MaxMessageSize_3; }
	inline int32_t* get_address_of_MaxMessageSize_3() { return &___MaxMessageSize_3; }
	inline void set_MaxMessageSize_3(int32_t value)
	{
		___MaxMessageSize_3 = value;
	}

	inline static int32_t get_offset_of_SendTimeout_4() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F, ___SendTimeout_4)); }
	inline int32_t get_SendTimeout_4() const { return ___SendTimeout_4; }
	inline int32_t* get_address_of_SendTimeout_4() { return &___SendTimeout_4; }
	inline void set_SendTimeout_4(int32_t value)
	{
		___SendTimeout_4 = value;
	}
};

struct Common_t25B06616A1695440B39152B4C426E18441C11E0F_StaticFields
{
public:
	// System.Int32 Telepathy.Common::messageQueueSizeWarning
	int32_t ___messageQueueSizeWarning_1;

public:
	inline static int32_t get_offset_of_messageQueueSizeWarning_1() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F_StaticFields, ___messageQueueSizeWarning_1)); }
	inline int32_t get_messageQueueSizeWarning_1() const { return ___messageQueueSizeWarning_1; }
	inline int32_t* get_address_of_messageQueueSizeWarning_1() { return &___messageQueueSizeWarning_1; }
	inline void set_messageQueueSizeWarning_1(int32_t value)
	{
		___messageQueueSizeWarning_1 = value;
	}
};

struct Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields
{
public:
	// System.Byte[] Telepathy.Common::header
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___header_5;
	// System.Byte[] Telepathy.Common::payload
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___payload_6;

public:
	inline static int32_t get_offset_of_header_5() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields, ___header_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_header_5() const { return ___header_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_header_5() { return &___header_5; }
	inline void set_header_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___header_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header_5), (void*)value);
	}

	inline static int32_t get_offset_of_payload_6() { return static_cast<int32_t>(offsetof(Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields, ___payload_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_payload_6() const { return ___payload_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_payload_6() { return &___payload_6; }
	inline void set_payload_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___payload_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_6), (void*)value);
	}
};


// Telepathy.Logger
struct  Logger_t238424F06F225A61AFB1293D376838A9F2D19106  : public RuntimeObject
{
public:

public:
};

struct Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields
{
public:
	// System.Action`1<System.String> Telepathy.Logger::Log
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___Log_0;
	// System.Action`1<System.String> Telepathy.Logger::LogWarning
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___LogWarning_1;
	// System.Action`1<System.String> Telepathy.Logger::LogError
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___LogError_2;

public:
	inline static int32_t get_offset_of_Log_0() { return static_cast<int32_t>(offsetof(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields, ___Log_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_Log_0() const { return ___Log_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_Log_0() { return &___Log_0; }
	inline void set_Log_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___Log_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Log_0), (void*)value);
	}

	inline static int32_t get_offset_of_LogWarning_1() { return static_cast<int32_t>(offsetof(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields, ___LogWarning_1)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_LogWarning_1() const { return ___LogWarning_1; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_LogWarning_1() { return &___LogWarning_1; }
	inline void set_LogWarning_1(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___LogWarning_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogWarning_1), (void*)value);
	}

	inline static int32_t get_offset_of_LogError_2() { return static_cast<int32_t>(offsetof(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields, ___LogError_2)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_LogError_2() const { return ___LogError_2; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_LogError_2() { return &___LogError_2; }
	inline void set_LogError_2(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___LogError_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogError_2), (void*)value);
	}
};


// Telepathy.NetworkStreamExtensions
struct  NetworkStreamExtensions_t75AE64583CB8942C3F2F65E5E72FCC814B183590  : public RuntimeObject
{
public:

public:
};


// Telepathy.SafeQueue`1<System.Byte[]>
struct  SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<T> Telepathy.SafeQueue`1::queue
	Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * ___queue_0;

public:
	inline static int32_t get_offset_of_queue_0() { return static_cast<int32_t>(offsetof(SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438, ___queue_0)); }
	inline Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * get_queue_0() const { return ___queue_0; }
	inline Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 ** get_address_of_queue_0() { return &___queue_0; }
	inline void set_queue_0(Queue_1_tAF2A710AEBB98604F7E35A3CD161FA0838FD96D4 * value)
	{
		___queue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_0), (void*)value);
	}
};


// Telepathy.Server_<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131  : public RuntimeObject
{
public:
	// System.Int32 Telepathy.Server_<>c__DisplayClass8_0::connectionId
	int32_t ___connectionId_0;
	// System.Net.Sockets.TcpClient Telepathy.Server_<>c__DisplayClass8_0::client
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client_1;
	// Telepathy.Server_ClientToken Telepathy.Server_<>c__DisplayClass8_0::token
	ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * ___token_2;
	// System.Threading.Thread Telepathy.Server_<>c__DisplayClass8_0::sendThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___sendThread_3;
	// Telepathy.Server Telepathy.Server_<>c__DisplayClass8_0::<>4__this
	Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131, ___client_1)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get_client_1() const { return ___client_1; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131, ___token_2)); }
	inline ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * get_token_2() const { return ___token_2; }
	inline ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E ** get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * value)
	{
		___token_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_2), (void*)value);
	}

	inline static int32_t get_offset_of_sendThread_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131, ___sendThread_3)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_sendThread_3() const { return ___sendThread_3; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_sendThread_3() { return &___sendThread_3; }
	inline void set_sendThread_3(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___sendThread_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendThread_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131, ___U3CU3E4__this_4)); }
	inline Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// Telepathy.Server_<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447  : public RuntimeObject
{
public:
	// Telepathy.Server Telepathy.Server_<>c__DisplayClass9_0::<>4__this
	Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * ___U3CU3E4__this_0;
	// System.Int32 Telepathy.Server_<>c__DisplayClass9_0::port
	int32_t ___port_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447, ___U3CU3E4__this_0)); }
	inline Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}
};


// Telepathy.Server_ClientToken
struct  ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E  : public RuntimeObject
{
public:
	// System.Net.Sockets.TcpClient Telepathy.Server_ClientToken::client
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client_0;
	// Telepathy.SafeQueue`1<System.Byte[]> Telepathy.Server_ClientToken::sendQueue
	SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * ___sendQueue_1;
	// System.Threading.ManualResetEvent Telepathy.Server_ClientToken::sendPending
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___sendPending_2;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E, ___client_0)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get_client_0() const { return ___client_0; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_sendQueue_1() { return static_cast<int32_t>(offsetof(ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E, ___sendQueue_1)); }
	inline SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * get_sendQueue_1() const { return ___sendQueue_1; }
	inline SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 ** get_address_of_sendQueue_1() { return &___sendQueue_1; }
	inline void set_sendQueue_1(SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * value)
	{
		___sendQueue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendQueue_1), (void*)value);
	}

	inline static int32_t get_offset_of_sendPending_2() { return static_cast<int32_t>(offsetof(ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E, ___sendPending_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_sendPending_2() const { return ___sendPending_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_sendPending_2() { return &___sendPending_2; }
	inline void set_sendPending_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___sendPending_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendPending_2), (void*)value);
	}
};


// Telepathy.ThreadExtensions
struct  ThreadExtensions_tBCC215B7462C1DAB98F17B565D77BB2F5DC8404E  : public RuntimeObject
{
public:

public:
};


// Telepathy.Utils
struct  Utils_tF9D629626AABDBBB0898F07CEF18F6D0E7CB060B  : public RuntimeObject
{
public:

public:
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


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
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


// System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.Server_ClientToken>
struct  KeyValuePair_2_t03F02DAB13F3ED0A143D5AC6E5605120AD56DFFC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t03F02DAB13F3ED0A143D5AC6E5605120AD56DFFC, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t03F02DAB13F3ED0A143D5AC6E5605120AD56DFFC, ___value_1)); }
	inline ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * get_value_1() const { return ___value_1; }
	inline ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
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


// System.Net.IPEndPoint
struct  IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Address_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___Any_5)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_5), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_6), (void*)value);
	}
};


// System.Threading.Thread
struct  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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


// Telepathy.Server
struct  Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2  : public Common_t25B06616A1695440B39152B4C426E18441C11E0F
{
public:
	// System.Net.Sockets.TcpListener Telepathy.Server::listener
	TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * ___listener_7;
	// System.Threading.Thread Telepathy.Server::listenerThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___listenerThread_8;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server_ClientToken> Telepathy.Server::clients
	ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * ___clients_9;
	// System.Int32 Telepathy.Server::counter
	int32_t ___counter_10;

public:
	inline static int32_t get_offset_of_listener_7() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___listener_7)); }
	inline TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * get_listener_7() const { return ___listener_7; }
	inline TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B ** get_address_of_listener_7() { return &___listener_7; }
	inline void set_listener_7(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * value)
	{
		___listener_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_7), (void*)value);
	}

	inline static int32_t get_offset_of_listenerThread_8() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___listenerThread_8)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_listenerThread_8() const { return ___listenerThread_8; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_listenerThread_8() { return &___listenerThread_8; }
	inline void set_listenerThread_8(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___listenerThread_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listenerThread_8), (void*)value);
	}

	inline static int32_t get_offset_of_clients_9() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___clients_9)); }
	inline ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * get_clients_9() const { return ___clients_9; }
	inline ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA ** get_address_of_clients_9() { return &___clients_9; }
	inline void set_clients_9(ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * value)
	{
		___clients_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clients_9), (void*)value);
	}

	inline static int32_t get_offset_of_counter_10() { return static_cast<int32_t>(offsetof(Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2, ___counter_10)); }
	inline int32_t get_counter_10() const { return ___counter_10; }
	inline int32_t* get_address_of_counter_10() { return &___counter_10; }
	inline void set_counter_10(int32_t value)
	{
		___counter_10 = value;
	}
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


// System.Net.Sockets.ProtocolType
struct  ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct  SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.ThreadPriority
struct  ThreadPriority_tFF7AC5F91D1EE3843C4D91823D6BD8BDF7620098 
{
public:
	// System.Int32 System.Threading.ThreadPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadPriority_tFF7AC5F91D1EE3843C4D91823D6BD8BDF7620098, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Telepathy.Client
struct  Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929  : public Common_t25B06616A1695440B39152B4C426E18441C11E0F
{
public:
	// System.Net.Sockets.TcpClient Telepathy.Client::client
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client_7;
	// System.Threading.Thread Telepathy.Client::receiveThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___receiveThread_8;
	// System.Threading.Thread Telepathy.Client::sendThread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___sendThread_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Telepathy.Client::_Connecting
	bool ____Connecting_10;
	// Telepathy.SafeQueue`1<System.Byte[]> Telepathy.Client::sendQueue
	SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * ___sendQueue_11;
	// System.Threading.ManualResetEvent Telepathy.Client::sendPending
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___sendPending_12;

public:
	inline static int32_t get_offset_of_client_7() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___client_7)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get_client_7() const { return ___client_7; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of_client_7() { return &___client_7; }
	inline void set_client_7(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		___client_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_7), (void*)value);
	}

	inline static int32_t get_offset_of_receiveThread_8() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___receiveThread_8)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_receiveThread_8() const { return ___receiveThread_8; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_receiveThread_8() { return &___receiveThread_8; }
	inline void set_receiveThread_8(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___receiveThread_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveThread_8), (void*)value);
	}

	inline static int32_t get_offset_of_sendThread_9() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___sendThread_9)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_sendThread_9() const { return ___sendThread_9; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_sendThread_9() { return &___sendThread_9; }
	inline void set_sendThread_9(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___sendThread_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendThread_9), (void*)value);
	}

	inline static int32_t get_offset_of__Connecting_10() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ____Connecting_10)); }
	inline bool get__Connecting_10() const { return ____Connecting_10; }
	inline bool* get_address_of__Connecting_10() { return &____Connecting_10; }
	inline void set__Connecting_10(bool value)
	{
		____Connecting_10 = value;
	}

	inline static int32_t get_offset_of_sendQueue_11() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___sendQueue_11)); }
	inline SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * get_sendQueue_11() const { return ___sendQueue_11; }
	inline SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 ** get_address_of_sendQueue_11() { return &___sendQueue_11; }
	inline void set_sendQueue_11(SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * value)
	{
		___sendQueue_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendQueue_11), (void*)value);
	}

	inline static int32_t get_offset_of_sendPending_12() { return static_cast<int32_t>(offsetof(Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929, ___sendPending_12)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_sendPending_12() const { return ___sendPending_12; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_sendPending_12() { return &___sendPending_12; }
	inline void set_sendPending_12(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___sendPending_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendPending_12), (void*)value);
	}
};


// Telepathy.EventType
struct  EventType_tDEB586195D7496CB77D2D7A0CF1DAC7A493DC8F8 
{
public:
	// System.Int32 Telepathy.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_tDEB586195D7496CB77D2D7A0CF1DAC7A493DC8F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Net.IPAddress
struct  IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct  Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_10;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_11;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_12;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_13;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_14;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_15;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_16;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_17;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_18;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_19;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_20;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_21;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_22;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_23;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_24;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_25;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_26;

public:
	inline static int32_t get_offset_of_is_closed_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_10)); }
	inline bool get_is_closed_10() const { return ___is_closed_10; }
	inline bool* get_address_of_is_closed_10() { return &___is_closed_10; }
	inline void set_is_closed_10(bool value)
	{
		___is_closed_10 = value;
	}

	inline static int32_t get_offset_of_is_listening_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_11)); }
	inline bool get_is_listening_11() const { return ___is_listening_11; }
	inline bool* get_address_of_is_listening_11() { return &___is_listening_11; }
	inline void set_is_listening_11(bool value)
	{
		___is_listening_11 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_12)); }
	inline bool get_useOverlappedIO_12() const { return ___useOverlappedIO_12; }
	inline bool* get_address_of_useOverlappedIO_12() { return &___useOverlappedIO_12; }
	inline void set_useOverlappedIO_12(bool value)
	{
		___useOverlappedIO_12 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_13)); }
	inline int32_t get_linger_timeout_13() const { return ___linger_timeout_13; }
	inline int32_t* get_address_of_linger_timeout_13() { return &___linger_timeout_13; }
	inline void set_linger_timeout_13(int32_t value)
	{
		___linger_timeout_13 = value;
	}

	inline static int32_t get_offset_of_addressFamily_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_14)); }
	inline int32_t get_addressFamily_14() const { return ___addressFamily_14; }
	inline int32_t* get_address_of_addressFamily_14() { return &___addressFamily_14; }
	inline void set_addressFamily_14(int32_t value)
	{
		___addressFamily_14 = value;
	}

	inline static int32_t get_offset_of_socketType_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_15)); }
	inline int32_t get_socketType_15() const { return ___socketType_15; }
	inline int32_t* get_address_of_socketType_15() { return &___socketType_15; }
	inline void set_socketType_15(int32_t value)
	{
		___socketType_15 = value;
	}

	inline static int32_t get_offset_of_protocolType_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_16)); }
	inline int32_t get_protocolType_16() const { return ___protocolType_16; }
	inline int32_t* get_address_of_protocolType_16() { return &___protocolType_16; }
	inline void set_protocolType_16(int32_t value)
	{
		___protocolType_16 = value;
	}

	inline static int32_t get_offset_of_m_Handle_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_17)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_17() const { return ___m_Handle_17; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_17() { return &___m_Handle_17; }
	inline void set_m_Handle_17(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_17), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_18)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_18() const { return ___seed_endpoint_18; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_18() { return &___seed_endpoint_18; }
	inline void set_seed_endpoint_18(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_18), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_19)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_19() const { return ___ReadSem_19; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_19() { return &___ReadSem_19; }
	inline void set_ReadSem_19(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_19), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_20)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_20() const { return ___WriteSem_20; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_20() { return &___WriteSem_20; }
	inline void set_WriteSem_20(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_20), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_21)); }
	inline bool get_is_blocking_21() const { return ___is_blocking_21; }
	inline bool* get_address_of_is_blocking_21() { return &___is_blocking_21; }
	inline void set_is_blocking_21(bool value)
	{
		___is_blocking_21 = value;
	}

	inline static int32_t get_offset_of_is_bound_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_22)); }
	inline bool get_is_bound_22() const { return ___is_bound_22; }
	inline bool* get_address_of_is_bound_22() { return &___is_bound_22; }
	inline void set_is_bound_22(bool value)
	{
		___is_bound_22 = value;
	}

	inline static int32_t get_offset_of_is_connected_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_23)); }
	inline bool get_is_connected_23() const { return ___is_connected_23; }
	inline bool* get_address_of_is_connected_23() { return &___is_connected_23; }
	inline void set_is_connected_23(bool value)
	{
		___is_connected_23 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_24)); }
	inline int32_t get_m_IntCleanedUp_24() const { return ___m_IntCleanedUp_24; }
	inline int32_t* get_address_of_m_IntCleanedUp_24() { return &___m_IntCleanedUp_24; }
	inline void set_m_IntCleanedUp_24(int32_t value)
	{
		___m_IntCleanedUp_24 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_25)); }
	inline bool get_connect_in_progress_25() const { return ___connect_in_progress_25; }
	inline bool* get_address_of_connect_in_progress_25() { return &___connect_in_progress_25; }
	inline void set_connect_in_progress_25(bool value)
	{
		___connect_in_progress_25 = value;
	}

	inline static int32_t get_offset_of_ID_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_26)); }
	inline int32_t get_ID_26() const { return ___ID_26; }
	inline int32_t* get_address_of_ID_26() { return &___ID_26; }
	inline void set_ID_26(int32_t value)
	{
		___ID_26 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_6;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_41;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_PerfCountersEnabled_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_PerfCountersEnabled_6)); }
	inline bool get_s_PerfCountersEnabled_6() const { return ___s_PerfCountersEnabled_6; }
	inline bool* get_address_of_s_PerfCountersEnabled_6() { return &___s_PerfCountersEnabled_6; }
	inline void set_s_PerfCountersEnabled_6(bool value)
	{
		___s_PerfCountersEnabled_6 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_27)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_27() const { return ___AcceptAsyncCallback_27; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_27() { return &___AcceptAsyncCallback_27; }
	inline void set_AcceptAsyncCallback_27(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_28)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_28() const { return ___BeginAcceptCallback_28; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_28() { return &___BeginAcceptCallback_28; }
	inline void set_BeginAcceptCallback_28(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_29() const { return ___BeginAcceptReceiveCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_29() { return &___BeginAcceptReceiveCallback_29; }
	inline void set_BeginAcceptReceiveCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_30() const { return ___ConnectAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_30() { return &___ConnectAsyncCallback_30; }
	inline void set_ConnectAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_31() const { return ___BeginConnectCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_31() { return &___BeginConnectCallback_31; }
	inline void set_BeginConnectCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_32)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_32() const { return ___DisconnectAsyncCallback_32; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_32() { return &___DisconnectAsyncCallback_32; }
	inline void set_DisconnectAsyncCallback_32(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_33)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_33() const { return ___BeginDisconnectCallback_33; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_33() { return &___BeginDisconnectCallback_33; }
	inline void set_BeginDisconnectCallback_33(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_34)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_34() const { return ___ReceiveAsyncCallback_34; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_34() { return &___ReceiveAsyncCallback_34; }
	inline void set_ReceiveAsyncCallback_34(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_35)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_35() const { return ___BeginReceiveCallback_35; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_35() { return &___BeginReceiveCallback_35; }
	inline void set_BeginReceiveCallback_35(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_36() const { return ___BeginReceiveGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_36() { return &___BeginReceiveGenericCallback_36; }
	inline void set_BeginReceiveGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_37() const { return ___ReceiveFromAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_37() { return &___ReceiveFromAsyncCallback_37; }
	inline void set_ReceiveFromAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_37), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_38() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_38)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_38() const { return ___BeginReceiveFromCallback_38; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_38() { return &___BeginReceiveFromCallback_38; }
	inline void set_BeginReceiveFromCallback_38(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_39() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_39)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_39() const { return ___SendAsyncCallback_39; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_39() { return &___SendAsyncCallback_39; }
	inline void set_SendAsyncCallback_39(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_39), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_40() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_40)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_40() const { return ___BeginSendGenericCallback_40; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_40() { return &___BeginSendGenericCallback_40; }
	inline void set_BeginSendGenericCallback_40(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_40), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_41() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_41)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_41() const { return ___SendToAsyncCallback_41; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_41() { return &___SendToAsyncCallback_41; }
	inline void set_SendToAsyncCallback_41(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_41), (void*)value);
	}
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


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// Telepathy.Message
struct  Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E 
{
public:
	// System.Int32 Telepathy.Message::connectionId
	int32_t ___connectionId_0;
	// Telepathy.EventType Telepathy.Message::eventType
	int32_t ___eventType_1;
	// System.Byte[] Telepathy.Message::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_2;

public:
	inline static int32_t get_offset_of_connectionId_0() { return static_cast<int32_t>(offsetof(Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E, ___connectionId_0)); }
	inline int32_t get_connectionId_0() const { return ___connectionId_0; }
	inline int32_t* get_address_of_connectionId_0() { return &___connectionId_0; }
	inline void set_connectionId_0(int32_t value)
	{
		___connectionId_0 = value;
	}

	inline static int32_t get_offset_of_eventType_1() { return static_cast<int32_t>(offsetof(Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E, ___eventType_1)); }
	inline int32_t get_eventType_1() const { return ___eventType_1; }
	inline int32_t* get_address_of_eventType_1() { return &___eventType_1; }
	inline void set_eventType_1(int32_t value)
	{
		___eventType_1 = value;
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E, ___data_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Telepathy.Message
struct Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshaled_pinvoke
{
	int32_t ___connectionId_0;
	int32_t ___eventType_1;
	Il2CppSafeArray/*NONE*/* ___data_2;
};
// Native definition for COM marshalling of Telepathy.Message
struct Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshaled_com
{
	int32_t ___connectionId_0;
	int32_t ___eventType_1;
	Il2CppSafeArray/*NONE*/* ___data_2;
};

// System.Action`1<System.String>
struct  Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.Runtime.InteropServices.ExternalException
struct  ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.Threading.ThreadAbortException
struct  ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadInterruptedException
struct  ThreadInterruptedException_t79671BFC28D9946768F83A1CFE78A2D586FF02DD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// System.ComponentModel.Win32Exception
struct  Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950  : public ExternalException_tC18275DD0AEB2CDF9F85D94670C5A49A4DC3B783
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ErrorMessage_19), (void*)value);
	}
};


// System.Net.Sockets.SocketException
struct  SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88  : public Win32Exception_t4B7A329153AA0E88CA08533EFB6DB2F2A8E90950
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88, ___m_EndPoint_20)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EndPoint_20), (void*)value);
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
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* m_Items[1];

public:
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786_gshared (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * __this, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_mCAA526D9D64DD1C93B36BF6C49F82C4728F97E75_gshared (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * __this, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeQueue_1_Clear_mCD2A2193FFF7AF19CF7908AA0A650A2E69F3444B_gshared (SafeQueue_1_t9B70ABB8F262968251E6DF08210E15079DE0383B * __this, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeQueue_1_Enqueue_mCAB1447B24F79AF2EA8425191DAEDFC229555EB5_gshared (SafeQueue_1_t9B70ABB8F262968251E6DF08210E15079DE0383B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeQueue_1__ctor_m9D2B3D000B2A4787E4D398EF7A3162110E57D6BF_gshared (SafeQueue_1_t9B70ABB8F262968251E6DF08210E15079DE0383B * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_m6CE6DEBA832A8CE2B3C3806EDD53206E9C534209_gshared (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::TryDequeue(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_mE5F41B46AD84A7382C77884C2BBD78624DCBDFA1_gshared (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * __this, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E * ___result0, const RuntimeMethod* method);
// System.Boolean Telepathy.SafeQueue`1<System.Object>::TryDequeueAll(T[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeQueue_1_TryDequeueAll_m2035F563BCDF093D875D53A589215EBE371624F7_gshared (SafeQueue_1_t9B70ABB8F262968251E6DF08210E15079DE0383B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___result0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m16149D0F42AC3926F818A0090B7E6D697929A0CA_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<!0,!1>> System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m67FFACF481636F27C42A57B892088B9A7F8552E8_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_Clear_mF36A7B51A94CD3E33FDBC509921567DB7824FEF7_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_mBDD0D523BCABF8C1688E32497A1C48F1CD448944_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m18D74EEFBDD7A019D6D6768A70DA59EE04183267_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,System.Object>::TryRemove(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryRemove_m4429732D311DD15A8374B257B9DEC0D2D9E4CC96_gshared (ConcurrentDictionary_2_t50DB83D5B8FE299FCBE78370A6F3B9B372C8B600 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::get_Connected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Connect_m457A7B869D62CC9B54DE2914839B342DF0559003 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, String_t* ___hostname0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_NoDelay_mCF4F17DD8164A69A38002349ED84F1394E16BC79 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_SendTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_SendTimeout_mD141EFE7E09D66239D16EEAF6C23DB904D809B73 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void Telepathy.Common::ReceiveLoop(System.Int32,System.Net.Sockets.TcpClient,System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_ReceiveLoop_mA9BC4F25EC3735B00FED39C16A6BBDEA31AF638B (int32_t ___connectionId0, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client1, ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * ___receiveQueue2, int32_t ___MaxMessageSize3, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Telepathy.Message::.ctor(System.Int32,Telepathy.EventType,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m63C74E8712A025577CA98FD9B63CEDF5894689BB (Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E * __this, int32_t ___connectionId0, int32_t ___eventType1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::Enqueue(!0)
inline void ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786 (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * __this, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 *, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E , const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786_gshared)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Interrupt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Interrupt_m7FF241D0D2980F6427A0FD65928F4E28B4A8304C (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m04C08DC530186002F9BA5F1C936FED8F12AFF1C7 (U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_mAF631B73E29AF1F6BB75CD325F2326A4B2059106 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_m04BD4EDA03D1AE7183FC99DB886BD93CF85D2F2C (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_Client(System.Net.Sockets.Socket)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TcpClient_set_Client_m12167E7D3DEAEEF69AF8896152A54CE613C664FC_inline (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::.ctor()
inline void ConcurrentQueue_1__ctor_mCAA526D9D64DD1C93B36BF6C49F82C4728F97E75 (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 *, const RuntimeMethod*))ConcurrentQueue_1__ctor_mCAA526D9D64DD1C93B36BF6C49F82C4728F97E75_gshared)(__this, method);
}
// System.Void Telepathy.SafeQueue`1<System.Byte[]>::Clear()
inline void SafeQueue_1_Clear_m22602DF06941AD6C90DB25988B02E1803E0AFAF8 (SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * __this, const RuntimeMethod* method)
{
	((  void (*) (SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 *, const RuntimeMethod*))SafeQueue_1_Clear_mCD2A2193FFF7AF19CF7908AA0A650A2E69F3444B_gshared)(__this, method);
}
// System.Void Telepathy.SafeQueue`1<System.Byte[]>::Enqueue(T)
inline void SafeQueue_1_Enqueue_m7E704CE5C7C5B24C1AD9B8824B4BD10492523F75 (SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___item0, const RuntimeMethod* method)
{
	((  void (*) (SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))SafeQueue_1_Enqueue_mCAB1447B24F79AF2EA8425191DAEDFC229555EB5_gshared)(__this, ___item0, method);
}
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Telepathy.SafeQueue`1<System.Byte[]>::.ctor()
inline void SafeQueue_1__ctor_m4880D0C48C4C777B5522C1A9A423BB427E3871B0 (SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * __this, const RuntimeMethod* method)
{
	((  void (*) (SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 *, const RuntimeMethod*))SafeQueue_1__ctor_m9D2B3D000B2A4787E4D398EF7A3162110E57D6BF_gshared)(__this, method);
}
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void Telepathy.Common::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__ctor_m8519D1078F4B85DC870C3EE1BD0001CD67C94BAD (Common_t25B06616A1695440B39152B4C426E18441C11E0F * __this, const RuntimeMethod* method);
// System.Void Telepathy.Common::SendLoop(System.Int32,System.Net.Sockets.TcpClient,Telepathy.SafeQueue`1<System.Byte[]>,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_SendLoop_m0531175A13DC105C23A7E681C88ECB947E0011F5 (int32_t ___connectionId0, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client1, SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * ___sendQueue2, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___sendPending3, const RuntimeMethod* method);
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_m6CE6DEBA832A8CE2B3C3806EDD53206E9C534209 (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 *, const RuntimeMethod*))ConcurrentQueue_1_get_Count_m6CE6DEBA832A8CE2B3C3806EDD53206E9C534209_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>::TryDequeue(!0&)
inline bool ConcurrentQueue_1_TryDequeue_mE5F41B46AD84A7382C77884C2BBD78624DCBDFA1 (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * __this, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E * ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 *, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E *, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_mE5F41B46AD84A7382C77884C2BBD78624DCBDFA1_gshared)(__this, ___result0, method);
}
// System.Void Telepathy.Utils::IntToBytesBigEndianNonAlloc(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_IntToBytesBigEndianNonAlloc_mB6599C2CEA625FACCE103AAED5DED317D97318D4 (int32_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Boolean Telepathy.NetworkStreamExtensions::ReadExactly(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkStreamExtensions_ReadExactly_m0B7F210DEA57D5C3A1206F369EF3A6F2506C04E6 (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___amount2, const RuntimeMethod* method);
// System.Int32 Telepathy.Utils::BytesToIntBigEndian(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_BytesToIntBigEndian_mFBA75B217B98801987D3142AFC40BE3A25E91764 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Boolean Telepathy.Common::ReadMessageBlocking(System.Net.Sockets.NetworkStream,System.Int32,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_ReadMessageBlocking_m297C3A502DB10ACB654A13D3E834A6221441BB66 (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, int32_t ___MaxMessageSize1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___content2, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.SafeQueue`1<System.Byte[]>::TryDequeueAll(T[]&)
inline bool SafeQueue_1_TryDequeueAll_mC7B25DAFD96E16F1708FE95801B86047993FE53B (SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * __this, ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 *, ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D**, const RuntimeMethod*))SafeQueue_1_TryDequeueAll_m2035F563BCDF093D875D53A589215EBE371624F7_gshared)(__this, ___result0, method);
}
// System.Boolean Telepathy.Common::SendMessagesBlocking(System.Net.Sockets.NetworkStream,System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_SendMessagesBlocking_m9C1BEF625A1BDC07ABEB08F3840563D723C0D114 (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___messages1, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.TcpClient::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_get_Connected_m6F6E0D5E8CDF2D56756C34960B53D505640F481A (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.IO.TextWriter System.Console::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5E_inline (const RuntimeMethod* method);
// System.Int32 Telepathy.NetworkStreamExtensions::ReadSafely(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkStreamExtensions_ReadSafely_mB893276BBD1855945311D2857783DF1B847A608B (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Threading.Thread::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thread_get_IsAlive_mFA0C1391D1A22D18A7D010F251D537530B04E015 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Net.Sockets.TcpListener System.Net.Sockets.TcpListener::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * TcpListener_Create_m3649DD4158C295B4A568282B618C8DE629CE672F (int32_t ___port0, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::get_Server()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * TcpListener_get_Server_mDFBCA0876377BA9FBF4B1937D5F41268D9AE7453_inline (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::set_SendTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_set_SendTimeout_mD92AF13D6A05318E6F892F0B145136138E2181E5 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Start_m95F4F504E8BF63D90E857AF6C794AC25EF971C68 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Void Telepathy.Server/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m1F98AB35203E50714B8990E229724F99AEC68363 (U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * __this, const RuntimeMethod* method);
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * TcpListener_AcceptTcpClient_m53BD54B8278B2288877965A92644FD84BCD9D4A5 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Int32 Telepathy.Server::NextConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method);
// System.Void Telepathy.Server/ClientToken::.ctor(System.Net.Sockets.TcpClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientToken__ctor_mDEE2BD6827019F81949045A0C3B6899588ABA7F8 (ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * __this, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client0, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::set_Item(!0,!1)
inline void ConcurrentDictionary_2_set_Item_m749F9E94D4D66BBFFACB4CA3AD63224D568E4A54 (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * __this, int32_t ___key0, ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA *, int32_t, ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E *, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m16149D0F42AC3926F818A0090B7E6D697929A0CA_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Telepathy.Server/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m7A5CC5D0B3EC8D9D38B4D87CEC3818F5E009E3FE (U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447 * __this, const RuntimeMethod* method);
// System.Boolean Telepathy.Server::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Priority(System.Threading.ThreadPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Priority_m8AAD823B41BAD106012A739876628BBFDB0E7F66 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Stop_m113CEAB447C6BCDBCF91CEF94DCA602E4530C033 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<!0,!1>> System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::GetEnumerator()
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m64D7286EDE7EC249321F8A5A2211303EFA0D4ED8 (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA *, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m67FFACF481636F27C42A57B892088B9A7F8552E8_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.Server/ClientToken>::get_Value()
inline ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * KeyValuePair_2_get_Value_mA61F0E5A3ABBB6F28F06CA1295EC0A7FB10D84AF_inline (KeyValuePair_2_t03F02DAB13F3ED0A143D5AC6E5605120AD56DFFC * __this, const RuntimeMethod* method)
{
	return ((  ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * (*) (KeyValuePair_2_t03F02DAB13F3ED0A143D5AC6E5605120AD56DFFC *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::Clear()
inline void ConcurrentDictionary_2_Clear_mF108F78FB20EE33D313DE974418398F292825F93 (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA *, const RuntimeMethod*))ConcurrentDictionary_2_Clear_mF36A7B51A94CD3E33FDBC509921567DB7824FEF7_gshared)(__this, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::TryGetValue(!0,!1&)
inline bool ConcurrentDictionary_2_TryGetValue_mB49A477C37FF3E72A9B03712C5F38A902C8C172A (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * __this, int32_t ___key0, ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA *, int32_t, ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E **, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_mBDD0D523BCABF8C1688E32497A1C48F1CD448944_gshared)(__this, ___key0, ___value1, method);
}
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::.ctor()
inline void ConcurrentDictionary_2__ctor_m415558106FD3ECF678C06D3287F081F48AF685CD (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA *, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m18D74EEFBDD7A019D6D6768A70DA59EE04183267_gshared)(__this, method);
}
// System.Void System.Threading.Thread::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Abort_m9D4D14BFB0F9CC71D026C83EBF3606A6ABE96AF4 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_m7233E8FA960E446B49B0891B16EBE069265032F5 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void Telepathy.Client::ReceiveThreadFunction(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ReceiveThreadFunction_m90AEDC03B483FE6A45D5336CE078CABD026682A2 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method);
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Int32,Telepathy.Server/ClientToken>::TryRemove(!0,!1&)
inline bool ConcurrentDictionary_2_TryRemove_mB7F2E9F1BAB3CEC8E8F5AD95F420ACF7680BD7D5 (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * __this, int32_t ___key0, ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA *, int32_t, ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E **, const RuntimeMethod*))ConcurrentDictionary_2_TryRemove_m4429732D311DD15A8374B257B9DEC0D2D9E4CC96_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Telepathy.Server::Listen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Listen_mD18CE0EB1B3B66AD0B01DB22C7B3BB54AB3A3C33 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___port0, const RuntimeMethod* method);
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
// System.Boolean Telepathy.Client::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method)
{
	{
		// public bool Connected => client != null &&
		//                          client.Client != null &&
		//                          client.Client.Connected;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = __this->get_client_7();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = __this->get_client_7();
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_3 = __this->get_client_7();
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_4 = TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline(L_3, /*hidden argument*/NULL);
		bool L_5 = Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Boolean Telepathy.Client::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_get_Connecting_mAF631B73E29AF1F6BB75CD325F2326A4B2059106 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method)
{
	{
		// public bool Connecting => _Connecting;
		bool L_0 = __this->get__Connecting_10();
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
// System.Void Telepathy.Client::ReceiveThreadFunction(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ReceiveThreadFunction_m90AEDC03B483FE6A45D5336CE078CABD026682A2 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_ReceiveThreadFunction_m90AEDC03B483FE6A45D5336CE078CABD026682A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * G_B7_0 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * G_B6_0 = NULL;
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * G_B10_0 = NULL;
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * G_B9_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		// client.Connect(ip, port);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = __this->get_client_7();
		String_t* L_1 = ___ip0;
		int32_t L_2 = ___port1;
		TcpClient_Connect_m457A7B869D62CC9B54DE2914839B342DF0559003(L_0, L_1, L_2, /*hidden argument*/NULL);
		// _Connecting = false;
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_10(0);
		// client.NoDelay = NoDelay;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_3 = __this->get_client_7();
		bool L_4 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_NoDelay_2();
		TcpClient_set_NoDelay_mCF4F17DD8164A69A38002349ED84F1394E16BC79(L_3, L_4, /*hidden argument*/NULL);
		// client.SendTimeout = SendTimeout;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_5 = __this->get_client_7();
		int32_t L_6 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_SendTimeout_4();
		TcpClient_set_SendTimeout_mD141EFE7E09D66239D16EEAF6C23DB904D809B73(L_5, L_6, /*hidden argument*/NULL);
		// sendThread = new Thread(() => { SendLoop(0, client, sendQueue, sendPending); });
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_7 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_7, __this, (intptr_t)((intptr_t)Client_U3CReceiveThreadFunctionU3Eb__10_0_m7DEB3A6696908BE80013D0A83F7ED29D5E22B65F_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_8 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_8, L_7, /*hidden argument*/NULL);
		__this->set_sendThread_9(L_8);
		// sendThread.IsBackground = true;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_9 = __this->get_sendThread_9();
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_9, (bool)1, /*hidden argument*/NULL);
		// sendThread.Start();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_10 = __this->get_sendThread_9();
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_10, /*hidden argument*/NULL);
		// ReceiveLoop(0, client, receiveQueue, MaxMessageSize);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_11 = __this->get_client_7();
		ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_12 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_receiveQueue_0();
		int32_t L_13 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_3();
		IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
		Common_ReceiveLoop_mA9BC4F25EC3735B00FED39C16A6BBDEA31AF638B(0, L_11, L_12, L_13, /*hidden argument*/NULL);
		// }
		goto IL_00d0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0080;
		if(il2cpp_codegen_class_is_assignable_from (ThreadInterruptedException_t79671BFC28D9946768F83A1CFE78A2D586FF02DD_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00b2;
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00b5;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00b8;
		throw e;
	}

CATCH_0080:
	{ // begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException exception)
		V_0 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)__exception_local);
		// Logger.LogError($"Client Recv: failed to connect to ip={ip} port={port} reason={exception}");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogError_2();
		String_t* L_15 = ___ip0;
		int32_t L_16 = ___port1;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_19 = V_0;
		String_t* L_20 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralE10DF21E57CA6066F041A1325EBE500B7537702C, L_15, L_18, L_19, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_14, L_20, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// receiveQueue.Enqueue(new Message(0, EventType.Disconnected, null));
		ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_21 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_receiveQueue_0();
		Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Message__ctor_m63C74E8712A025577CA98FD9B63CEDF5894689BB((&L_22), 0, 2, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, /*hidden argument*/NULL);
		ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786(L_21, L_22, /*hidden argument*/ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786_RuntimeMethod_var);
		// }
		goto IL_00d0;
	} // end catch (depth: 1)

CATCH_00b2:
	{ // begin catch(System.Threading.ThreadInterruptedException)
		// catch (ThreadInterruptedException)
		// }
		goto IL_00d0;
	} // end catch (depth: 1)

CATCH_00b5:
	{ // begin catch(System.Threading.ThreadAbortException)
		// catch (ThreadAbortException)
		// }
		goto IL_00d0;
	} // end catch (depth: 1)

CATCH_00b8:
	{ // begin catch(System.Exception)
		// catch (Exception exception)
		V_1 = ((Exception_t *)__exception_local);
		// Logger.LogError($"Client Recv Exception: {exception}");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_23 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogError_2();
		Exception_t * L_24 = V_1;
		String_t* L_25 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral2F6A3EAA59590A10BAF2FC00B84480CD6B40146D, L_24, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_23, L_25, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// }
		goto IL_00d0;
	} // end catch (depth: 1)

IL_00d0:
	{
		// sendThread?.Interrupt();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_26 = __this->get_sendThread_9();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_27 = L_26;
		G_B6_0 = L_27;
		if (L_27)
		{
			G_B7_0 = L_27;
			goto IL_00dc;
		}
	}
	{
		goto IL_00e1;
	}

IL_00dc:
	{
		Thread_Interrupt_m7FF241D0D2980F6427A0FD65928F4E28B4A8304C(G_B7_0, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		// _Connecting = false;
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_10(0);
		// client?.Close();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_28 = __this->get_client_7();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_29 = L_28;
		G_B9_0 = L_29;
		if (L_29)
		{
			G_B10_0 = L_29;
			goto IL_00f5;
		}
	}
	{
		return;
	}

IL_00f5:
	{
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(G_B10_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Telepathy.Client::Connect(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Connect_mDB197946B2907CF0830208C4A3B8B5E967B04401 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Connect_mDB197946B2907CF0830208C4A3B8B5E967B04401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C * L_0 = (U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass11_0__ctor_m04C08DC530186002F9BA5F1C936FED8F12AFF1C7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C * L_1 = V_0;
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C * L_2 = V_0;
		String_t* L_3 = ___ip0;
		L_2->set_ip_1(L_3);
		U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C * L_4 = V_0;
		int32_t L_5 = ___port1;
		L_4->set_port_2(L_5);
		// if (Connecting || Connected)
		bool L_6 = Client_get_Connecting_mAF631B73E29AF1F6BB75CD325F2326A4B2059106(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		bool L_7 = Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}

IL_002b:
	{
		// Logger.LogWarning("Telepathy Client can not create connection because an existing connection is connecting or connected");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_8 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogWarning_1();
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_8, _stringLiteral51535E9E0618B351605C1CDB183CE725D2F1B60E, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return;
		return;
	}

IL_003b:
	{
		// _Connecting = true;
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_10(1);
		// client = new TcpClient();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_9 = (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)il2cpp_codegen_object_new(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var);
		TcpClient__ctor_m04BD4EDA03D1AE7183FC99DB886BD93CF85D2F2C(L_9, /*hidden argument*/NULL);
		__this->set_client_7(L_9);
		// client.Client = null;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_10 = __this->get_client_7();
		TcpClient_set_Client_m12167E7D3DEAEEF69AF8896152A54CE613C664FC_inline(L_10, (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 *)NULL, /*hidden argument*/NULL);
		// receiveQueue = new ConcurrentQueue<Message>();
		ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_11 = (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 *)il2cpp_codegen_object_new(ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mCAA526D9D64DD1C93B36BF6C49F82C4728F97E75(L_11, /*hidden argument*/ConcurrentQueue_1__ctor_mCAA526D9D64DD1C93B36BF6C49F82C4728F97E75_RuntimeMethod_var);
		((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->set_receiveQueue_0(L_11);
		// sendQueue.Clear();
		SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * L_12 = __this->get_sendQueue_11();
		SafeQueue_1_Clear_m22602DF06941AD6C90DB25988B02E1803E0AFAF8(L_12, /*hidden argument*/SafeQueue_1_Clear_m22602DF06941AD6C90DB25988B02E1803E0AFAF8_RuntimeMethod_var);
		// receiveThread = new Thread(() => { ReceiveThreadFunction(ip, port); });
		U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C * L_13 = V_0;
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_14 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass11_0_U3CConnectU3Eb__0_m565E786C90BE24B06C9F7B2F63C08EA00FE5450F_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_15 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_15, L_14, /*hidden argument*/NULL);
		__this->set_receiveThread_8(L_15);
		// receiveThread.IsBackground = true;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_16 = __this->get_receiveThread_8();
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_16, (bool)1, /*hidden argument*/NULL);
		// receiveThread.Start();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_17 = __this->get_receiveThread_8();
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Telepathy.Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_mAE664B949506BF0D4F3698B644416E7A95B35614 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Disconnect_mAE664B949506BF0D4F3698B644416E7A95B35614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * G_B4_0 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * G_B3_0 = NULL;
	{
		// if (Connecting || Connected)
		bool L_0 = Client_get_Connecting_mAF631B73E29AF1F6BB75CD325F2326A4B2059106(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}

IL_0010:
	{
		// client.Close();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_2 = __this->get_client_7();
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_2, /*hidden argument*/NULL);
		// receiveThread?.Interrupt();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_3 = __this->get_receiveThread_8();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0027;
		}
	}
	{
		goto IL_002c;
	}

IL_0027:
	{
		Thread_Interrupt_m7FF241D0D2980F6427A0FD65928F4E28B4A8304C(G_B4_0, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// _Connecting = false;
		il2cpp_codegen_memory_barrier();
		__this->set__Connecting_10(0);
		// sendQueue.Clear();
		SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * L_5 = __this->get_sendQueue_11();
		SafeQueue_1_Clear_m22602DF06941AD6C90DB25988B02E1803E0AFAF8(L_5, /*hidden argument*/SafeQueue_1_Clear_m22602DF06941AD6C90DB25988B02E1803E0AFAF8_RuntimeMethod_var);
		// client = null;
		__this->set_client_7((TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Boolean Telepathy.Client::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_Send_m2441CF1B3DD6E1F14995AAEB513A1460444D194C (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_Send_m2441CF1B3DD6E1F14995AAEB513A1460444D194C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Connected)
		bool L_0 = Client_get_Connected_mC86DE616D136C3556010E1CE19AC17F5B0A274C4(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		// if (data.Length <= MaxMessageSize)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		int32_t L_2 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_3();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) > ((int32_t)L_2)))
		{
			goto IL_002d;
		}
	}
	{
		// sendQueue.Enqueue(data);
		SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * L_3 = __this->get_sendQueue_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___data0;
		SafeQueue_1_Enqueue_m7E704CE5C7C5B24C1AD9B8824B4BD10492523F75(L_3, L_4, /*hidden argument*/SafeQueue_1_Enqueue_m7E704CE5C7C5B24C1AD9B8824B4BD10492523F75_RuntimeMethod_var);
		// sendPending.Set();
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_5 = __this->get_sendPending_12();
		EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_5, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_002d:
	{
		// Logger.LogError($"Client.Send: message too big: {data.Length}. Limit: {MaxMessageSize}");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogError_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___data0;
		int32_t L_8 = (((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_3();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral3947D6FCC7FD025A80CDB56551285228ACE24D09, L_9, L_12, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_6, L_13, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_0056:
	{
		// Logger.LogWarning("Client.Send: not connected!");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_14 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogWarning_1();
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_14, _stringLiteral669E9BBF3EAA6140D2DBE7CB48975026F4D7CCBA, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}
}
// System.Void Telepathy.Client::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m9576963B4B800D4683DD06E883843EAB811E16C3 (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client__ctor_m9576963B4B800D4683DD06E883843EAB811E16C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SafeQueue<byte[]> sendQueue = new SafeQueue<byte[]>();
		SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * L_0 = (SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 *)il2cpp_codegen_object_new(SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438_il2cpp_TypeInfo_var);
		SafeQueue_1__ctor_m4880D0C48C4C777B5522C1A9A423BB427E3871B0(L_0, /*hidden argument*/SafeQueue_1__ctor_m4880D0C48C4C777B5522C1A9A423BB427E3871B0_RuntimeMethod_var);
		__this->set_sendQueue_11(L_0);
		// ManualResetEvent sendPending = new ManualResetEvent(false);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_1 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_1, (bool)0, /*hidden argument*/NULL);
		__this->set_sendPending_12(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
		Common__ctor_m8519D1078F4B85DC870C3EE1BD0001CD67C94BAD(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Client::<ReceiveThreadFunction>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_U3CReceiveThreadFunctionU3Eb__10_0_m7DEB3A6696908BE80013D0A83F7ED29D5E22B65F (Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Client_U3CReceiveThreadFunctionU3Eb__10_0_m7DEB3A6696908BE80013D0A83F7ED29D5E22B65F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sendThread = new Thread(() => { SendLoop(0, client, sendQueue, sendPending); });
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = __this->get_client_7();
		SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * L_1 = __this->get_sendQueue_11();
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = __this->get_sendPending_12();
		IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
		Common_SendLoop_m0531175A13DC105C23A7E681C88ECB947E0011F5(0, L_0, L_1, L_2, /*hidden argument*/NULL);
		// sendThread = new Thread(() => { SendLoop(0, client, sendQueue, sendPending); });
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
// System.Int32 Telepathy.Common::get_ReceiveQueueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Common_get_ReceiveQueueCount_m204E15F1732CEB18652AA5819DBF43DB92F653AF (Common_t25B06616A1695440B39152B4C426E18441C11E0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_get_ReceiveQueueCount_m204E15F1732CEB18652AA5819DBF43DB92F653AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ReceiveQueueCount => receiveQueue.Count;
		ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_0 = __this->get_receiveQueue_0();
		int32_t L_1 = ConcurrentQueue_1_get_Count_m6CE6DEBA832A8CE2B3C3806EDD53206E9C534209(L_0, /*hidden argument*/ConcurrentQueue_1_get_Count_m6CE6DEBA832A8CE2B3C3806EDD53206E9C534209_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Telepathy.Common::GetNextMessage(Telepathy.Message&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_GetNextMessage_m3F49E815607BFB6E834437021C3859C53E63FA1D (Common_t25B06616A1695440B39152B4C426E18441C11E0F * __this, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_GetNextMessage_m3F49E815607BFB6E834437021C3859C53E63FA1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return receiveQueue.TryDequeue(out message);
		ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_0 = __this->get_receiveQueue_0();
		Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E * L_1 = ___message0;
		bool L_2 = ConcurrentQueue_1_TryDequeue_mE5F41B46AD84A7382C77884C2BBD78624DCBDFA1(L_0, (Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E *)L_1, /*hidden argument*/ConcurrentQueue_1_TryDequeue_mE5F41B46AD84A7382C77884C2BBD78624DCBDFA1_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Telepathy.Common::SendMessagesBlocking(System.Net.Sockets.NetworkStream,System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_SendMessagesBlocking_m9C1BEF625A1BDC07ABEB08F3840563D723C0D114 (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ___messages1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_SendMessagesBlocking_m9C1BEF625A1BDC07ABEB08F3840563D723C0D114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// int packetSize = 0;
			V_0 = 0;
			// for (int i = 0; i < messages.Length; ++i)
			V_2 = 0;
			goto IL_0014;
		}

IL_0006:
		{
			// packetSize += sizeof(int) + messages[i].Length;
			int32_t L_0 = V_0;
			ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_1 = ___messages1;
			int32_t L_2 = V_2;
			int32_t L_3 = L_2;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))));
			// for (int i = 0; i < messages.Length; ++i)
			int32_t L_5 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		}

IL_0014:
		{
			// for (int i = 0; i < messages.Length; ++i)
			int32_t L_6 = V_2;
			ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_7 = ___messages1;
			if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))))
			{
				goto IL_0006;
			}
		}

IL_001a:
		{
			// if (payload == null || payload.Length < packetSize)
			IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_payload_6();
			if (!L_8)
			{
				goto IL_002b;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_payload_6();
			int32_t L_10 = V_0;
			if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))) >= ((int32_t)L_10)))
			{
				goto IL_0036;
			}
		}

IL_002b:
		{
			// payload = new byte[packetSize];
			int32_t L_11 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_11);
			IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
			((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->set_payload_6(L_12);
		}

IL_0036:
		{
			// int position = 0;
			V_1 = 0;
			// for (int i = 0; i < messages.Length; ++i)
			V_3 = 0;
			goto IL_00a5;
		}

IL_003c:
		{
			// if (header == null)
			IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_header_5();
			if (L_13)
			{
				goto IL_004e;
			}
		}

IL_0043:
		{
			// header = new byte[4];
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
			IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
			((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->set_header_5(L_14);
		}

IL_004e:
		{
			// Utils.IntToBytesBigEndianNonAlloc(messages[i].Length, header);
			ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_15 = ___messages1;
			int32_t L_16 = V_3;
			int32_t L_17 = L_16;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
			IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_header_5();
			Utils_IntToBytesBigEndianNonAlloc_mB6599C2CEA625FACCE103AAED5DED317D97318D4((((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))), L_19, /*hidden argument*/NULL);
			// Array.Copy(header, 0, payload, position, header.Length);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_header_5();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_payload_6();
			int32_t L_22 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_header_5();
			Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_20, 0, (RuntimeArray *)(RuntimeArray *)L_21, L_22, (((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))), /*hidden argument*/NULL);
			// Array.Copy(messages[i], 0, payload, position + header.Length, messages[i].Length);
			ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_24 = ___messages1;
			int32_t L_25 = V_3;
			int32_t L_26 = L_25;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_payload_6();
			int32_t L_29 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_header_5();
			ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_31 = ___messages1;
			int32_t L_32 = V_3;
			int32_t L_33 = L_32;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
			Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_27, 0, (RuntimeArray *)(RuntimeArray *)L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))), (((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))), /*hidden argument*/NULL);
			// position += header.Length + messages[i].Length;
			int32_t L_35 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_header_5();
			ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_37 = ___messages1;
			int32_t L_38 = V_3;
			int32_t L_39 = L_38;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))));
			// for (int i = 0; i < messages.Length; ++i)
			int32_t L_41 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		}

IL_00a5:
		{
			// for (int i = 0; i < messages.Length; ++i)
			int32_t L_42 = V_3;
			ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_43 = ___messages1;
			if ((((int32_t)L_42) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))))
			{
				goto IL_003c;
			}
		}

IL_00ab:
		{
			// stream.Write(payload, 0, packetSize);
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_44 = ___stream0;
			IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_payload_6();
			int32_t L_46 = V_0;
			VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_44, L_45, 0, L_46);
			// return true;
			V_4 = (bool)1;
			goto IL_00da;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00bd;
		throw e;
	}

CATCH_00bd:
	{ // begin catch(System.Exception)
		// catch (Exception exception)
		V_5 = ((Exception_t *)__exception_local);
		// Logger.Log("Send: stream.Write exception: " + exception);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_47 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_Log_0();
		Exception_t * L_48 = V_5;
		String_t* L_49 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral8CA3CC30341FE08793C351B1C0039EFB12120E14, L_48, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_47, L_49, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return false;
		V_4 = (bool)0;
		goto IL_00da;
	} // end catch (depth: 1)

IL_00da:
	{
		// }
		bool L_50 = V_4;
		return L_50;
	}
}
// System.Boolean Telepathy.Common::ReadMessageBlocking(System.Net.Sockets.NetworkStream,System.Int32,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Common_ReadMessageBlocking_m297C3A502DB10ACB654A13D3E834A6221441BB66 (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, int32_t ___MaxMessageSize1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___content2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_ReadMessageBlocking_m297C3A502DB10ACB654A13D3E834A6221441BB66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// content = null;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_0 = ___content2;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (header == null)
		IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_header_5();
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// header = new byte[4];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
		((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->set_header_5(L_2);
	}

IL_0015:
	{
		// if (!stream.ReadExactly(header, 4))
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_3 = ___stream0;
		IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_header_5();
		bool L_5 = NetworkStreamExtensions_ReadExactly_m0B7F210DEA57D5C3A1206F369EF3A6F2506C04E6(L_3, L_4, 4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0025:
	{
		// int size = Utils.BytesToIntBigEndian(header);
		IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_header_5();
		int32_t L_7 = Utils_BytesToIntBigEndian_mFBA75B217B98801987D3142AFC40BE3A25E91764(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (size > 0 && size <= MaxMessageSize)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___MaxMessageSize1;
		if ((((int32_t)L_9) > ((int32_t)L_10)))
		{
			goto IL_004a;
		}
	}
	{
		// content = new byte[size];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_11 = ___content2;
		int32_t L_12 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_12);
		*((RuntimeObject **)L_11) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)L_13);
		// return stream.ReadExactly(content, size);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_14 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_15 = ___content2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = *((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_15);
		int32_t L_17 = V_0;
		bool L_18 = NetworkStreamExtensions_ReadExactly_m0B7F210DEA57D5C3A1206F369EF3A6F2506C04E6(L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_004a:
	{
		// Logger.LogWarning("ReadMessageBlocking: possible header attack with a header of: " + size + " bytes.");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_19 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogWarning_1();
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(_stringLiteral9E9CE304B35E2CD4EF8C65E2BBD168076BF916D5, L_22, _stringLiteral8020C7D6696CB083F06538A14CF53AFC87D4339B, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_19, L_23, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}
}
// System.Void Telepathy.Common::ReceiveLoop(System.Int32,System.Net.Sockets.TcpClient,System.Collections.Concurrent.ConcurrentQueue`1<Telepathy.Message>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_ReceiveLoop_mA9BC4F25EC3735B00FED39C16A6BBDEA31AF638B (int32_t ___connectionId0, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client1, ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * ___receiveQueue2, int32_t ___MaxMessageSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_ReceiveLoop_mA9BC4F25EC3735B00FED39C16A6BBDEA31AF638B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * V_0 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// NetworkStream stream = client.GetStream();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = ___client1;
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_1 = TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// DateTime messageQueueLastWarning = DateTime.Now;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// receiveQueue.Enqueue(new Message(connectionId, EventType.Connected, null));
				ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_3 = ___receiveQueue2;
				int32_t L_4 = ___connectionId0;
				Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E  L_5;
				memset((&L_5), 0, sizeof(L_5));
				Message__ctor_m63C74E8712A025577CA98FD9B63CEDF5894689BB((&L_5), L_4, 0, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, /*hidden argument*/NULL);
				ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786(L_3, L_5, /*hidden argument*/ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786_RuntimeMethod_var);
			}

IL_001b:
			{
				// if (!ReadMessageBlocking(stream, MaxMessageSize, out content))
				NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_6 = V_0;
				int32_t L_7 = ___MaxMessageSize3;
				IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
				bool L_8 = Common_ReadMessageBlocking_m297C3A502DB10ACB654A13D3E834A6221441BB66(L_6, L_7, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)(&V_2), /*hidden argument*/NULL);
				if (!L_8)
				{
					goto IL_008b;
				}
			}

IL_0026:
			{
				// receiveQueue.Enqueue(new Message(connectionId, EventType.Data, content));
				ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_9 = ___receiveQueue2;
				int32_t L_10 = ___connectionId0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_2;
				Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E  L_12;
				memset((&L_12), 0, sizeof(L_12));
				Message__ctor_m63C74E8712A025577CA98FD9B63CEDF5894689BB((&L_12), L_10, 1, L_11, /*hidden argument*/NULL);
				ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786(L_9, L_12, /*hidden argument*/ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786_RuntimeMethod_var);
				// if (receiveQueue.Count > messageQueueSizeWarning)
				ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_13 = ___receiveQueue2;
				int32_t L_14 = ConcurrentQueue_1_get_Count_m6CE6DEBA832A8CE2B3C3806EDD53206E9C534209(L_13, /*hidden argument*/ConcurrentQueue_1_get_Count_m6CE6DEBA832A8CE2B3C3806EDD53206E9C534209_RuntimeMethod_var);
				IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
				int32_t L_15 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F_StaticFields*)il2cpp_codegen_static_fields_for(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->get_messageQueueSizeWarning_1();
				if ((((int32_t)L_14) <= ((int32_t)L_15)))
				{
					goto IL_001b;
				}
			}

IL_0041:
			{
				// TimeSpan elapsed = DateTime.Now - messageQueueLastWarning;
				IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
				DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_16 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
				DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_17 = V_1;
				TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_18 = DateTime_op_Subtraction_m67E0BD5004FEDD3A704BC74B9DC858C9BCED4DF2(L_16, L_17, /*hidden argument*/NULL);
				V_3 = L_18;
				// if (elapsed.TotalSeconds > 10)
				double L_19 = TimeSpan_get_TotalSeconds_m28CDC7B9ADFEAFF912CC9B66984090CFE60B9AA4((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&V_3), /*hidden argument*/NULL);
				if ((!(((double)L_19) > ((double)(10.0)))))
				{
					goto IL_001b;
				}
			}

IL_005f:
			{
				// Logger.LogWarning("ReceiveLoop: messageQueue is getting big(" + receiveQueue.Count + "), try calling GetNextMessage more often. You can call it more than once per frame!");
				IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
				Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_20 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogWarning_1();
				ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_21 = ___receiveQueue2;
				int32_t L_22 = ConcurrentQueue_1_get_Count_m6CE6DEBA832A8CE2B3C3806EDD53206E9C534209(L_21, /*hidden argument*/ConcurrentQueue_1_get_Count_m6CE6DEBA832A8CE2B3C3806EDD53206E9C534209_RuntimeMethod_var);
				int32_t L_23 = L_22;
				RuntimeObject * L_24 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_23);
				String_t* L_25 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(_stringLiteral380B755B17023C36F4FF9823E8E75595F0125871, L_24, _stringLiteralA094D1FC9B83307C1079CEA3C810341FC29309A1, /*hidden argument*/NULL);
				Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_20, L_25, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
				// messageQueueLastWarning = DateTime.Now;
				IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
				DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_26 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
				V_1 = L_26;
				// while (true)
				goto IL_001b;
			}

IL_008b:
			{
				// }
				IL2CPP_LEAVE(0xDF, FINALLY_00c4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_008d;
			throw e;
		}

CATCH_008d:
		{ // begin catch(System.Exception)
			// catch (Exception exception)
			V_4 = ((Exception_t *)__exception_local);
			// Logger.Log("ReceiveLoop: finished receive function for connectionId=" + connectionId + " reason: " + exception);
			IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_27 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_Log_0();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_28;
			ArrayElementTypeCheck (L_29, _stringLiteral40FE124641630DD87D55A00B1E3EAF61E8E7780A);
			(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral40FE124641630DD87D55A00B1E3EAF61E8E7780A);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_29;
			int32_t L_31 = ___connectionId0;
			int32_t L_32 = L_31;
			RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
			ArrayElementTypeCheck (L_30, L_33);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_33);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_30;
			ArrayElementTypeCheck (L_34, _stringLiteral78BDF721B11718576BCF4DDEE144119DECDF4AE4);
			(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral78BDF721B11718576BCF4DDEE144119DECDF4AE4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_35 = L_34;
			Exception_t * L_36 = V_4;
			ArrayElementTypeCheck (L_35, L_36);
			(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_36);
			String_t* L_37 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_35, /*hidden argument*/NULL);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_27, L_37, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0xDF, FINALLY_00c4);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c4;
	}

FINALLY_00c4:
	{ // begin finally (depth: 1)
		// stream.Close();
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_38 = V_0;
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_38);
		// client.Close();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_39 = ___client1;
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_39, /*hidden argument*/NULL);
		// receiveQueue.Enqueue(new Message(connectionId, EventType.Disconnected, null));
		ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_40 = ___receiveQueue2;
		int32_t L_41 = ___connectionId0;
		Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Message__ctor_m63C74E8712A025577CA98FD9B63CEDF5894689BB((&L_42), L_41, 2, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, /*hidden argument*/NULL);
		ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786(L_40, L_42, /*hidden argument*/ConcurrentQueue_1_Enqueue_m4A87F1E9B759A1E33ADF34AFD31623AF95FFD786_RuntimeMethod_var);
		// }
		IL2CPP_END_FINALLY(196)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(196)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDF, IL_00df)
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void Telepathy.Common::SendLoop(System.Int32,System.Net.Sockets.TcpClient,Telepathy.SafeQueue`1<System.Byte[]>,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common_SendLoop_m0531175A13DC105C23A7E681C88ECB947E0011F5 (int32_t ___connectionId0, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client1, SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * ___sendQueue2, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___sendPending3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_SendLoop_m0531175A13DC105C23A7E681C88ECB947E0011F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * V_0 = NULL;
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// NetworkStream stream = client.GetStream();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = ___client1;
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_1 = TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				goto IL_002a;
			}

IL_0009:
			{
				// sendPending.Reset();
				ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = ___sendPending3;
				EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_2, /*hidden argument*/NULL);
				// if (sendQueue.TryDequeueAll(out messages))
				SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * L_3 = ___sendQueue2;
				bool L_4 = SafeQueue_1_TryDequeueAll_mC7B25DAFD96E16F1708FE95801B86047993FE53B(L_3, (ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D**)(&V_1), /*hidden argument*/SafeQueue_1_TryDequeueAll_mC7B25DAFD96E16F1708FE95801B86047993FE53B_RuntimeMethod_var);
				if (!L_4)
				{
					goto IL_0023;
				}
			}

IL_001a:
			{
				// if (!SendMessagesBlocking(stream, messages))
				NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_5 = V_0;
				ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* L_6 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
				bool L_7 = Common_SendMessagesBlocking_m9C1BEF625A1BDC07ABEB08F3840563D723C0D114(L_5, L_6, /*hidden argument*/NULL);
				if (!L_7)
				{
					goto IL_0032;
				}
			}

IL_0023:
			{
				// sendPending.WaitOne();
				ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_8 = ___sendPending3;
				VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_8);
			}

IL_002a:
			{
				// while (client.Connected)
				TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_9 = ___client1;
				bool L_10 = TcpClient_get_Connected_m6F6E0D5E8CDF2D56756C34960B53D505640F481A(L_9, /*hidden argument*/NULL);
				if (L_10)
				{
					goto IL_0009;
				}
			}

IL_0032:
			{
				// }
				IL2CPP_LEAVE(0x7C, FINALLY_006f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0034;
			if(il2cpp_codegen_class_is_assignable_from (ThreadInterruptedException_t79671BFC28D9946768F83A1CFE78A2D586FF02DD_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0037;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_003a;
			throw e;
		}

CATCH_0034:
		{ // begin catch(System.Threading.ThreadAbortException)
			// catch (ThreadAbortException)
			// }
			IL2CPP_LEAVE(0x7C, FINALLY_006f);
		} // end catch (depth: 2)

CATCH_0037:
		{ // begin catch(System.Threading.ThreadInterruptedException)
			// catch (ThreadInterruptedException)
			// }
			IL2CPP_LEAVE(0x7C, FINALLY_006f);
		} // end catch (depth: 2)

CATCH_003a:
		{ // begin catch(System.Exception)
			// catch (Exception exception)
			V_2 = ((Exception_t *)__exception_local);
			// Logger.Log("SendLoop Exception: connectionId=" + connectionId + " reason: " + exception);
			IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_11 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_Log_0();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
			ArrayElementTypeCheck (L_13, _stringLiteral813C2ECFD392D8A25AA9609C2EC1761E004EFE10);
			(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral813C2ECFD392D8A25AA9609C2EC1761E004EFE10);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
			int32_t L_15 = ___connectionId0;
			int32_t L_16 = L_15;
			RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_14;
			ArrayElementTypeCheck (L_18, _stringLiteral78BDF721B11718576BCF4DDEE144119DECDF4AE4);
			(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral78BDF721B11718576BCF4DDEE144119DECDF4AE4);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_18;
			Exception_t * L_20 = V_2;
			ArrayElementTypeCheck (L_19, L_20);
			(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
			String_t* L_21 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_19, /*hidden argument*/NULL);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_11, L_21, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x7C, FINALLY_006f);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{ // begin finally (depth: 1)
		// stream.Close();
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_22 = V_0;
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_22);
		// client.Close();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_23 = ___client1;
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_23, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(111)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Telepathy.Common::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__ctor_m8519D1078F4B85DC870C3EE1BD0001CD67C94BAD (Common_t25B06616A1695440B39152B4C426E18441C11E0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common__ctor_m8519D1078F4B85DC870C3EE1BD0001CD67C94BAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ConcurrentQueue<Message> receiveQueue = new ConcurrentQueue<Message>();
		ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_0 = (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 *)il2cpp_codegen_object_new(ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mCAA526D9D64DD1C93B36BF6C49F82C4728F97E75(L_0, /*hidden argument*/ConcurrentQueue_1__ctor_mCAA526D9D64DD1C93B36BF6C49F82C4728F97E75_RuntimeMethod_var);
		__this->set_receiveQueue_0(L_0);
		// public bool NoDelay = true;
		__this->set_NoDelay_2((bool)1);
		// public int MaxMessageSize = 16 * 1024;
		__this->set_MaxMessageSize_3(((int32_t)16384));
		// public int SendTimeout = 5000;
		__this->set_SendTimeout_4(((int32_t)5000));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Common::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Common__cctor_mD552B7C53F8BC750B782C499A0D905000188DA81 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common__cctor_mD552B7C53F8BC750B782C499A0D905000188DA81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int messageQueueSizeWarning = 100000;
		((Common_t25B06616A1695440B39152B4C426E18441C11E0F_StaticFields*)il2cpp_codegen_static_fields_for(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var))->set_messageQueueSizeWarning_1(((int32_t)100000));
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
// System.Void Telepathy.Logger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__cctor_m3610CDBBBEC44DA7B0EC7DFE6C19CCD7B3510FB6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Logger__cctor_m3610CDBBBEC44DA7B0EC7DFE6C19CCD7B3510FB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<string> Log = Console.WriteLine;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_0, NULL, (intptr_t)((intptr_t)Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->set_Log_0(L_0);
		// public static Action<string> LogWarning = Console.WriteLine;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_1, NULL, (intptr_t)((intptr_t)Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->set_LogWarning_1(L_1);
		// public static Action<string> LogError = Console.Error.WriteLine;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5E_inline(/*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_3 = L_2;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_4 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_4, L_3, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_3, 18)), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->set_LogError_2(L_4);
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
// Conversion methods for marshalling of: Telepathy.Message
IL2CPP_EXTERN_C void Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshal_pinvoke(const Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E& unmarshaled, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshaled_pinvoke& marshaled)
{
	marshaled.___connectionId_0 = unmarshaled.get_connectionId_0();
	marshaled.___eventType_1 = unmarshaled.get_eventType_1();
	marshaled.___data_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_data_2());
}
IL2CPP_EXTERN_C void Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshal_pinvoke_back(const Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshaled_pinvoke& marshaled, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_connectionId_temp_0 = 0;
	unmarshaled_connectionId_temp_0 = marshaled.___connectionId_0;
	unmarshaled.set_connectionId_0(unmarshaled_connectionId_temp_0);
	int32_t unmarshaled_eventType_temp_1 = 0;
	unmarshaled_eventType_temp_1 = marshaled.___eventType_1;
	unmarshaled.set_eventType_1(unmarshaled_eventType_temp_1);
	unmarshaled.set_data_2((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___data_2));
}
// Conversion method for clean up from marshalling of: Telepathy.Message
IL2CPP_EXTERN_C void Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshal_pinvoke_cleanup(Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___data_2);
	marshaled.___data_2 = NULL;
}
// Conversion methods for marshalling of: Telepathy.Message
IL2CPP_EXTERN_C void Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshal_com(const Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E& unmarshaled, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshaled_com& marshaled)
{
	marshaled.___connectionId_0 = unmarshaled.get_connectionId_0();
	marshaled.___eventType_1 = unmarshaled.get_eventType_1();
	marshaled.___data_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_data_2());
}
IL2CPP_EXTERN_C void Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshal_com_back(const Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshaled_com& marshaled, Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_connectionId_temp_0 = 0;
	unmarshaled_connectionId_temp_0 = marshaled.___connectionId_0;
	unmarshaled.set_connectionId_0(unmarshaled_connectionId_temp_0);
	int32_t unmarshaled_eventType_temp_1 = 0;
	unmarshaled_eventType_temp_1 = marshaled.___eventType_1;
	unmarshaled.set_eventType_1(unmarshaled_eventType_temp_1);
	unmarshaled.set_data_2((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___data_2));
}
// Conversion method for clean up from marshalling of: Telepathy.Message
IL2CPP_EXTERN_C void Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshal_com_cleanup(Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___data_2);
	marshaled.___data_2 = NULL;
}
// System.Void Telepathy.Message::.ctor(System.Int32,Telepathy.EventType,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m63C74E8712A025577CA98FD9B63CEDF5894689BB (Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E * __this, int32_t ___connectionId0, int32_t ___eventType1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, const RuntimeMethod* method)
{
	{
		// this.connectionId = connectionId;
		int32_t L_0 = ___connectionId0;
		__this->set_connectionId_0(L_0);
		// this.eventType = eventType;
		int32_t L_1 = ___eventType1;
		__this->set_eventType_1(L_1);
		// this.data = data;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data2;
		__this->set_data_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Message__ctor_m63C74E8712A025577CA98FD9B63CEDF5894689BB_AdjustorThunk (RuntimeObject * __this, int32_t ___connectionId0, int32_t ___eventType1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E * _thisAdjusted = reinterpret_cast<Message_tF359F6B17DF8E634E28EC4A61B39E32912E43A6E *>(__this + _offset);
	Message__ctor_m63C74E8712A025577CA98FD9B63CEDF5894689BB(_thisAdjusted, ___connectionId0, ___eventType1, ___data2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Telepathy.NetworkStreamExtensions::ReadSafely(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkStreamExtensions_ReadSafely_mB893276BBD1855945311D2857783DF1B847A608B (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___offset2, int32_t ___size3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkStreamExtensions_ReadSafely_mB893276BBD1855945311D2857783DF1B847A608B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// return stream.Read(buffer, offset, size);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_0 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer1;
		int32_t L_2 = ___offset2;
		int32_t L_3 = ___size3;
		int32_t L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(24 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0011;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000c;
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.IO.IOException)
		// catch (IOException)
		// return 0;
		V_0 = 0;
		goto IL_0011;
	} // end catch (depth: 1)

IL_0011:
	{
		// }
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Telepathy.NetworkStreamExtensions::ReadExactly(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkStreamExtensions_ReadExactly_m0B7F210DEA57D5C3A1206F369EF3A6F2506C04E6 (NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, int32_t ___amount2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int bytesRead = 0;
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		// int remaining = amount - bytesRead;
		int32_t L_0 = ___amount2;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		// int result = stream.ReadSafely(buffer, bytesRead, remaining);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_2 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer1;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = NetworkStreamExtensions_ReadSafely_mB893276BBD1855945311D2857783DF1B847A608B(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// if (result == 0)
		int32_t L_7 = V_2;
		if (L_7)
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// bytesRead += result;
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
	}

IL_001b:
	{
		// while (bytesRead < amount)
		int32_t L_10 = V_0;
		int32_t L_11 = ___amount2;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
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
// System.Int32 Telepathy.Server::NextConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int id = Interlocked.Increment(ref counter);
		int32_t* L_0 = __this->get_address_of_counter_10();
		int32_t L_1 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (id == int.MaxValue)
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002a;
		}
	}
	{
		// throw new Exception("connection id limit reached: " + id);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral4D87D9F561182AA5628B8C78869C5C1AE33F0A33, L_5, /*hidden argument*/NULL);
		Exception_t * L_7 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794_RuntimeMethod_var);
	}

IL_002a:
	{
		// return id;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Telepathy.Server::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method)
{
	{
		// public bool Active => listenerThread != null && listenerThread.IsAlive;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0 = __this->get_listenerThread_8();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1 = __this->get_listenerThread_8();
		bool L_2 = Thread_get_IsAlive_mFA0C1391D1A22D18A7D010F251D537530B04E015(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Telepathy.Server::Listen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Listen_mD18CE0EB1B3B66AD0B01DB22C7B3BB54AB3A3C33 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___port0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Listen_mD18CE0EB1B3B66AD0B01DB22C7B3BB54AB3A3C33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * V_0 = NULL;
	ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 * V_1 = NULL;
	SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * V_2 = NULL;
	Exception_t * V_3 = NULL;
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
			// listener = TcpListener.Create(port);
			int32_t L_0 = ___port0;
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_1 = TcpListener_Create_m3649DD4158C295B4A568282B618C8DE629CE672F(L_0, /*hidden argument*/NULL);
			__this->set_listener_7(L_1);
			// listener.Server.NoDelay = NoDelay;
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_2 = __this->get_listener_7();
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_3 = TcpListener_get_Server_mDFBCA0876377BA9FBF4B1937D5F41268D9AE7453_inline(L_2, /*hidden argument*/NULL);
			bool L_4 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_NoDelay_2();
			Socket_set_NoDelay_m34DCB8BF5275A85E1687308D0D016E860F229732(L_3, L_4, /*hidden argument*/NULL);
			// listener.Server.SendTimeout = SendTimeout;
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_5 = __this->get_listener_7();
			Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_6 = TcpListener_get_Server_mDFBCA0876377BA9FBF4B1937D5F41268D9AE7453_inline(L_5, /*hidden argument*/NULL);
			int32_t L_7 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_SendTimeout_4();
			Socket_set_SendTimeout_mD92AF13D6A05318E6F892F0B145136138E2181E5(L_6, L_7, /*hidden argument*/NULL);
			// listener.Start();
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_8 = __this->get_listener_7();
			TcpListener_Start_m95F4F504E8BF63D90E857AF6C794AC25EF971C68(L_8, /*hidden argument*/NULL);
			// Logger.Log("Server: listening port=" + port);
			IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_9 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_Log_0();
			int32_t L_10 = ___port0;
			int32_t L_11 = L_10;
			RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
			String_t* L_13 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralF897DA240CE2C2852CEAB4B37E66C1E8CE1D8AD8, L_12, /*hidden argument*/NULL);
			Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_9, L_13, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		}

IL_005d:
		{
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_14 = (U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass8_0__ctor_m1F98AB35203E50714B8990E229724F99AEC68363(L_14, /*hidden argument*/NULL);
			V_0 = L_14;
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_15 = V_0;
			L_15->set_U3CU3E4__this_4(__this);
			// TcpClient client = listener.AcceptTcpClient();
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_16 = V_0;
			TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_17 = __this->get_listener_7();
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_18 = TcpListener_AcceptTcpClient_m53BD54B8278B2288877965A92644FD84BCD9D4A5(L_17, /*hidden argument*/NULL);
			L_16->set_client_1(L_18);
			// client.NoDelay = NoDelay;
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_19 = V_0;
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_20 = L_19->get_client_1();
			bool L_21 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_NoDelay_2();
			TcpClient_set_NoDelay_mCF4F17DD8164A69A38002349ED84F1394E16BC79(L_20, L_21, /*hidden argument*/NULL);
			// client.SendTimeout = SendTimeout;
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_22 = V_0;
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_23 = L_22->get_client_1();
			int32_t L_24 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_SendTimeout_4();
			TcpClient_set_SendTimeout_mD141EFE7E09D66239D16EEAF6C23DB904D809B73(L_23, L_24, /*hidden argument*/NULL);
			// int connectionId = NextConnectionId();
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_25 = V_0;
			int32_t L_26 = Server_NextConnectionId_mF1604F268FEE0CC873D00C5F30E8BA6770DF8794(__this, /*hidden argument*/NULL);
			L_25->set_connectionId_0(L_26);
			// ClientToken token = new ClientToken(client);
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_27 = V_0;
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_28 = V_0;
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_29 = L_28->get_client_1();
			ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * L_30 = (ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E *)il2cpp_codegen_object_new(ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E_il2cpp_TypeInfo_var);
			ClientToken__ctor_mDEE2BD6827019F81949045A0C3B6899588ABA7F8(L_30, L_29, /*hidden argument*/NULL);
			L_27->set_token_2(L_30);
			// clients[connectionId] = token;
			ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * L_31 = __this->get_clients_9();
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_32 = V_0;
			int32_t L_33 = L_32->get_connectionId_0();
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_34 = V_0;
			ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * L_35 = L_34->get_token_2();
			ConcurrentDictionary_2_set_Item_m749F9E94D4D66BBFFACB4CA3AD63224D568E4A54(L_31, L_33, L_35, /*hidden argument*/ConcurrentDictionary_2_set_Item_m749F9E94D4D66BBFFACB4CA3AD63224D568E4A54_RuntimeMethod_var);
			// Thread sendThread = new Thread(() =>
			// {
			//     
			//     
			//     try
			//     {
			//         
			//         SendLoop(connectionId, client, token.sendQueue, token.sendPending);
			//     }
			//     catch (ThreadAbortException)
			//     {
			//         
			//         
			//         
			//         
			//     }
			//     catch (Exception exception)
			//     {
			//         Logger.LogError("Server send thread exception: " + exception);
			//     }
			// });
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_36 = V_0;
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_37 = V_0;
			ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_38 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_38, L_37, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__0_m10DB810FBF1825FEA42D056D67601672EDDC64D2_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_39 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
			Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_39, L_38, /*hidden argument*/NULL);
			L_36->set_sendThread_3(L_39);
			// sendThread.IsBackground = true;
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_40 = V_0;
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_41 = L_40->get_sendThread_3();
			Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_41, (bool)1, /*hidden argument*/NULL);
			// sendThread.Start();
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_42 = V_0;
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_43 = L_42->get_sendThread_3();
			Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_43, /*hidden argument*/NULL);
			// Thread receiveThread = new Thread(() =>
			// {
			//     
			//     
			//     try
			//     {
			//         
			//         ReceiveLoop(connectionId, client, receiveQueue, MaxMessageSize);
			// 
			//         
			//         clients.TryRemove(connectionId, out ClientToken _);
			// 
			//         
			//         
			//         
			//         
			//         
			//         
			//         sendThread.Interrupt();
			//     }
			//     catch (Exception exception)
			//     {
			//         Logger.LogError("Server client thread exception: " + exception);
			//     }
			// });
			U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * L_44 = V_0;
			ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_45 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_45, L_44, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__1_m1B96A615C44C7A88A103ADEAA8F65005E81EDADE_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_46 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
			Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_46, L_45, /*hidden argument*/NULL);
			// receiveThread.IsBackground = true;
			Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_47 = L_46;
			Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_47, (bool)1, /*hidden argument*/NULL);
			// receiveThread.Start();
			Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_47, /*hidden argument*/NULL);
			// while (true)
			goto IL_005d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0121;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0139;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0151;
		throw e;
	}

CATCH_0121:
	{ // begin catch(System.Threading.ThreadAbortException)
		// catch (ThreadAbortException exception)
		V_1 = ((ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 *)__exception_local);
		// Logger.Log("Server thread aborted. That's okay. " + exception);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_48 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_Log_0();
		ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153 * L_49 = V_1;
		String_t* L_50 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralF3020C29380E843AD920758CE3613F4BE5BCFD87, L_49, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_48, L_50, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// }
		goto IL_0169;
	} // end catch (depth: 1)

CATCH_0139:
	{ // begin catch(System.Net.Sockets.SocketException)
		// catch (SocketException exception)
		V_2 = ((SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 *)__exception_local);
		// Logger.Log("Server Thread stopped. That's okay. " + exception);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_51 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_Log_0();
		SocketException_tB04D4347A4A41DC1A8583BBAE5A7C990F78C1E88 * L_52 = V_2;
		String_t* L_53 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral836FAE3C06390C4BBEF008C97F59F519B064497E, L_52, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_51, L_53, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// }
		goto IL_0169;
	} // end catch (depth: 1)

CATCH_0151:
	{ // begin catch(System.Exception)
		// catch (Exception exception)
		V_3 = ((Exception_t *)__exception_local);
		// Logger.LogError("Server Exception: " + exception);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_54 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogError_2();
		Exception_t * L_55 = V_3;
		String_t* L_56 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral29EFA7B69EABF3CC848F04677350EBCCB484032A, L_55, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_54, L_56, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// }
		goto IL_0169;
	} // end catch (depth: 1)

IL_0169:
	{
		// }
		return;
	}
}
// System.Boolean Telepathy.Server::Start(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Start_mA3609AF20E968EBDF19F8DC77776B69CA9E7A7EE (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___port0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Start_mA3609AF20E968EBDF19F8DC77776B69CA9E7A7EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447 * L_0 = (U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_m7A5CC5D0B3EC8D9D38B4D87CEC3818F5E009E3FE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447 * L_1 = V_0;
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447 * L_2 = V_0;
		int32_t L_3 = ___port0;
		L_2->set_port_1(L_3);
		// if (Active)
		bool L_4 = Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// receiveQueue = new ConcurrentQueue<Message>();
		ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_5 = (ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 *)il2cpp_codegen_object_new(ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636_il2cpp_TypeInfo_var);
		ConcurrentQueue_1__ctor_mCAA526D9D64DD1C93B36BF6C49F82C4728F97E75(L_5, /*hidden argument*/ConcurrentQueue_1__ctor_mCAA526D9D64DD1C93B36BF6C49F82C4728F97E75_RuntimeMethod_var);
		((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->set_receiveQueue_0(L_5);
		// Logger.Log("Server: Start port=" + port);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_Log_0();
		U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447 * L_7 = V_0;
		int32_t L_8 = L_7->get_port_1();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral484D794F5E31CB1BBFD2C636C2C877C245206317, L_10, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_6, L_11, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// listenerThread = new Thread(() => { Listen(port); });
		U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447 * L_12 = V_0;
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_13 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CStartU3Eb__0_mCF256E6BA78CAA281A658AFAF63446746DD62079_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_14 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_14, L_13, /*hidden argument*/NULL);
		__this->set_listenerThread_8(L_14);
		// listenerThread.IsBackground = true;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_15 = __this->get_listenerThread_8();
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_15, (bool)1, /*hidden argument*/NULL);
		// listenerThread.Priority = ThreadPriority.BelowNormal;
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_16 = __this->get_listenerThread_8();
		Thread_set_Priority_m8AAD823B41BAD106012A739876628BBFDB0E7F66(L_16, 1, /*hidden argument*/NULL);
		// listenerThread.Start();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_17 = __this->get_listenerThread_8();
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_17, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Telepathy.Server::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Stop_m5D7C534FDE0D25A15B8498FF0A979FE856364C02 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Stop_m5D7C534FDE0D25A15B8498FF0A979FE856364C02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t03F02DAB13F3ED0A143D5AC6E5605120AD56DFFC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * G_B4_0 = NULL;
	TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * G_B3_0 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * G_B7_0 = NULL;
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * G_B6_0 = NULL;
	{
		// if (!Active)
		bool L_0 = Server_get_Active_mE40759A4A854C0CF788380F7BFD303D6A99A09C5(__this, /*hidden argument*/NULL);
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
		// Logger.Log("Server: stopping...");
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_Log_0();
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_1, _stringLiteralB6B2741769240CC9F111B4E04526A7EDDE77A6C0, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// listener?.Stop();
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_2 = __this->get_listener_7();
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0024;
		}
	}
	{
		goto IL_0029;
	}

IL_0024:
	{
		TcpListener_Stop_m113CEAB447C6BCDBCF91CEF94DCA602E4530C033(G_B4_0, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// listenerThread?.Interrupt();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = __this->get_listenerThread_8();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_5 = L_4;
		G_B6_0 = L_5;
		if (L_5)
		{
			G_B7_0 = L_5;
			goto IL_0035;
		}
	}
	{
		goto IL_003a;
	}

IL_0035:
	{
		Thread_Interrupt_m7FF241D0D2980F6427A0FD65928F4E28B4A8304C(G_B7_0, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// listenerThread = null;
		__this->set_listenerThread_8((Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)NULL);
		// foreach (KeyValuePair<int, ClientToken> kvp in clients)
		ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * L_6 = __this->get_clients_9();
		RuntimeObject* L_7 = ConcurrentDictionary_2_GetEnumerator_m64D7286EDE7EC249321F8A5A2211303EFA0D4ED8(L_6, /*hidden argument*/ConcurrentDictionary_2_GetEnumerator_m64D7286EDE7EC249321F8A5A2211303EFA0D4ED8_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_004f:
		{
			// foreach (KeyValuePair<int, ClientToken> kvp in clients)
			RuntimeObject* L_8 = V_0;
			KeyValuePair_2_t03F02DAB13F3ED0A143D5AC6E5605120AD56DFFC  L_9 = InterfaceFuncInvoker0< KeyValuePair_2_t03F02DAB13F3ED0A143D5AC6E5605120AD56DFFC  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Telepathy.Server/ClientToken>>::get_Current() */, IEnumerator_1_tAC53BBA33DCFDD6F243F56C6E5D345B1DC6AD798_il2cpp_TypeInfo_var, L_8);
			V_1 = L_9;
			// TcpClient client = kvp.Value.client;
			ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * L_10 = KeyValuePair_2_get_Value_mA61F0E5A3ABBB6F28F06CA1295EC0A7FB10D84AF_inline((KeyValuePair_2_t03F02DAB13F3ED0A143D5AC6E5605120AD56DFFC *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mA61F0E5A3ABBB6F28F06CA1295EC0A7FB10D84AF_RuntimeMethod_var);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_11 = L_10->get_client_0();
			V_2 = L_11;
		}

IL_0063:
		try
		{ // begin try (depth: 2)
			// try { client.GetStream().Close(); } catch { }
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_12 = V_2;
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_13 = TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC(L_12, /*hidden argument*/NULL);
			VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_13);
			// try { client.GetStream().Close(); } catch { }
			goto IL_0073;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0070;
			throw e;
		}

CATCH_0070:
		{ // begin catch(System.Object)
			// try { client.GetStream().Close(); } catch { }
			// try { client.GetStream().Close(); } catch { }
			goto IL_0073;
		} // end catch (depth: 2)

IL_0073:
		{
			// client.Close();
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_14 = V_2;
			TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_14, /*hidden argument*/NULL);
		}

IL_0079:
		{
			// foreach (KeyValuePair<int, ClientToken> kvp in clients)
			RuntimeObject* L_15 = V_0;
			bool L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_004f;
			}
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x8D, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_0;
			if (!L_17)
			{
				goto IL_008c;
			}
		}

IL_0086:
		{
			RuntimeObject* L_18 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(131)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
	}

IL_008d:
	{
		// clients.Clear();
		ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * L_19 = __this->get_clients_9();
		ConcurrentDictionary_2_Clear_mF108F78FB20EE33D313DE974418398F292825F93(L_19, /*hidden argument*/ConcurrentDictionary_2_Clear_mF108F78FB20EE33D313DE974418398F292825F93_RuntimeMethod_var);
		// counter = 0;
		__this->set_counter_10(0);
		// }
		return;
	}
}
// System.Boolean Telepathy.Server::Send(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Send_m79C3F768F221F67178C86A6A9FFA646E9B2AADFC (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___connectionId0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Send_m79C3F768F221F67178C86A6A9FFA646E9B2AADFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * V_0 = NULL;
	{
		// if (data.Length <= MaxMessageSize)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data1;
		int32_t L_1 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_3();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) > ((int32_t)L_1)))
		{
			goto IL_0037;
		}
	}
	{
		// if (clients.TryGetValue(connectionId, out token))
		ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * L_2 = __this->get_clients_9();
		int32_t L_3 = ___connectionId0;
		bool L_4 = ConcurrentDictionary_2_TryGetValue_mB49A477C37FF3E72A9B03712C5F38A902C8C172A(L_2, L_3, (ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryGetValue_mB49A477C37FF3E72A9B03712C5F38A902C8C172A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// token.sendQueue.Enqueue(data);
		ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * L_5 = V_0;
		SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * L_6 = L_5->get_sendQueue_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___data1;
		SafeQueue_1_Enqueue_m7E704CE5C7C5B24C1AD9B8824B4BD10492523F75(L_6, L_7, /*hidden argument*/SafeQueue_1_Enqueue_m7E704CE5C7C5B24C1AD9B8824B4BD10492523F75_RuntimeMethod_var);
		// token.sendPending.Set();
		ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * L_8 = V_0;
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_9 = L_8->get_sendPending_2();
		EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_9, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0035:
	{
		// return false;
		return (bool)0;
	}

IL_0037:
	{
		// Logger.LogError("Client.Send: message too big: " + data.Length + ". Limit: " + MaxMessageSize);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_10 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogError_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteralF2ED48CD8488ED3A461DA6ACAB12DDF5260E04C5);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF2ED48CD8488ED3A461DA6ACAB12DDF5260E04C5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_12;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ___data1;
		int32_t L_15 = (((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))));
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		ArrayElementTypeCheck (L_17, _stringLiteralA00A6ED1079D9BFA0747625B3DBAEAB49075A9D7);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralA00A6ED1079D9BFA0747625B3DBAEAB49075A9D7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		int32_t L_19 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)__this)->get_MaxMessageSize_3();
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		String_t* L_22 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_18, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_10, L_22, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}
}
// System.String Telepathy.Server::GetClientAddress(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Server_GetClientAddress_m9574ABDC812B05BDC6F04647C5E757400E1FCDC4 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_GetClientAddress_m9574ABDC812B05BDC6F04647C5E757400E1FCDC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * V_0 = NULL;
	{
		// if (clients.TryGetValue(connectionId, out token))
		ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * L_0 = __this->get_clients_9();
		int32_t L_1 = ___connectionId0;
		bool L_2 = ConcurrentDictionary_2_TryGetValue_mB49A477C37FF3E72A9B03712C5F38A902C8C172A(L_0, L_1, (ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryGetValue_mB49A477C37FF3E72A9B03712C5F38A902C8C172A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// return ((IPEndPoint)token.client.Client.RemoteEndPoint).Address.ToString();
		ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * L_3 = V_0;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_4 = L_3->get_client_0();
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_5 = TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline(L_4, /*hidden argument*/NULL);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_6 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_5, /*hidden argument*/NULL);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_7 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(((IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)CastclassClass((RuntimeObject*)L_6, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}

IL_0030:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Boolean Telepathy.Server::Disconnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Server_Disconnect_m81A37C7BA9C9D87CE54FF2886D018C7AA140AC5C (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, int32_t ___connectionId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server_Disconnect_m81A37C7BA9C9D87CE54FF2886D018C7AA140AC5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * V_0 = NULL;
	{
		// if (clients.TryGetValue(connectionId, out token))
		ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * L_0 = __this->get_clients_9();
		int32_t L_1 = ___connectionId0;
		bool L_2 = ConcurrentDictionary_2_TryGetValue_mB49A477C37FF3E72A9B03712C5F38A902C8C172A(L_0, L_1, (ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryGetValue_mB49A477C37FF3E72A9B03712C5F38A902C8C172A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// token.client.Close();
		ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * L_3 = V_0;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_4 = L_3->get_client_0();
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_4, /*hidden argument*/NULL);
		// Logger.Log("Server.Disconnect connectionId:" + connectionId);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_5 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_Log_0();
		int32_t L_6 = ___connectionId0;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral2AE2ACB37456009F51EE9603197B18190A476313, L_8, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_5, L_9, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0037:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Telepathy.Server::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server__ctor_mADC96E32E43739FEAE49F4782CDDD038712338E8 (Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Server__ctor_mADC96E32E43739FEAE49F4782CDDD038712338E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly ConcurrentDictionary<int, ClientToken> clients = new ConcurrentDictionary<int, ClientToken>();
		ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * L_0 = (ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA *)il2cpp_codegen_object_new(ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2__ctor_m415558106FD3ECF678C06D3287F081F48AF685CD(L_0, /*hidden argument*/ConcurrentDictionary_2__ctor_m415558106FD3ECF678C06D3287F081F48AF685CD_RuntimeMethod_var);
		__this->set_clients_9(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
		Common__ctor_m8519D1078F4B85DC870C3EE1BD0001CD67C94BAD(__this, /*hidden argument*/NULL);
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
// System.Void Telepathy.ThreadExtensions::AbortAndJoin(System.Threading.Thread)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadExtensions_AbortAndJoin_m7CB7BC0E383F41069C8227DED41329ECFAD3B69F (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___thread0, const RuntimeMethod* method)
{
	{
		// thread.Abort();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0 = ___thread0;
		Thread_Abort_m9D4D14BFB0F9CC71D026C83EBF3606A6ABE96AF4(L_0, /*hidden argument*/NULL);
		// thread.Join();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1 = ___thread0;
		Thread_Join_m7233E8FA960E446B49B0891B16EBE069265032F5(L_1, /*hidden argument*/NULL);
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
// System.Byte[] Telepathy.Utils::IntToBytesBigEndian(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Utils_IntToBytesBigEndian_m5DE9BE14BE4B433232BF2744B1225E5292F54230 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_IntToBytesBigEndian_m5DE9BE14BE4B433232BF2744B1225E5292F54230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new byte[] {
		//     (byte)(value >> 24),
		//     (byte)(value >> 16),
		//     (byte)(value >> 8),
		//     (byte)value
		// };
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		int32_t L_2 = ___value0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2>>(int32_t)((int32_t)24)))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_1;
		int32_t L_4 = ___value0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_4>>(int32_t)((int32_t)16)))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = L_3;
		int32_t L_6 = ___value0;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_6>>(int32_t)8))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = L_5;
		int32_t L_8 = ___value0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)L_8))));
		return L_7;
	}
}
// System.Void Telepathy.Utils::IntToBytesBigEndianNonAlloc(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_IntToBytesBigEndianNonAlloc_mB6599C2CEA625FACCE103AAED5DED317D97318D4 (int32_t ___value0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method)
{
	{
		// bytes[0] = (byte)(value >> 24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes1;
		int32_t L_1 = ___value0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1>>(int32_t)((int32_t)24)))))));
		// bytes[1] = (byte)(value >> 16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bytes1;
		int32_t L_3 = ___value0;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)16)))))));
		// bytes[2] = (byte)(value >> 8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes1;
		int32_t L_5 = ___value0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))))));
		// bytes[3] = (byte)value;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes1;
		int32_t L_7 = ___value0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)L_7))));
		// }
		return;
	}
}
// System.Int32 Telepathy.Utils::BytesToIntBigEndian(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_BytesToIntBigEndian_mFBA75B217B98801987D3142AFC40BE3A25E91764 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, const RuntimeMethod* method)
{
	{
		// return
		//     (bytes[0] << 24) |
		//     (bytes[1] << 16) |
		//     (bytes[2] << 8) |
		//     bytes[3];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___bytes0;
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bytes0;
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11));
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
// System.Void Telepathy.Client_<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m04C08DC530186002F9BA5F1C936FED8F12AFF1C7 (U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Client_<>c__DisplayClass11_0::<Connect>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CConnectU3Eb__0_m565E786C90BE24B06C9F7B2F63C08EA00FE5450F (U3CU3Ec__DisplayClass11_0_t198F04D99A83C09DF6CD99EB88E263CFFD473A9C * __this, const RuntimeMethod* method)
{
	{
		// receiveThread = new Thread(() => { ReceiveThreadFunction(ip, port); });
		Client_t6D5BF4AE5DCFC18566BA79C33E11521F9F319929 * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_ip_1();
		int32_t L_2 = __this->get_port_2();
		Client_ReceiveThreadFunction_m90AEDC03B483FE6A45D5336CE078CABD026682A2(L_0, L_1, L_2, /*hidden argument*/NULL);
		// receiveThread = new Thread(() => { ReceiveThreadFunction(ip, port); });
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
// System.Void Telepathy.Server_<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m1F98AB35203E50714B8990E229724F99AEC68363 (U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Server_<>c__DisplayClass8_0::<Listen>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__0_m10DB810FBF1825FEA42D056D67601672EDDC64D2 (U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__0_m10DB810FBF1825FEA42D056D67601672EDDC64D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
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
		// SendLoop(connectionId, client, token.sendQueue, token.sendPending);
		int32_t L_0 = __this->get_connectionId_0();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = __this->get_client_1();
		ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * L_2 = __this->get_token_2();
		SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * L_3 = L_2->get_sendQueue_1();
		ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * L_4 = __this->get_token_2();
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_5 = L_4->get_sendPending_2();
		IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
		Common_SendLoop_m0531175A13DC105C23A7E681C88ECB947E0011F5(L_0, L_1, L_3, L_5, /*hidden argument*/NULL);
		// }
		goto IL_0044;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0029;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002c;
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Threading.ThreadAbortException)
		// catch (ThreadAbortException)
		// }
		goto IL_0044;
	} // end catch (depth: 1)

CATCH_002c:
	{ // begin catch(System.Exception)
		// catch (Exception exception)
		V_0 = ((Exception_t *)__exception_local);
		// Logger.LogError("Server send thread exception: " + exception);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_6 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogError_2();
		Exception_t * L_7 = V_0;
		String_t* L_8 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral21102DCAC41D97FC99CF6E7EB9947B2EBAEA391F, L_7, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_6, L_8, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// }
		goto IL_0044;
	} // end catch (depth: 1)

IL_0044:
	{
		// });
		return;
	}
}
// System.Void Telepathy.Server_<>c__DisplayClass8_0::<Listen>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__1_m1B96A615C44C7A88A103ADEAA8F65005E81EDADE (U3CU3Ec__DisplayClass8_0_tD41721D2EE37722601C1543DDBA8E550EF642131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass8_0_U3CListenU3Eb__1_m1B96A615C44C7A88A103ADEAA8F65005E81EDADE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		// ReceiveLoop(connectionId, client, receiveQueue, MaxMessageSize);
		int32_t L_0 = __this->get_connectionId_0();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = __this->get_client_1();
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_2 = __this->get_U3CU3E4__this_4();
		ConcurrentQueue_1_t67CA5E5C1649A6395929A3C78B2CFB92FCFBA636 * L_3 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_2)->get_receiveQueue_0();
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_4 = __this->get_U3CU3E4__this_4();
		int32_t L_5 = ((Common_t25B06616A1695440B39152B4C426E18441C11E0F *)L_4)->get_MaxMessageSize_3();
		IL2CPP_RUNTIME_CLASS_INIT(Common_t25B06616A1695440B39152B4C426E18441C11E0F_il2cpp_TypeInfo_var);
		Common_ReceiveLoop_mA9BC4F25EC3735B00FED39C16A6BBDEA31AF638B(L_0, L_1, L_3, L_5, /*hidden argument*/NULL);
		// clients.TryRemove(connectionId, out ClientToken _);
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_6 = __this->get_U3CU3E4__this_4();
		ConcurrentDictionary_2_t9EDF496B470985632CC7184141544C26B5961BAA * L_7 = L_6->get_clients_9();
		int32_t L_8 = __this->get_connectionId_0();
		ConcurrentDictionary_2_TryRemove_mB7F2E9F1BAB3CEC8E8F5AD95F420ACF7680BD7D5(L_7, L_8, (ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E **)(&V_0), /*hidden argument*/ConcurrentDictionary_2_TryRemove_mB7F2E9F1BAB3CEC8E8F5AD95F420ACF7680BD7D5_RuntimeMethod_var);
		// sendThread.Interrupt();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_9 = __this->get_sendThread_3();
		Thread_Interrupt_m7FF241D0D2980F6427A0FD65928F4E28B4A8304C(L_9, /*hidden argument*/NULL);
		// }
		goto IL_0065;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004d;
		throw e;
	}

CATCH_004d:
	{ // begin catch(System.Exception)
		// catch (Exception exception)
		V_1 = ((Exception_t *)__exception_local);
		// Logger.LogError("Server client thread exception: " + exception);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_10 = ((Logger_t238424F06F225A61AFB1293D376838A9F2D19106_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t238424F06F225A61AFB1293D376838A9F2D19106_il2cpp_TypeInfo_var))->get_LogError_2();
		Exception_t * L_11 = V_1;
		String_t* L_12 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteralF47863D6E0039D41ADF771D5253F35FCA7A40C28, L_11, /*hidden argument*/NULL);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_10, L_12, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// }
		goto IL_0065;
	} // end catch (depth: 1)

IL_0065:
	{
		// });
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
// System.Void Telepathy.Server_<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m7A5CC5D0B3EC8D9D38B4D87CEC3818F5E009E3FE (U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Telepathy.Server_<>c__DisplayClass9_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CStartU3Eb__0_mCF256E6BA78CAA281A658AFAF63446746DD62079 (U3CU3Ec__DisplayClass9_0_t83B871F432E67835A92207725BA531291C77E447 * __this, const RuntimeMethod* method)
{
	{
		// listenerThread = new Thread(() => { Listen(port); });
		Server_t8ECFD78ECF97787F81FB86E263335C2D1A3A0DC2 * L_0 = __this->get_U3CU3E4__this_0();
		int32_t L_1 = __this->get_port_1();
		Server_Listen_mD18CE0EB1B3B66AD0B01DB22C7B3BB54AB3A3C33(L_0, L_1, /*hidden argument*/NULL);
		// listenerThread = new Thread(() => { Listen(port); });
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
// System.Void Telepathy.Server_ClientToken::.ctor(System.Net.Sockets.TcpClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientToken__ctor_mDEE2BD6827019F81949045A0C3B6899588ABA7F8 (ClientToken_t6BB7597F47DC1D587B4F217D22E9AE997B195A2E * __this, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientToken__ctor_mDEE2BD6827019F81949045A0C3B6899588ABA7F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SafeQueue<byte[]> sendQueue = new SafeQueue<byte[]>();
		SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 * L_0 = (SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438 *)il2cpp_codegen_object_new(SafeQueue_1_t13F1F1AE1944B9F5850903037B6858DBAEC4A438_il2cpp_TypeInfo_var);
		SafeQueue_1__ctor_m4880D0C48C4C777B5522C1A9A423BB427E3871B0(L_0, /*hidden argument*/SafeQueue_1__ctor_m4880D0C48C4C777B5522C1A9A423BB427E3871B0_RuntimeMethod_var);
		__this->set_sendQueue_1(L_0);
		// public ManualResetEvent sendPending = new ManualResetEvent(false);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_1 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_1, (bool)0, /*hidden argument*/NULL);
		__this->set_sendPending_2(L_1);
		// public ClientToken(TcpClient client)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.client = client;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_2 = ___client0;
		__this->set_client_0(L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_m_ClientSocket_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Socket_get_Connected_m6E8C88AC69580EF7782514CD48754D4D180D9CE0_inline (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_connected_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TcpClient_set_Client_m12167E7D3DEAEEF69AF8896152A54CE613C664FC_inline (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___value0, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = ___value0;
		__this->set_m_ClientSocket_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5E_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_get_Error_m5AEEF41258FBC9771DABB271B89A0F8ED43DDA5ETelepathy_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ((Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_StaticFields*)il2cpp_codegen_static_fields_for(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var))->get_stderr_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * TcpListener_get_Server_mDFBCA0876377BA9FBF4B1937D5F41268D9AE7453_inline (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_m_ServerSocket_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = __this->get_m_Address_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}

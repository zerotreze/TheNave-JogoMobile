#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Func`2<Unity.Notifications.Android.AndroidNotificationChannel,System.Boolean>
struct Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662;
// System.Collections.Generic.IEnumerable`1<Unity.Notifications.Android.AndroidNotificationChannel>
struct IEnumerable_1_t92B6310B9D585F15FA35F0DD8F779769D80AC053;
// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF;
// System.Collections.Generic.List`1<Unity.Notifications.Android.AndroidNotificationChannel>
struct List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
// Unity.Notifications.Android.AndroidNotificationChannel[]
struct AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// Unity.Notifications.Android.AndroidNotificationCenter
struct AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A;
// Unity.Notifications.Android.AndroidNotificationIntentData
struct AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729;
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher
struct AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Unity.Notifications.Android.NotificationCallback
struct NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Notifications.Android.AndroidNotificationCenter/<>c
struct U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20;
// Unity.Notifications.Android.AndroidNotificationCenter/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06;
// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE;
IL2CPP_EXTERN_C String_t* _stringLiteral042E506EAC403864CC8CA1FFC38CA1637017470F;
IL2CPP_EXTERN_C String_t* _stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9;
IL2CPP_EXTERN_C String_t* _stringLiteral0B031EA46C89ACA33496219C86113C5971D96A6F;
IL2CPP_EXTERN_C String_t* _stringLiteral0C338FABC52E44288BFE3902ECFD459E179A00B4;
IL2CPP_EXTERN_C String_t* _stringLiteral1E07AAC0DB599074DF5A532EE047B226AF85B461;
IL2CPP_EXTERN_C String_t* _stringLiteral201E98F8587A94F62371653455535087BFBD7536;
IL2CPP_EXTERN_C String_t* _stringLiteral21F2AC306B45CC6D319AE7C9577C42830701471F;
IL2CPP_EXTERN_C String_t* _stringLiteral2371502F77FC4E06CEA26C3019181A650BF2FE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral28E45B65F67DFEF09A216B89076AB46384ECAEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E;
IL2CPP_EXTERN_C String_t* _stringLiteral309475E2FD5CCC4B93075E4B2F688139336E3976;
IL2CPP_EXTERN_C String_t* _stringLiteral30F16A331B7FED670D062C2FF7797C91FB1ABEDC;
IL2CPP_EXTERN_C String_t* _stringLiteral3507F14C18339414ED66D51C2A54704F4F66BF29;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral3B4ABC6800E38922B95A7741A7C31E78837967AB;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD;
IL2CPP_EXTERN_C String_t* _stringLiteral417033260ED9866C8F3942C4B186232283F80EBC;
IL2CPP_EXTERN_C String_t* _stringLiteral41F6952B2006C0E82025C36C339675E51FB14C5E;
IL2CPP_EXTERN_C String_t* _stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A;
IL2CPP_EXTERN_C String_t* _stringLiteral49E8F9D21CA9B5185CDC5F6ED185D72BA8DCC0CB;
IL2CPP_EXTERN_C String_t* _stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4F7D86CDAA0C8A81C945C1F706675D9922754FF1;
IL2CPP_EXTERN_C String_t* _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral5049D16B7CF18631FE8A78C554EE95423ABE2103;
IL2CPP_EXTERN_C String_t* _stringLiteral578464DF4BFC276A4118AE25678706EA9C75B4BF;
IL2CPP_EXTERN_C String_t* _stringLiteral5A63AE410D81A77766BF6FE65A404882F7D7E6D2;
IL2CPP_EXTERN_C String_t* _stringLiteral5CC7E4A3E1708A6D64EB7722229CBE4D8B9DE0AC;
IL2CPP_EXTERN_C String_t* _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral65270D282A6EB620B640BB3DE24D30E7DC225F75;
IL2CPP_EXTERN_C String_t* _stringLiteral6C129EA550A36247CE9509C041D9D2BF744EA5A6;
IL2CPP_EXTERN_C String_t* _stringLiteral6DF31DD4FD46D4C3A00C604A8AEE6D8534322805;
IL2CPP_EXTERN_C String_t* _stringLiteral732B68B6E4A4DB829E0CB811204F86B0C8BBFE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral759248FA866422EA1C6CEAB03289DC132A7B89A6;
IL2CPP_EXTERN_C String_t* _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A;
IL2CPP_EXTERN_C String_t* _stringLiteral773844F4EAB0720F10FB37E0065041ACDB243E16;
IL2CPP_EXTERN_C String_t* _stringLiteral77739BBFD23D47C94ED718EBC308956A5D4AB21D;
IL2CPP_EXTERN_C String_t* _stringLiteral77EFF4F4CAEEA7AB0E9270868BE4E7EDF20D2A6D;
IL2CPP_EXTERN_C String_t* _stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83;
IL2CPP_EXTERN_C String_t* _stringLiteral79A3A135E5B5186F8B18862121F8DA14F4E3B1BB;
IL2CPP_EXTERN_C String_t* _stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741;
IL2CPP_EXTERN_C String_t* _stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7;
IL2CPP_EXTERN_C String_t* _stringLiteral7E56EB3A14BB0A90B10A3F82FE0A66B0323ADC09;
IL2CPP_EXTERN_C String_t* _stringLiteral812C47466403E44034C69DFF8C0737F3F368B65A;
IL2CPP_EXTERN_C String_t* _stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral8605D3E2708C3D1F69E8F918B7E82EB7E671D987;
IL2CPP_EXTERN_C String_t* _stringLiteral864C6EA0E6C9DCD77772BE341830783DAE6095A8;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB198D3AB14F5B2827707E988BEBDF73FC8251B;
IL2CPP_EXTERN_C String_t* _stringLiteral8F9D1AC8003CE64AD22B0DA00079089562028B6C;
IL2CPP_EXTERN_C String_t* _stringLiteral8FC7E3B9590667C5068E9E851357567AEEA3578B;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralA39D8B3C25D62F9AC74346490A808A083149BC3C;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C1749774F0E2DFDC58A4BABD710AAF76A0E543;
IL2CPP_EXTERN_C String_t* _stringLiteralA59539643944A464E30D7011A21734B72919F5BF;
IL2CPP_EXTERN_C String_t* _stringLiteralA69581B713E8DF5FDC303A301CB6B19917AD174B;
IL2CPP_EXTERN_C String_t* _stringLiteralA79A01886CDD255DBAF604C7A51EF7370973E814;
IL2CPP_EXTERN_C String_t* _stringLiteralA8AC977222A7FA0351E2E5F9ED0B1270C1355771;
IL2CPP_EXTERN_C String_t* _stringLiteralB2B2C9BF307CDCC16BAA83374FF3DB32FF40DC47;
IL2CPP_EXTERN_C String_t* _stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A;
IL2CPP_EXTERN_C String_t* _stringLiteralB95030A25CC7A13566AE8FA422E467D13AB6FFDB;
IL2CPP_EXTERN_C String_t* _stringLiteralB9C27A6050F45A10AC1FD4E65204F2DFFECAFA72;
IL2CPP_EXTERN_C String_t* _stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBB51D9582FEA7F91BD3913A156D5F6C60CDF3C99;
IL2CPP_EXTERN_C String_t* _stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC55E14875AB248A8777CF4415B8B907416BCA185;
IL2CPP_EXTERN_C String_t* _stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87;
IL2CPP_EXTERN_C String_t* _stringLiteralC9B81E6CB678EF7D657F87AD3E4F30A67E57938C;
IL2CPP_EXTERN_C String_t* _stringLiteralCAA743314C99A7A945A299B6748725F14C02714B;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD7A6F8806A71C95F4E8692E1F9FC209B82C5A2;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD63E5B8C1F7235D8901BA385D75F8988FD3A9182;
IL2CPP_EXTERN_C String_t* _stringLiteralD76D61D6CB247074CC233E90926FDF3F2E3684E5;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC;
IL2CPP_EXTERN_C String_t* _stringLiteralE6AF69C91C20A2D4C4D5FA56F7600A7BB5D305BF;
IL2CPP_EXTERN_C String_t* _stringLiteralEADCD3C3021F28CA07F50C4363B7FA9428265172;
IL2CPP_EXTERN_C String_t* _stringLiteralEB534843932D1025EEE09575458F840C63DC1063;
IL2CPP_EXTERN_C String_t* _stringLiteralED4D3D8AFE804D2C2A2E71BE07B28F1C1FEFA1F8;
IL2CPP_EXTERN_C String_t* _stringLiteralF0531D8CE590C96ADED66DEADF41A647EC9B4879;
IL2CPP_EXTERN_C String_t* _stringLiteralF14739A4843901C4DA2BFDF445F221F53B320153;
IL2CPP_EXTERN_C String_t* _stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC;
IL2CPP_EXTERN_C String_t* _stringLiteralF56CF02460E3AE9330CB57E3E91202E7FEB01239;
IL2CPP_EXTERN_C String_t* _stringLiteralF840720856A0CCF610CAA8A9B7B760DA4E85F748;
IL2CPP_EXTERN_C String_t* _stringLiteralF91A960CB813ACBB09046C8766F780B73B27BC7C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFCAD6572759BA264A7B9B9106CCB401DB355CAD7;
IL2CPP_EXTERN_C String_t* _stringLiteralFD462CB4D212EBE5A672517EB06D3FBD862F866C;
IL2CPP_EXTERN_C String_t* _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_m5ABE53E4F9B01E977767DB5BCE69E696B0EA257D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisInt64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_m0EF4D6095F8812E9F918E88C5D4405FFFAB35531_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisAndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_m99430960DA223E2202707F15B2922D53E52243C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCB6D44778A2A9B82659AE391FF506D93E045ABAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3B5584B4C10CEA04D39E45C7CC34333022C16ACC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1840848A627FD2045207C5361CCE21E6CB3F31A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_mE12024AEA1CC82A341ED8FD29F7811B86C6EC57E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m46CE58AEE4E46E07AFB03138AA5A356BDD33DABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCFAF0C852ADFD05729EF44207CE87CD200ABC9A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF40DD6E3420C881D4AE89511FDAEC4420DAD850D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4C9A49C08EDACFFBAC0CDCB7D15BDEAF48070C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA6E493A1E4C3FF00A2EA2EFA947E2ECBFDE9F19C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1CDE35A4919DC502953E354E877F9449F997741D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0FDA1EA1DF52887ED2369B7FA6FC774E4713C611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__45_0_m7D3E04D935833A870BB07A50D2F8F3337B953080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CGetNotificationChannelU3Eb__0_m59EE17BCD9A866EC974D367E67426F8E3894019C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GroupAlertBehaviours_tC857504ABF5835A6033C1A8345A49C092389F237_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Importance_tD55C9582B7EC0BCFC93E0ED83E92CF0D31492631_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* LockScreenVisibility_t80C35F9A0D54445669ED43A50B9F1F9A81F48179_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NotificationStyle_t7BFBE5D9ABF0BA0CF5D1576511438DB9FBF38548_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6C2F9B6209550EEBD29D175C5E328703328DE669 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>
struct List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Notifications.Android.AndroidNotificationChannel>
struct List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// Unity.Notifications.Android.AndroidNotificationCenter
struct AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A  : public RuntimeObject
{
};

struct AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields
{
	// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback Unity.Notifications.Android.AndroidNotificationCenter::OnNotificationReceived
	NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* ___OnNotificationReceived_0;
	// UnityEngine.AndroidJavaClass Unity.Notifications.Android.AndroidNotificationCenter::s_NotificationManagerClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___s_NotificationManagerClass_1;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::s_NotificationManager
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___s_NotificationManager_2;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::s_CurrentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___s_CurrentActivity_3;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::s_Initialized
	bool ___s_Initialized_4;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::Notification_EXTRA_TITLE
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___Notification_EXTRA_TITLE_5;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::Notification_EXTRA_TEXT
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___Notification_EXTRA_TEXT_6;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::Notification_EXTRA_SHOW_CHRONOMETER
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___Notification_EXTRA_SHOW_CHRONOMETER_7;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::Notification_EXTRA_BIG_TEXT
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___Notification_EXTRA_BIG_TEXT_8;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::Notification_EXTRA_SHOW_WHEN
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___Notification_EXTRA_SHOW_WHEN_9;
	// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::Notification_FLAG_AUTO_CANCEL
	int32_t ___Notification_FLAG_AUTO_CANCEL_10;
	// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::Notification_FLAG_GROUP_SUMMARY
	int32_t ___Notification_FLAG_GROUP_SUMMARY_11;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_FIRE_TIME
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_FIRE_TIME_12;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_ID
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_ID_13;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_INTENT_DATA
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_INTENT_DATA_14;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_LARGE_ICON
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_LARGE_ICON_15;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_REPEAT_INTERVAL
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_REPEAT_INTERVAL_16;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_NOTIFICATION
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_NOTIFICATION_17;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::KEY_SMALL_ICON
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___KEY_SMALL_ICON_18;
};

// Unity.Notifications.Android.AndroidNotificationExtensions
struct AndroidNotificationExtensions_tDD1DEA2215C1127103C5D32508D0AA165DEAA7C9  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Unity.Notifications.Android.AndroidNotificationCenter/<>c
struct U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20  : public RuntimeObject
{
};

struct U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_StaticFields
{
	// Unity.Notifications.Android.AndroidNotificationCenter/<>c Unity.Notifications.Android.AndroidNotificationCenter/<>c::<>9
	U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* ___U3CU3E9_0;
};

// Unity.Notifications.Android.AndroidNotificationCenter/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06  : public RuntimeObject
{
	// System.String Unity.Notifications.Android.AndroidNotificationCenter/<>c__DisplayClass24_0::channelId
	String_t* ___channelId_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>
struct Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC 
{
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;
	// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::<Importance>k__BackingField
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanBypassDnd>k__BackingField
	bool ___U3CCanBypassDndU3Ek__BackingField_4;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanShowBadge>k__BackingField
	bool ___U3CCanShowBadgeU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableLights>k__BackingField
	bool ___U3CEnableLightsU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableVibration>k__BackingField
	bool ___U3CEnableVibrationU3Ek__BackingField_7;
	// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::<VibrationPattern>k__BackingField
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___U3CVibrationPatternU3Ek__BackingField_8;
	// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::<LockScreenVisibility>k__BackingField
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_pinvoke
{
	char* ___U3CIdU3Ek__BackingField_0;
	char* ___U3CNameU3Ek__BackingField_1;
	char* ___U3CDescriptionU3Ek__BackingField_2;
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_4;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_5;
	int32_t ___U3CEnableLightsU3Ek__BackingField_6;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_7;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_8;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_com
{
	Il2CppChar* ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CDescriptionU3Ek__BackingField_2;
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_4;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_5;
	int32_t ___U3CEnableLightsU3Ek__BackingField_6;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_7;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_8;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 
{
	// System.String Unity.Notifications.Android.AndroidNotification::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotification::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotification::<SmallIcon>k__BackingField
	String_t* ___U3CSmallIconU3Ek__BackingField_2;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::<FireTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	// System.String Unity.Notifications.Android.AndroidNotification::<LargeIcon>k__BackingField
	String_t* ___U3CLargeIconU3Ek__BackingField_4;
	// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::<Style>k__BackingField
	int32_t ___U3CStyleU3Ek__BackingField_5;
	// System.Int32 Unity.Notifications.Android.AndroidNotification::<Number>k__BackingField
	int32_t ___U3CNumberU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShouldAutoCancel>k__BackingField
	bool ___U3CShouldAutoCancelU3Ek__BackingField_7;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<UsesStopwatch>k__BackingField
	bool ___U3CUsesStopwatchU3Ek__BackingField_8;
	// System.String Unity.Notifications.Android.AndroidNotification::<Group>k__BackingField
	String_t* ___U3CGroupU3Ek__BackingField_9;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<GroupSummary>k__BackingField
	bool ___U3CGroupSummaryU3Ek__BackingField_10;
	// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::<GroupAlertBehaviour>k__BackingField
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	// System.String Unity.Notifications.Android.AndroidNotification::<SortKey>k__BackingField
	String_t* ___U3CSortKeyU3Ek__BackingField_12;
	// System.String Unity.Notifications.Android.AndroidNotification::<IntentData>k__BackingField
	String_t* ___U3CIntentDataU3Ek__BackingField_13;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowTimestamp>k__BackingField
	bool ___U3CShowTimestampU3Ek__BackingField_14;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowCustomTimestamp>k__BackingField
	bool ___U3CShowCustomTimestampU3Ek__BackingField_15;
	// UnityEngine.Color Unity.Notifications.Android.AndroidNotification::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	// System.TimeSpan Unity.Notifications.Android.AndroidNotification::m_RepeatInterval
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::m_CustomTimestamp
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_pinvoke
{
	char* ___U3CTitleU3Ek__BackingField_0;
	char* ___U3CTextU3Ek__BackingField_1;
	char* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	char* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	char* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	char* ___U3CSortKeyU3Ek__BackingField_12;
	char* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_com
{
	Il2CppChar* ___U3CTitleU3Ek__BackingField_0;
	Il2CppChar* ___U3CTextU3Ek__BackingField_1;
	Il2CppChar* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	Il2CppChar* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	Il2CppChar* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	Il2CppChar* ___U3CSortKeyU3Ek__BackingField_12;
	Il2CppChar* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Notifications.Android.AndroidNotificationIntentData
struct AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729  : public RuntimeObject
{
	// System.Int32 Unity.Notifications.Android.AndroidNotificationIntentData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotificationIntentData::<Channel>k__BackingField
	String_t* ___U3CChannelU3Ek__BackingField_1;
	// Unity.Notifications.Android.AndroidNotification Unity.Notifications.Android.AndroidNotificationIntentData::<Notification>k__BackingField
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___U3CNotificationU3Ek__BackingField_2;
	// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationIntentData::<NativeNotification>k__BackingField
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___U3CNativeNotificationU3Ek__BackingField_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Notifications.Android.NotificationCallback
struct NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`2<Unity.Notifications.Android.AndroidNotificationChannel,System.Boolean>
struct Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback
struct NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher
struct AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject> Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::m_ReceivedNotificationQueue
	List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* ___m_ReceivedNotificationQueue_5;
	// System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject> Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::m_ReceivedNotificationList
	List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* ___m_ReceivedNotificationList_6;
};

struct AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields
{
	// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::instance
	AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* ___instance_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// Unity.Notifications.Android.AndroidNotificationChannel[]
struct AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC m_Items[1];

	inline AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CIdU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CNameU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CDescriptionU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CVibrationPatternU3Ek__BackingField_8), (void*)NULL);
		#endif
	}
	inline AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CIdU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CNameU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CDescriptionU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CVibrationPatternU3Ek__BackingField_8), (void*)NULL);
		#endif
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Notifications.Android.AndroidNotificationChannel,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7038815B9AC3A2B1743445F4477478C54A790E39_gshared (Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::SingleOrDefault<Unity.Notifications.Android.AndroidNotificationChannel>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC Enumerable_SingleOrDefault_TisAndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_m99430960DA223E2202707F15B2922D53E52243C0_gshared (RuntimeObject* ___source0, Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Notifications.Android.AndroidNotificationChannel>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1CDE35A4919DC502953E354E877F9449F997741D_gshared (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Int32>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Boolean>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Notifications.Android.AndroidNotificationChannel>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCFAF0C852ADFD05729EF44207CE87CD200ABC9A0_gshared_inline (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* __this, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.Notifications.Android.AndroidNotificationChannel>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* List_1_ToArray_mA6E493A1E4C3FF00A2EA2EFA947E2ECBFDE9F19C_gshared (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Int64>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.String Unity.Notifications.Android.AndroidNotification::get_Title()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Title_m46212F8E4679C44AB95B99590BBB348A18DD3731_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Title(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotification::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Text_m141540044DCE8803E1AE7923C40AAFC9C43FC970_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotification::get_SmallIcon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SmallIcon_m77174654228487FB24F21C67332E9FD2D61AF205_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_SmallIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_FireTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotification_get_FireTime_m0AF733556F5435FEEDEF6970FB4E0DB3A58077D5_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_FireTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
inline void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared)(__this, ___value0, method);
}
// System.Nullable`1<System.TimeSpan> Unity.Notifications.Android.AndroidNotification::get_RepeatInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 AndroidNotification_get_RepeatInterval_mCB832F7E47A9B74CBE097C902CF0DD9A1F26595D (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline)(__this, method);
}
// System.TimeSpan Unity.Notifications.Android.AndroidNotificationExtensions::ToTimeSpan(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A AndroidNotificationExtensions_ToTimeSpan_m296ABA6771A5DA8F6DAF364B998BB78246024E20 (int64_t ___timeSpan0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_gshared)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_RepeatInterval(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___value0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotification::get_LargeIcon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_LargeIcon_mF1632ADD12CBED7A6D19A1A02B22B4FD188A9533_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_LargeIcon(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::get_Style()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Style(Unity.Notifications.Android.NotificationStyle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(T)
inline void Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_gshared)(__this, ___value0, method);
}
// System.Nullable`1<UnityEngine.Color> Unity.Notifications.Android.AndroidNotification::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 AndroidNotification_get_Color_m2824AA847E3044429A0685DCDA2D3C205813AFC9 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Color(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Notifications.Android.AndroidNotification::get_Number()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Number_m03B14CBBA8BC94C2039834EC39644C92C39D04B7_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Number(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShouldAutoCancel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShouldAutoCancel_m4F131946B79B3454C37F86FC405A619D6D6F821A_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShouldAutoCancel(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_UsesStopwatch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_UsesStopwatch_m78EB97ECEB853B17EB048B8E6494B00EDFAE8C37_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_UsesStopwatch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotification::get_Group()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Group_mE15A7461C61CA2056EDE3E69F3C67494CAC6289E_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Group(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_GroupSummary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_GroupSummary_m74B1DC2FB5B4C567BDF4749B6A8D9465ADC12A9C_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupSummary(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) ;
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::get_GroupAlertBehaviour()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_GroupAlertBehaviour_m1888DF8835E96E8557F1A6F09C78F1E58B35DE9F_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupAlertBehaviour(Unity.Notifications.Android.GroupAlertBehaviours)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotification::get_SortKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SortKey_mD49CA6B1F49B743D066BB5AE3678D59C1F8282F3_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_SortKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotification::get_IntentData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_IntentData_mDACD0A1A05BF9C10E52C533F5F8887ADD862BCE3_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_IntentData(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowTimestamp_m9A2D1625C823BC25184648E202ACBB57601DC007_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) ;
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_CustomTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotification_get_CustomTimestamp_mEFC143569732A9E663FD726C6722E69B0E234547_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowCustomTimestamp(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_CustomTimestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_CustomTimestamp_mD1E970E5B7764CE2F88220F0B85B9F58651883FB (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowCustomTimestamp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowCustomTimestamp_mFD163DDA1AA335F2AB280AE5D37EA1EA19096DBC_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) ;
// System.DateTime Unity.Notifications.Android.AndroidNotificationExtensions::ToDatetime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotificationExtensions_ToDatetime_m768472E0022DD7ADD6F4C64F189EFC822D911D13 (int64_t ___dateTime0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::.ctor(System.String,System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification__ctor_m18FDD732AA72F4C581F2677B6D446822B78AD170 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___title0, String_t* ___text1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___fireTime2, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::.ctor(System.String,System.String,System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification__ctor_m87B49F2A8A6199ECBCCEE54E7D82C670B5CE89A6 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___title0, String_t* ___text1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___fireTime2, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___repeatInterval3, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::.ctor(System.String,System.String,System.DateTime,System.TimeSpan,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification__ctor_mFB35CBDA0AE001C4C5EA449304D14FDA2E7CD0A3 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___title0, String_t* ___text1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___fireTime2, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___repeatInterval3, String_t* ___smallIcon4, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::GetInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m01DB25903D243BFD867D4DB58A0A6E363E0A7017_inline (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::EnqueueReceivedNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m5FE30FC8FD86F26AD0AC5694A43494164E0D7B55 (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___notification0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher>()
inline AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_mE12024AEA1CC82A341ED8FD29F7811B86C6EC57E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void Unity.Notifications.Android.NotificationCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback__ctor_m48B6FEB30BE7B1DD1981F178B417486ADE9E709A (NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Int32>(System.String)
inline int32_t AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_gshared)(__this, ___fieldName0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA (const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::get_Importance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableLights()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableVibration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanBypassDnd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanShowBadge()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::get_VibrationPattern()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::get_LockScreenVisibility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_mC9DF32739C0C3203BEDA781845E73039545F11B7 (U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06* __this, const RuntimeMethod* method) ;
// Unity.Notifications.Android.AndroidNotificationChannel[] Unity.Notifications.Android.AndroidNotificationCenter::GetNotificationChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* AndroidNotificationCenter_GetNotificationChannels_m956F96F69B21B1F7783A6484C1F863AA3FB6CCEB (const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Notifications.Android.AndroidNotificationChannel,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7038815B9AC3A2B1743445F4477478C54A790E39 (Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7038815B9AC3A2B1743445F4477478C54A790E39_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::SingleOrDefault<Unity.Notifications.Android.AndroidNotificationChannel>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC Enumerable_SingleOrDefault_TisAndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_m99430960DA223E2202707F15B2922D53E52243C0 (RuntimeObject* ___source0, Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662* ___predicate1, const RuntimeMethod* method)
{
	return ((  AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC (*) (RuntimeObject*, Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisAndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_m99430960DA223E2202707F15B2922D53E52243C0_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Notifications.Android.AndroidNotificationChannel>::.ctor()
inline void List_1__ctor_m1CDE35A4919DC502953E354E877F9449F997741D (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2*, const RuntimeMethod*))List_1__ctor_m1CDE35A4919DC502953E354E877F9449F997741D_gshared)(__this, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject[]>(System.String,System.Object[])
inline AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* AndroidJavaObject_Call_TisAndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_m5ABE53E4F9B01E977767DB5BCE69E696B0EA257D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// FieldType UnityEngine.AndroidJavaObject::Get<System.String>(System.String)
inline String_t* AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared)(__this, ___fieldName0, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Int32>(System.String)
inline int32_t AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_gshared)(__this, ___fieldName0, method);
}
// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationExtensions::ToImportance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToImportance_mF825DF408EBA8407AA80A756321939165CDE9DED (int32_t ___importance0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Importance(Unity.Notifications.Android.Importance)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Description(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Boolean>(System.String)
inline bool AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_gshared)(__this, ___fieldName0, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_EnableLights(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_EnableLights_m7CD6A72DB5139D175ADBEB68984EF42E9BC5A19D_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_EnableVibration(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_EnableVibration_m1D7E703E1989322F82706642D5FDD30BB3FDBDAB_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_CanBypassDnd(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_CanBypassDnd_mC46CCD099353D872B2677782909AB6425709729C_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_CanShowBadge(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_CanShowBadge_mC62C1B6B1A53267281ACC54D88B1882AEBBF6E33_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Int64[]>(System.String)
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJavaObject_Get_TisInt64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_m0EF4D6095F8812E9F918E88C5D4405FFFAB35531 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared)(__this, ___fieldName0, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_VibrationPattern(System.Int64[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_VibrationPattern_m5094F0617F624125303CACD9ABECE78F3CEDE5EF_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___value0, const RuntimeMethod* method) ;
// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationExtensions::ToLockScreenVisibility(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToLockScreenVisibility_mDF748982613826246900C07483FD4417995D2637 (int32_t ___lockscreenVisibility0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_LockScreenVisibility(Unity.Notifications.Android.LockScreenVisibility)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_LockScreenVisibility_m60EA310F67DFC24F7BB72D956503A85E5AF81A6F_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Notifications.Android.AndroidNotificationChannel>::Add(T)
inline void List_1_Add_mCFAF0C852ADFD05729EF44207CE87CD200ABC9A0_inline (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* __this, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2*, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC, const RuntimeMethod*))List_1_Add_mCFAF0C852ADFD05729EF44207CE87CD200ABC9A0_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<Unity.Notifications.Android.AndroidNotificationChannel>::ToArray()
inline AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* List_1_ToArray_mA6E493A1E4C3FF00A2EA2EFA947E2ECBFDE9F19C (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* __this, const RuntimeMethod* method)
{
	return ((  AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* (*) (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2*, const RuntimeMethod*))List_1_ToArray_mA6E493A1E4C3FF00A2EA2EFA947E2ECBFDE9F19C_gshared)(__this, method);
}
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Millisecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Millisecond_mD47CAACAF231AA82552DA9F71836784AF8E27878 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::CreateNotificationBuilder(System.Int32,Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidNotificationCenter_CreateNotificationBuilder_mBAEF85164D0D956BF460D23859173B639EFE91F2 (int32_t ___id0, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___notification1, String_t* ___channelId2, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_SendNotification_m3A2F6E76507993670B90A56EBD2A455048455EAF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___notificationBuilder0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelScheduledNotification(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelScheduledNotification_m09AF99C709F179487C1AC459160BD1F8482F2530 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelDisplayedNotification(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelDisplayedNotification_mEDD943C7EACF9DF736A6024F83993DF96A4BB859 (int32_t ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllScheduledNotifications_mB9F7CB93FC4AA4E1E925523F11D715B2AC89D37B (const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllDisplayedNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllDisplayedNotifications_mE9F1775FEDCAE748489A98734F436E41485C0966 (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___methodName0, ___args1, method);
}
// Unity.Notifications.Android.AndroidNotificationIntentData Unity.Notifications.Android.AndroidNotificationCenter::GetNotificationData(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* AndroidNotificationCenter_GetNotificationData_mE28487D690B4635F58A28189AA4D7CA19EC7A56A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___notificationObj0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m92A7E332B73EC658E001120FC0C9D471367E1542 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 Unity.Notifications.Android.AndroidNotificationExtensions::ToInt(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToInt_m91C0B60EDBD614A641EE3E7AF2D30F227D8ECD67 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___color0, const RuntimeMethod* method) ;
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m62D36F6E745B7E0EC706158960E0650F1A980FC6 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___timeSpan0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisRuntimeObject_mF7C8EFCB16140AB7116DAA3FCB1B585FC7A203F2_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared)(__this, ___methodName0, ___args1, method);
}
// UnityEngine.Color Unity.Notifications.Android.AndroidNotificationExtensions::ToColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F AndroidNotificationExtensions_ToColor_m5C7C27A8A70FA43FC6904E6467CB728DBB0DD7B8 (int32_t ___color0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___methodName0, ___args1, method);
}
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotificationExtensions::ToGroupAlertBehaviours(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToGroupAlertBehaviours_mC3532E41409A2AD93B89C88F6E52E12AC064E348 (int32_t ___groupAlertBehaviour0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::Get<System.Int64>(System.String)
inline int64_t AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_gshared)(__this, ___fieldName0, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::.ctor(System.Int32,System.String,Unity.Notifications.Android.AndroidNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData__ctor_mC71DBF52CCA5391F4F0D04F329F96E834E847383 (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, int32_t ___id0, String_t* ___channelId1, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___notification2, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::set_NativeNotification(UnityEngine.AndroidJavaObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationIntentData_set_NativeNotification_m1D0827C74509785207483AF0C9F57EC4E945CD74_inline (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_inline (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m1C6581A2A364B5F84236592BEE8C44D9C06E356B (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6E71531692B5D59264A9AB9B2800CA786AD38E37 (U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_Enabled_mF2DC76901E5D2ECD82EF274229D5D0188E8C2332 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::.ctor(System.String,System.String,System.String,Unity.Notifications.Android.Importance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel__ctor_m34B6C2E63FC733479B457A60CD32B17DB826C92C (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___id0, String_t* ___name1, String_t* ___description2, int32_t ___importance3, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28 (Type_t* ___enumType0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromMilliseconds_mFDCBE9EDA3F6743302C3DD81259AF5D2F00EF775 (double ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::Add(T)
inline void List_1_Add_m46CE58AEE4E46E07AFB03138AA5A356BDD33DABF_inline (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::get_Count()
inline int32_t List_1_get_Count_m0FDA1EA1DF52887ED2369B7FA6FC774E4713C611_inline (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::GetEnumerator()
inline Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090 List_1_GetEnumerator_m4C9A49C08EDACFFBAC0CDCB7D15BDEAF48070C9D (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090 (*) (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::Dispose()
inline void Enumerator_Dispose_mCB6D44778A2A9B82659AE391FF506D93E045ABAE (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::get_Current()
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* Enumerator_get_Current_m1840848A627FD2045207C5361CCE21E6CB3F31A9_inline (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090* __this, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::ReceivedNotificationCallback(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_ReceivedNotificationCallback_mBAD7E5C376AA4F1AE5823E333F17F784D5191B98 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___notification0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.AndroidJavaObject>::MoveNext()
inline bool Enumerator_MoveNext_m3B5584B4C10CEA04D39E45C7CC34333022C16ACC (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::Clear()
inline void List_1_Clear_mF40DD6E3420C881D4AE89511FDAEC4420DAD850D_inline (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>::.ctor()
inline void List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390 (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_pinvoke(const AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18& unmarshaled, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_pinvoke_back(const AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_pinvoke& marshaled, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18& unmarshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_pinvoke_cleanup(AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_com(const AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18& unmarshaled, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_com& marshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_com_back(const AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_com& marshaled, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18& unmarshaled)
{
	Exception_t* ___U3CFireTimeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<FireTime>k__BackingField' of type 'AndroidNotification'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CFireTimeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotification
IL2CPP_EXTERN_C void AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshal_com_cleanup(AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_com& marshaled)
{
}
// System.String Unity.Notifications.Android.AndroidNotification::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Title_m46212F8E4679C44AB95B99590BBB348A18DD3731 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->___U3CTitleU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_Title_m46212F8E4679C44AB95B99590BBB348A18DD3731_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_Title_m46212F8E4679C44AB95B99590BBB348A18DD3731_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTitleU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Text_m141540044DCE8803E1AE7923C40AAFC9C43FC970 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_Text_m141540044DCE8803E1AE7923C40AAFC9C43FC970_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_Text_m141540044DCE8803E1AE7923C40AAFC9C43FC970_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_SmallIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SmallIcon_m77174654228487FB24F21C67332E9FD2D61AF205 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = __this->___U3CSmallIconU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_SmallIcon_m77174654228487FB24F21C67332E9FD2D61AF205_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_SmallIcon_m77174654228487FB24F21C67332E9FD2D61AF205_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_SmallIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CSmallIconU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSmallIconU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline(_thisAdjusted, ___value0, method);
}
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_FireTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotification_get_FireTime_m0AF733556F5435FEEDEF6970FB4E0DB3A58077D5 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CFireTimeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotification_get_FireTime_m0AF733556F5435FEEDEF6970FB4E0DB3A58077D5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = AndroidNotification_get_FireTime_m0AF733556F5435FEEDEF6970FB4E0DB3A58077D5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_FireTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		__this->___U3CFireTimeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<System.TimeSpan> Unity.Notifications.Android.AndroidNotification::get_RepeatInterval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 AndroidNotification_get_RepeatInterval_mCB832F7E47A9B74CBE097C902CF0DD9A1F26595D (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_RepeatInterval; }
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___m_RepeatInterval_17;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 AndroidNotification_get_RepeatInterval_mCB832F7E47A9B74CBE097C902CF0DD9A1F26595D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 _returnValue;
	_returnValue = AndroidNotification_get_RepeatInterval_mCB832F7E47A9B74CBE097C902CF0DD9A1F26595D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_RepeatInterval(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B2_0 = NULL;
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B1_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B3_1 = NULL;
	{
		// set { m_RepeatInterval = value.HasValue ? value.Value : (-1L).ToTimeSpan(); }
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline((&___value0), Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = AndroidNotificationExtensions_ToTimeSpan_m296ABA6771A5DA8F6DAF364B998BB78246024E20(((int64_t)(-1)), NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0013:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3((&___value0), Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		G_B3_1->___m_RepeatInterval_17 = G_B3_0;
		// set { m_RepeatInterval = value.HasValue ? value.Value : (-1L).ToTimeSpan(); }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53_AdjustorThunk (RuntimeObject* __this, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_LargeIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_LargeIcon_mF1632ADD12CBED7A6D19A1A02B22B4FD188A9533 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = __this->___U3CLargeIconU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_LargeIcon_mF1632ADD12CBED7A6D19A1A02B22B4FD188A9533_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_LargeIcon_mF1632ADD12CBED7A6D19A1A02B22B4FD188A9533_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_LargeIcon(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CLargeIconU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLargeIconU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::get_Style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = __this->___U3CStyleU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Style(Unity.Notifications.Android.NotificationStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStyleU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline(_thisAdjusted, ___value0, method);
}
// System.Nullable`1<UnityEngine.Color> Unity.Notifications.Android.AndroidNotification::get_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 AndroidNotification_get_Color_m2824AA847E3044429A0685DCDA2D3C205813AFC9 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Color; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_Color_16;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 AndroidNotification_get_Color_m2824AA847E3044429A0685DCDA2D3C205813AFC9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 _returnValue;
	_returnValue = AndroidNotification_get_Color_m2824AA847E3044429A0685DCDA2D3C205813AFC9(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Color(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B2_0 = NULL;
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* G_B3_1 = NULL;
	{
		// set { m_Color = value.HasValue ? value.Value : new Color(0, 0, 0, 0); }
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline((&___value0), Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_002c;
	}

IL_0025:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637((&___value0), Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_002c:
	{
		G_B3_1->___m_Color_16 = G_B3_0;
		// set { m_Color = value.HasValue ? value.Value : new Color(0, 0, 0, 0); }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0_AdjustorThunk (RuntimeObject* __this, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0(_thisAdjusted, ___value0, method);
}
// System.Int32 Unity.Notifications.Android.AndroidNotification::get_Number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Number_m03B14CBBA8BC94C2039834EC39644C92C39D04B7 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public int Number { get; set; }
		int32_t L_0 = __this->___U3CNumberU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotification_get_Number_m03B14CBBA8BC94C2039834EC39644C92C39D04B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotification_get_Number_m03B14CBBA8BC94C2039834EC39644C92C39D04B7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Number(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Number { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CNumberU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShouldAutoCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShouldAutoCancel_m4F131946B79B3454C37F86FC405A619D6D6F821A (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = __this->___U3CShouldAutoCancelU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_ShouldAutoCancel_m4F131946B79B3454C37F86FC405A619D6D6F821A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotification_get_ShouldAutoCancel_m4F131946B79B3454C37F86FC405A619D6D6F821A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShouldAutoCancel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShouldAutoCancelU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_UsesStopwatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_UsesStopwatch_m78EB97ECEB853B17EB048B8E6494B00EDFAE8C37 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = __this->___U3CUsesStopwatchU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_UsesStopwatch_m78EB97ECEB853B17EB048B8E6494B00EDFAE8C37_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotification_get_UsesStopwatch_m78EB97ECEB853B17EB048B8E6494B00EDFAE8C37_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_UsesStopwatch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUsesStopwatchU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_Group()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Group_mE15A7461C61CA2056EDE3E69F3C67494CAC6289E (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string Group { get; set; }
		String_t* L_0 = __this->___U3CGroupU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_Group_mE15A7461C61CA2056EDE3E69F3C67494CAC6289E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_Group_mE15A7461C61CA2056EDE3E69F3C67494CAC6289E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_Group(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Group { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CGroupU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGroupU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_GroupSummary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_GroupSummary_m74B1DC2FB5B4C567BDF4749B6A8D9465ADC12A9C (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = __this->___U3CGroupSummaryU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_GroupSummary_m74B1DC2FB5B4C567BDF4749B6A8D9465ADC12A9C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotification_get_GroupSummary_m74B1DC2FB5B4C567BDF4749B6A8D9465ADC12A9C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupSummary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = ___value0;
		__this->___U3CGroupSummaryU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::get_GroupAlertBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_GroupAlertBehaviour_m1888DF8835E96E8557F1A6F09C78F1E58B35DE9F (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = __this->___U3CGroupAlertBehaviourU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotification_get_GroupAlertBehaviour_m1888DF8835E96E8557F1A6F09C78F1E58B35DE9F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotification_get_GroupAlertBehaviour_m1888DF8835E96E8557F1A6F09C78F1E58B35DE9F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_GroupAlertBehaviour(Unity.Notifications.Android.GroupAlertBehaviours)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CGroupAlertBehaviourU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_SortKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SortKey_mD49CA6B1F49B743D066BB5AE3678D59C1F8282F3 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = __this->___U3CSortKeyU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_SortKey_mD49CA6B1F49B743D066BB5AE3678D59C1F8282F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_SortKey_mD49CA6B1F49B743D066BB5AE3678D59C1F8282F3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_SortKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CSortKeyU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSortKeyU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotification::get_IntentData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_IntentData_mDACD0A1A05BF9C10E52C533F5F8887ADD862BCE3 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = __this->___U3CIntentDataU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotification_get_IntentData_mDACD0A1A05BF9C10E52C533F5F8887ADD862BCE3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotification_get_IntentData_mDACD0A1A05BF9C10E52C533F5F8887ADD862BCE3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_IntentData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIntentDataU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntentDataU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowTimestamp_m9A2D1625C823BC25184648E202ACBB57601DC007 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = __this->___U3CShowTimestampU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_ShowTimestamp_m9A2D1625C823BC25184648E202ACBB57601DC007_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotification_get_ShowTimestamp_m9A2D1625C823BC25184648E202ACBB57601DC007_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowTimestamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShowTimestampU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline(_thisAdjusted, ___value0, method);
}
// System.DateTime Unity.Notifications.Android.AndroidNotification::get_CustomTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotification_get_CustomTimestamp_mEFC143569732A9E663FD726C6722E69B0E234547 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CustomTimestamp; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___m_CustomTimestamp_18;
		return L_0;
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotification_get_CustomTimestamp_mEFC143569732A9E663FD726C6722E69B0E234547_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = AndroidNotification_get_CustomTimestamp_mEFC143569732A9E663FD726C6722E69B0E234547_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_CustomTimestamp(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_CustomTimestamp_mD1E970E5B7764CE2F88220F0B85B9F58651883FB (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	{
		// ShowCustomTimestamp = true;
		AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_inline(__this, (bool)1, NULL);
		// m_CustomTimestamp = value;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		__this->___m_CustomTimestamp_18 = L_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_CustomTimestamp_mD1E970E5B7764CE2F88220F0B85B9F58651883FB_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_CustomTimestamp_mD1E970E5B7764CE2F88220F0B85B9F58651883FB(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotification::get_ShowCustomTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowCustomTimestamp_mFD163DDA1AA335F2AB280AE5D37EA1EA19096DBC (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = __this->___U3CShowCustomTimestampU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotification_get_ShowCustomTimestamp_mFD163DDA1AA335F2AB280AE5D37EA1EA19096DBC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotification_get_ShowCustomTimestamp_mFD163DDA1AA335F2AB280AE5D37EA1EA19096DBC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotification::set_ShowCustomTimestamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShowCustomTimestampU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_inline(_thisAdjusted, ___value0, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::.ctor(System.String,System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification__ctor_m18FDD732AA72F4C581F2677B6D446822B78AD170 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___title0, String_t* ___text1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___fireTime2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Title = title;
		String_t* L_0 = ___title0;
		AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline(__this, L_0, NULL);
		// Text = text;
		String_t* L_1 = ___text1;
		AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline(__this, L_1, NULL);
		// FireTime = fireTime;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___fireTime2;
		AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline(__this, L_2, NULL);
		// SmallIcon = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline(__this, L_3, NULL);
		// ShouldAutoCancel = false;
		AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_inline(__this, (bool)0, NULL);
		// LargeIcon = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline(__this, L_4, NULL);
		// Style = NotificationStyle.None;
		AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline(__this, 0, NULL);
		// Number = -1;
		AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_inline(__this, (-1), NULL);
		// UsesStopwatch = false;
		AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_inline(__this, (bool)0, NULL);
		// IntentData = string.Empty;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_inline(__this, L_5, NULL);
		// Group = string.Empty;
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_inline(__this, L_6, NULL);
		// GroupSummary = false;
		AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_inline(__this, (bool)0, NULL);
		// SortKey = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_inline(__this, L_7, NULL);
		// GroupAlertBehaviour = GroupAlertBehaviours.GroupAlertAll;
		AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_inline(__this, 0, NULL);
		// ShowTimestamp = false;
		AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline(__this, (bool)0, NULL);
		// ShowCustomTimestamp = false;
		AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_inline(__this, (bool)0, NULL);
		// m_RepeatInterval = (-1L).ToTimeSpan();
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = AndroidNotificationExtensions_ToTimeSpan_m296ABA6771A5DA8F6DAF364B998BB78246024E20(((int64_t)(-1)), NULL);
		__this->___m_RepeatInterval_17 = L_8;
		// m_Color = new Color(0, 0, 0, 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___m_Color_16 = L_9;
		// m_CustomTimestamp = (-1L).ToDatetime();
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10;
		L_10 = AndroidNotificationExtensions_ToDatetime_m768472E0022DD7ADD6F4C64F189EFC822D911D13(((int64_t)(-1)), NULL);
		__this->___m_CustomTimestamp_18 = L_10;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification__ctor_m18FDD732AA72F4C581F2677B6D446822B78AD170_AdjustorThunk (RuntimeObject* __this, String_t* ___title0, String_t* ___text1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___fireTime2, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification__ctor_m18FDD732AA72F4C581F2677B6D446822B78AD170(_thisAdjusted, ___title0, ___text1, ___fireTime2, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::.ctor(System.String,System.String,System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification__ctor_m87B49F2A8A6199ECBCCEE54E7D82C670B5CE89A6 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___title0, String_t* ___text1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___fireTime2, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___repeatInterval3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(title, text, fireTime)
		String_t* L_0 = ___title0;
		String_t* L_1 = ___text1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___fireTime2;
		AndroidNotification__ctor_m18FDD732AA72F4C581F2677B6D446822B78AD170(__this, L_0, L_1, L_2, NULL);
		// RepeatInterval = repeatInterval;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = ___repeatInterval3;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53(__this, L_4, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification__ctor_m87B49F2A8A6199ECBCCEE54E7D82C670B5CE89A6_AdjustorThunk (RuntimeObject* __this, String_t* ___title0, String_t* ___text1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___fireTime2, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___repeatInterval3, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification__ctor_m87B49F2A8A6199ECBCCEE54E7D82C670B5CE89A6(_thisAdjusted, ___title0, ___text1, ___fireTime2, ___repeatInterval3, method);
}
// System.Void Unity.Notifications.Android.AndroidNotification::.ctor(System.String,System.String,System.DateTime,System.TimeSpan,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotification__ctor_mFB35CBDA0AE001C4C5EA449304D14FDA2E7CD0A3 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___title0, String_t* ___text1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___fireTime2, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___repeatInterval3, String_t* ___smallIcon4, const RuntimeMethod* method) 
{
	{
		// : this(title, text, fireTime, repeatInterval)
		String_t* L_0 = ___title0;
		String_t* L_1 = ___text1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___fireTime2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = ___repeatInterval3;
		AndroidNotification__ctor_m87B49F2A8A6199ECBCCEE54E7D82C670B5CE89A6(__this, L_0, L_1, L_2, L_3, NULL);
		// SmallIcon = smallIcon;
		String_t* L_4 = ___smallIcon4;
		AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline(__this, L_4, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotification__ctor_mFB35CBDA0AE001C4C5EA449304D14FDA2E7CD0A3_AdjustorThunk (RuntimeObject* __this, String_t* ___title0, String_t* ___text1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___fireTime2, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___repeatInterval3, String_t* ___smallIcon4, const RuntimeMethod* method)
{
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18*>(__this + _offset);
	AndroidNotification__ctor_mFB35CBDA0AE001C4C5EA449304D14FDA2E7CD0A3(_thisAdjusted, ___title0, ___text1, ___fireTime2, ___repeatInterval3, ___smallIcon4, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Notifications.Android.NotificationCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback__ctor_m48B6FEB30BE7B1DD1981F178B417486ADE9E709A (NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NotificationCallback() : base("com.unity.androidnotifications.NotificationCallback")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral78A2E5F909763C2798506373D9793DA98ACAFD83, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.NotificationCallback::onSentNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationCallback_onSentNotification_m48606F004B51A51DAFD8700939BDDA33C7DDCF5F (NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___notification0, const RuntimeMethod* method) 
{
	{
		// AndroidReceivedNotificationMainThreadDispatcher.GetInstance().EnqueueReceivedNotification(notification);
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_0;
		L_0 = AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m01DB25903D243BFD867D4DB58A0A6E363E0A7017_inline(NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___notification0;
		NullCheck(L_0);
		AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m5FE30FC8FD86F26AD0AC5694A43494164E0D7B55(L_0, L_1, NULL);
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
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::add_OnNotificationReceived(Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_add_OnNotificationReceived_m87E4282897AF0BCEDBD54EAA56C7C76526EC3A0D (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* V_0 = NULL;
	NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* V_1 = NULL;
	NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_0 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___OnNotificationReceived_0;
		V_0 = L_0;
	}

IL_0006:
	{
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_1 = V_0;
		V_1 = L_1;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_2 = V_1;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*)CastclassSealed((RuntimeObject*)L_4, NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_5 = V_2;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_6 = V_1;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_7;
		L_7 = InterlockedCompareExchangeImpl<NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*>((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___OnNotificationReceived_0), L_5, L_6);
		V_0 = L_7;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_8 = V_0;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_9 = V_1;
		if ((!(((RuntimeObject*)(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*)L_8) == ((RuntimeObject*)(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::remove_OnNotificationReceived(Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_remove_OnNotificationReceived_mC7BC00BDDA2A56ABAF6F440DC49C73FBE81368CD (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* V_0 = NULL;
	NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* V_1 = NULL;
	NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_0 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___OnNotificationReceived_0;
		V_0 = L_0;
	}

IL_0006:
	{
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_1 = V_0;
		V_1 = L_1;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_2 = V_1;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*)CastclassSealed((RuntimeObject*)L_4, NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_5 = V_2;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_6 = V_1;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_7;
		L_7 = InterlockedCompareExchangeImpl<NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*>((&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___OnNotificationReceived_0), L_5, L_6);
		V_0 = L_7;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_8 = V_0;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_9 = V_1;
		if ((!(((RuntimeObject*)(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*)L_8) == ((RuntimeObject*)(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_mE12024AEA1CC82A341ED8FD29F7811B86C6EC57E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B031EA46C89ACA33496219C86113C5971D96A6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C338FABC52E44288BFE3902ECFD459E179A00B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B4ABC6800E38922B95A7741A7C31E78837967AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F7D86CDAA0C8A81C945C1F706675D9922754FF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral578464DF4BFC276A4118AE25678706EA9C75B4BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DF31DD4FD46D4C3A00C604A8AEE6D8534322805);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral732B68B6E4A4DB829E0CB811204F86B0C8BBFE0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral773844F4EAB0720F10FB37E0065041ACDB243E16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral812C47466403E44034C69DFF8C0737F3F368B65A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA59539643944A464E30D7011A21734B72919F5BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB95030A25CC7A13566AE8FA422E467D13AB6FFDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9C27A6050F45A10AC1FD4E65204F2DFFECAFA72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAA743314C99A7A945A299B6748725F14C02714B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6AF69C91C20A2D4C4D5FA56F7600A7BB5D305BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF840720856A0CCF610CAA8A9B7B760DA4E85F748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD462CB4D212EBE5A672517EB06D3FBD862F866C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_1 = NULL;
	{
		// if (s_Initialized)
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Initialized_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0009:
	{
		// if (AndroidReceivedNotificationMainThreadDispatcher.GetInstance() == null)
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_1;
		L_1 = AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m01DB25903D243BFD867D4DB58A0A6E363E0A7017_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// var receivedNotificationDispatcher = new GameObject("AndroidReceivedNotificationMainThreadDispatcher");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral057C2C56F74B179155BC7BA52E8E5A8F720085C9, NULL);
		// receivedNotificationDispatcher.AddComponent<AndroidReceivedNotificationMainThreadDispatcher>();
		NullCheck(L_3);
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_4;
		L_4 = GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_mE12024AEA1CC82A341ED8FD29F7811B86C6EC57E(L_3, GameObject_AddComponent_TisAndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_mE12024AEA1CC82A341ED8FD29F7811B86C6EC57E_RuntimeMethod_var);
	}

IL_0026:
	{
		// var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_5, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// s_CurrentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_5, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_CurrentActivity_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_CurrentActivity_3), (void*)L_6);
		// var context = s_CurrentActivity.Call<AndroidJavaObject>("getApplicationContext");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_CurrentActivity_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_7, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_8, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_9;
		// s_NotificationManagerClass = new AndroidJavaClass("com.unity.androidnotifications.UnityNotificationManager");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_10, _stringLiteralCAA743314C99A7A945A299B6748725F14C02714B, NULL);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1), (void*)L_10);
		// s_NotificationManager = s_NotificationManagerClass.CallStatic<AndroidJavaObject>("getNotificationManagerImpl", context, s_CurrentActivity);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_11 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_CurrentActivity_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		NullCheck(L_11);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17;
		L_17 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_11, _stringLiteralB57FF4DA3CECFFF19270CA8823E13D52D4D8BC0A, L_15, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2), (void*)L_17);
		// s_NotificationManager.Call("setNotificationCallback", new NotificationCallback());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7* L_21 = (NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7*)il2cpp_codegen_object_new(NotificationCallback_t0467C5609E329D283C32629AAB1CDB1FD1BC1CF7_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		NotificationCallback__ctor_m48B6FEB30BE7B1DD1981F178B417486ADE9E709A(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		NullCheck(L_18);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_18, _stringLiteralF840720856A0CCF610CAA8A9B7B760DA4E85F748, L_20, NULL);
		// using (var notificationClass = new AndroidJavaClass("android.app.Notification"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_22 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_22, _stringLiteralB95030A25CC7A13566AE8FA422E467D13AB6FFDB, NULL);
		V_1 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0123:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_23 = V_1;
					if (!L_23)
					{
						goto IL_012c;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_24 = V_1;
					NullCheck(L_24);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_24);
				}

IL_012c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Notification_EXTRA_TITLE = notificationClass.GetStatic<AndroidJavaObject>("EXTRA_TITLE");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_25 = V_1;
			NullCheck(L_25);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26;
			L_26 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_25, _stringLiteral6DF31DD4FD46D4C3A00C604A8AEE6D8534322805, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
			((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_TITLE_5 = L_26;
			Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_TITLE_5), (void*)L_26);
			// Notification_EXTRA_TEXT = notificationClass.GetStatic<AndroidJavaObject>("EXTRA_TEXT");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_27 = V_1;
			NullCheck(L_27);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28;
			L_28 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_27, _stringLiteral3DFC2D8E2B0854967C8EA0AC932952BDB07081DD, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_TEXT_6 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_TEXT_6), (void*)L_28);
			// Notification_EXTRA_SHOW_CHRONOMETER = notificationClass.GetStatic<AndroidJavaObject>("EXTRA_SHOW_CHRONOMETER");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_29 = V_1;
			NullCheck(L_29);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30;
			L_30 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_29, _stringLiteral732B68B6E4A4DB829E0CB811204F86B0C8BBFE0A, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_SHOW_CHRONOMETER_7 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_SHOW_CHRONOMETER_7), (void*)L_30);
			// Notification_EXTRA_BIG_TEXT = notificationClass.GetStatic<AndroidJavaObject>("EXTRA_BIG_TEXT");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_31 = V_1;
			NullCheck(L_31);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32;
			L_32 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_31, _stringLiteral0B031EA46C89ACA33496219C86113C5971D96A6F, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_BIG_TEXT_8 = L_32;
			Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_BIG_TEXT_8), (void*)L_32);
			// Notification_EXTRA_SHOW_WHEN = notificationClass.GetStatic<AndroidJavaObject>("EXTRA_SHOW_WHEN");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_33 = V_1;
			NullCheck(L_33);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_34;
			L_34 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_33, _stringLiteral0C338FABC52E44288BFE3902ECFD459E179A00B4, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_SHOW_WHEN_9 = L_34;
			Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_SHOW_WHEN_9), (void*)L_34);
			// Notification_FLAG_AUTO_CANCEL = notificationClass.GetStatic<int>("FLAG_AUTO_CANCEL");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_35 = V_1;
			NullCheck(L_35);
			int32_t L_36;
			L_36 = AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC(L_35, _stringLiteralE6AF69C91C20A2D4C4D5FA56F7600A7BB5D305BF, AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
			((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_FLAG_AUTO_CANCEL_10 = L_36;
			// Notification_FLAG_GROUP_SUMMARY = notificationClass.GetStatic<int>("FLAG_GROUP_SUMMARY");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_37 = V_1;
			NullCheck(L_37);
			int32_t L_38;
			L_38 = AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC(L_37, _stringLiteralA59539643944A464E30D7011A21734B72919F5BF, AndroidJavaObject_GetStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m740F3401DEA4A75BADD753EFF71D2328B4147BFC_RuntimeMethod_var);
			((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_FLAG_GROUP_SUMMARY_11 = L_38;
			// }
			goto IL_012d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012d:
	{
		// KEY_FIRE_TIME = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_FIRE_TIME");
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_39 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		NullCheck(L_39);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_40;
		L_40 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_39, _stringLiteral578464DF4BFC276A4118AE25678706EA9C75B4BF, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_FIRE_TIME_12 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_FIRE_TIME_12), (void*)L_40);
		// KEY_ID = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_ID");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_41 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		NullCheck(L_41);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_42;
		L_42 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_41, _stringLiteral4F7D86CDAA0C8A81C945C1F706675D9922754FF1, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_ID_13 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_ID_13), (void*)L_42);
		// KEY_INTENT_DATA = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_INTENT_DATA");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_43 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		NullCheck(L_43);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_44;
		L_44 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_43, _stringLiteralB9C27A6050F45A10AC1FD4E65204F2DFFECAFA72, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_INTENT_DATA_14 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_INTENT_DATA_14), (void*)L_44);
		// KEY_LARGE_ICON = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_LARGE_ICON");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_45 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		NullCheck(L_45);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_46;
		L_46 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_45, _stringLiteralFD462CB4D212EBE5A672517EB06D3FBD862F866C, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_LARGE_ICON_15 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_LARGE_ICON_15), (void*)L_46);
		// KEY_REPEAT_INTERVAL = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_REPEAT_INTERVAL");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_47 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		NullCheck(L_47);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_48;
		L_48 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_47, _stringLiteral773844F4EAB0720F10FB37E0065041ACDB243E16, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_REPEAT_INTERVAL_16 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_REPEAT_INTERVAL_16), (void*)L_48);
		// KEY_NOTIFICATION = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_NOTIFICATION");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_49 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		NullCheck(L_49);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_50;
		L_50 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_49, _stringLiteral3B4ABC6800E38922B95A7741A7C31E78837967AB, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_NOTIFICATION_17 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_NOTIFICATION_17), (void*)L_50);
		// KEY_SMALL_ICON = s_NotificationManagerClass.GetStatic<AndroidJavaObject>("KEY_SMALL_ICON");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_51 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		NullCheck(L_51);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_52;
		L_52 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_51, _stringLiteral812C47466403E44034C69DFF8C0737F3F368B65A, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_SMALL_ICON_18 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_SMALL_ICON_18), (void*)L_52);
		// s_Initialized = true;
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Initialized_4 = (bool)1;
		// return s_Initialized;
		bool L_53 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_Initialized_4;
		return L_53;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::RegisterNotificationChannel(Unity.Notifications.Android.AndroidNotificationChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (string.IsNullOrEmpty(channel.Id))
		String_t* L_1;
		L_1 = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline((&___channel0), NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// throw new Exception("Cannot register notification channel, the channel ID is not specified.");
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3507F14C18339414ED66D51C2A54704F4F66BF29)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2_RuntimeMethod_var)));
	}

IL_0021:
	{
		// if (string.IsNullOrEmpty(channel.Name))
		String_t* L_4;
		L_4 = AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_inline((&___channel0), NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// throw new Exception(string.Format("Cannot register notification channel: {0} , the channel Name is not set.", channel.Id));
		String_t* L_6;
		L_6 = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline((&___channel0), NULL);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA79A01886CDD255DBAF604C7A51EF7370973E814)), L_6, NULL);
		Exception_t* L_8 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2_RuntimeMethod_var)));
	}

IL_0046:
	{
		// if (string.IsNullOrEmpty(channel.Description))
		String_t* L_9;
		L_9 = AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_inline((&___channel0), NULL);
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		// throw new Exception(string.Format("Cannot register notification channel: {0} , the channel Description is not set.", channel.Id));
		String_t* L_11;
		L_11 = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline((&___channel0), NULL);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A63AE410D81A77766BF6FE65A404882F7D7E6D2)), L_11, NULL);
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidNotificationCenter_RegisterNotificationChannel_m3CA615ABEE46287503868C1585FCDF2A60D4C3D2_RuntimeMethod_var)));
	}

IL_006b:
	{
		// s_NotificationManager.Call("registerNotificationChannel",
		//     channel.Id,
		//     channel.Name,
		//     (int)channel.Importance,
		//     channel.Description,
		//     channel.EnableLights,
		//     channel.EnableVibration,
		//     channel.CanBypassDnd,
		//     channel.CanShowBadge,
		//     channel.VibrationPattern,
		//     (int)channel.LockScreenVisibility
		// );
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		String_t* L_17;
		L_17 = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline((&___channel0), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_16;
		String_t* L_19;
		L_19 = AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_inline((&___channel0), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_18;
		int32_t L_21;
		L_21 = AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_inline((&___channel0), NULL);
		int32_t L_22 = ((int32_t)L_21);
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		String_t* L_25;
		L_25 = AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_inline((&___channel0), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_24;
		bool L_27;
		L_27 = AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C_inline((&___channel0), NULL);
		bool L_28 = L_27;
		RuntimeObject* L_29 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_26;
		bool L_31;
		L_31 = AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC_inline((&___channel0), NULL);
		bool L_32 = L_31;
		RuntimeObject* L_33 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_33);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_30;
		bool L_35;
		L_35 = AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D_inline((&___channel0), NULL);
		bool L_36 = L_35;
		RuntimeObject* L_37 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_34;
		bool L_39;
		L_39 = AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4_inline((&___channel0), NULL);
		bool L_40 = L_39;
		RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_41);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_38;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_43;
		L_43 = AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53_inline((&___channel0), NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_43);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_42;
		int32_t L_45;
		L_45 = AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0_inline((&___channel0), NULL);
		int32_t L_46 = ((int32_t)L_45);
		RuntimeObject* L_47 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_47);
		NullCheck(L_14);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_14, _stringLiteralC033F5E36FD3E211DA34178256F8F6BB2359A4AB, L_44, NULL);
		// }
		return;
	}
}
// Unity.Notifications.Android.AndroidNotificationChannel Unity.Notifications.Android.AndroidNotificationCenter::GetNotificationChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC AndroidNotificationCenter_GetNotificationChannel_m0AB088DD1A90862651E97A052BA7736DD8A1B336 (String_t* ___channelId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SingleOrDefault_TisAndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_m99430960DA223E2202707F15B2922D53E52243C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CGetNotificationChannelU3Eb__0_m59EE17BCD9A866EC974D367E67426F8E3894019C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06* L_0 = (U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass24_0__ctor_mC9DF32739C0C3203BEDA781845E73039545F11B7(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06* L_1 = V_0;
		String_t* L_2 = ___channelId0;
		NullCheck(L_1);
		L_1->___channelId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___channelId_0), (void*)L_2);
		// return GetNotificationChannels().SingleOrDefault(channel => channel.Id == channelId);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* L_3;
		L_3 = AndroidNotificationCenter_GetNotificationChannels_m956F96F69B21B1F7783A6484C1F863AA3FB6CCEB(NULL);
		U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06* L_4 = V_0;
		Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662* L_5 = (Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662*)il2cpp_codegen_object_new(Func_2_tDF24EEAA8E333F9F52D9BFD8FFE14D866C8F3662_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m7038815B9AC3A2B1743445F4477478C54A790E39(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass24_0_U3CGetNotificationChannelU3Eb__0_m59EE17BCD9A866EC974D367E67426F8E3894019C_RuntimeMethod_var), NULL);
		AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC L_6;
		L_6 = Enumerable_SingleOrDefault_TisAndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_m99430960DA223E2202707F15B2922D53E52243C0((RuntimeObject*)L_3, L_5, Enumerable_SingleOrDefault_TisAndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_m99430960DA223E2202707F15B2922D53E52243C0_RuntimeMethod_var);
		return L_6;
	}
}
// Unity.Notifications.Android.AndroidNotificationChannel[] Unity.Notifications.Android.AndroidNotificationCenter::GetNotificationChannels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* AndroidNotificationCenter_GetNotificationChannels_m956F96F69B21B1F7783A6484C1F863AA3FB6CCEB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_m5ABE53E4F9B01E977767DB5BCE69E696B0EA257D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisInt64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_m0EF4D6095F8812E9F918E88C5D4405FFFAB35531_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCFAF0C852ADFD05729EF44207CE87CD200ABC9A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA6E493A1E4C3FF00A2EA2EFA947E2ECBFDE9F19C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1CDE35A4919DC502953E354E877F9449F997741D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral042E506EAC403864CC8CA1FFC38CA1637017470F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30F16A331B7FED670D062C2FF7797C91FB1ABEDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79A3A135E5B5186F8B18862121F8DA14F4E3B1BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E56EB3A14BB0A90B10A3F82FE0A66B0323ADC09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral864C6EA0E6C9DCD77772BE341830783DAE6095A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB198D3AB14F5B2827707E988BEBDF73FC8251B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8AC977222A7FA0351E2E5F9ED0B1270C1355771);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD63E5B8C1F7235D8901BA385D75F8988FD3A9182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB534843932D1025EEE09575458F840C63DC1063);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* V_0 = NULL;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_1 = NULL;
	int32_t V_2 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return new AndroidNotificationChannel[0];
		AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* L_1 = (AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4*)(AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4*)SZArrayNew(AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_1;
	}

IL_000e:
	{
		// List<AndroidNotificationChannel> channels = new List<AndroidNotificationChannel>();
		List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* L_2 = (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2*)il2cpp_codegen_object_new(List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m1CDE35A4919DC502953E354E877F9449F997741D(L_2, List_1__ctor_m1CDE35A4919DC502953E354E877F9449F997741D_RuntimeMethod_var);
		V_0 = L_2;
		// var androidChannels = s_NotificationManager.Call<AndroidJavaObject[]>("getNotificationChannels");
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_m5ABE53E4F9B01E977767DB5BCE69E696B0EA257D(L_3, _stringLiteral864C6EA0E6C9DCD77772BE341830783DAE6095A8, L_4, AndroidJavaObject_Call_TisAndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_m5ABE53E4F9B01E977767DB5BCE69E696B0EA257D_RuntimeMethod_var);
		// foreach (var channel in androidChannels)
		V_1 = L_5;
		V_2 = 0;
		goto IL_0106;
	}

IL_0030:
	{
		// foreach (var channel in androidChannels)
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// var ch = new AndroidNotificationChannel();
		il2cpp_codegen_initobj((&V_4), sizeof(AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC));
		// ch.Id = channel.Get<string>("id");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_10, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline((&V_4), L_11, NULL);
		// ch.Name = channel.Get<string>("name");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = V_3;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_12, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline((&V_4), L_13, NULL);
		// ch.Importance = channel.Get<int>("importance").ToImportance();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB(L_14, _stringLiteral8CB198D3AB14F5B2827707E988BEBDF73FC8251B, AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var);
		int32_t L_16;
		L_16 = AndroidNotificationExtensions_ToImportance_mF825DF408EBA8407AA80A756321939165CDE9DED(L_15, NULL);
		AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline((&V_4), L_16, NULL);
		// ch.Description = channel.Get<string>("description");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_3;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030(L_17, _stringLiteralEB534843932D1025EEE09575458F840C63DC1063, AndroidJavaObject_Get_TisString_t_m1E165541E71E1CDCF224FC55CBD0955147BB9030_RuntimeMethod_var);
		AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline((&V_4), L_18, NULL);
		// ch.EnableLights = channel.Get<bool>("enableLights");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = V_3;
		NullCheck(L_19);
		bool L_20;
		L_20 = AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016(L_19, _stringLiteralA8AC977222A7FA0351E2E5F9ED0B1270C1355771, AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var);
		AndroidNotificationChannel_set_EnableLights_m7CD6A72DB5139D175ADBEB68984EF42E9BC5A19D_inline((&V_4), L_20, NULL);
		// ch.EnableVibration = channel.Get<bool>("enableVibration");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_3;
		NullCheck(L_21);
		bool L_22;
		L_22 = AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016(L_21, _stringLiteral042E506EAC403864CC8CA1FFC38CA1637017470F, AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var);
		AndroidNotificationChannel_set_EnableVibration_m1D7E703E1989322F82706642D5FDD30BB3FDBDAB_inline((&V_4), L_22, NULL);
		// ch.CanBypassDnd = channel.Get<bool>("canBypassDnd");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = V_3;
		NullCheck(L_23);
		bool L_24;
		L_24 = AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016(L_23, _stringLiteral7E56EB3A14BB0A90B10A3F82FE0A66B0323ADC09, AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var);
		AndroidNotificationChannel_set_CanBypassDnd_mC46CCD099353D872B2677782909AB6425709729C_inline((&V_4), L_24, NULL);
		// ch.CanShowBadge = channel.Get<bool>("canShowBadge");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_3;
		NullCheck(L_25);
		bool L_26;
		L_26 = AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016(L_25, _stringLiteral30F16A331B7FED670D062C2FF7797C91FB1ABEDC, AndroidJavaObject_Get_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6F4712024377FBA61B40109CE304D4EA5C145016_RuntimeMethod_var);
		AndroidNotificationChannel_set_CanShowBadge_mC62C1B6B1A53267281ACC54D88B1882AEBBF6E33_inline((&V_4), L_26, NULL);
		// ch.VibrationPattern = channel.Get<long[]>("vibrationPattern");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27 = V_3;
		NullCheck(L_27);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_28;
		L_28 = AndroidJavaObject_Get_TisInt64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_m0EF4D6095F8812E9F918E88C5D4405FFFAB35531(L_27, _stringLiteral79A3A135E5B5186F8B18862121F8DA14F4E3B1BB, AndroidJavaObject_Get_TisInt64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_m0EF4D6095F8812E9F918E88C5D4405FFFAB35531_RuntimeMethod_var);
		AndroidNotificationChannel_set_VibrationPattern_m5094F0617F624125303CACD9ABECE78F3CEDE5EF_inline((&V_4), L_28, NULL);
		// ch.LockScreenVisibility = channel.Get<int>("lockscreenVisibility").ToLockScreenVisibility();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = V_3;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB(L_29, _stringLiteralD63E5B8C1F7235D8901BA385D75F8988FD3A9182, AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var);
		int32_t L_31;
		L_31 = AndroidNotificationExtensions_ToLockScreenVisibility_mDF748982613826246900C07483FD4417995D2637(L_30, NULL);
		AndroidNotificationChannel_set_LockScreenVisibility_m60EA310F67DFC24F7BB72D956503A85E5AF81A6F_inline((&V_4), L_31, NULL);
		// channels.Add(ch);
		List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* L_32 = V_0;
		AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC L_33 = V_4;
		NullCheck(L_32);
		List_1_Add_mCFAF0C852ADFD05729EF44207CE87CD200ABC9A0_inline(L_32, L_33, List_1_Add_mCFAF0C852ADFD05729EF44207CE87CD200ABC9A0_RuntimeMethod_var);
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0106:
	{
		// foreach (var channel in androidChannels)
		int32_t L_35 = V_2;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_36 = V_1;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// return channels.ToArray();
		List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* L_37 = V_0;
		NullCheck(L_37);
		AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* L_38;
		L_38 = List_1_ToArray_mA6E493A1E4C3FF00A2EA2EFA947E2ECBFDE9F19C(L_37, List_1_ToArray_mA6E493A1E4C3FF00A2EA2EFA947E2ECBFDE9F19C_RuntimeMethod_var);
		return L_38;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::DeleteNotificationChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_DeleteNotificationChannel_m5144723F93604650B197C84172DEC833BC233720 (String_t* ___channelId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C1749774F0E2DFDC58A4BABD710AAF76A0E543);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// s_NotificationManager.Call("deleteNotificationChannel", channelId);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___channelId0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralA3C1749774F0E2DFDC58A4BABD710AAF76A0E543, L_3, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationCenter_SendNotification_mFADE76DB5826511F62598D5DDC8982904AAD7684 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___notification0, String_t* ___channelId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E07AAC0DB599074DF5A532EE047B226AF85B461);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// var now = DateTime.UtcNow;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_1;
		// var nowFormatted = $"{now.Year}{now.Month}{now.Day}{now.Hour}{now.Minute}{now.Second}{now.Millisecond}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4;
		L_4 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&V_0), NULL);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		int32_t L_8;
		L_8 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&V_0), NULL);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12;
		L_12 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&V_0), NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		int32_t L_16;
		L_16 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3((&V_0), NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_15;
		int32_t L_20;
		L_20 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973((&V_0), NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_19;
		int32_t L_24;
		L_24 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA((&V_0), NULL);
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_23;
		int32_t L_28;
		L_28 = DateTime_get_Millisecond_mD47CAACAF231AA82552DA9F71836784AF8E27878((&V_0), NULL);
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_30);
		String_t* L_31;
		L_31 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral1E07AAC0DB599074DF5A532EE047B226AF85B461, L_27, NULL);
		// int id = Math.Abs(nowFormatted.GetHashCode()) + (new System.Random().Next(10000));
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_31);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = il2cpp_codegen_abs(L_32);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_34 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_34, NULL);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_34, ((int32_t)10000));
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, L_35));
		// using (var builder = CreateNotificationBuilder(id, notification, channelId))
		int32_t L_36 = V_1;
		AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_37 = ___notification0;
		String_t* L_38 = ___channelId1;
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_39;
		L_39 = AndroidNotificationCenter_CreateNotificationBuilder_mBAEF85164D0D956BF460D23859173B639EFE91F2(L_36, L_37, L_38, NULL);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b4:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00bd;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_41 = V_2;
					NullCheck(L_41);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_41);
				}

IL_00bd:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// SendNotification(builder);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_42 = V_2;
			il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
			AndroidNotificationCenter_SendNotification_m3A2F6E76507993670B90A56EBD2A455048455EAF(L_42, NULL);
			goto IL_00be;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// return id;
		int32_t L_43 = V_1;
		return L_43;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::SendNotificationWithExplicitID(Unity.Notifications.Android.AndroidNotification,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_SendNotificationWithExplicitID_m30DBF4103DB97ECD750A2942CA5E233D0B17DED6 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___notification0, String_t* ___channelId1, int32_t ___id2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// using (var builder = CreateNotificationBuilder(id, notification, channelId))
		int32_t L_1 = ___id2;
		AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_2 = ___notification0;
		String_t* L_3 = ___channelId1;
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidNotificationCenter_CreateNotificationBuilder_mBAEF85164D0D956BF460D23859173B639EFE91F2(L_1, L_2, L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
					if (!L_5)
					{
						goto IL_0021;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0021:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// SendNotification(builder);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_0;
			il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
			AndroidNotificationCenter_SendNotification_m3A2F6E76507993670B90A56EBD2A455048455EAF(L_7, NULL);
			// }
			goto IL_0022;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_SendNotification_m3A2F6E76507993670B90A56EBD2A455048455EAF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___notificationBuilder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F2AC306B45CC6D319AE7C9577C42830701471F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// s_NotificationManager.Call("scheduleNotification", notificationBuilder);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___notificationBuilder0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral21F2AC306B45CC6D319AE7C9577C42830701471F, L_3, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::UpdateScheduledNotification(System.Int32,Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_UpdateScheduledNotification_m483CD427E1B5FE58A9FAE8CAB8D95C261BBE1CA9 (int32_t ___id0, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___notification1, String_t* ___channelId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF56CF02460E3AE9330CB57E3E91202E7FEB01239);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (s_NotificationManager.Call<bool>("checkIfPendingNotificationIsRegistered", id))
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___id0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		bool L_7;
		L_7 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_1, _stringLiteralF56CF02460E3AE9330CB57E3E91202E7FEB01239, L_3, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// using (var builder = CreateNotificationBuilder(id, notification, channelId))
		int32_t L_8 = ___id0;
		AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_9 = ___notification1;
		String_t* L_10 = ___channelId2;
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = AndroidNotificationCenter_CreateNotificationBuilder_mBAEF85164D0D956BF460D23859173B639EFE91F2(L_8, L_9, L_10, NULL);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = V_0;
					if (!L_12)
					{
						goto IL_0042;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = V_0;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// SendNotification(builder);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_0;
			il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
			AndroidNotificationCenter_SendNotification_m3A2F6E76507993670B90A56EBD2A455048455EAF(L_14, NULL);
			// }
			goto IL_0043;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelNotification(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelNotification_m50C48C439FB4E69662D5651A3EA04B0A494E1B9C (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// CancelScheduledNotification(id);
		int32_t L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidNotificationCenter_CancelScheduledNotification_m09AF99C709F179487C1AC459160BD1F8482F2530(L_1, NULL);
		// CancelDisplayedNotification(id);
		int32_t L_2 = ___id0;
		AndroidNotificationCenter_CancelDisplayedNotification_mEDD943C7EACF9DF736A6024F83993DF96A4BB859(L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelScheduledNotification(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelScheduledNotification_m09AF99C709F179487C1AC459160BD1F8482F2530 (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2B2C9BF307CDCC16BAA83374FF3DB32FF40DC47);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// s_NotificationManager.Call("cancelPendingNotification", id);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___id0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralB2B2C9BF307CDCC16BAA83374FF3DB32FF40DC47, L_3, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelDisplayedNotification(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelDisplayedNotification_mEDD943C7EACF9DF736A6024F83993DF96A4BB859 (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8605D3E2708C3D1F69E8F918B7E82EB7E671D987);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// s_NotificationManager.Call("cancelDisplayedNotification", id);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___id0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral8605D3E2708C3D1F69E8F918B7E82EB7E671D987, L_3, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllNotifications_mF5AFE29E7FC1F8D7155855CC67A671B4DC649B87 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// CancelAllScheduledNotifications();
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidNotificationCenter_CancelAllScheduledNotifications_mB9F7CB93FC4AA4E1E925523F11D715B2AC89D37B(NULL);
		// CancelAllDisplayedNotifications();
		AndroidNotificationCenter_CancelAllDisplayedNotifications_mE9F1775FEDCAE748489A98734F436E41485C0966(NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllScheduledNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllScheduledNotifications_mB9F7CB93FC4AA4E1E925523F11D715B2AC89D37B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF14739A4843901C4DA2BFDF445F221F53B320153);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// s_NotificationManager.Call("cancelAllPendingNotificationIntents");
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralF14739A4843901C4DA2BFDF445F221F53B320153, L_2, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::CancelAllDisplayedNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_CancelAllDisplayedNotifications_mE9F1775FEDCAE748489A98734F436E41485C0966 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CC7E4A3E1708A6D64EB7722229CBE4D8B9DE0AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// s_NotificationManager.Call("cancelAllNotifications");
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral5CC7E4A3E1708A6D64EB7722229CBE4D8B9DE0AC, L_2, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// Unity.Notifications.Android.NotificationStatus Unity.Notifications.Android.AndroidNotificationCenter::CheckScheduledNotificationStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationCenter_CheckScheduledNotificationStatus_m497C97BA3C4F769675FA5A0138E4BB1F81EDB9A7 (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201E98F8587A94F62371653455535087BFBD7536);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return NotificationStatus.Unavailable;
		return (int32_t)((-1));
	}

IL_0009:
	{
		// var status = s_NotificationManager.Call<int>("checkNotificationStatus", id);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___id0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_1);
		int32_t L_7;
		L_7 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_1, _stringLiteral201E98F8587A94F62371653455535087BFBD7536, L_3, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		// return (NotificationStatus)status;
		return (int32_t)(L_7);
	}
}
// Unity.Notifications.Android.AndroidNotificationIntentData Unity.Notifications.Android.AndroidNotificationCenter::GetLastNotificationIntent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* AndroidNotificationCenter_GetLastNotificationIntent_mFB308DC75D6A2BB8709BA34ADE13C0860CDC196C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EFF4F4CAEEA7AB0E9270868BE4E7EDF20D2A6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return null;
		return (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*)NULL;
	}

IL_0009:
	{
		// var intent = s_CurrentActivity.Call<AndroidJavaObject>("getIntent");
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_CurrentActivity_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_1, _stringLiteralC6BB6E51318A73F893E5ECC5FA841B3043DC4C87, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_3;
		// var notification = s_NotificationManagerClass.CallStatic<AndroidJavaObject>("getNotificationFromIntent", s_CurrentActivity, intent);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_CurrentActivity_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
		L_10 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_4, _stringLiteral77EFF4F4CAEEA7AB0E9270868BE4E7EDF20D2A6D, L_8, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_1 = L_10;
		// if (notification == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_1;
		if (L_11)
		{
			goto IL_0045;
		}
	}
	{
		// return null;
		return (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*)NULL;
	}

IL_0045:
	{
		// return GetNotificationData(notification);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_13;
		L_13 = AndroidNotificationCenter_GetNotificationData_mE28487D690B4635F58A28189AA4D7CA19EC7A56A(L_12, NULL);
		return L_13;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::OpenNotificationSettings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_OpenNotificationSettings_mCBAB335D216FCE484181556733D187A3711CA3A1 (String_t* ___channelId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC55E14875AB248A8777CF4415B8B907416BCA185);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Initialize())
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AndroidNotificationCenter_Initialize_m7FE4465A27CB4DCF07D138715B26FF553C055CDA(NULL);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// s_NotificationManager.Call("showNotificationSettings", channelId);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___channelId0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralC55E14875AB248A8777CF4415B8B907416BCA185, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::CreateNotificationBuilder(Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidNotificationCenter_CreateNotificationBuilder_m882FE96B446F7752DA065E70138C788AB9A97EA7 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___notification0, String_t* ___channelId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int id = Math.Abs(DateTime.Now.ToString("yyMMddHHmmssffffff").GetHashCode()) + (new System.Random().Next(10000));
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), _stringLiteral639F01DFEB0CC71DC57E14265FC5642D13533AEF, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = il2cpp_codegen_abs(L_2);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_4, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_4, ((int32_t)10000));
		// return CreateNotificationBuilder(id, notification, channelId);
		AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_6 = ___notification0;
		String_t* L_7 = ___channelId1;
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AndroidNotificationCenter_CreateNotificationBuilder_mBAEF85164D0D956BF460D23859173B639EFE91F2(((int32_t)il2cpp_codegen_add(L_3, L_5)), L_6, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationCenter::CreateNotificationBuilder(System.Int32,Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidNotificationCenter_CreateNotificationBuilder_mBAEF85164D0D956BF460D23859173B639EFE91F2 (int32_t ___id0, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___notification1, String_t* ___channelId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2371502F77FC4E06CEA26C3019181A650BF2FE0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28E45B65F67DFEF09A216B89076AB46384ECAEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral309475E2FD5CCC4B93075E4B2F688139336E3976);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral417033260ED9866C8F3942C4B186232283F80EBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F6952B2006C0E82025C36C339675E51FB14C5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65270D282A6EB620B640BB3DE24D30E7DC225F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C129EA550A36247CE9509C041D9D2BF744EA5A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral759248FA866422EA1C6CEAB03289DC132A7B89A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77739BBFD23D47C94ED718EBC308956A5D4AB21D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F9D1AC8003CE64AD22B0DA00079089562028B6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FC7E3B9590667C5068E9E851357567AEEA3578B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA39D8B3C25D62F9AC74346490A808A083149BC3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69581B713E8DF5FDC303A301CB6B19917AD174B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9B81E6CB678EF7D657F87AD3E4F30A67E57938C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD76D61D6CB247074CC233E90926FDF3F2E3684E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0531D8CE590C96ADED66DEADF41A647EC9B4879);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91A960CB813ACBB09046C8766F780B73B27BC7C);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_5 = NULL;
	int64_t G_B15_0 = 0;
	{
		// long fireTime = notification.FireTime.ToLong();
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = AndroidNotification_get_FireTime_m0AF733556F5435FEEDEF6970FB4E0DB3A58077D5_inline((&___notification1), NULL);
		int64_t L_1;
		L_1 = AndroidNotificationExtensions_ToLong_m92A7E332B73EC658E001120FC0C9D471367E1542(L_0, NULL);
		V_0 = L_1;
		// if (fireTime < 0L)
		int64_t L_2 = V_0;
		if ((((int64_t)L_2) >= ((int64_t)((int64_t)0))))
		{
			goto IL_001c;
		}
	}
	{
		// Debug.LogError("Failed to schedule notification, it did not contain a valid FireTime");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral28E45B65F67DFEF09A216B89076AB46384ECAEFD, NULL);
	}

IL_001c:
	{
		// var notificationBuilder = s_NotificationManager.Call<AndroidJavaObject>("createNotificationBuilder", channelId);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManager_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		String_t* L_6 = ___channelId2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteralA39D8B3C25D62F9AC74346490A808A083149BC3C, L_5, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_7;
		// s_NotificationManagerClass.CallStatic("setNotificationIcon", notificationBuilder, KEY_SMALL_ICON, notification.SmallIcon);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_SMALL_ICON_18;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		String_t* L_15;
		L_15 = AndroidNotification_get_SmallIcon_m77174654228487FB24F21C67332E9FD2D61AF205_inline((&___notification1), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		NullCheck(L_8);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_8, _stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE, L_14, NULL);
		// if (!string.IsNullOrEmpty(notification.LargeIcon))
		String_t* L_16;
		L_16 = AndroidNotification_get_LargeIcon_mF1632ADD12CBED7A6D19A1A02B22B4FD188A9533_inline((&___notification1), NULL);
		bool L_17;
		L_17 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_16, NULL);
		if (L_17)
		{
			goto IL_009a;
		}
	}
	{
		// s_NotificationManagerClass.CallStatic("setNotificationIcon", notificationBuilder, KEY_LARGE_ICON, notification.LargeIcon);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_18 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_1;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_20;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_LARGE_ICON_15;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_22;
		String_t* L_25;
		L_25 = AndroidNotification_get_LargeIcon_mF1632ADD12CBED7A6D19A1A02B22B4FD188A9533_inline((&___notification1), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_25);
		NullCheck(L_18);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_18, _stringLiteral003F1A0D4698F0D0994034CB42BE57F01E7071EE, L_24, NULL);
	}

IL_009a:
	{
		// notificationBuilder.Call<AndroidJavaObject>("setContentTitle", notification.Title).Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
		String_t* L_29;
		L_29 = AndroidNotification_get_Title_m46212F8E4679C44AB95B99590BBB348A18DD3731_inline((&___notification1), NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
		NullCheck(L_26);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30;
		L_30 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_26, _stringLiteralD76D61D6CB247074CC233E90926FDF3F2E3684E5, L_28, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_30);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_30, NULL);
		// notificationBuilder.Call<AndroidJavaObject>("setContentText", notification.Text).Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_32;
		String_t* L_34;
		L_34 = AndroidNotification_get_Text_m141540044DCE8803E1AE7923C40AAFC9C43FC970_inline((&___notification1), NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_34);
		NullCheck(L_31);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_35;
		L_35 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_31, _stringLiteral77739BBFD23D47C94ED718EBC308956A5D4AB21D, L_33, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_35);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_35, NULL);
		// notificationBuilder.Call<AndroidJavaObject>("setAutoCancel", notification.ShouldAutoCancel).Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_37;
		bool L_39;
		L_39 = AndroidNotification_get_ShouldAutoCancel_m4F131946B79B3454C37F86FC405A619D6D6F821A_inline((&___notification1), NULL);
		bool L_40 = L_39;
		RuntimeObject* L_41 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_41);
		NullCheck(L_36);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_42;
		L_42 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_36, _stringLiteralA69581B713E8DF5FDC303A301CB6B19917AD174B, L_38, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_42);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_42, NULL);
		// if (notification.Number >= 0)
		int32_t L_43;
		L_43 = AndroidNotification_get_Number_m03B14CBBA8BC94C2039834EC39644C92C39D04B7_inline((&___notification1), NULL);
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_012e;
		}
	}
	{
		// notificationBuilder.Call<AndroidJavaObject>("setNumber", notification.Number).Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_44 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_45;
		int32_t L_47;
		L_47 = AndroidNotification_get_Number_m03B14CBBA8BC94C2039834EC39644C92C39D04B7_inline((&___notification1), NULL);
		int32_t L_48 = L_47;
		RuntimeObject* L_49 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_49);
		NullCheck(L_44);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_50;
		L_50 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_44, _stringLiteral759248FA866422EA1C6CEAB03289DC132A7B89A6, L_46, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_50);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_50, NULL);
	}

IL_012e:
	{
		// if (notification.Style == NotificationStyle.BigTextStyle)
		int32_t L_51;
		L_51 = AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_inline((&___notification1), NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)2))))
		{
			goto IL_0193;
		}
	}
	{
		// using (var style = new AndroidJavaObject("android.app.Notification$BigTextStyle"))
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52;
		L_52 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_53, _stringLiteral65270D282A6EB620B640BB3DE24D30E7DC225F75, L_52, NULL);
		V_4 = L_53;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0187:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_54 = V_4;
					if (!L_54)
					{
						goto IL_0192;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_55 = V_4;
					NullCheck(L_55);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_55);
				}

IL_0192:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// style.Call<AndroidJavaObject>("bigText", notification.Text).Dispose();
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_56 = V_4;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = L_57;
			String_t* L_59;
			L_59 = AndroidNotification_get_Text_m141540044DCE8803E1AE7923C40AAFC9C43FC970_inline((&___notification1), NULL);
			NullCheck(L_58);
			ArrayElementTypeCheck (L_58, L_59);
			(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_59);
			NullCheck(L_56);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_60;
			L_60 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_56, _stringLiteralC9B81E6CB678EF7D657F87AD3E4F30A67E57938C, L_58, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			NullCheck(L_60);
			AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_60, NULL);
			// notificationBuilder.Call<AndroidJavaObject>("setStyle", style).Dispose();
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_61 = V_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_62;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_64 = V_4;
			NullCheck(L_63);
			ArrayElementTypeCheck (L_63, L_64);
			(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_64);
			NullCheck(L_61);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_65;
			L_65 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_61, _stringLiteral41F6952B2006C0E82025C36C339675E51FB14C5E, L_63, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			NullCheck(L_65);
			AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_65, NULL);
			// }
			goto IL_0193;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0193:
	{
		// long timestampValue = notification.ShowCustomTimestamp ? notification.CustomTimestamp.ToLong() : fireTime;
		bool L_66;
		L_66 = AndroidNotification_get_ShowCustomTimestamp_mFD163DDA1AA335F2AB280AE5D37EA1EA19096DBC_inline((&___notification1), NULL);
		if (L_66)
		{
			goto IL_019f;
		}
	}
	{
		int64_t L_67 = V_0;
		G_B15_0 = L_67;
		goto IL_01ab;
	}

IL_019f:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_68;
		L_68 = AndroidNotification_get_CustomTimestamp_mEFC143569732A9E663FD726C6722E69B0E234547_inline((&___notification1), NULL);
		int64_t L_69;
		L_69 = AndroidNotificationExtensions_ToLong_m92A7E332B73EC658E001120FC0C9D471367E1542(L_68, NULL);
		G_B15_0 = L_69;
	}

IL_01ab:
	{
		V_2 = G_B15_0;
		// notificationBuilder.Call<AndroidJavaObject>("setWhen", timestampValue).Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_70 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_71 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = L_71;
		int64_t L_73 = V_2;
		int64_t L_74 = L_73;
		RuntimeObject* L_75 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_74);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_75);
		NullCheck(L_70);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_76;
		L_76 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_70, _stringLiteral8F9D1AC8003CE64AD22B0DA00079089562028B6C, L_72, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_76);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_76, NULL);
		// if (!string.IsNullOrEmpty(notification.Group))
		String_t* L_77;
		L_77 = AndroidNotification_get_Group_mE15A7461C61CA2056EDE3E69F3C67494CAC6289E_inline((&___notification1), NULL);
		bool L_78;
		L_78 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_77, NULL);
		if (L_78)
		{
			goto IL_01f9;
		}
	}
	{
		// notificationBuilder.Call<AndroidJavaObject>("setGroup", notification.Group).Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_79 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_80 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_81 = L_80;
		String_t* L_82;
		L_82 = AndroidNotification_get_Group_mE15A7461C61CA2056EDE3E69F3C67494CAC6289E_inline((&___notification1), NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_82);
		NullCheck(L_79);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_83;
		L_83 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_79, _stringLiteral417033260ED9866C8F3942C4B186232283F80EBC, L_81, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_83);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_83, NULL);
	}

IL_01f9:
	{
		// if (notification.GroupSummary)
		bool L_84;
		L_84 = AndroidNotification_get_GroupSummary_m74B1DC2FB5B4C567BDF4749B6A8D9465ADC12A9C_inline((&___notification1), NULL);
		if (!L_84)
		{
			goto IL_0227;
		}
	}
	{
		// notificationBuilder.Call<AndroidJavaObject>("setGroupSummary", notification.GroupSummary).Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_85 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = L_86;
		bool L_88;
		L_88 = AndroidNotification_get_GroupSummary_m74B1DC2FB5B4C567BDF4749B6A8D9465ADC12A9C_inline((&___notification1), NULL);
		bool L_89 = L_88;
		RuntimeObject* L_90 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_89);
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_90);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_90);
		NullCheck(L_85);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_91;
		L_91 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_85, _stringLiteral8FC7E3B9590667C5068E9E851357567AEEA3578B, L_87, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_91);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_91, NULL);
	}

IL_0227:
	{
		// if (!string.IsNullOrEmpty(notification.SortKey))
		String_t* L_92;
		L_92 = AndroidNotification_get_SortKey_mD49CA6B1F49B743D066BB5AE3678D59C1F8282F3_inline((&___notification1), NULL);
		bool L_93;
		L_93 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_92, NULL);
		if (L_93)
		{
			goto IL_0255;
		}
	}
	{
		// notificationBuilder.Call<AndroidJavaObject>("setSortKey", notification.SortKey).Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_95 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96 = L_95;
		String_t* L_97;
		L_97 = AndroidNotification_get_SortKey_mD49CA6B1F49B743D066BB5AE3678D59C1F8282F3_inline((&___notification1), NULL);
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_97);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_97);
		NullCheck(L_94);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_98;
		L_98 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_94, _stringLiteralF91A960CB813ACBB09046C8766F780B73B27BC7C, L_96, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_98);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_98, NULL);
	}

IL_0255:
	{
		// notificationBuilder.Call<AndroidJavaObject>("setShowWhen", notification.ShowTimestamp).Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_99 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_100 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_101 = L_100;
		bool L_102;
		L_102 = AndroidNotification_get_ShowTimestamp_m9A2D1625C823BC25184648E202ACBB57601DC007_inline((&___notification1), NULL);
		bool L_103 = L_102;
		RuntimeObject* L_104 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_103);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_104);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_104);
		NullCheck(L_99);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105;
		L_105 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_99, _stringLiteral6C129EA550A36247CE9509C041D9D2BF744EA5A6, L_101, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		NullCheck(L_105);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_105, NULL);
		// int color = notification.Color.ToInt();
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_106;
		L_106 = AndroidNotification_get_Color_m2824AA847E3044429A0685DCDA2D3C205813AFC9((&___notification1), NULL);
		int32_t L_107;
		L_107 = AndroidNotificationExtensions_ToInt_m91C0B60EDBD614A641EE3E7AF2D30F227D8ECD67(L_106, NULL);
		V_3 = L_107;
		// if (color != 0)
		int32_t L_108 = V_3;
		if (!L_108)
		{
			goto IL_02ac;
		}
	}
	{
		// s_NotificationManagerClass.CallStatic("setNotificationColor", notificationBuilder, color);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_109 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_110 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_111 = L_110;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_112 = V_1;
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, L_112);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_112);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_113 = L_111;
		int32_t L_114 = V_3;
		int32_t L_115 = L_114;
		RuntimeObject* L_116 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_115);
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_116);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_116);
		NullCheck(L_109);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_109, _stringLiteral309475E2FD5CCC4B93075E4B2F688139336E3976, L_113, NULL);
	}

IL_02ac:
	{
		// s_NotificationManagerClass.CallStatic("setNotificationUsesChronometer", notificationBuilder, notification.UsesStopwatch);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_117 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_118 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_119 = L_118;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_120 = V_1;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_120);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_120);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_121 = L_119;
		bool L_122;
		L_122 = AndroidNotification_get_UsesStopwatch_m78EB97ECEB853B17EB048B8E6494B00EDFAE8C37_inline((&___notification1), NULL);
		bool L_123 = L_122;
		RuntimeObject* L_124 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_123);
		NullCheck(L_121);
		ArrayElementTypeCheck (L_121, L_124);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_124);
		NullCheck(L_117);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_117, _stringLiteralF0531D8CE590C96ADED66DEADF41A647EC9B4879, L_121, NULL);
		// s_NotificationManagerClass.CallStatic("setNotificationGroupAlertBehavior", notificationBuilder, (int)notification.GroupAlertBehaviour);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_125 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_126 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_127 = L_126;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_128 = V_1;
		NullCheck(L_127);
		ArrayElementTypeCheck (L_127, L_128);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_128);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_129 = L_127;
		int32_t L_130;
		L_130 = AndroidNotification_get_GroupAlertBehaviour_m1888DF8835E96E8557F1A6F09C78F1E58B35DE9F_inline((&___notification1), NULL);
		int32_t L_131 = ((int32_t)L_130);
		RuntimeObject* L_132 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_131);
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, L_132);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_132);
		NullCheck(L_125);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_125, _stringLiteral2371502F77FC4E06CEA26C3019181A650BF2FE0A, L_129, NULL);
		// using (var extras = notificationBuilder.Call<AndroidJavaObject>("getExtras"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_133 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_134;
		L_134 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_133);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_135;
		L_135 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_133, _stringLiteralF202BD9C29F9FE8967D2598978C59BC250D49ECC, L_134, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_5 = L_135;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03b6:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_136 = V_5;
					if (!L_136)
					{
						goto IL_03c1;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_137 = V_5;
					NullCheck(L_137);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_137);
				}

IL_03c1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// extras.Call("putInt", KEY_ID, id);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_138 = V_5;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_139 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_140 = L_139;
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_141 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_ID_13;
				NullCheck(L_140);
				ArrayElementTypeCheck (L_140, L_141);
				(L_140)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_141);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_142 = L_140;
				int32_t L_143 = ___id0;
				int32_t L_144 = L_143;
				RuntimeObject* L_145 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_144);
				NullCheck(L_142);
				ArrayElementTypeCheck (L_142, L_145);
				(L_142)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_145);
				NullCheck(L_138);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_138, _stringLiteral2DE10CB9863FBD79A26BDD1E6581EC58F503024E, L_142, NULL);
				// extras.Call("putLong", KEY_REPEAT_INTERVAL, notification.RepeatInterval.ToLong());
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_146 = V_5;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_147 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_148 = L_147;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_149 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_REPEAT_INTERVAL_16;
				NullCheck(L_148);
				ArrayElementTypeCheck (L_148, L_149);
				(L_148)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_149);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_150 = L_148;
				Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_151;
				L_151 = AndroidNotification_get_RepeatInterval_mCB832F7E47A9B74CBE097C902CF0DD9A1F26595D((&___notification1), NULL);
				int64_t L_152;
				L_152 = AndroidNotificationExtensions_ToLong_m62D36F6E745B7E0EC706158960E0650F1A980FC6(L_151, NULL);
				int64_t L_153 = L_152;
				RuntimeObject* L_154 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_153);
				NullCheck(L_150);
				ArrayElementTypeCheck (L_150, L_154);
				(L_150)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_154);
				NullCheck(L_146);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_146, _stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC, L_150, NULL);
				// extras.Call("putLong", KEY_FIRE_TIME, fireTime);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_155 = V_5;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_156 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_157 = L_156;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_158 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_FIRE_TIME_12;
				NullCheck(L_157);
				ArrayElementTypeCheck (L_157, L_158);
				(L_157)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_158);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_159 = L_157;
				int64_t L_160 = V_0;
				int64_t L_161 = L_160;
				RuntimeObject* L_162 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_161);
				NullCheck(L_159);
				ArrayElementTypeCheck (L_159, L_162);
				(L_159)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_162);
				NullCheck(L_155);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_155, _stringLiteralDE9C9A97063C73F56F60488D14A05C3E7A4630EC, L_159, NULL);
				// if (!string.IsNullOrEmpty(notification.IntentData))
				String_t* L_163;
				L_163 = AndroidNotification_get_IntentData_mDACD0A1A05BF9C10E52C533F5F8887ADD862BCE3_inline((&___notification1), NULL);
				bool L_164;
				L_164 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_163, NULL);
				if (L_164)
				{
					goto IL_03b4_1;
				}
			}
			{
				// extras.Call("putString", KEY_INTENT_DATA, notification.IntentData);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_165 = V_5;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_166 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_167 = L_166;
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_168 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_INTENT_DATA_14;
				NullCheck(L_167);
				ArrayElementTypeCheck (L_167, L_168);
				(L_167)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_168);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_169 = L_167;
				String_t* L_170;
				L_170 = AndroidNotification_get_IntentData_mDACD0A1A05BF9C10E52C533F5F8887ADD862BCE3_inline((&___notification1), NULL);
				NullCheck(L_169);
				ArrayElementTypeCheck (L_169, L_170);
				(L_169)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_170);
				NullCheck(L_165);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_165, _stringLiteral4A885A89832F4E62C8E259AA47DF0907BB0C1ED3, L_169, NULL);
			}

IL_03b4_1:
			{
				// }
				goto IL_03c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03c2:
	{
		// return notificationBuilder;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_171 = V_1;
		return L_171;
	}
}
// Unity.Notifications.Android.AndroidNotificationIntentData Unity.Notifications.Android.AndroidNotificationCenter::GetNotificationData(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* AndroidNotificationCenter_GetNotificationData_mE28487D690B4635F58A28189AA4D7CA19EC7A56A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___notificationObj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49E8F9D21CA9B5185CDC5F6ED185D72BA8DCC0CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5049D16B7CF18631FE8A78C554EE95423ABE2103);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB51D9582FEA7F91BD3913A156D5F6C60CDF3C99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD7A6F8806A71C95F4E8692E1F9FC209B82C5A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEADCD3C3021F28CA07F50C4363B7FA9428265172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED4D3D8AFE804D2C2A2E71BE07B28F1C1FEFA1F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCAD6572759BA264A7B9B9106CCB401DB355CAD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* V_6 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_7 = NULL;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// using (var extras = notificationObj.Get<AndroidJavaObject>("extras"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___notificationObj0;
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843(L_0, _stringLiteral7C800E39CF656105FB08CCBDF7383FACFDB73DF7, AndroidJavaObject_Get_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mA11B51F5C7C2B8DA16D22E862BB40BF7057B5843_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0307:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0310;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0310:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var id = extras.Call<int>("getInt", KEY_ID, -1);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_ID_13;
				NullCheck(L_6);
				ArrayElementTypeCheck (L_6, L_7);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
				int32_t L_9 = (-1);
				RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
				NullCheck(L_8);
				ArrayElementTypeCheck (L_8, L_10);
				(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
				NullCheck(L_4);
				int32_t L_11;
				L_11 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_4, _stringLiteralFFF2E3CA72364727F71AA5E2A535E3DD8A40037F, L_8, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
				V_1 = L_11;
				// if (id == -1)
				int32_t L_12 = V_1;
				if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
				{
					goto IL_003b_1;
				}
			}
			{
				// return null;
				V_6 = (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*)NULL;
				goto IL_0311;
			}

IL_003b_1:
			{
				// var channelId = s_NotificationManagerClass.CallStatic<string>("getNotificationChannelId", notificationObj);
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = ___notificationObj0;
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_16);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
				NullCheck(L_13);
				String_t* L_17;
				L_17 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_13, _stringLiteralBB51D9582FEA7F91BD3913A156D5F6C60CDF3C99, L_15, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
				V_2 = L_17;
				// int flags = notificationObj.Get<int>("flags");
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = ___notificationObj0;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB(L_18, _stringLiteralFCAD6572759BA264A7B9B9106CCB401DB355CAD7, AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var);
				V_3 = L_19;
				// var notification = new AndroidNotification();
				il2cpp_codegen_initobj((&V_4), sizeof(AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18));
				// notification.Title = extras.Call<string>("getString", Notification_EXTRA_TITLE);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_TITLE_5;
				NullCheck(L_22);
				ArrayElementTypeCheck (L_22, L_23);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
				NullCheck(L_20);
				String_t* L_24;
				L_24 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_20, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_22, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline((&V_4), L_24, NULL);
				// notification.Text = extras.Call<string>("getString", Notification_EXTRA_TEXT);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_26;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_TEXT_6;
				NullCheck(L_27);
				ArrayElementTypeCheck (L_27, L_28);
				(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
				NullCheck(L_25);
				String_t* L_29;
				L_29 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_25, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_27, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline((&V_4), L_29, NULL);
				// notification.SmallIcon = extras.Call<string>("getString", KEY_SMALL_ICON);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_33 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_SMALL_ICON_18;
				NullCheck(L_32);
				ArrayElementTypeCheck (L_32, L_33);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_33);
				NullCheck(L_30);
				String_t* L_34;
				L_34 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_30, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_32, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline((&V_4), L_34, NULL);
				// notification.LargeIcon = extras.Call<string>("getString", KEY_LARGE_ICON);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_35 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_38 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_LARGE_ICON_15;
				NullCheck(L_37);
				ArrayElementTypeCheck (L_37, L_38);
				(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
				NullCheck(L_35);
				String_t* L_39;
				L_39 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_35, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_37, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline((&V_4), L_39, NULL);
				// notification.ShouldAutoCancel = 0 != (flags & Notification_FLAG_AUTO_CANCEL);
				int32_t L_40 = V_3;
				int32_t L_41 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_FLAG_AUTO_CANCEL_10;
				AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_inline((&V_4), (bool)((!(((uint32_t)((int32_t)(L_40&L_41))) <= ((uint32_t)0)))? 1 : 0), NULL);
				// notification.UsesStopwatch = extras.Call<bool>("getBoolean", Notification_EXTRA_SHOW_CHRONOMETER, false);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_42 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_43;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_45 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_SHOW_CHRONOMETER_7;
				NullCheck(L_44);
				ArrayElementTypeCheck (L_44, L_45);
				(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_45);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_44;
				bool L_47 = ((bool)0);
				RuntimeObject* L_48 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_47);
				NullCheck(L_46);
				ArrayElementTypeCheck (L_46, L_48);
				(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_48);
				NullCheck(L_42);
				bool L_49;
				L_49 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_42, _stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4, L_46, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
				AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_inline((&V_4), L_49, NULL);
				// notification.FireTime = extras.Call<long>("getLong", KEY_FIRE_TIME, -1L).ToDatetime();
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_50 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = L_51;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_FIRE_TIME_12;
				NullCheck(L_52);
				ArrayElementTypeCheck (L_52, L_53);
				(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_53);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = L_52;
				int64_t L_55 = ((int64_t)(-1));
				RuntimeObject* L_56 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_55);
				NullCheck(L_54);
				ArrayElementTypeCheck (L_54, L_56);
				(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_56);
				NullCheck(L_50);
				int64_t L_57;
				L_57 = AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9(L_50, _stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A, L_54, AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_58;
				L_58 = AndroidNotificationExtensions_ToDatetime_m768472E0022DD7ADD6F4C64F189EFC822D911D13(L_57, NULL);
				AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline((&V_4), L_58, NULL);
				// notification.RepeatInterval = extras.Call<long>("getLong", KEY_REPEAT_INTERVAL, -1L).ToTimeSpan();
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_59 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = L_60;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_62 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_REPEAT_INTERVAL_16;
				NullCheck(L_61);
				ArrayElementTypeCheck (L_61, L_62);
				(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_62);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_61;
				int64_t L_64 = ((int64_t)(-1));
				RuntimeObject* L_65 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_64);
				NullCheck(L_63);
				ArrayElementTypeCheck (L_63, L_65);
				(L_63)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_65);
				NullCheck(L_59);
				int64_t L_66;
				L_66 = AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9(L_59, _stringLiteral4274AF175407D69253B9923A96C5257AA75AD49A, L_63, AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_67;
				L_67 = AndroidNotificationExtensions_ToTimeSpan_m296ABA6771A5DA8F6DAF364B998BB78246024E20(L_66, NULL);
				Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_68;
				memset((&L_68), 0, sizeof(L_68));
				Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC((&L_68), L_67, /*hidden argument*/Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
				AndroidNotification_set_RepeatInterval_mB1EA9612E566345CD14179C23212261954772C53((&V_4), L_68, NULL);
				// if (extras.Call<bool>("containsKey", Notification_EXTRA_BIG_TEXT))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_71 = L_70;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_72 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_BIG_TEXT_8;
				NullCheck(L_71);
				ArrayElementTypeCheck (L_71, L_72);
				(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_72);
				NullCheck(L_69);
				bool L_73;
				L_73 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_69, _stringLiteralCCD7A6F8806A71C95F4E8692E1F9FC209B82C5A2, L_71, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
				if (!L_73)
				{
					goto IL_01ab_1;
				}
			}
			{
				// notification.Style = NotificationStyle.BigTextStyle;
				AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline((&V_4), 2, NULL);
				goto IL_01b3_1;
			}

IL_01ab_1:
			{
				// notification.Style = NotificationStyle.None;
				AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline((&V_4), 0, NULL);
			}

IL_01b3_1:
			{
				// using (var color = s_NotificationManagerClass.CallStatic<AndroidJavaObject>("getNotificationColor", notificationObj))
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_74 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_75 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_76 = L_75;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_77 = ___notificationObj0;
				NullCheck(L_76);
				ArrayElementTypeCheck (L_76, L_77);
				(L_76)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_77);
				NullCheck(L_74);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_78;
				L_78 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_74, _stringLiteralED4D3D8AFE804D2C2A2E71BE07B28F1C1FEFA1F8, L_76, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
				V_7 = L_78;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0209_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_79 = V_7;
							if (!L_79)
							{
								goto IL_0214_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_80 = V_7;
							NullCheck(L_80);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_80);
						}

IL_0214_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// if (color == null)
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_81 = V_7;
						if (L_81)
						{
							goto IL_01e5_2;
						}
					}
					{
						// notification.Color = null;
						il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11));
						Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_82 = V_8;
						AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0((&V_4), L_82, NULL);
						goto IL_0215_1;
					}

IL_01e5_2:
					{
						// notification.Color = color.Call<int>("intValue").ToColor();
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_83 = V_7;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_84;
						L_84 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
						NullCheck(L_83);
						int32_t L_85;
						L_85 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_83, _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A, L_84, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
						Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_86;
						L_86 = AndroidNotificationExtensions_ToColor_m5C7C27A8A70FA43FC6904E6467CB728DBB0DD7B8(L_85, NULL);
						Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_87;
						memset((&L_87), 0, sizeof(L_87));
						Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_87), L_86, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
						AndroidNotification_set_Color_m669C997D78F1E2C13E9D283D81D11B034784E5F0((&V_4), L_87, NULL);
						// }
						goto IL_0215_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0215_1:
			{
				// notification.Number = notificationObj.Get<int>("number");
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_88 = ___notificationObj0;
				NullCheck(L_88);
				int32_t L_89;
				L_89 = AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB(L_88, _stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741, AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_RuntimeMethod_var);
				AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_inline((&V_4), L_89, NULL);
				// notification.IntentData = extras.Call<string>("getString", KEY_INTENT_DATA);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_90 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = L_91;
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_93 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___KEY_INTENT_DATA_14;
				NullCheck(L_92);
				ArrayElementTypeCheck (L_92, L_93);
				(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_93);
				NullCheck(L_90);
				String_t* L_94;
				L_94 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_90, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_92, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_inline((&V_4), L_94, NULL);
				// notification.Group = notificationObj.Call<string>("getGroup");
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = ___notificationObj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_96;
				L_96 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_95);
				String_t* L_97;
				L_97 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_95, _stringLiteral49E8F9D21CA9B5185CDC5F6ED185D72BA8DCC0CB, L_96, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_inline((&V_4), L_97, NULL);
				// notification.GroupSummary = 0 != (flags & Notification_FLAG_GROUP_SUMMARY);
				int32_t L_98 = V_3;
				int32_t L_99 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_FLAG_GROUP_SUMMARY_11;
				AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_inline((&V_4), (bool)((!(((uint32_t)((int32_t)(L_98&L_99))) <= ((uint32_t)0)))? 1 : 0), NULL);
				// notification.SortKey = notificationObj.Call<string>("getSortKey");
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_100 = ___notificationObj0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_101;
				L_101 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_100);
				String_t* L_102;
				L_102 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_100, _stringLiteral5049D16B7CF18631FE8A78C554EE95423ABE2103, L_101, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
				AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_inline((&V_4), L_102, NULL);
				// notification.GroupAlertBehaviour = s_NotificationManagerClass.CallStatic<int>("getNotificationGroupAlertBehavior", notificationObj).ToGroupAlertBehaviours();
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_103 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___s_NotificationManagerClass_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_104 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_105 = L_104;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_106 = ___notificationObj0;
				NullCheck(L_105);
				ArrayElementTypeCheck (L_105, L_106);
				(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_106);
				NullCheck(L_103);
				int32_t L_107;
				L_107 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_103, _stringLiteralEADCD3C3021F28CA07F50C4363B7FA9428265172, L_105, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
				int32_t L_108;
				L_108 = AndroidNotificationExtensions_ToGroupAlertBehaviours_mC3532E41409A2AD93B89C88F6E52E12AC064E348(L_107, NULL);
				AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_inline((&V_4), L_108, NULL);
				// var showTimestamp = extras.Call<bool>("getBoolean", Notification_EXTRA_SHOW_WHEN, false);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_109 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_110 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_111 = L_110;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_112 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___Notification_EXTRA_SHOW_WHEN_9;
				NullCheck(L_111);
				ArrayElementTypeCheck (L_111, L_112);
				(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_112);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_113 = L_111;
				bool L_114 = ((bool)0);
				RuntimeObject* L_115 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_114);
				NullCheck(L_113);
				ArrayElementTypeCheck (L_113, L_115);
				(L_113)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_115);
				NullCheck(L_109);
				bool L_116;
				L_116 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_109, _stringLiteral8287EADB7084004EF45B96CC3CE0643C79A55CD4, L_113, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
				V_5 = L_116;
				// notification.ShowTimestamp = showTimestamp;
				bool L_117 = V_5;
				AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline((&V_4), L_117, NULL);
				// if (showTimestamp)
				bool L_118 = V_5;
				if (!L_118)
				{
					goto IL_02f3_1;
				}
			}
			{
				// notification.CustomTimestamp = notificationObj.Get<long>("when").ToDatetime();
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_119 = ___notificationObj0;
				NullCheck(L_119);
				int64_t L_120;
				L_120 = AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244(L_119, _stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9, AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_RuntimeMethod_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_121;
				L_121 = AndroidNotificationExtensions_ToDatetime_m768472E0022DD7ADD6F4C64F189EFC822D911D13(L_120, NULL);
				AndroidNotification_set_CustomTimestamp_mD1E970E5B7764CE2F88220F0B85B9F58651883FB((&V_4), L_121, NULL);
			}

IL_02f3_1:
			{
				// var data = new AndroidNotificationIntentData(id, channelId, notification);
				int32_t L_122 = V_1;
				String_t* L_123 = V_2;
				AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_124 = V_4;
				AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_125 = (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*)il2cpp_codegen_object_new(AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729_il2cpp_TypeInfo_var);
				NullCheck(L_125);
				AndroidNotificationIntentData__ctor_mC71DBF52CCA5391F4F0D04F329F96E834E847383(L_125, L_122, L_123, L_124, NULL);
				// data.NativeNotification = notificationObj;
				AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_126 = L_125;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_127 = ___notificationObj0;
				NullCheck(L_126);
				AndroidNotificationIntentData_set_NativeNotification_m1D0827C74509785207483AF0C9F57EC4E945CD74_inline(L_126, L_127, NULL);
				// return data;
				V_6 = L_126;
				goto IL_0311;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0311:
	{
		// }
		AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_128 = V_6;
		return L_128;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::ReceivedNotificationCallback(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_ReceivedNotificationCallback_mBAD7E5C376AA4F1AE5823E333F17F784D5191B98 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___notification0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* V_0 = NULL;
	{
		// var data = GetNotificationData(notification);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___notification0;
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_1;
		L_1 = AndroidNotificationCenter_GetNotificationData_mE28487D690B4635F58A28189AA4D7CA19EC7A56A(L_0, NULL);
		V_0 = L_1;
		// OnNotificationReceived(data);
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_2 = ((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___OnNotificationReceived_0;
		AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* L_3 = V_0;
		NullCheck(L_2);
		NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter__ctor_m1356A1AC8BBBC3B884CDA2B45625E8EB7C54E73E (AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter__cctor_m7D790FF1D3EBAB7D2D7BC7514DB39EAA46EF8FFD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__45_0_m7D3E04D935833A870BB07A50D2F8F3337B953080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static event NotificationReceivedCallback OnNotificationReceived = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var);
		U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* L_0 = ((U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* L_1 = (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*)il2cpp_codegen_object_new(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NotificationReceivedCallback__ctor_m1C6581A2A364B5F84236592BEE8C44D9C06E356B(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__45_0_m7D3E04D935833A870BB07A50D2F8F3337B953080_RuntimeMethod_var), NULL);
		((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___OnNotificationReceived_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_StaticFields*)il2cpp_codegen_static_fields_for(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var))->___OnNotificationReceived_0), (void*)L_1);
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
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_Multicast(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* currentDelegate = reinterpret_cast<NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenInst(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method)
{
	NullCheck(___data0);
	typedef void (*FunctionPointerType) (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenStatic(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenStaticInvoker(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* >::Invoke(__this->___method_ptr_0, method, NULL, ___data0);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_ClosedStaticInvoker(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___data0);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenVirtual(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method)
{
	NullCheck(___data0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___data0);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenInterface(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method)
{
	NullCheck(___data0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___data0);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenGenericVirtual(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method)
{
	NullCheck(___data0);
	GenericVirtualActionInvoker0::Invoke(method, ___data0);
}
void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenGenericInterface(NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method)
{
	NullCheck(___data0);
	GenericInterfaceActionInvoker0::Invoke(method, ___data0);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback__ctor_m1C6581A2A364B5F84236592BEE8C44D9C06E356B (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_Multicast;
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::Invoke(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4 (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::BeginInvoke(Unity.Notifications.Android.AndroidNotificationIntentData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationReceivedCallback_BeginInvoke_m7195606CDAC49D51D798ED12E1D98A6B28358351 (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/NotificationReceivedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationReceivedCallback_EndInvoke_m85DF87F26C3E670626AB85868003EC5881A05430 (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_mC9DF32739C0C3203BEDA781845E73039545F11B7 (U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationCenter/<>c__DisplayClass24_0::<GetNotificationChannel>b__0(Unity.Notifications.Android.AndroidNotificationChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass24_0_U3CGetNotificationChannelU3Eb__0_m59EE17BCD9A866EC974D367E67426F8E3894019C (U3CU3Ec__DisplayClass24_0_tA3CB08DAE45E04D9273D1EF532E80A0374CA3D06* __this, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___channel0, const RuntimeMethod* method) 
{
	{
		// return GetNotificationChannels().SingleOrDefault(channel => channel.Id == channelId);
		String_t* L_0;
		L_0 = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline((&___channel0), NULL);
		String_t* L_1 = __this->___channelId_0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		return L_2;
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
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB706452B2559848DAC4032647E21CF1A31496DEB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* L_0 = (U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20*)il2cpp_codegen_object_new(U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6E71531692B5D59264A9AB9B2800CA786AD38E37(L_0, NULL);
		((U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6E71531692B5D59264A9AB9B2800CA786AD38E37 (U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationCenter/<>c::<.cctor>b__45_0(Unity.Notifications.Android.AndroidNotificationIntentData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__45_0_m7D3E04D935833A870BB07A50D2F8F3337B953080 (U3CU3Ec_t4795D2EA8B48B91D0F06A6042BB46861429ABF20* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public static event NotificationReceivedCallback OnNotificationReceived = delegate { };
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
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_pinvoke(const AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC& unmarshaled, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_string(unmarshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CImportanceU3Ek__BackingField_3 = unmarshaled.___U3CImportanceU3Ek__BackingField_3;
	marshaled.___U3CCanBypassDndU3Ek__BackingField_4 = static_cast<int32_t>(unmarshaled.___U3CCanBypassDndU3Ek__BackingField_4);
	marshaled.___U3CCanShowBadgeU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.___U3CCanShowBadgeU3Ek__BackingField_5);
	marshaled.___U3CEnableLightsU3Ek__BackingField_6 = static_cast<int32_t>(unmarshaled.___U3CEnableLightsU3Ek__BackingField_6);
	marshaled.___U3CEnableVibrationU3Ek__BackingField_7 = static_cast<int32_t>(unmarshaled.___U3CEnableVibrationU3Ek__BackingField_7);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I8, unmarshaled.___U3CVibrationPatternU3Ek__BackingField_8);
	marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9 = unmarshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9;
}
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_pinvoke_back(const AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_pinvoke& marshaled, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_string_result(marshaled.___U3CIdU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CIdU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CNameU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1));
	unmarshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_string_result(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CDescriptionU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CDescriptionU3Ek__BackingField_2));
	int32_t unmarshaledU3CImportanceU3Ek__BackingField_temp_3 = 0;
	unmarshaledU3CImportanceU3Ek__BackingField_temp_3 = marshaled.___U3CImportanceU3Ek__BackingField_3;
	unmarshaled.___U3CImportanceU3Ek__BackingField_3 = unmarshaledU3CImportanceU3Ek__BackingField_temp_3;
	bool unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_4 = false;
	unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_4 = static_cast<bool>(marshaled.___U3CCanBypassDndU3Ek__BackingField_4);
	unmarshaled.___U3CCanBypassDndU3Ek__BackingField_4 = unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_4;
	bool unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_5 = false;
	unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CCanShowBadgeU3Ek__BackingField_5);
	unmarshaled.___U3CCanShowBadgeU3Ek__BackingField_5 = unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_5;
	bool unmarshaledU3CEnableLightsU3Ek__BackingField_temp_6 = false;
	unmarshaledU3CEnableLightsU3Ek__BackingField_temp_6 = static_cast<bool>(marshaled.___U3CEnableLightsU3Ek__BackingField_6);
	unmarshaled.___U3CEnableLightsU3Ek__BackingField_6 = unmarshaledU3CEnableLightsU3Ek__BackingField_temp_6;
	bool unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_7 = false;
	unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_7 = static_cast<bool>(marshaled.___U3CEnableVibrationU3Ek__BackingField_7);
	unmarshaled.___U3CEnableVibrationU3Ek__BackingField_7 = unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_7;
	unmarshaled.___U3CVibrationPatternU3Ek__BackingField_8 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CVibrationPatternU3Ek__BackingField_8), (void*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_8));
	int32_t unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_9 = 0;
	unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_9 = marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9;
	unmarshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9 = unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_9;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_pinvoke_cleanup(AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CVibrationPatternU3Ek__BackingField_8);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = NULL;
}
// Conversion methods for marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_com(const AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC& unmarshaled, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_com& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CImportanceU3Ek__BackingField_3 = unmarshaled.___U3CImportanceU3Ek__BackingField_3;
	marshaled.___U3CCanBypassDndU3Ek__BackingField_4 = static_cast<int32_t>(unmarshaled.___U3CCanBypassDndU3Ek__BackingField_4);
	marshaled.___U3CCanShowBadgeU3Ek__BackingField_5 = static_cast<int32_t>(unmarshaled.___U3CCanShowBadgeU3Ek__BackingField_5);
	marshaled.___U3CEnableLightsU3Ek__BackingField_6 = static_cast<int32_t>(unmarshaled.___U3CEnableLightsU3Ek__BackingField_6);
	marshaled.___U3CEnableVibrationU3Ek__BackingField_7 = static_cast<int32_t>(unmarshaled.___U3CEnableVibrationU3Ek__BackingField_7);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I8, unmarshaled.___U3CVibrationPatternU3Ek__BackingField_8);
	marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9 = unmarshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9;
}
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_com_back(const AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_com& marshaled, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___U3CIdU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CIdU3Ek__BackingField_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CIdU3Ek__BackingField_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CIdU3Ek__BackingField_0));
	unmarshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CNameU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1));
	unmarshaled.___U3CDescriptionU3Ek__BackingField_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CDescriptionU3Ek__BackingField_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CDescriptionU3Ek__BackingField_2));
	int32_t unmarshaledU3CImportanceU3Ek__BackingField_temp_3 = 0;
	unmarshaledU3CImportanceU3Ek__BackingField_temp_3 = marshaled.___U3CImportanceU3Ek__BackingField_3;
	unmarshaled.___U3CImportanceU3Ek__BackingField_3 = unmarshaledU3CImportanceU3Ek__BackingField_temp_3;
	bool unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_4 = false;
	unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_4 = static_cast<bool>(marshaled.___U3CCanBypassDndU3Ek__BackingField_4);
	unmarshaled.___U3CCanBypassDndU3Ek__BackingField_4 = unmarshaledU3CCanBypassDndU3Ek__BackingField_temp_4;
	bool unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_5 = false;
	unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_5 = static_cast<bool>(marshaled.___U3CCanShowBadgeU3Ek__BackingField_5);
	unmarshaled.___U3CCanShowBadgeU3Ek__BackingField_5 = unmarshaledU3CCanShowBadgeU3Ek__BackingField_temp_5;
	bool unmarshaledU3CEnableLightsU3Ek__BackingField_temp_6 = false;
	unmarshaledU3CEnableLightsU3Ek__BackingField_temp_6 = static_cast<bool>(marshaled.___U3CEnableLightsU3Ek__BackingField_6);
	unmarshaled.___U3CEnableLightsU3Ek__BackingField_6 = unmarshaledU3CEnableLightsU3Ek__BackingField_temp_6;
	bool unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_7 = false;
	unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_7 = static_cast<bool>(marshaled.___U3CEnableVibrationU3Ek__BackingField_7);
	unmarshaled.___U3CEnableVibrationU3Ek__BackingField_7 = unmarshaledU3CEnableVibrationU3Ek__BackingField_temp_7;
	unmarshaled.___U3CVibrationPatternU3Ek__BackingField_8 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_8);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CVibrationPatternU3Ek__BackingField_8), (void*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I8, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, marshaled.___U3CVibrationPatternU3Ek__BackingField_8));
	int32_t unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_9 = 0;
	unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_9 = marshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9;
	unmarshaled.___U3CLockScreenVisibilityU3Ek__BackingField_9 = unmarshaledU3CLockScreenVisibilityU3Ek__BackingField_temp_9;
}
// Conversion method for clean up from marshalling of: Unity.Notifications.Android.AndroidNotificationChannel
IL2CPP_EXTERN_C void AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshal_com_cleanup(AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CIdU3Ek__BackingField_0);
	marshaled.___U3CIdU3Ek__BackingField_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CDescriptionU3Ek__BackingField_2);
	marshaled.___U3CDescriptionU3Ek__BackingField_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___U3CVibrationPatternU3Ek__BackingField_8);
	marshaled.___U3CVibrationPatternU3Ek__BackingField_8 = NULL;
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline(_thisAdjusted, ___value0, method);
}
// System.String Unity.Notifications.Android.AndroidNotificationChannel::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->___U3CDescriptionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDescriptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::get_Importance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = __this->___U3CImportanceU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Importance(Unity.Notifications.Android.Importance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CImportanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanBypassDnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanBypassDnd { get; set; }
		bool L_0 = __this->___U3CCanBypassDndU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_CanBypassDnd(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_CanBypassDnd_mC46CCD099353D872B2677782909AB6425709729C (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanBypassDnd { get; set; }
		bool L_0 = ___value0;
		__this->___U3CCanBypassDndU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_CanBypassDnd_mC46CCD099353D872B2677782909AB6425709729C_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_CanBypassDnd_mC46CCD099353D872B2677782909AB6425709729C_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_CanShowBadge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanShowBadge { get; set; }
		bool L_0 = __this->___U3CCanShowBadgeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_CanShowBadge(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_CanShowBadge_mC62C1B6B1A53267281ACC54D88B1882AEBBF6E33 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanShowBadge { get; set; }
		bool L_0 = ___value0;
		__this->___U3CCanShowBadgeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_CanShowBadge_mC62C1B6B1A53267281ACC54D88B1882AEBBF6E33_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_CanShowBadge_mC62C1B6B1A53267281ACC54D88B1882AEBBF6E33_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableLights { get; set; }
		bool L_0 = __this->___U3CEnableLightsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_EnableLights(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_EnableLights_m7CD6A72DB5139D175ADBEB68984EF42E9BC5A19D (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool EnableLights { get; set; }
		bool L_0 = ___value0;
		__this->___U3CEnableLightsU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_EnableLights_m7CD6A72DB5139D175ADBEB68984EF42E9BC5A19D_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_EnableLights_m7CD6A72DB5139D175ADBEB68984EF42E9BC5A19D_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_EnableVibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableVibration { get; set; }
		bool L_0 = __this->___U3CEnableVibrationU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_EnableVibration(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_EnableVibration_m1D7E703E1989322F82706642D5FDD30BB3FDBDAB (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool EnableVibration { get; set; }
		bool L_0 = ___value0;
		__this->___U3CEnableVibrationU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_EnableVibration_m1D7E703E1989322F82706642D5FDD30BB3FDBDAB_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_EnableVibration_m1D7E703E1989322F82706642D5FDD30BB3FDBDAB_inline(_thisAdjusted, ___value0, method);
}
// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::get_VibrationPattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public long[] VibrationPattern { get; set; }
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___U3CVibrationPatternU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* _returnValue;
	_returnValue = AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_VibrationPattern(System.Int64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_VibrationPattern_m5094F0617F624125303CACD9ABECE78F3CEDE5EF (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___value0, const RuntimeMethod* method) 
{
	{
		// public long[] VibrationPattern { get; set; }
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___value0;
		__this->___U3CVibrationPatternU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVibrationPatternU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_VibrationPattern_m5094F0617F624125303CACD9ABECE78F3CEDE5EF_AdjustorThunk (RuntimeObject* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___value0, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_VibrationPattern_m5094F0617F624125303CACD9ABECE78F3CEDE5EF_inline(_thisAdjusted, ___value0, method);
}
// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::get_LockScreenVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public LockScreenVisibility LockScreenVisibility { get; set; }
		int32_t L_0 = __this->___U3CLockScreenVisibilityU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_LockScreenVisibility(Unity.Notifications.Android.LockScreenVisibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_LockScreenVisibility_m60EA310F67DFC24F7BB72D956503A85E5AF81A6F (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public LockScreenVisibility LockScreenVisibility { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CLockScreenVisibilityU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel_set_LockScreenVisibility_m60EA310F67DFC24F7BB72D956503A85E5AF81A6F_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel_set_LockScreenVisibility_m60EA310F67DFC24F7BB72D956503A85E5AF81A6F_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_Enabled_mF2DC76901E5D2ECD82EF274229D5D0188E8C2332 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// get { return Importance != Importance.None; }
		int32_t L_0;
		L_0 = AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_inline(__this, NULL);
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool AndroidNotificationChannel_get_Enabled_mF2DC76901E5D2ECD82EF274229D5D0188E8C2332_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AndroidNotificationChannel_get_Enabled_mF2DC76901E5D2ECD82EF274229D5D0188E8C2332(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::.ctor(System.String,System.String,System.String,Unity.Notifications.Android.Importance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationChannel__ctor_m34B6C2E63FC733479B457A60CD32B17DB826C92C (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___id0, String_t* ___name1, String_t* ___description2, int32_t ___importance3, const RuntimeMethod* method) 
{
	{
		// Id = id;
		String_t* L_0 = ___id0;
		AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline(__this, L_0, NULL);
		// Name = name;
		String_t* L_1 = ___name1;
		AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline(__this, L_1, NULL);
		// Description = description;
		String_t* L_2 = ___description2;
		AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline(__this, L_2, NULL);
		// this.Importance = importance;
		int32_t L_3 = ___importance3;
		AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline(__this, L_3, NULL);
		// CanBypassDnd = false;
		AndroidNotificationChannel_set_CanBypassDnd_mC46CCD099353D872B2677782909AB6425709729C_inline(__this, (bool)0, NULL);
		// CanShowBadge = true;
		AndroidNotificationChannel_set_CanShowBadge_mC62C1B6B1A53267281ACC54D88B1882AEBBF6E33_inline(__this, (bool)1, NULL);
		// EnableLights = false;
		AndroidNotificationChannel_set_EnableLights_m7CD6A72DB5139D175ADBEB68984EF42E9BC5A19D_inline(__this, (bool)0, NULL);
		// EnableVibration = true;
		AndroidNotificationChannel_set_EnableVibration_m1D7E703E1989322F82706642D5FDD30BB3FDBDAB_inline(__this, (bool)1, NULL);
		// VibrationPattern = null;
		AndroidNotificationChannel_set_VibrationPattern_m5094F0617F624125303CACD9ABECE78F3CEDE5EF_inline(__this, (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)NULL, NULL);
		// this.LockScreenVisibility = LockScreenVisibility.Public;
		AndroidNotificationChannel_set_LockScreenVisibility_m60EA310F67DFC24F7BB72D956503A85E5AF81A6F_inline(__this, 1, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AndroidNotificationChannel__ctor_m34B6C2E63FC733479B457A60CD32B17DB826C92C_AdjustorThunk (RuntimeObject* __this, String_t* ___id0, String_t* ___name1, String_t* ___description2, int32_t ___importance3, const RuntimeMethod* method)
{
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC*>(__this + _offset);
	AndroidNotificationChannel__ctor_m34B6C2E63FC733479B457A60CD32B17DB826C92C(_thisAdjusted, ___id0, ___name1, ___description2, ___importance3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationExtensions::ToImportance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToImportance_mF825DF408EBA8407AA80A756321939165CDE9DED (int32_t ___importance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Importance_tD55C9582B7EC0BCFC93E0ED83E92CF0D31492631_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enum.IsDefined(typeof(Importance), importance))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Importance_tD55C9582B7EC0BCFC93E0ED83E92CF0D31492631_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___importance0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_1, L_4, NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (Importance)importance;
		int32_t L_6 = ___importance0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return Importance.Default;
		return (int32_t)(3);
	}
}
// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationExtensions::ToLockScreenVisibility(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToLockScreenVisibility_mDF748982613826246900C07483FD4417995D2637 (int32_t ___lockscreenVisibility0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockScreenVisibility_t80C35F9A0D54445669ED43A50B9F1F9A81F48179_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enum.IsDefined(typeof(LockScreenVisibility), lockscreenVisibility))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (LockScreenVisibility_t80C35F9A0D54445669ED43A50B9F1F9A81F48179_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___lockscreenVisibility0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_1, L_4, NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (LockScreenVisibility)lockscreenVisibility;
		int32_t L_6 = ___lockscreenVisibility0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return LockScreenVisibility.Public;
		return (int32_t)(1);
	}
}
// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotificationExtensions::ToNotificationStyle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToNotificationStyle_mDE7A7950E6253E58B7C0AD54EAEBDC322EF273CD (int32_t ___notificationStyle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationStyle_t7BFBE5D9ABF0BA0CF5D1576511438DB9FBF38548_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enum.IsDefined(typeof(NotificationStyle), notificationStyle))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (NotificationStyle_t7BFBE5D9ABF0BA0CF5D1576511438DB9FBF38548_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___notificationStyle0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_1, L_4, NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (NotificationStyle)notificationStyle;
		int32_t L_6 = ___notificationStyle0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return NotificationStyle.None;
		return (int32_t)(0);
	}
}
// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotificationExtensions::ToGroupAlertBehaviours(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToGroupAlertBehaviours_mC3532E41409A2AD93B89C88F6E52E12AC064E348 (int32_t ___groupAlertBehaviour0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupAlertBehaviours_tC857504ABF5835A6033C1A8345A49C092389F237_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enum.IsDefined(typeof(GroupAlertBehaviours), groupAlertBehaviour))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (GroupAlertBehaviours_tC857504ABF5835A6033C1A8345A49C092389F237_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___groupAlertBehaviour0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_1, L_4, NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (GroupAlertBehaviours)groupAlertBehaviour;
		int32_t L_6 = ___groupAlertBehaviour0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return GroupAlertBehaviours.GroupAlertAll;
		return (int32_t)(0);
	}
}
// UnityEngine.Color Unity.Notifications.Android.AndroidNotificationExtensions::ToColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F AndroidNotificationExtensions_ToColor_m5C7C27A8A70FA43FC6904E6467CB728DBB0DD7B8 (int32_t ___color0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int a = (color >> 24) & 0xff;
		int32_t L_0 = ___color0;
		V_0 = ((int32_t)(((int32_t)(L_0>>((int32_t)24)))&((int32_t)255)));
		// int r = (color >> 16) & 0xff;
		int32_t L_1 = ___color0;
		// int g = (color >> 8) & 0xff;
		int32_t L_2 = ___color0;
		V_1 = ((int32_t)(((int32_t)(L_2>>8))&((int32_t)255)));
		// int b = (color) & 0xff;
		int32_t L_3 = ___color0;
		V_2 = ((int32_t)(L_3&((int32_t)255)));
		// return new Color32((byte)r, (byte)g, (byte)b, (byte)a);
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_7), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_1>>((int32_t)16)))&((int32_t)255)))), (uint8_t)((int32_t)(uint8_t)L_4), (uint8_t)((int32_t)(uint8_t)L_5), (uint8_t)((int32_t)(uint8_t)L_6), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_7, NULL);
		return L_8;
	}
}
// System.Int32 Unity.Notifications.Android.AndroidNotificationExtensions::ToInt(System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationExtensions_ToInt_m91C0B60EDBD614A641EE3E7AF2D30F227D8ECD67 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!color.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline((&___color0), Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000b:
	{
		// var color32 = (Color32)color.Value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637((&___color0), Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		L_2 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_1, NULL);
		V_0 = L_2;
		// return (color32.a & 0xff) << 24 | (color32.r & 0xff) << 16 | (color32.g & 0xff) << 8 | (color32.b & 0xff);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = V_0;
		uint8_t L_4 = L_3.___a_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = V_0;
		uint8_t L_6 = L_5.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = V_0;
		uint8_t L_8 = L_7.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = V_0;
		uint8_t L_10 = L_9.___b_3;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_4&((int32_t)255)))<<((int32_t)24)))|((int32_t)(((int32_t)((int32_t)L_6&((int32_t)255)))<<((int32_t)16)))))|((int32_t)(((int32_t)((int32_t)L_8&((int32_t)255)))<<8))))|((int32_t)((int32_t)L_10&((int32_t)255)))));
	}
}
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m92A7E332B73EC658E001120FC0C9D471367E1542 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime origin = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, NULL);
		// TimeSpan diff = dateTime.ToUniversalTime() - origin;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&___dateTime0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_1 = L_2;
		// return (long)Math.Floor(diff.TotalMilliseconds);
		double L_3;
		L_3 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = floor(L_3);
		return il2cpp_codegen_cast_double_to_int<int64_t>(L_4);
	}
}
// System.DateTime Unity.Notifications.Android.AndroidNotificationExtensions::ToDatetime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotificationExtensions_ToDatetime_m768472E0022DD7ADD6F4C64F189EFC822D911D13 (int64_t ___dateTime0, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// DateTime origin = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, NULL);
		// return origin.AddMilliseconds(dateTime).ToLocalTime();
		int64_t L_0 = ___dateTime0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05((&V_0), ((double)L_0), NULL);
		V_1 = L_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_1), NULL);
		return L_2;
	}
}
// System.Int64 Unity.Notifications.Android.AndroidNotificationExtensions::ToLong(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidNotificationExtensions_ToLong_m62D36F6E745B7E0EC706158960E0650F1A980FC6 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___timeSpan0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return timeSpan.HasValue ? (long)timeSpan.Value.TotalMilliseconds : -1L;
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline((&___timeSpan0), Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return ((int64_t)(-1));
	}

IL_000c:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3((&___timeSpan0), Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		V_0 = L_1;
		double L_2;
		L_2 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_0), NULL);
		return il2cpp_codegen_cast_double_to_int<int64_t>(L_2);
	}
}
// System.TimeSpan Unity.Notifications.Android.AndroidNotificationExtensions::ToTimeSpan(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A AndroidNotificationExtensions_ToTimeSpan_m296ABA6771A5DA8F6DAF364B998BB78246024E20 (int64_t ___timeSpan0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TimeSpan.FromMilliseconds(timeSpan);
		int64_t L_0 = ___timeSpan0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = TimeSpan_FromMilliseconds_mFDCBE9EDA3F6743302C3DD81259AF5D2F00EF775(((double)L_0), NULL);
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
// System.Int32 Unity.Notifications.Android.AndroidNotificationIntentData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationIntentData_get_Id_m175F68AFE33EA2DAE228413B95BCDE53F29BE324 (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Unity.Notifications.Android.AndroidNotificationIntentData::get_Channel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidNotificationIntentData_get_Channel_m8BCBFB16EFF93071E7E5739464F77B8A4A47F59F (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, const RuntimeMethod* method) 
{
	{
		// public string Channel { get; }
		String_t* L_0 = __this->___U3CChannelU3Ek__BackingField_1;
		return L_0;
	}
}
// Unity.Notifications.Android.AndroidNotification Unity.Notifications.Android.AndroidNotificationIntentData::get_Notification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 AndroidNotificationIntentData_get_Notification_mB63B63D39E63886B1AEA01D3230B93A098112F96 (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, const RuntimeMethod* method) 
{
	{
		// public AndroidNotification Notification { get; }
		AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_0 = __this->___U3CNotificationU3Ek__BackingField_2;
		return L_0;
	}
}
// UnityEngine.AndroidJavaObject Unity.Notifications.Android.AndroidNotificationIntentData::get_NativeNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidNotificationIntentData_get_NativeNotification_mB9ED64AF6E1698FBB0EE2174ACD22927B933C1F1 (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, const RuntimeMethod* method) 
{
	{
		// public AndroidJavaObject NativeNotification { get; internal set; }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___U3CNativeNotificationU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::set_NativeNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData_set_NativeNotification_m1D0827C74509785207483AF0C9F57EC4E945CD74 (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___value0, const RuntimeMethod* method) 
{
	{
		// public AndroidJavaObject NativeNotification { get; internal set; }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___value0;
		__this->___U3CNativeNotificationU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeNotificationU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidNotificationIntentData::.ctor(System.Int32,System.String,Unity.Notifications.Android.AndroidNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationIntentData__ctor_mC71DBF52CCA5391F4F0D04F329F96E834E847383 (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, int32_t ___id0, String_t* ___channelId1, AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___notification2, const RuntimeMethod* method) 
{
	{
		// public AndroidNotificationIntentData(int id, string channelId, AndroidNotification notification)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Id = id;
		int32_t L_0 = ___id0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		// Channel = channelId;
		String_t* L_1 = ___channelId1;
		__this->___U3CChannelU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChannelU3Ek__BackingField_1), (void*)L_1);
		// Notification = notification;
		AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_2 = ___notification2;
		__this->___U3CNotificationU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CTitleU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CTextU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CSmallIconU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CLargeIconU3Ek__BackingField_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CGroupU3Ek__BackingField_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CSortKeyU3Ek__BackingField_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CNotificationU3Ek__BackingField_2))->___U3CIntentDataU3Ek__BackingField_13), (void*)NULL);
		#endif
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
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::EnqueueReceivedNotification(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_EnqueueReceivedNotification_m5FE30FC8FD86F26AD0AC5694A43494164E0D7B55 (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___notification0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m46CE58AEE4E46E07AFB03138AA5A356BDD33DABF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0023;
					}
				}
				{
					AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0023:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_2 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
			// m_ReceivedNotificationQueue.Add(notification);
			List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_3 = __this->___m_ReceivedNotificationQueue_5;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___notification0;
			NullCheck(L_3);
			List_1_Add_m46CE58AEE4E46E07AFB03138AA5A356BDD33DABF_inline(L_3, L_4, List_1_Add_m46CE58AEE4E46E07AFB03138AA5A356BDD33DABF_RuntimeMethod_var);
			// }
			goto IL_0024;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		// }
		return;
	}
}
// Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m01DB25903D243BFD867D4DB58A0A6E363E0A7017 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_Update_mCF4D8CD56EFBC3A03AC72E192CF11A4A0BB7AE3B (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCB6D44778A2A9B82659AE391FF506D93E045ABAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3B5584B4C10CEA04D39E45C7CC34333022C16ACC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1840848A627FD2045207C5361CCE21E6CB3F31A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF40DD6E3420C881D4AE89511FDAEC4420DAD850D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4C9A49C08EDACFFBAC0CDCB7D15BDEAF48070C9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0FDA1EA1DF52887ED2369B7FA6FC774E4713C611_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* V_0 = NULL;
	bool V_1 = false;
	List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* V_2 = NULL;
	Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090 V_3;
	memset((&V_3), 0, sizeof(V_3));
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0040;
					}
				}
				{
					AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0040:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
				// if (m_ReceivedNotificationQueue.Count == 0)
				List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_3 = __this->___m_ReceivedNotificationQueue_5;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = List_1_get_Count_m0FDA1EA1DF52887ED2369B7FA6FC774E4713C611_inline(L_3, List_1_get_Count_m0FDA1EA1DF52887ED2369B7FA6FC774E4713C611_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_001b_1;
				}
			}
			{
				// return;
				goto IL_008c;
			}

IL_001b_1:
			{
				// var temp = m_ReceivedNotificationQueue;
				List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_5 = __this->___m_ReceivedNotificationQueue_5;
				V_2 = L_5;
				// m_ReceivedNotificationQueue = m_ReceivedNotificationList;
				List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_6 = __this->___m_ReceivedNotificationList_6;
				__this->___m_ReceivedNotificationQueue_5 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReceivedNotificationQueue_5), (void*)L_6);
				// m_ReceivedNotificationList = temp;
				List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_7 = V_2;
				__this->___m_ReceivedNotificationList_6 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReceivedNotificationList_6), (void*)L_7);
				// }
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// foreach (var notification in m_ReceivedNotificationList)
		List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_8 = __this->___m_ReceivedNotificationList_6;
		NullCheck(L_8);
		Enumerator_tA4CC3E337202EB983AF03F61B672DE3F226C0090 L_9;
		L_9 = List_1_GetEnumerator_m4C9A49C08EDACFFBAC0CDCB7D15BDEAF48070C9D(L_8, List_1_GetEnumerator_m4C9A49C08EDACFFBAC0CDCB7D15BDEAF48070C9D_RuntimeMethod_var);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCB6D44778A2A9B82659AE391FF506D93E045ABAE((&V_3), Enumerator_Dispose_mCB6D44778A2A9B82659AE391FF506D93E045ABAE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0068_1;
			}

IL_004f_1:
			{
				// foreach (var notification in m_ReceivedNotificationList)
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
				L_10 = Enumerator_get_Current_m1840848A627FD2045207C5361CCE21E6CB3F31A9_inline((&V_3), Enumerator_get_Current_m1840848A627FD2045207C5361CCE21E6CB3F31A9_RuntimeMethod_var);
				V_4 = L_10;
			}
			try
			{// begin try (depth: 2)
				// AndroidNotificationCenter.ReceivedNotificationCallback(notification);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_4;
				il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
				AndroidNotificationCenter_ReceivedNotificationCallback_mBAD7E5C376AA4F1AE5823E333F17F784D5191B98(L_11, NULL);
				// }
				goto IL_0068_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0061_1;
				}
				throw e;
			}

CATCH_0061_1:
			{// begin catch(System.Exception)
				// Debug.LogException(e);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0068_1;
			}// end catch (depth: 2)

IL_0068_1:
			{
				// foreach (var notification in m_ReceivedNotificationList)
				bool L_12;
				L_12 = Enumerator_MoveNext_m3B5584B4C10CEA04D39E45C7CC34333022C16ACC((&V_3), Enumerator_MoveNext_m3B5584B4C10CEA04D39E45C7CC34333022C16ACC_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_004f_1;
				}
			}
			{
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		// m_ReceivedNotificationList.Clear();
		List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_13 = __this->___m_ReceivedNotificationList_6;
		NullCheck(L_13);
		List_1_Clear_mF40DD6E3420C881D4AE89511FDAEC4420DAD850D_inline(L_13, List_1_Clear_mF40DD6E3420C881D4AE89511FDAEC4420DAD850D_RuntimeMethod_var);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_Awake_mD872600A1E79A1A4D281EE64784AC85F854844DE (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// instance = this;
		((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher_OnDestroy_mE59CAE879E6ABF3BF07AEC00D714BA054954F7C5 (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = null;
		((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4 = (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4), (void*)(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7*)NULL);
		// }
		return;
	}
}
// System.Void Unity.Notifications.Android.AndroidReceivedNotificationMainThreadDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceivedNotificationMainThreadDispatcher__ctor_m4EA7888A40DBD74FCC19C2ED7D0278CCE4D8E9B1 (AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<AndroidJavaObject> m_ReceivedNotificationQueue = new List<AndroidJavaObject>();
		List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_0 = (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*)il2cpp_codegen_object_new(List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390(L_0, List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390_RuntimeMethod_var);
		__this->___m_ReceivedNotificationQueue_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReceivedNotificationQueue_5), (void*)L_0);
		// private List<AndroidJavaObject> m_ReceivedNotificationList = new List<AndroidJavaObject>();
		List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF* L_1 = (List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF*)il2cpp_codegen_object_new(List_1_t75A593D0EA566755481CBE3EAF0CD9CACD223EAF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390(L_1, List_1__ctor_m21BC8DD8763514B160D7ECC2657F94E5E8031390_RuntimeMethod_var);
		__this->___m_ReceivedNotificationList_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReceivedNotificationList_6), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Title_m46212F8E4679C44AB95B99590BBB348A18DD3731_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = __this->___U3CTitleU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTitleU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Text_m141540044DCE8803E1AE7923C40AAFC9C43FC970_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SmallIcon_m77174654228487FB24F21C67332E9FD2D61AF205_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = __this->___U3CSmallIconU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SmallIcon_mA6AFEAD07BB549DF80E16532BB43301505E58083_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SmallIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CSmallIconU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSmallIconU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotification_get_FireTime_m0AF733556F5435FEEDEF6970FB4E0DB3A58077D5_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CFireTimeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		__this->___U3CFireTimeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_LargeIcon_mF1632ADD12CBED7A6D19A1A02B22B4FD188A9533_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = __this->___U3CLargeIconU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_LargeIcon_m5E693366C2066AD15EA7B4E451E08491CD81C2EB_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string LargeIcon { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CLargeIconU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLargeIconU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Style_m7E45A5EB908132293BB95A1E7509B09CAF792882_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = __this->___U3CStyleU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Style_m02F110048F9A62594E118CBBD10BF06C0F072BB7_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public NotificationStyle Style { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStyleU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_Number_m03B14CBBA8BC94C2039834EC39644C92C39D04B7_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public int Number { get; set; }
		int32_t L_0 = __this->___U3CNumberU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Number_m15509D86A8A70CA85B834A31B42909D9386CD369_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Number { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CNumberU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShouldAutoCancel_m4F131946B79B3454C37F86FC405A619D6D6F821A_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = __this->___U3CShouldAutoCancelU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShouldAutoCancel_m3A7F5E5A2354D3CFEEB7F604904D5F43BBE41946_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShouldAutoCancel { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShouldAutoCancelU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_UsesStopwatch_m78EB97ECEB853B17EB048B8E6494B00EDFAE8C37_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = __this->___U3CUsesStopwatchU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_UsesStopwatch_mAD2AD8F67537B80B1D9659284880AF50F3FB747C_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool UsesStopwatch { get; set; }
		bool L_0 = ___value0;
		__this->___U3CUsesStopwatchU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_Group_mE15A7461C61CA2056EDE3E69F3C67494CAC6289E_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string Group { get; set; }
		String_t* L_0 = __this->___U3CGroupU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Group_mB9237D790F810E60D4C96AAE16CC4DE694EB3093_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Group { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CGroupU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGroupU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_GroupSummary_m74B1DC2FB5B4C567BDF4749B6A8D9465ADC12A9C_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = __this->___U3CGroupSummaryU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupSummary_mDE9377022547D20BE6ADEECA56A1A6D5E62AE371_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool GroupSummary { get; set; }
		bool L_0 = ___value0;
		__this->___U3CGroupSummaryU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotification_get_GroupAlertBehaviour_m1888DF8835E96E8557F1A6F09C78F1E58B35DE9F_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = __this->___U3CGroupAlertBehaviourU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_GroupAlertBehaviour_mB3D0C8B3446F9AF3F866AE0AA34C0BA75513B2A8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public GroupAlertBehaviours GroupAlertBehaviour { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CGroupAlertBehaviourU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_SortKey_mD49CA6B1F49B743D066BB5AE3678D59C1F8282F3_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = __this->___U3CSortKeyU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_SortKey_m2A97F9DA6AD77DE804BE4EA57319CA6382DF396F_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string SortKey { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CSortKeyU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSortKeyU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotification_get_IntentData_mDACD0A1A05BF9C10E52C533F5F8887ADD862BCE3_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = __this->___U3CIntentDataU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_IntentData_m365B7A0B3DF0856F2731EFE61CB91291BAAFEE07_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string IntentData { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIntentDataU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntentDataU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowTimestamp_m9A2D1625C823BC25184648E202ACBB57601DC007_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = __this->___U3CShowTimestampU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowTimestamp_m3F84DEBD26C1A233AE9FF0D84B4C1F01DBB75CF4_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShowTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShowTimestampU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AndroidNotification_get_CustomTimestamp_mEFC143569732A9E663FD726C6722E69B0E234547_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CustomTimestamp; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___m_CustomTimestamp_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_ShowCustomTimestamp_mEE51AFA13475644D5D23BEAB723EE934D7DC9A8E_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShowCustomTimestampU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotification_get_ShowCustomTimestamp_mFD163DDA1AA335F2AB280AE5D37EA1EA19096DBC_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, const RuntimeMethod* method) 
{
	{
		// internal bool ShowCustomTimestamp { get; set; }
		bool L_0 = __this->___U3CShowCustomTimestampU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* AndroidReceivedNotificationMainThreadDispatcher_GetInstance_m01DB25903D243BFD867D4DB58A0A6E363E0A7017_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7* L_0 = ((AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_StaticFields*)il2cpp_codegen_static_fields_for(AndroidReceivedNotificationMainThreadDispatcher_t3D8EDA0C164384620EE8200D64F2EE77373E7AB7_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Id_m19881BA773D5AB3992A8CAFA89477A507FC778D3_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Name_mCDFC0742C5DB0653163CABD8D3174AC0E3303235_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AndroidNotificationChannel_get_Description_mDF556473DB304CED204971A8B69612CBE3D50193_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = __this->___U3CDescriptionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_Importance_mD71CC36503857B97A76BC864D29933770F605CA1_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = __this->___U3CImportanceU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableLights_m2BFE53D692477312544C36B8C592B671BBA7369C_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableLights { get; set; }
		bool L_0 = __this->___U3CEnableLightsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_EnableVibration_m159BBC4105ED1415D1442D663FB39F527B905DBC_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableVibration { get; set; }
		bool L_0 = __this->___U3CEnableVibrationU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanBypassDnd_m3366B1D352E9A859DA278D670F8884B3ABE0C73D_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanBypassDnd { get; set; }
		bool L_0 = __this->___U3CCanBypassDndU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AndroidNotificationChannel_get_CanShowBadge_mAE60C3E658FB6D10A5A13DB7EF0F22C60B630EF4_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanShowBadge { get; set; }
		bool L_0 = __this->___U3CCanShowBadgeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidNotificationChannel_get_VibrationPattern_m0FC62A16CA5A2E5CF5C908A556E3F3AA50B9FD53_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public long[] VibrationPattern { get; set; }
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___U3CVibrationPatternU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AndroidNotificationChannel_get_LockScreenVisibility_m107A11A94A036178B2AC78CD9BB19F7A4455B8F0_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, const RuntimeMethod* method) 
{
	{
		// public LockScreenVisibility LockScreenVisibility { get; set; }
		int32_t L_0 = __this->___U3CLockScreenVisibilityU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CImportanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDescriptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_EnableLights_m7CD6A72DB5139D175ADBEB68984EF42E9BC5A19D_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool EnableLights { get; set; }
		bool L_0 = ___value0;
		__this->___U3CEnableLightsU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_EnableVibration_m1D7E703E1989322F82706642D5FDD30BB3FDBDAB_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool EnableVibration { get; set; }
		bool L_0 = ___value0;
		__this->___U3CEnableVibrationU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_CanBypassDnd_mC46CCD099353D872B2677782909AB6425709729C_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanBypassDnd { get; set; }
		bool L_0 = ___value0;
		__this->___U3CCanBypassDndU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_CanShowBadge_mC62C1B6B1A53267281ACC54D88B1882AEBBF6E33_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanShowBadge { get; set; }
		bool L_0 = ___value0;
		__this->___U3CCanShowBadgeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_VibrationPattern_m5094F0617F624125303CACD9ABECE78F3CEDE5EF_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___value0, const RuntimeMethod* method) 
{
	{
		// public long[] VibrationPattern { get; set; }
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___value0;
		__this->___U3CVibrationPatternU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVibrationPatternU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_LockScreenVisibility_m60EA310F67DFC24F7BB72D956503A85E5AF81A6F_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public LockScreenVisibility LockScreenVisibility { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CLockScreenVisibilityU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationIntentData_set_NativeNotification_m1D0827C74509785207483AF0C9F57EC4E945CD74_inline (AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___value0, const RuntimeMethod* method) 
{
	{
		// public AndroidJavaObject NativeNotification { get; internal set; }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___value0;
		__this->___U3CNativeNotificationU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeNotificationU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NotificationReceivedCallback_Invoke_m61C140E5347A44125C809D5E68530FB4EE7D74A4_inline (NotificationReceivedCallback_t20019F37577336319249E69D13B9EB41D57C692C* __this, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AndroidNotificationIntentData_tF4201A845458829CA4214A2FEE5A4E67BC8E2729*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCFAF0C852ADFD05729EF44207CE87CD200ABC9A0_gshared_inline (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2* __this, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___item0, const RuntimeMethod* method) 
{
	AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* L_1 = (AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		AndroidNotificationChannelU5BU5D_t652D39DBFEA112B98179852322BD9ADBE8D8E6D4* L_6 = V_0;
		int32_t L_7 = V_1;
		AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC)L_8);
		return;
	}

IL_0034:
	{
		AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC L_9 = ___item0;
		((  void (*) (List_1_tB104F9ACDE37486ED4FF92B17CA7FE2A6C31E6C2*, AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}

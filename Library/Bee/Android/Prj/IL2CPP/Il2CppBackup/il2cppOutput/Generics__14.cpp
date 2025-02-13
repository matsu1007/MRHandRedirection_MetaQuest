#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`2<System.Collections.Generic.List`1<System.Collections.Generic.List`1<OVRSceneManager/Metrics>>,OVRTask`1<System.Collections.Generic.List`1<OVRSceneManager/Metrics>[]>>
struct Action_2_tAE8E106B3FC10B22A3E32D3F35683A1B143AA370;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>
struct Action_2_tC1F010189E2862C39D4EF842F66D72082ADF71B8;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// OVRTask`1/ContinueWithInvoker<System.Object>
struct ContinueWithInvoker_t9748C8AE742186CCA225D1D3177DBCFCC2CF8770;
// OVRTask`1/ContinueWithInvoker<OVRSceneManager/Metrics>
struct ContinueWithInvoker_tAAD0C9ABA2C58FFBA1E353DB29D99F7373CF5BF9;
// OVRTask`1/ContinueWithRemover<System.Object>
struct ContinueWithRemover_t24BA5F655434F397DD00C91B928A392E13012C77;
// OVRTask`1/ContinueWithRemover<OVRSceneManager/Metrics>
struct ContinueWithRemover_t592BE697A3E98E2FDDA371370D0BD13760A11BF3;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Action`1<System.Guid>>
struct Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/AwaitableSource<System.Collections.Generic.List`1<OVRSceneManager/Metrics>>>
struct Dictionary_2_t00D85D458C70122DA49102660335A1D85DF58CF5;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/ContinueWithInvoker<System.Collections.Generic.List`1<OVRSceneManager/Metrics>>>
struct Dictionary_2_t059A5FCBCFE601674E531D5685E2D6151BCEFECC;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/ContinueWithRemover<System.Collections.Generic.List`1<OVRSceneManager/Metrics>>>
struct Dictionary_2_t923F813A4092AA018F857E6079F6C99C2278DE59;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/InternalDataRemover<System.Collections.Generic.List`1<OVRSceneManager/Metrics>>>
struct Dictionary_2_t6E1F9EAEAACC867DF27F6D23C4EA2BB4D3109A7D;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Collections.Generic.List`1<OVRSceneManager/Metrics>>
struct Dictionary_2_t3B4DFEC88186776DA23544F5F8C698F848661170;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>
struct Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>
struct Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/TaskSource<System.Collections.Generic.List`1<OVRSceneManager/Metrics>>>
struct Dictionary_2_t86D96D65B3079A3EB9B40D8919D1BC91D88FEE7E;
// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B;
// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>
struct Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A;
// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Action>
struct Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Exception>
struct Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRSceneManager/Metrics>
struct Dictionary_2_t37C86FB16966DBED7080F53D707236C3E6B7A341;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885;
// System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE;
// System.Collections.Generic.EqualityComparer`1<OVRResult`1<System.Int32Enum>>
struct EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C;
// System.Collections.Generic.EqualityComparer`1<OVRResult`2<System.Object,System.Int32Enum>>
struct EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D;
// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4;
// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Object,System.Object>>
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE;
// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C;
// System.Collections.Generic.EqualityComparer`1<System.Guid>
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
// System.Collections.Generic.HashSet`1<System.Action>
struct HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828;
// System.Collections.Generic.HashSet`1<System.Guid>
struct HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>>
struct IEnumerator_1_t609E8B0D76271B63A8E9704E5CBE63FAD75ACD3C;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>>
struct IEnumerator_1_t8176B27803C4257135DA37CAF3F81760A94542D7;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>>
struct IEnumerator_1_t4EF3F67D85B68C920E07879EB74122ACD9D90540;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>>
struct IEnumerator_1_t32ADE5A6B8B50EE8C522ED2BD1D646629A211D99;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct IEnumerator_1_t943CA46513CD2E64C7F7F2607769A83D4B3BD3A4;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>>
struct IEnumerator_1_tD01ED068ED369A17E47F4CCC12F12CFF8DA1A0A1;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct IEnumerator_1_t2D1F02BC64BA78D3C522341E766EE1BF14FEE8DF;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct KeyCollection_t1AF22D089E38FF0BB57481761B436D80983A179F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct KeyCollection_tEFD840755D5396EE29D6B1552AABB5295CA4E835;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRResult`1<System.Int32Enum>>
struct KeyCollection_t7F02B92B3AF503C2AD5199B0886EF5D4C57DEDC3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>
struct KeyCollection_t0C5C908FC649EC49535423FDA9210E7FBAD55E40;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct KeyCollection_t77785E86A11D6360389E01DAC8A4FFB272DA5B5A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`2<System.Object,System.Object>>
struct KeyCollection_t0A79BCFAE6AF3B086D8FEC8AFDC4CF7EF66F4062;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct KeyCollection_tE16F7897B0901E3501B7294F5268B014EE8FB803;
// System.Collections.Generic.List`1<System.Guid>
struct List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15;
// System.Collections.Generic.List`1<OVRSceneManager/Metrics>
struct List_1_t9E5BCF6D9FEEC9DB4D4DED585C86CB51EDEC8160;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct ValueCollection_t2EE446C5E75B4BE0CB283B1B0068F44B4A51F27F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct ValueCollection_tAA0A5236B1CD6CE0188EB428953C8C87730B88A7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRResult`1<System.Int32Enum>>
struct ValueCollection_tFF8EA7479289030FF41279342F152BB5F1BFADB2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>
struct ValueCollection_tEA30B5B771FF66AD3043765D1D54EA721596131B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct ValueCollection_tEF6C19E91C93B941DD62D0115310AECAB7B3C743;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`2<System.Object,System.Object>>
struct ValueCollection_t7114A11798CBF0C844B89BD3ADEDCA6B547731E5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct ValueCollection_tA28545A262BC334A74513AD32BA543511981D337;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>[]
struct EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>[]
struct EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRResult`1<System.Int32Enum>>[]
struct EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>[]
struct EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>[]
struct EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`2<System.Object,System.Object>>[]
struct EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>[]
struct EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>[]
struct KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>[]
struct KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>[]
struct KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>[]
struct KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE;
struct EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0;
struct EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D;
struct EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87;
struct EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD;
struct EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77;
struct EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A;
struct KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42;
struct KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE;
struct KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55;
struct KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7;
struct KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55;
struct KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8;
struct KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t1AF22D089E38FF0BB57481761B436D80983A179F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2EE446C5E75B4BE0CB283B1B0068F44B4A51F27F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tEFD840755D5396EE29D6B1552AABB5295CA4E835* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAA0A5236B1CD6CE0188EB428953C8C87730B88A7* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>
struct Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t7F02B92B3AF503C2AD5199B0886EF5D4C57DEDC3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tFF8EA7479289030FF41279342F152BB5F1BFADB2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>
struct Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0C5C908FC649EC49535423FDA9210E7FBAD55E40* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tEA30B5B771FF66AD3043765D1D54EA721596131B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t77785E86A11D6360389E01DAC8A4FFB272DA5B5A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tEF6C19E91C93B941DD62D0115310AECAB7B3C743* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>
struct Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0A79BCFAE6AF3B086D8FEC8AFDC4CF7EF66F4062* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7114A11798CBF0C844B89BD3ADEDCA6B547731E5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE16F7897B0901E3501B7294F5268B014EE8FB803* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA28545A262BC334A74513AD32BA543511981D337* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<OVRResult`1<System.Int32Enum>>
struct EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<OVRResult`2<System.Object,System.Int32Enum>>
struct EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Object,System.Object>>
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Guid>
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct KeyCollection_t1AF22D089E38FF0BB57481761B436D80983A179F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct KeyCollection_tEFD840755D5396EE29D6B1552AABB5295CA4E835  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRResult`1<System.Int32Enum>>
struct KeyCollection_t7F02B92B3AF503C2AD5199B0886EF5D4C57DEDC3  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>
struct KeyCollection_t0C5C908FC649EC49535423FDA9210E7FBAD55E40  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct KeyCollection_t77785E86A11D6360389E01DAC8A4FFB272DA5B5A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`2<System.Object,System.Object>>
struct KeyCollection_t0A79BCFAE6AF3B086D8FEC8AFDC4CF7EF66F4062  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct KeyCollection_tE16F7897B0901E3501B7294F5268B014EE8FB803  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct ValueCollection_t2EE446C5E75B4BE0CB283B1B0068F44B4A51F27F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct ValueCollection_tAA0A5236B1CD6CE0188EB428953C8C87730B88A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRResult`1<System.Int32Enum>>
struct ValueCollection_tFF8EA7479289030FF41279342F152BB5F1BFADB2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>
struct ValueCollection_tEA30B5B771FF66AD3043765D1D54EA721596131B  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct ValueCollection_tEF6C19E91C93B941DD62D0115310AECAB7B3C743  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`2<System.Object,System.Object>>
struct ValueCollection_t7114A11798CBF0C844B89BD3ADEDCA6B547731E5  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct ValueCollection_tA28545A262BC334A74513AD32BA543511981D337  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* ____dictionary_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// OVRTask`1/CallbackWithState`1<System.Object,System.Object>
struct CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 
{
	// T OVRTask`1/CallbackWithState`1::_data
	RuntimeObject* ____data_1;
	// System.Action`2<TResult,T> OVRTask`1/CallbackWithState`1::_delegate
	Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* ____delegate_2;
};

// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.ValueTuple`3<System.Object,System.Object,System.Object>
struct ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 
{
	// T1 System.ValueTuple`3::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	RuntimeObject* ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	RuntimeObject* ___Item3_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
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
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`2<System.Object,System.Object>>
struct Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 ___value_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>
struct KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 ___value_1;
};

// OVRTask`1<System.Collections.Generic.List`1<OVRSceneManager/Metrics>>
struct OVRTask_1_t705E0F43E413BD7A15C08CC530228EFB196747DB 
{
	// System.Guid OVRTask`1::_id
	Guid_t ____id_13;
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

// System.ExceptionArgument
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;
};

// System.ExceptionResource
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	// System.Int32 System.ExceptionResource::value__
	int32_t ___value___2;
};

// System.Collections.Generic.InsertionBehavior
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	// System.Byte System.Collections.Generic.InsertionBehavior::value__
	uint8_t ___value___2;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;
};

// OVRTask`1/CombinedTaskData<OVRSceneManager/Metrics>
struct CombinedTaskData_t73B3A3A2D93320772B35734A8EA28254B31D0A70 
{
	// OVRTask`1<System.Collections.Generic.List`1<TResult>> OVRTask`1/CombinedTaskData::Task
	OVRTask_1_t705E0F43E413BD7A15C08CC530228EFB196747DB ___Task_0;
	// System.Collections.Generic.HashSet`1<System.Guid> OVRTask`1/CombinedTaskData::_remainingTaskIds
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ____remainingTaskIds_1;
	// System.Collections.Generic.List`1<System.Guid> OVRTask`1/CombinedTaskData::_originalTaskOrder
	List_1_tCADB61FF5C88BAE9F3ADDA6F46BB3C39491B1C15* ____originalTaskOrder_2;
	// System.Collections.Generic.Dictionary`2<System.Guid,TResult> OVRTask`1/CombinedTaskData::_completedTasks
	Dictionary_2_t37C86FB16966DBED7080F53D707236C3E6B7A341* ____completedTasks_3;
	// System.Collections.Generic.List`1<TResult> OVRTask`1/CombinedTaskData::_userOwnedResultList
	List_1_t9E5BCF6D9FEEC9DB4D4DED585C86CB51EDEC8160* ____userOwnedResultList_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`2<System.Object,System.Object>>
struct Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// OVRResult`1<System.Int32Enum>
struct OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E 
{
	// System.Boolean OVRResult`1::_initialized
	bool ____initialized_0;
	// System.Int32 OVRResult`1::_statusCode
	int32_t ____statusCode_1;
	// TStatus OVRResult`1::_status
	int32_t ____status_2;
};

// OVRResult`2<System.Object,System.Int32Enum>
struct OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 
{
	// System.Boolean OVRResult`2::_initialized
	bool ____initialized_0;
	// TValue OVRResult`2::_value
	RuntimeObject* ____value_1;
	// System.Int32 OVRResult`2::_statusCode
	int32_t ____statusCode_2;
	// TStatus OVRResult`2::_status
	int32_t ____status_3;
};

// System.ValueTuple`2<System.Int32Enum,System.Int32>
struct ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>
struct CombinedTaskDataWithCompletedTaskId_t1FD82EB8A622AF223888EDE9AB5EAD856D14C7D5 
{
	// System.Guid OVRTask`1/CombinedTaskDataWithCompletedTaskId::CompletedTaskId
	Guid_t ___CompletedTaskId_0;
	// OVRTask`1/CombinedTaskData<TResult> OVRTask`1/CombinedTaskDataWithCompletedTaskId::CombinedData
	CombinedTaskData_t73B3A3A2D93320772B35734A8EA28254B31D0A70 ___CombinedData_1;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRResult`1<System.Int32Enum>>
struct Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>
struct Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___value_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>
struct KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>
struct KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___value_1;
};

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>
struct CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 
{
	// T OVRTask`1/CallbackWithState`1::_data
	CombinedTaskDataWithCompletedTaskId_t1FD82EB8A622AF223888EDE9AB5EAD856D14C7D5 ____data_1;
	// System.Action`2<TResult,T> OVRTask`1/CallbackWithState`1::_delegate
	Action_2_tC1F010189E2862C39D4EF842F66D72082ADF71B8* ____delegate_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRResult`1<System.Int32Enum>>
struct Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>
struct Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 ___value_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 ___value_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<System.Object,System.Object>>
struct EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
struct EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.EqualityComparer`1<OVRResult`1<System.Int32Enum>>
struct EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.EqualityComparer`1<OVRResult`2<System.Object,System.Int32Enum>>
struct EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Object,System.Object>>
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Collections.Generic.EqualityComparer`1<System.Guid>
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Guid>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// OVRTask`1/CallbackWithState`1<System.Object,System.Object>
struct CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<TResult,T>> OVRTask`1/CallbackWithState`1::Callbacks
	Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* ___Callbacks_0;
	// OVRTask`1/ContinueWithInvoker<TResult> OVRTask`1/CallbackWithState`1::Invoker
	ContinueWithInvoker_t9748C8AE742186CCA225D1D3177DBCFCC2CF8770* ___Invoker_3;
	// OVRTask`1/ContinueWithRemover<TResult> OVRTask`1/CallbackWithState`1::Remover
	ContinueWithRemover_t24BA5F655434F397DD00C91B928A392E13012C77* ___Remover_4;
	// System.Action OVRTask`1/CallbackWithState`1::Clearer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer_5;
};

// OVRTask`1/CallbackWithState`1<System.Object,System.Object>

// System.ValueTuple`2<System.Object,System.Object>

// System.ValueTuple`2<System.Object,System.Object>

// System.ValueTuple`3<System.Object,System.Object,System.Object>

// System.ValueTuple`3<System.Object,System.Object,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Collections.DictionaryEntry

// System.Collections.DictionaryEntry

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Void

// System.Void

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.ExceptionArgument

// System.ExceptionArgument

// System.ExceptionResource

// System.ExceptionResource

// System.Collections.Generic.InsertionBehavior

// System.Collections.Generic.InsertionBehavior

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`2<System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>

// OVRResult`1<System.Int32Enum>

// OVRResult`1<System.Int32Enum>

// OVRResult`2<System.Object,System.Int32Enum>

// OVRResult`2<System.Object,System.Int32Enum>

// System.ValueTuple`2<System.Int32Enum,System.Int32>

// System.ValueTuple`2<System.Int32Enum,System.Int32>

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.Type
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

// System.Type

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.ArrayTypeMismatchException

// System.ArrayTypeMismatchException

// System.InvalidCastException

// System.InvalidCastException

// OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>
struct CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<TResult,T>> OVRTask`1/CallbackWithState`1::Callbacks
	Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* ___Callbacks_0;
	// OVRTask`1/ContinueWithInvoker<TResult> OVRTask`1/CallbackWithState`1::Invoker
	ContinueWithInvoker_tAAD0C9ABA2C58FFBA1E353DB29D99F7373CF5BF9* ___Invoker_3;
	// OVRTask`1/ContinueWithRemover<TResult> OVRTask`1/CallbackWithState`1::Remover
	ContinueWithRemover_t592BE697A3E98E2FDDA371370D0BD13760A11BF3* ___Remover_4;
	// System.Action OVRTask`1/CallbackWithState`1::Clearer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer_5;
};

// OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRResult`1<System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>[]
struct EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22 m_Items[1];

	inline Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_2), (void*)NULL);
		#endif
	}
	inline Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_2), (void*)NULL);
		#endif
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 m_Items[1];

	inline KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_2), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_2), (void*)NULL);
		#endif
	}
};
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
};
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
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>[]
struct EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864 m_Items[1];

	inline Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_3))->____data_1))->___CombinedData_1))->____remainingTaskIds_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_3))->____data_1))->___CombinedData_1))->____originalTaskOrder_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_3))->____data_1))->___CombinedData_1))->____completedTasks_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_3))->____data_1))->___CombinedData_1))->____userOwnedResultList_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_2), (void*)NULL);
		#endif
	}
	inline Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_3))->____data_1))->___CombinedData_1))->____remainingTaskIds_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_3))->____data_1))->___CombinedData_1))->____originalTaskOrder_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_3))->____data_1))->___CombinedData_1))->____completedTasks_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_3))->____data_1))->___CombinedData_1))->____userOwnedResultList_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_2), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>[]
struct KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 m_Items[1];

	inline KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_1))->____data_1))->___CombinedData_1))->____remainingTaskIds_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_1))->____data_1))->___CombinedData_1))->____originalTaskOrder_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_1))->____data_1))->___CombinedData_1))->____completedTasks_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_1))->____data_1))->___CombinedData_1))->____userOwnedResultList_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_2), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_1))->____data_1))->___CombinedData_1))->____remainingTaskIds_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_1))->____data_1))->___CombinedData_1))->____originalTaskOrder_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_1))->____data_1))->___CombinedData_1))->____completedTasks_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value_1))->____data_1))->___CombinedData_1))->____userOwnedResultList_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_2), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRResult`1<System.Int32Enum>>[]
struct EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916 m_Items[1];

	inline Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>[]
struct KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 m_Items[1];

	inline KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>[]
struct EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D m_Items[1];

	inline Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____value_1), (void*)NULL);
	}
	inline Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____value_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>[]
struct KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 m_Items[1];

	inline KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____value_1), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>[]
struct EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A m_Items[1];

	inline Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>[]
struct KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F m_Items[1];

	inline KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`2<System.Object,System.Object>>[]
struct EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68 m_Items[1];

	inline Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Item2_1), (void*)NULL);
		#endif
	}
	inline Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Item2_1), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF m_Items[1];

	inline KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Item2_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Item2_1), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>[]
struct EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7 m_Items[1];

	inline Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Item3_2), (void*)NULL);
		#endif
	}
	inline Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->___Item3_2), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 m_Items[1];

	inline KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Item3_2), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->___Item3_2), (void*)NULL);
		#endif
	}
};


// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m17D33B895368360897FBFB11CD49508F6B3E06D8_gshared_inline (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 KeyValuePair_2_get_Value_m8A519B84CA5DB614E7A3012DE96CAC5F76BC4CAF_gshared_inline (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mA9E34991AF567B5F6A5513373BA7270D976D4DE4_gshared (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5* __this, Guid_t ___0_key, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0B9804D9ED0E14C4104629E7DFA6DD3245E6718E_gshared (Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8* __this, Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m368A4CFEAEA3BB7B6A72D567612C0ACEE07B76A7_gshared_inline (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 KeyValuePair_2_get_Value_mBC2EF13E9BD18A35E01982C6E166A11CAA1A2127_gshared_inline (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE170785CA6584974F8C048867E5E1132AC3D2647_gshared (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5* __this, Guid_t ___0_key, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m15196848BE472324653E8C8F66CCD8068B5AAE16_gshared (Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599* __this, Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mCB1CE4FE0C089932C125052ACE37571AE9C4A36D_gshared_inline (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E KeyValuePair_2_get_Value_mB5A057084756BD8112781EE3D3565CE346BC8A6A_gshared_inline (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mABF58034046C751FF4AA0BA6B291E1EDEF4F82A6_gshared (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113* __this, Guid_t ___0_key, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRResult`1<System.Int32Enum>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m340F5B6251295AC43EDD85AC22B2E4F67231597B_gshared (Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205* __this, Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m365B6CE339D93CA226A7AB32FA93C4B19DA05318_gshared_inline (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 KeyValuePair_2_get_Value_mB40DBC2C42C6FE824B7D10033A3E3686FD008513_gshared_inline (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m06646810AA058BBBE833350E9FB86F2EB897AC75_gshared (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539* __this, Guid_t ___0_key, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4272D043F3DB7E9240A4364C1D8FB3E1C2EBB095_gshared (Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB* __this, Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mCB8EDF2CCE2CD1ABF496F41B57311764A41DF0F0_gshared_inline (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 KeyValuePair_2_get_Value_mC025D35EC9BD3AFEDB01EF68A4B6BD84AA2DD98D_gshared_inline (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mACE0712B7A02E1AE1AEB85C3A5E42359F35657A0_gshared (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F* __this, Guid_t ___0_key, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m995DAB519FF0DC59A180F791AF009EAF6FF7DDCB_gshared (Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E* __this, Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m6F83331B242B26728663C53348EC7471559A7038_gshared_inline (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Value_m8112CDFEBC89FD7944E0BE3D0F10E157755C6308_gshared_inline (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m8C0128B68D77B71C7E5FA2A94B6DB8348044F82D_gshared (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF* __this, Guid_t ___0_key, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3F5B99759FA5DCE144B3218EC60DBD8479663F2C_gshared (Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE* __this, Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mFA856F073642EB6C35F9F37BE9107CD4AEC3F0D9_gshared_inline (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 KeyValuePair_2_get_Value_mDA704D8AD1159932710716FEA06F2F74A30AC326_gshared_inline (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7135CAF76E397A66DB50E5E72728A932742E3F1D_gshared (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82* __this, Guid_t ___0_key, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAFFD5665A07E198FB095D40313664213F9A51033_gshared (Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E* __this, Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.ThrowHelper::ThrowKeyNotFoundException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_m17D33B895368360897FBFB11CD49508F6B3E06D8_inline (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5*, const RuntimeMethod*))KeyValuePair_2_get_Key_m17D33B895368360897FBFB11CD49508F6B3E06D8_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::get_Value()
inline CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 KeyValuePair_2_get_Value_m8A519B84CA5DB614E7A3012DE96CAC5F76BC4CAF_inline (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5* __this, const RuntimeMethod* method)
{
	return ((  CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 (*) (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8A519B84CA5DB614E7A3012DE96CAC5F76BC4CAF_gshared_inline)(__this, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mA9E34991AF567B5F6A5513373BA7270D976D4DE4 (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5* __this, Guid_t ___0_key, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5*, Guid_t, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, const RuntimeMethod*))KeyValuePair_2__ctor_mA9E34991AF567B5F6A5513373BA7270D976D4DE4_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m0B9804D9ED0E14C4104629E7DFA6DD3245E6718E (Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8* __this, Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8*, Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0B9804D9ED0E14C4104629E7DFA6DD3245E6718E_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowAddingDuplicateWithKeyArgumentException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowSerializationException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Remove(TKey)
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException_Argument_InvalidArrayType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongValueTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowWrongKeyTypeArgumentException(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_m368A4CFEAEA3BB7B6A72D567612C0ACEE07B76A7_inline (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5*, const RuntimeMethod*))KeyValuePair_2_get_Key_m368A4CFEAEA3BB7B6A72D567612C0ACEE07B76A7_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::get_Value()
inline CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 KeyValuePair_2_get_Value_mBC2EF13E9BD18A35E01982C6E166A11CAA1A2127_inline (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5* __this, const RuntimeMethod* method)
{
	return ((  CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 (*) (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5*, const RuntimeMethod*))KeyValuePair_2_get_Value_mBC2EF13E9BD18A35E01982C6E166A11CAA1A2127_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mE170785CA6584974F8C048867E5E1132AC3D2647 (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5* __this, Guid_t ___0_key, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5*, Guid_t, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, const RuntimeMethod*))KeyValuePair_2__ctor_mE170785CA6584974F8C048867E5E1132AC3D2647_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m15196848BE472324653E8C8F66CCD8068B5AAE16 (Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599* __this, Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599*, Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, int32_t, const RuntimeMethod*))Enumerator__ctor_m15196848BE472324653E8C8F66CCD8068B5AAE16_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_mCB1CE4FE0C089932C125052ACE37571AE9C4A36D_inline (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113*, const RuntimeMethod*))KeyValuePair_2_get_Key_mCB1CE4FE0C089932C125052ACE37571AE9C4A36D_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>::get_Value()
inline OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E KeyValuePair_2_get_Value_mB5A057084756BD8112781EE3D3565CE346BC8A6A_inline (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113* __this, const RuntimeMethod* method)
{
	return ((  OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E (*) (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB5A057084756BD8112781EE3D3565CE346BC8A6A_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`1<System.Int32Enum>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mABF58034046C751FF4AA0BA6B291E1EDEF4F82A6 (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113* __this, Guid_t ___0_key, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113*, Guid_t, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, const RuntimeMethod*))KeyValuePair_2__ctor_mABF58034046C751FF4AA0BA6B291E1EDEF4F82A6_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRResult`1<System.Int32Enum>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m340F5B6251295AC43EDD85AC22B2E4F67231597B (Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205* __this, Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205*, Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, int32_t, const RuntimeMethod*))Enumerator__ctor_m340F5B6251295AC43EDD85AC22B2E4F67231597B_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_m365B6CE339D93CA226A7AB32FA93C4B19DA05318_inline (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539*, const RuntimeMethod*))KeyValuePair_2_get_Key_m365B6CE339D93CA226A7AB32FA93C4B19DA05318_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::get_Value()
inline OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 KeyValuePair_2_get_Value_mB40DBC2C42C6FE824B7D10033A3E3686FD008513_inline (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539* __this, const RuntimeMethod* method)
{
	return ((  OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 (*) (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB40DBC2C42C6FE824B7D10033A3E3686FD008513_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m06646810AA058BBBE833350E9FB86F2EB897AC75 (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539* __this, Guid_t ___0_key, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539*, Guid_t, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, const RuntimeMethod*))KeyValuePair_2__ctor_m06646810AA058BBBE833350E9FB86F2EB897AC75_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m4272D043F3DB7E9240A4364C1D8FB3E1C2EBB095 (Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB* __this, Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB*, Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m4272D043F3DB7E9240A4364C1D8FB3E1C2EBB095_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_mCB8EDF2CCE2CD1ABF496F41B57311764A41DF0F0_inline (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F*, const RuntimeMethod*))KeyValuePair_2_get_Key_mCB8EDF2CCE2CD1ABF496F41B57311764A41DF0F0_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::get_Value()
inline ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 KeyValuePair_2_get_Value_mC025D35EC9BD3AFEDB01EF68A4B6BD84AA2DD98D_inline (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 (*) (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC025D35EC9BD3AFEDB01EF68A4B6BD84AA2DD98D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mACE0712B7A02E1AE1AEB85C3A5E42359F35657A0 (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F* __this, Guid_t ___0_key, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F*, Guid_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, const RuntimeMethod*))KeyValuePair_2__ctor_mACE0712B7A02E1AE1AEB85C3A5E42359F35657A0_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m995DAB519FF0DC59A180F791AF009EAF6FF7DDCB (Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E* __this, Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E*, Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, int32_t, const RuntimeMethod*))Enumerator__ctor_m995DAB519FF0DC59A180F791AF009EAF6FF7DDCB_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_m6F83331B242B26728663C53348EC7471559A7038_inline (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF*, const RuntimeMethod*))KeyValuePair_2_get_Key_m6F83331B242B26728663C53348EC7471559A7038_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::get_Value()
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Value_m8112CDFEBC89FD7944E0BE3D0F10E157755C6308_inline (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8112CDFEBC89FD7944E0BE3D0F10E157755C6308_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m8C0128B68D77B71C7E5FA2A94B6DB8348044F82D (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF* __this, Guid_t ___0_key, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF*, Guid_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))KeyValuePair_2__ctor_m8C0128B68D77B71C7E5FA2A94B6DB8348044F82D_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m3F5B99759FA5DCE144B3218EC60DBD8479663F2C (Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE* __this, Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE*, Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3F5B99759FA5DCE144B3218EC60DBD8479663F2C_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_mFA856F073642EB6C35F9F37BE9107CD4AEC3F0D9_inline (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82*, const RuntimeMethod*))KeyValuePair_2_get_Key_mFA856F073642EB6C35F9F37BE9107CD4AEC3F0D9_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::get_Value()
inline ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 KeyValuePair_2_get_Value_mDA704D8AD1159932710716FEA06F2F74A30AC326_inline (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 (*) (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82*, const RuntimeMethod*))KeyValuePair_2_get_Value_mDA704D8AD1159932710716FEA06F2F74A30AC326_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m7135CAF76E397A66DB50E5E72728A932742E3F1D (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82* __this, Guid_t ___0_key, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82*, Guid_t, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, const RuntimeMethod*))KeyValuePair_2__ctor_m7135CAF76E397A66DB50E5E72728A932742E3F1D_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mAFFD5665A07E198FB095D40313664213F9A51033 (Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E* __this, Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E*, Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, int32_t, const RuntimeMethod*))Enumerator__ctor_mAFFD5665A07E198FB095D40313664213F9A51033_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDFC33FBA0333B3E6AF1D122A0BA20C69DDD5180_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7B6032B1F11D61B7DA3A9221BE198A045B131EF4_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1AD3732A6CCFA770045EF6964D088EA948C61529_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9A55C18D5F24D308742753BEDCCD687B77CE94B_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4AD73F6D718C2A89BDC17190BE8E4037BC926542_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBCAAF93CD5CC9B7AFE820F10B28F17DF47A93642_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t1AF22D089E38FF0BB57481761B436D80983A179F* Dictionary_2_get_Keys_m2BB09FFD8FF2384FB57C32EA8A4A3296CACEC3A5_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t1AF22D089E38FF0BB57481761B436D80983A179F* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t1AF22D089E38FF0BB57481761B436D80983A179F* L_1 = (KeyCollection_t1AF22D089E38FF0BB57481761B436D80983A179F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t1AF22D089E38FF0BB57481761B436D80983A179F*, Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t1AF22D089E38FF0BB57481761B436D80983A179F* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t2EE446C5E75B4BE0CB283B1B0068F44B4A51F27F* Dictionary_2_get_Values_m7D6ACC44E4233C64DB21704D43589468B45656EA_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t2EE446C5E75B4BE0CB283B1B0068F44B4A51F27F* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t2EE446C5E75B4BE0CB283B1B0068F44B4A51F27F* L_1 = (ValueCollection_t2EE446C5E75B4BE0CB283B1B0068F44B4A51F27F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t2EE446C5E75B4BE0CB283B1B0068F44B4A51F27F*, Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t2EE446C5E75B4BE0CB283B1B0068F44B4A51F27F* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 Dictionary_2_get_Item_mA92A7ED27BAAC31B471699963BEF269F0454A1E1_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97));
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB752E188F92F7F82D4AF3AE713AC91F7CBD71198_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, Guid_t ___0_key, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m115BA0C326B73F998E2C8D362E57E957FDD14DF1_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, Guid_t ___0_key, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mCD04B750781E1AF51EA1F78939948D1F431303C6_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m17D33B895368360897FBFB11CD49508F6B3E06D8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_1;
		L_1 = KeyValuePair_2_get_Value_m8A519B84CA5DB614E7A3012DE96CAC5F76BC4CAF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3E3C9F5E2B338C55996B57A0B23A6E974786789F_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m17D33B895368360897FBFB11CD49508F6B3E06D8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* L_3;
		L_3 = ((  EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_7;
		L_7 = KeyValuePair_2_get_Value_m8A519B84CA5DB614E7A3012DE96CAC5F76BC4CAF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19832D87931489EE75E3241C95BC0C2C53F3D84A_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m17D33B895368360897FBFB11CD49508F6B3E06D8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* L_3;
		L_3 = ((  EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_7;
		L_7 = KeyValuePair_2_get_Value_m8A519B84CA5DB614E7A3012DE96CAC5F76BC4CAF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m17D33B895368360897FBFB11CD49508F6B3E06D8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m06A3E7C8D164D9B650FA3A73F8AC6040CAD705C1_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mF34068ED9979FC1E9B39D1CF1317CCA565CC26BD_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mD5220DBA6FAD7E065B3FD40C3C99B79E00FEB76C_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* V_0 = NULL;
	int32_t V_1 = 0;
	CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* L_15;
		L_15 = ((  EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* L_24;
		L_24 = ((  EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tA9B11F4D678C04C50E2CFBC81AADE738002D9885* L_28 = V_4;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE0EC6A32C26FF0176DCC7289F1FF10C8D745EDD6_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mA9E34991AF567B5F6A5513373BA7270D976D4DE4((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8 Dictionary_2_GetEnumerator_m617E728BF7A53F73540A8E9AF2B65A6C017A95FF_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0B9804D9ED0E14C4104629E7DFA6DD3245E6718E((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m161E4B4FAC1D6285484D31855F5CECCB29EA0C3E_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0B9804D9ED0E14C4104629E7DFA6DD3245E6718E((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m791E1740D94C04CE28346D6025D8F87597817604_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_14 = (KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42*)(KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_15 = V_0;
		((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0FAF478782F331739AE07453A2D31751DE4283A6_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_31;
		L_31 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_38 = V_7;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		Guid_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		Guid_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		Guid_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		Guid_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		Guid_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7D3F6FBCC73DE8F419C4D77146779B778F39E481_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_5 = (EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE*)(EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m189FEA16F47CF5AD4223CFDB40E52A84373F4796_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, Guid_t ___0_key, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____delegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_44;
		L_44 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_51 = V_12;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Guid_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		Guid_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____delegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Guid_t L_62 = ___0_key;
		Guid_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		Guid_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		Guid_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____delegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_88 = ___0_key;
		Guid_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_123 = V_10;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____delegate_2), (void*)NULL);
		#endif
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mF84E67077BF471EA899DBA5115442229FB3F6DF2_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m17D33B895368360897FBFB11CD49508F6B3E06D8_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m17D33B895368360897FBFB11CD49508F6B3E06D8_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_27;
		L_27 = KeyValuePair_2_get_Value_m8A519B84CA5DB614E7A3012DE96CAC5F76BC4CAF_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m34FBB24C3F36F0F2B67A2449A0BCE9A3044DCA05_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6ABA360611A1495EB9BFE14EBE82F0302262E884_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_3 = (EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE*)(EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_5 = __this->____entries_1;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		Guid_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Guid_t* L_19 = (Guid_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m46BE2E003A033866F7FFEC00D47C1B75A069FF49_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_41 = V_4;
		Guid_t* L_42 = (Guid_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(Guid_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_43 = V_4;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97* L_44 = (CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m041E788A1FBDD0A8B3F7274A9B2C36AF85CC968D_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, Guid_t ___0_key, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97* L_38 = ___1_value;
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_39 = V_4;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_40 = L_39->___value_3;
		*(CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)L_38)->____data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)L_38)->____delegate_2), (void*)NULL);
		#endif
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_44 = V_4;
		Guid_t* L_45 = (Guid_t*)(&L_44->___key_2);
		il2cpp_codegen_initobj(L_45, sizeof(Guid_t));
	}

IL_010c:
	{
		if (!true)
		{
			goto IL_0120;
		}
	}
	{
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_46 = V_4;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97* L_47 = (CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList_3 = L_48;
		int32_t L_49 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_t9E08A4381BA191BA1EA6BDE6447B27312D4BDC22* L_52 = V_4;
		int32_t L_53 = L_52->___next_1;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4F7059F2069D620D25E518482FE4B2335F296D05_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, Guid_t ___0_key, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97* L_3 = ___1_value;
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)L_3)->____data_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)L_3)->____delegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m60E1CDEB1B1100405C3822AE1F3AB9206FF7710A_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, Guid_t ___0_key, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mCEA7B2A6EA2284B681057AFEA2AFAB920BFBBE5A_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4B35FD632552D7D3131CB298F88C054EB93891D7_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m54467A940F20ACF169BD99051BEB6DB2147B800E_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, KeyValuePair_2U5BU5D_t60BE0826210F60CD639CB55A2F983C7CF8722A42*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mA9E34991AF567B5F6A5513373BA7270D976D4DE4((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m6282453CB0D27D9E87D40046026641A46E4A5D7E_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0B9804D9ED0E14C4104629E7DFA6DD3245E6718E((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4D4DA9C789243233E38F046B0F9C6402C3C1CF68_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m72676190A4A0F11C14F7BCDFE1A815C5218E438B_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t5C0DF31791B89EFB80D33B2B0A10DF6CA70094BE* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mAC6AFD9BCCA4BAEBC508309C51801447694D2418_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9)))));
		}
		try
		{// begin try (depth: 2)
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)((CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)(CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mDB1E52F33FC20D6E0D556E0E2C192504C3A948B1_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mDA9A2661A26F72F1800B032B7FFE86B4C7E123BB_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m098BE51EDD7F0D5A8B223301D0E2372648E96038_gshared (Dictionary_2_t8324706EB9BA0FE10C1CEEB86A60E83F36CABD3D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0B9804D9ED0E14C4104629E7DFA6DD3245E6718E((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t64927E431E7477208DB7BBFBD107E261AFD22AB8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9DE04ADE87156DE75C51BCBC80938F901A4F12FE_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6DC1F848505551101C4DC94163B9FB183632B2E5_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9DFEBFA265B2B1BAF67AF5EDF0DE923EE679B979_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB5C1ACFAB79B54CA05F7AB5DA87DE5DDD256D536_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCD468DBD4771229D68D2EB4E44506D2A9BB027CE_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD51767E8A7067085C7BBD00F720BBFC0CC066F03_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tEFD840755D5396EE29D6B1552AABB5295CA4E835* Dictionary_2_get_Keys_mC9E1CAB074CE6E2A7A2B0638481BFAD4E51A9895_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tEFD840755D5396EE29D6B1552AABB5295CA4E835* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tEFD840755D5396EE29D6B1552AABB5295CA4E835* L_1 = (KeyCollection_tEFD840755D5396EE29D6B1552AABB5295CA4E835*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tEFD840755D5396EE29D6B1552AABB5295CA4E835*, Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tEFD840755D5396EE29D6B1552AABB5295CA4E835* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tAA0A5236B1CD6CE0188EB428953C8C87730B88A7* Dictionary_2_get_Values_mCB94722C4E71D93D2F04AE00EBB32949552FAFA6_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tAA0A5236B1CD6CE0188EB428953C8C87730B88A7* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tAA0A5236B1CD6CE0188EB428953C8C87730B88A7* L_1 = (ValueCollection_tAA0A5236B1CD6CE0188EB428953C8C87730B88A7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tAA0A5236B1CD6CE0188EB428953C8C87730B88A7*, Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tAA0A5236B1CD6CE0188EB428953C8C87730B88A7* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 Dictionary_2_get_Item_mDC8B0618B56F612FDA5CE20122026BE6C25BBD97_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80));
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m7BE8FFA0DDD78FDD8A6A13577EB636D756076978_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, Guid_t ___0_key, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE9A8A44A6DA2504A74009F6ECE7525E970D29187_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, Guid_t ___0_key, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mAFFB97EE971D749EBF5D242D3977854E95CBB0B6_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m368A4CFEAEA3BB7B6A72D567612C0ACEE07B76A7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_1;
		L_1 = KeyValuePair_2_get_Value_mBC2EF13E9BD18A35E01982C6E166A11CAA1A2127_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mF328CFB172136A9429E0E84914395993CA02FE38_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m368A4CFEAEA3BB7B6A72D567612C0ACEE07B76A7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* L_3;
		L_3 = ((  EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_7;
		L_7 = KeyValuePair_2_get_Value_mBC2EF13E9BD18A35E01982C6E166A11CAA1A2127_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m5CD4A094BE3E0666ABBECA7C5AE25F6B35152CFA_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m368A4CFEAEA3BB7B6A72D567612C0ACEE07B76A7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* L_3;
		L_3 = ((  EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_7;
		L_7 = KeyValuePair_2_get_Value_mBC2EF13E9BD18A35E01982C6E166A11CAA1A2127_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m368A4CFEAEA3BB7B6A72D567612C0ACEE07B76A7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m3A9615ED97619519CA427005A02D44776A29E946_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m82C8017E26FEE38C7D857E60B9AF37B0D06F6030_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6C6EC2FE18685F5FC9B8844724A0C14B93D58D41_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* V_0 = NULL;
	int32_t V_1 = 0;
	CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* L_15;
		L_15 = ((  EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* L_24;
		L_24 = ((  EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t3C13803378C6BD5E42B6166B2605A13D5D50F9AE* L_28 = V_4;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mD62D3711BC451FE3EF15FA453E23C054B5C105D4_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mE170785CA6584974F8C048867E5E1132AC3D2647((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599 Dictionary_2_GetEnumerator_mCD5149D6CD8F2EC701D2C0AC06062FD4331FCBC5_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m15196848BE472324653E8C8F66CCD8068B5AAE16((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA3C3086665C3369AD3C6A50223F0F7FDD2927767_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m15196848BE472324653E8C8F66CCD8068B5AAE16((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m6E4A93F1A4F907A270A4CD6A874C2987A83BD518_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_14 = (KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE*)(KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_15 = V_0;
		((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m41993D4821B15AF8CFCDD381B575C55F1CD25A46_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_31;
		L_31 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_38 = V_7;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		Guid_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		Guid_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		Guid_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		Guid_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		Guid_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA6CDEEDF95574A4F2A587E5A16159D3E1EC1A003_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_5 = (EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0*)(EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC82B515D27D839DB54926E58620A51A27819D42F_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, Guid_t ___0_key, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____data_1))->___CombinedData_1))->____remainingTaskIds_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____data_1))->___CombinedData_1))->____originalTaskOrder_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____data_1))->___CombinedData_1))->____completedTasks_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____data_1))->___CombinedData_1))->____userOwnedResultList_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____delegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_44;
		L_44 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_51 = V_12;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Guid_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		Guid_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____data_1))->___CombinedData_1))->____remainingTaskIds_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____data_1))->___CombinedData_1))->____originalTaskOrder_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____data_1))->___CombinedData_1))->____completedTasks_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____data_1))->___CombinedData_1))->____userOwnedResultList_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____delegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Guid_t L_62 = ___0_key;
		Guid_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		Guid_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		Guid_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____data_1))->___CombinedData_1))->____remainingTaskIds_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____data_1))->___CombinedData_1))->____originalTaskOrder_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____data_1))->___CombinedData_1))->____completedTasks_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____data_1))->___CombinedData_1))->____userOwnedResultList_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____delegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_88 = ___0_key;
		Guid_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_123 = V_10;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_123->___value_3))->____data_1))->___CombinedData_1))->____remainingTaskIds_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_123->___value_3))->____data_1))->___CombinedData_1))->____originalTaskOrder_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_123->___value_3))->____data_1))->___CombinedData_1))->____completedTasks_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_123->___value_3))->____data_1))->___CombinedData_1))->____userOwnedResultList_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____delegate_2), (void*)NULL);
		#endif
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mE3EA09BF9BB75CE300A2AA9F482E679745852853_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m368A4CFEAEA3BB7B6A72D567612C0ACEE07B76A7_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m368A4CFEAEA3BB7B6A72D567612C0ACEE07B76A7_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_27;
		L_27 = KeyValuePair_2_get_Value_mBC2EF13E9BD18A35E01982C6E166A11CAA1A2127_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA7140B33A771E05E111DC188B742E234B8E52F40_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m7EF261428B5146605A098F6ACD9E96E5CA461954_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_3 = (EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0*)(EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_5 = __this->____entries_1;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		Guid_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Guid_t* L_19 = (Guid_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA91F9669F68A8F1C17105C4E4EFC365AA3C9F9E1_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_41 = V_4;
		Guid_t* L_42 = (Guid_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(Guid_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_43 = V_4;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80* L_44 = (CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m20C17299E21704FD3F76C85CA8EB5D9537E06A2C_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, Guid_t ___0_key, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80* L_38 = ___1_value;
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_39 = V_4;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_40 = L_39->___value_3;
		*(CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_38)->____data_1))->___CombinedData_1))->____remainingTaskIds_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_38)->____data_1))->___CombinedData_1))->____originalTaskOrder_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_38)->____data_1))->___CombinedData_1))->____completedTasks_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_38)->____data_1))->___CombinedData_1))->____userOwnedResultList_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_38)->____delegate_2), (void*)NULL);
		#endif
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_44 = V_4;
		Guid_t* L_45 = (Guid_t*)(&L_44->___key_2);
		il2cpp_codegen_initobj(L_45, sizeof(Guid_t));
	}

IL_010c:
	{
		if (!true)
		{
			goto IL_0120;
		}
	}
	{
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_46 = V_4;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80* L_47 = (CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList_3 = L_48;
		int32_t L_49 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_t1A55185B0BC259AE5DB58705FEAD9BF0490A6864* L_52 = V_4;
		int32_t L_53 = L_52->___next_1;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m6E3FB80A48B32D9353E628044B963F72A0D8083E_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, Guid_t ___0_key, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80* L_3 = ___1_value;
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_3)->____data_1))->___CombinedData_1))->____remainingTaskIds_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_3)->____data_1))->___CombinedData_1))->____originalTaskOrder_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_3)->____data_1))->___CombinedData_1))->____completedTasks_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_3)->____data_1))->___CombinedData_1))->____userOwnedResultList_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)L_3)->____delegate_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m062FC94FD2383258A8C3C783F0118471DBA8EE0B_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, Guid_t ___0_key, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mEC38653E917EE83F6B0CA7452F5EDAB393466325_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mEAE0F1BFEE8F93FBBE3136D17F8F72B7DC93FDEF_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m0A68BFF7915EE1A47475EB5045236F610E8C78B7_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, KeyValuePair_2U5BU5D_tC4614E25E0A118B0429816AF72AAF4D46D6B53DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mE170785CA6584974F8C048867E5E1132AC3D2647((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3458DFDA0B091098BC8E90E2D86F07DFA8D02BD2_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m15196848BE472324653E8C8F66CCD8068B5AAE16((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mAD260888E020C80752ADC5726DAF33D32245E663_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mFEF12379883C580956F817B1692A0A4E2681F400_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t0A42BA59BEE3529B46D3541A1658D1C1CC51F4E0* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m9FFC937A05BAD0DFE67D02C58B4E67EF73F03426_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9)))));
		}
		try
		{// begin try (depth: 2)
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)((CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)(CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mC24675CF25BD9B606E39614CF9E59F6BAD944909_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m2A90C848750A05616B047903425FAC0A32D61C01_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/CallbackWithState`1<OVRSceneManager/Metrics,OVRTask`1/CombinedTaskDataWithCompletedTaskId<OVRSceneManager/Metrics>>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE4E3A19094AD31FF50F56264AB00290125A41E7B_gshared (Dictionary_2_tC782D5B1A0F339FE3FC8E55B54A3450883AEEBFF* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m15196848BE472324653E8C8F66CCD8068B5AAE16((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t30A629A59A2FE1EA96C45F70BAEAABABE6F27599 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9A58E9F850D5C715C1192765D61EA6E6C6C50D2F_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0BD3E4279DBDE38BD1CE78C11F3AD591CA02FF4C_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC0E22EB300FF11E06F71A92534FA9137C0ABAD93_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1FE9092347A42C61C0B2B22852193ED542156FD2_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB4CE70580445141ED3F61ABAEEEA888BA52282D1_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m9E322DD1F7D13B5EFA027A622C3C362D432FAEB6_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t7F02B92B3AF503C2AD5199B0886EF5D4C57DEDC3* Dictionary_2_get_Keys_mDB90C76A60BFAFF21A981620BD5C6DC63B8EF40E_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t7F02B92B3AF503C2AD5199B0886EF5D4C57DEDC3* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t7F02B92B3AF503C2AD5199B0886EF5D4C57DEDC3* L_1 = (KeyCollection_t7F02B92B3AF503C2AD5199B0886EF5D4C57DEDC3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t7F02B92B3AF503C2AD5199B0886EF5D4C57DEDC3*, Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t7F02B92B3AF503C2AD5199B0886EF5D4C57DEDC3* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tFF8EA7479289030FF41279342F152BB5F1BFADB2* Dictionary_2_get_Values_m3E147C419E9BF8EEB95CB54151187C10680B4337_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tFF8EA7479289030FF41279342F152BB5F1BFADB2* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tFF8EA7479289030FF41279342F152BB5F1BFADB2* L_1 = (ValueCollection_tFF8EA7479289030FF41279342F152BB5F1BFADB2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tFF8EA7479289030FF41279342F152BB5F1BFADB2*, Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tFF8EA7479289030FF41279342F152BB5F1BFADB2* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E Dictionary_2_get_Item_m1D8238390576EE75363128153EB6A9A02480B9A3_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E));
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4F11442DF2BF9B5C63DB104930B4B4750CB25707_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, Guid_t ___0_key, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA3D906DC473432D79BA7A85FFF7B412E2BE7E054_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, Guid_t ___0_key, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m71DB846108A811B6950D3227259645037D578DA0_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mCB1CE4FE0C089932C125052ACE37571AE9C4A36D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_1;
		L_1 = KeyValuePair_2_get_Value_mB5A057084756BD8112781EE3D3565CE346BC8A6A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m688E2006FBC318BA6D4EFF900B259D08F860AE69_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mCB1CE4FE0C089932C125052ACE37571AE9C4A36D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* L_3;
		L_3 = ((  EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_7;
		L_7 = KeyValuePair_2_get_Value_mB5A057084756BD8112781EE3D3565CE346BC8A6A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRResult`1<System.Int32Enum>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA93059D7757AC55E83E96D3E00190149FD3796DD_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mCB1CE4FE0C089932C125052ACE37571AE9C4A36D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* L_3;
		L_3 = ((  EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_7;
		L_7 = KeyValuePair_2_get_Value_mB5A057084756BD8112781EE3D3565CE346BC8A6A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRResult`1<System.Int32Enum>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_mCB1CE4FE0C089932C125052ACE37571AE9C4A36D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m16E6A0D91F9273AEE142AE302290EBD0F2B5BF99_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mAFA308707EEE635CD6C82D39E4A5B86C34F2F17C_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mE3909AB192380C0EB2A59D0875627650414FAE69_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* V_0 = NULL;
	int32_t V_1 = 0;
	OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* L_15;
		L_15 = ((  EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRResult`1<System.Int32Enum>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* L_24;
		L_24 = ((  EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t74F8B78E356DE2B19C50A772650DDFC00D98048C* L_28 = V_4;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRResult`1<System.Int32Enum>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m3E33170C6F478C9B6591B2C8480025F03E1B2B74_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mABF58034046C751FF4AA0BA6B291E1EDEF4F82A6((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205 Dictionary_2_GetEnumerator_mD645FFAF2CC64F775B8D1C41F742729E20444EA2_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m340F5B6251295AC43EDD85AC22B2E4F67231597B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2074FE26B472D25146837DD0B5A2BD6163CC06C3_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m340F5B6251295AC43EDD85AC22B2E4F67231597B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m91D8733E4006C88E24A37FC4C85D6B52ABBCBFF0_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_14 = (KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55*)(KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_15 = V_0;
		((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m4527968B20E2AFB057F1361D44B2C108BBE33C08_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_31;
		L_31 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_38 = V_7;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		Guid_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		Guid_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		Guid_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		Guid_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		Guid_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m090500FF3FB7AD282FF8AE25B5299CA45FCFF636_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_5 = (EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D*)(EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF303908F2E2E591194EAF090454DEAA890A4E2CB_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, Guid_t ___0_key, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_44;
		L_44 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_51 = V_12;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Guid_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		Guid_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Guid_t L_62 = ___0_key;
		Guid_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		Guid_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		Guid_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_88 = ___0_key;
		Guid_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_123 = V_10;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m2D4A8ACD81F4357FDF4A198E368D76AF01B86340_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_mCB1CE4FE0C089932C125052ACE37571AE9C4A36D_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_mCB1CE4FE0C089932C125052ACE37571AE9C4A36D_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_27;
		L_27 = KeyValuePair_2_get_Value_mB5A057084756BD8112781EE3D3565CE346BC8A6A_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m178ED5BCA9DF09F8181E43E22FBCC420F07AA874_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m27DCDB52740CEC86880CF88F40BCF69640E4550C_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_3 = (EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D*)(EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_5 = __this->____entries_1;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		Guid_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Guid_t* L_19 = (Guid_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m88F2AF0CD321E80426F187A32BE106B22BDBBE9C_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_41 = V_4;
		Guid_t* L_42 = (Guid_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(Guid_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_43 = V_4;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E* L_44 = (OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5A38F236FE7F74BDED6EC6A353C0A6CD84BFF94A_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, Guid_t ___0_key, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E* L_38 = ___1_value;
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_39 = V_4;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_40 = L_39->___value_3;
		*(OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E*)L_38 = L_40;
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_44 = V_4;
		Guid_t* L_45 = (Guid_t*)(&L_44->___key_2);
		il2cpp_codegen_initobj(L_45, sizeof(Guid_t));
	}

IL_010c:
	{
		if (!false)
		{
			goto IL_0120;
		}
	}
	{
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_46 = V_4;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E* L_47 = (OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList_3 = L_48;
		int32_t L_49 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_tFC33295ED3A2230765C46476B4DD4BFF64C57916* L_52 = V_4;
		int32_t L_53 = L_52->___next_1;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mAAA00D37655D085C4D7B948CBAB832DBB7EB70DA_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, Guid_t ___0_key, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E* L_3 = ___1_value;
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mA02CDE735660E3BCC4EDF7576877D9539E162798_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, Guid_t ___0_key, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0631E396868C8EE8FBC8F6C02748D78724FFD43A_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m5723E97E5D5B6B2918EF5F9A3B6F6A6CF024087A_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBCCB41915B1DD94ACDF78E6B7AD38B987DC5B94B_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, KeyValuePair_2U5BU5D_t11E454C9639878A9B011C99B58E2B81622C85A55*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mABF58034046C751FF4AA0BA6B291E1EDEF4F82A6((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9B38EF8F56BEA485FD734897BC702B4759048883_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m340F5B6251295AC43EDD85AC22B2E4F67231597B((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mCF056177E12714F3A495D8CEC0E437A7C66925AA_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m11FA52D01F726F71E57451A6A1D01693D142933F_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t35C6BFE1CA35C402A5B92D734B90390DDF9FA43D* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mA47A3B5BDBEE2E0FCAD23A65957383A3902D94ED_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9)))));
		}
		try
		{// begin try (depth: 2)
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E*)((OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E*)(OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mCC28DB2C510385DE798BF7F2553A861E065401BD_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m865F6E6206345100F1F1816A8DCB4FDDAE24F6C2_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`1<System.Int32Enum>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE0639A3B78F9ED88CA9707D9BD786CC155E27B7A_gshared (Dictionary_2_tE02AD9822F9B48A6383D37C931D51F7305BA59F1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m340F5B6251295AC43EDD85AC22B2E4F67231597B((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t0625065D104C255227DA15EB8F04F63128C0D205 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6C19D5959046C5E483BA3BB2FBFED178E61A4090_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF31885BCC752F78680349EB6349CEC98CED341E7_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m85C3EE7894CC3397C6988050F4E8C0C2032CBDFE_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF45561010AB353C3098B9AD7C61CF808F6A69C2F_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m805456A63653E19ED92ABA5BA0373C2B016E7B49_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m0A7DEC4B7AEBD1A902B3850F4215370C31E9799E_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0C5C908FC649EC49535423FDA9210E7FBAD55E40* Dictionary_2_get_Keys_mB41C910ECA9F652B6D61A938F8D67AC5BFDAF8F6_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t0C5C908FC649EC49535423FDA9210E7FBAD55E40* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t0C5C908FC649EC49535423FDA9210E7FBAD55E40* L_1 = (KeyCollection_t0C5C908FC649EC49535423FDA9210E7FBAD55E40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t0C5C908FC649EC49535423FDA9210E7FBAD55E40*, Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t0C5C908FC649EC49535423FDA9210E7FBAD55E40* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tEA30B5B771FF66AD3043765D1D54EA721596131B* Dictionary_2_get_Values_m97C1DB10472F4350D54BFE8437A77252DE4220ED_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tEA30B5B771FF66AD3043765D1D54EA721596131B* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tEA30B5B771FF66AD3043765D1D54EA721596131B* L_1 = (ValueCollection_tEA30B5B771FF66AD3043765D1D54EA721596131B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tEA30B5B771FF66AD3043765D1D54EA721596131B*, Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tEA30B5B771FF66AD3043765D1D54EA721596131B* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 Dictionary_2_get_Item_mA03378200F75F8BDA3ACE1C9FC03CD4BD619BE14_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7));
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6FE59F329AAD58668D20BD928D8542D87D83D430_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, Guid_t ___0_key, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m4F1FB9003176E475DCDAAC82487CF48606593322_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, Guid_t ___0_key, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mEFA4D66E28841E29292485F91371F9749136CCF5_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m365B6CE339D93CA226A7AB32FA93C4B19DA05318_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_1;
		L_1 = KeyValuePair_2_get_Value_mB40DBC2C42C6FE824B7D10033A3E3686FD008513_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3104DD957D0EDFB098005253C9EAD0347C981A2D_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m365B6CE339D93CA226A7AB32FA93C4B19DA05318_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* L_3;
		L_3 = ((  EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_7;
		L_7 = KeyValuePair_2_get_Value_mB40DBC2C42C6FE824B7D10033A3E3686FD008513_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRResult`2<System.Object,System.Int32Enum>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mEA18D5B3064BF77EB5EF5F638D921C0289750763_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m365B6CE339D93CA226A7AB32FA93C4B19DA05318_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* L_3;
		L_3 = ((  EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_7;
		L_7 = KeyValuePair_2_get_Value_mB40DBC2C42C6FE824B7D10033A3E3686FD008513_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRResult`2<System.Object,System.Int32Enum>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m365B6CE339D93CA226A7AB32FA93C4B19DA05318_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE0E6B9311096AFC7FCBB607EF39943DCDB053DDC_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m45D63D81622790D57238FC43D91B74DF5B7CF2DF_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m515F262BFC5FEB610CC8029A89C1D0FB27B91F95_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* V_0 = NULL;
	int32_t V_1 = 0;
	OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* L_15;
		L_15 = ((  EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRResult`2<System.Object,System.Int32Enum>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* L_24;
		L_24 = ((  EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t69C0AE5A20E0CD24206A9ADFFC09426C4C7C508D* L_28 = V_4;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRResult`2<System.Object,System.Int32Enum>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m34836CEE71310448C874B4014AB8FAAFF379F682_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m06646810AA058BBBE833350E9FB86F2EB897AC75((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB Dictionary_2_GetEnumerator_mCCAE497505813B496723A34B95A49E2BF0619F2E_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4272D043F3DB7E9240A4364C1D8FB3E1C2EBB095((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mDEB14D6353CA70040619B1FB68583C3E4025FF1E_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4272D043F3DB7E9240A4364C1D8FB3E1C2EBB095((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m7CC729430D08F7A018D990A5A09D10BBA77FD0E5_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_14 = (KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7*)(KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_15 = V_0;
		((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m6FBE2E5EA9E32DCF2E64CA7EBA4D02A159D22F0D_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_31;
		L_31 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_38 = V_7;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		Guid_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		Guid_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		Guid_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		Guid_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		Guid_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mFE798CD833FCD46379DF7639194A08E22266BE81_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_5 = (EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87*)(EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4515B87F7AB78E2625D8B597B8AAE45FBDF4E1CC_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, Guid_t ___0_key, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____value_1), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_44;
		L_44 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_51 = V_12;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Guid_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		Guid_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____value_1), (void*)NULL);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Guid_t L_62 = ___0_key;
		Guid_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		Guid_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		Guid_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____value_1), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_88 = ___0_key;
		Guid_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_123 = V_10;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____value_1), (void*)NULL);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m229EBAA88EADD13C11CDA6ABA6956FEF54252149_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m365B6CE339D93CA226A7AB32FA93C4B19DA05318_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m365B6CE339D93CA226A7AB32FA93C4B19DA05318_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_27;
		L_27 = KeyValuePair_2_get_Value_mB40DBC2C42C6FE824B7D10033A3E3686FD008513_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF345C5096EFF129838D6FBE58DFF0F170AAE1385_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0E784BDAD378603133E57C81D542DA9555E38956_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_3 = (EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87*)(EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_5 = __this->____entries_1;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		Guid_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Guid_t* L_19 = (Guid_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mCCE98536786CB3E3E66CCD5F405F4D770A1950A6_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_41 = V_4;
		Guid_t* L_42 = (Guid_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(Guid_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_43 = V_4;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7* L_44 = (OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m89B24D67DEC5C1B21F75BC5DF94FB397E11A88B4_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, Guid_t ___0_key, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7* L_38 = ___1_value;
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_39 = V_4;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_40 = L_39->___value_3;
		*(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7*)L_38)->____value_1), (void*)NULL);
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_44 = V_4;
		Guid_t* L_45 = (Guid_t*)(&L_44->___key_2);
		il2cpp_codegen_initobj(L_45, sizeof(Guid_t));
	}

IL_010c:
	{
		if (!true)
		{
			goto IL_0120;
		}
	}
	{
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_46 = V_4;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7* L_47 = (OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList_3 = L_48;
		int32_t L_49 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_t8EDBF6B4B3889336290112E318FE6A4CEC61C09D* L_52 = V_4;
		int32_t L_53 = L_52->___next_1;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDC86C9F6FD22CF8B0D1312F59196BEA8E87B3B36_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, Guid_t ___0_key, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7* L_3 = ___1_value;
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7*)L_3)->____value_1), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mE58BB1D4BF004F85F5BD42D8AD0925933C2BF551_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, Guid_t ___0_key, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3010200F0450F3A033AFFC3560FA091CD44053A4_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m5202D65C6122E609ED6E4F93C371C4744FD47FDB_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m2F9DB0F501344E537E2C22986C2D9A28115AF65E_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, KeyValuePair_2U5BU5D_tAA8E385555B6515248BA79722858964ADB32F9C7*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m06646810AA058BBBE833350E9FB86F2EB897AC75((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m72F1D8376C7E16DDD5D8FECB76F59E66D96C56E8_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4272D043F3DB7E9240A4364C1D8FB3E1C2EBB095((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mE42A0E55889D7301D47EE85A07E7C2A45810F77C_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m2D9DBD4319EED86BA7FAB4712AB7D68F6B820E0C_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tA289B69D65AC3A940A421B1AB748BBF205E80F87* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m6894FF2A761409AC6E108FC8182568E91DC1DD03_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9)))));
		}
		try
		{// begin try (depth: 2)
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7*)((OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7*)(OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mD2672C4A381E9455D51A5FB4395ABC897599011F_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m3CFEB10DB27F51FB7D54516AE1282842ED4A97DD_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRResult`2<System.Object,System.Int32Enum>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m0071C9342DFA3904D8EA5D09001AF7F42831FF8B_gshared (Dictionary_2_t9619DEA260231DDC631E6E180AD1CCD270C5627E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4272D043F3DB7E9240A4364C1D8FB3E1C2EBB095((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t2F1E759388D8328E80A26914ADC2C9E8B4DF4FEB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m683CCC7385642BF6AAEAE30410EF5436785DAB82_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m299CDDC4E136FD5BBE84A543E3AC45368208B007_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m73BD0349BDB47DD91DE5C6E141A0ED0E49FE2AE4_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m75BFAF11E5A826936F5F40CC191AB6B57921C654_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD7E65BBB154EA9CFAF0F759D233BFF7B6DA4D372_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m2548B148AC395B7DD10B07D946B049858C83BDE6_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t77785E86A11D6360389E01DAC8A4FFB272DA5B5A* Dictionary_2_get_Keys_m0070C0764A49E2A7A29D3A9EA162144F3DCD2356_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t77785E86A11D6360389E01DAC8A4FFB272DA5B5A* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t77785E86A11D6360389E01DAC8A4FFB272DA5B5A* L_1 = (KeyCollection_t77785E86A11D6360389E01DAC8A4FFB272DA5B5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t77785E86A11D6360389E01DAC8A4FFB272DA5B5A*, Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t77785E86A11D6360389E01DAC8A4FFB272DA5B5A* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tEF6C19E91C93B941DD62D0115310AECAB7B3C743* Dictionary_2_get_Values_m10AC3E4D09334F2AA4C6815385811DCC4D9384AE_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tEF6C19E91C93B941DD62D0115310AECAB7B3C743* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tEF6C19E91C93B941DD62D0115310AECAB7B3C743* L_1 = (ValueCollection_tEF6C19E91C93B941DD62D0115310AECAB7B3C743*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tEF6C19E91C93B941DD62D0115310AECAB7B3C743*, Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tEF6C19E91C93B941DD62D0115310AECAB7B3C743* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 Dictionary_2_get_Item_mFEEE2E280D551DD2A05A6B31F076188057FBA3B0_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119));
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m33D0C4824F3D0CC3F087191BBAE4313643AD9BED_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, Guid_t ___0_key, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m116BF01B41753683D4AE4C28D1CAA2F3D99AB69B_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, Guid_t ___0_key, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m214C8C05D9EFD18618F8BE79B4D73D57F79E8F83_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mCB8EDF2CCE2CD1ABF496F41B57311764A41DF0F0_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_1;
		L_1 = KeyValuePair_2_get_Value_mC025D35EC9BD3AFEDB01EF68A4B6BD84AA2DD98D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3F9AF05D8B921C60B98FFC07E8240A603B91A72A_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mCB8EDF2CCE2CD1ABF496F41B57311764A41DF0F0_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_3;
		L_3 = ((  EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_7;
		L_7 = KeyValuePair_2_get_Value_mC025D35EC9BD3AFEDB01EF68A4B6BD84AA2DD98D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8777C0648AB5F50349504B15C009026CCDAD6A0A_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mCB8EDF2CCE2CD1ABF496F41B57311764A41DF0F0_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_3;
		L_3 = ((  EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_7;
		L_7 = KeyValuePair_2_get_Value_mC025D35EC9BD3AFEDB01EF68A4B6BD84AA2DD98D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_mCB8EDF2CCE2CD1ABF496F41B57311764A41DF0F0_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m9FA06F472CB33A59A519B515FC3B4CD1B93E62BF_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m625F0994FF29BE11452AE0D6CAE809C2B26DC978_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m9F54289F40370B3529A7F9D2CFBD06EB566417DF_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* V_0 = NULL;
	int32_t V_1 = 0;
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_15;
		L_15 = ((  EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_24;
		L_24 = ((  EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tC6E5C518C67D6F717DB1088DB33395ED058255D4* L_28 = V_4;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m8829C339F2542C369F41E0CD88CBA36CF2AC662F_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mACE0712B7A02E1AE1AEB85C3A5E42359F35657A0((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E Dictionary_2_GetEnumerator_mA87A8DF82BA5AB2D300B0799D36E6FA0903DAE87_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m995DAB519FF0DC59A180F791AF009EAF6FF7DDCB((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mD081F99C5536B6ECAE440729CAAE21EF6F79D57B_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m995DAB519FF0DC59A180F791AF009EAF6FF7DDCB((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mBD84F68A2C80C6592F634F2B760C3D16FC050366_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_14 = (KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55*)(KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_15 = V_0;
		((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mE054D3EBAB5BD49A81F1564A086899ABD5709271_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_31;
		L_31 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_38 = V_7;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		Guid_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		Guid_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		Guid_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		Guid_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		Guid_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m880FED6BEEF683F15D6D1C01D6BD9C219E4DD8BC_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_5 = (EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD*)(EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m0FD9745D6714DA993731596FFC437391F5052323_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, Guid_t ___0_key, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_44;
		L_44 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_51 = V_12;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Guid_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		Guid_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Guid_t L_62 = ___0_key;
		Guid_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		Guid_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		Guid_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_88 = ___0_key;
		Guid_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_123 = V_10;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m30381720BCDE87E9F7D26283D747E84780D7667E_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_mCB8EDF2CCE2CD1ABF496F41B57311764A41DF0F0_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_mCB8EDF2CCE2CD1ABF496F41B57311764A41DF0F0_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_27;
		L_27 = KeyValuePair_2_get_Value_mC025D35EC9BD3AFEDB01EF68A4B6BD84AA2DD98D_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mABD5C6AA70B72CEA4CDE7DFE06669F8A939090BE_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3176E622330AFC081B46626B132959005CAD4EA3_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_3 = (EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD*)(EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_5 = __this->____entries_1;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		Guid_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Guid_t* L_19 = (Guid_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m13F545CFF5D912D3B2B56D9D8A94FEBB36455243_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_41 = V_4;
		Guid_t* L_42 = (Guid_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(Guid_t));
	}

IL_00ff:
	{
		if (!false)
		{
			goto IL_0113;
		}
	}
	{
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_43 = V_4;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* L_44 = (ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mDCFBF0048CAF0C61EE8FECD828AA92DC8D55197F_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, Guid_t ___0_key, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* L_38 = ___1_value;
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_39 = V_4;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_40 = L_39->___value_3;
		*(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*)L_38 = L_40;
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_44 = V_4;
		Guid_t* L_45 = (Guid_t*)(&L_44->___key_2);
		il2cpp_codegen_initobj(L_45, sizeof(Guid_t));
	}

IL_010c:
	{
		if (!false)
		{
			goto IL_0120;
		}
	}
	{
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_46 = V_4;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* L_47 = (ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList_3 = L_48;
		int32_t L_49 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_t72F352023DFE3F4D2BD27ABCB5C746F5E61D6D3A* L_52 = V_4;
		int32_t L_53 = L_52->___next_1;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE56143EEEC38635457DAA866ED5585F23913C2CA_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, Guid_t ___0_key, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* L_3 = ___1_value;
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m582870C6C9EFEA69ACD4653626F72D4CA8311CCB_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, Guid_t ___0_key, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m5F4B1BB38941B6E10A4915FF417B8A961E370239_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA85E4A196283F7A3D5552D5F804243244EC84426_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m0CFF181ECD119CD8935EF68F9B018EB71B7CCCA5_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, KeyValuePair_2U5BU5D_t263512550489151BD813892EA2BF5A8CEB541D55*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mACE0712B7A02E1AE1AEB85C3A5E42359F35657A0((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mBC35B5BB315F720C800CA57CD9EB3582AB1619F9_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m995DAB519FF0DC59A180F791AF009EAF6FF7DDCB((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mA0EE51867BB3D719BE20EA630305B6C4D7FF1FB0_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mDAE0E7F4DF3809AC657EB0C74A31B787A484BF24_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t96C0EB2C1DE0CF6A4C14775AAEC83914A19D20BD* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m50CFD43F738A1B8484623207F3DA224D170E7844_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9)))));
		}
		try
		{// begin try (depth: 2)
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*)((ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*)(ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mD636C6BF08784F649E358C906A67311C46CD2994_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m299A4BF57A2F2570E7E408FA139102D04B9A9D40_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Int32Enum,System.Int32>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19FF37E008E019A2C1DFD5ECF38557439C338A3E_gshared (Dictionary_2_tE33C9F3839C19AAB6966A3E77E2ED23AEC50004B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m995DAB519FF0DC59A180F791AF009EAF6FF7DDCB((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t8031D7D0B7CC9EE6DB14D5D57142130BA353717E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m32362C5EA10CE0A1EC63D672706095C7CE25B976_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB02F883F90A53A14539401A4CAB6A015917068D0_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3343179D20302FDBC93840447F80B83B20FD0C2B_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB082E55A5503A42D13DE949AAAAA505D54411FDE_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7B1A1F306C4CE8E64A886605AF588B39A57968DE_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m750D46181F69BF8F51541885CDF8DD9A723FE186_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0A79BCFAE6AF3B086D8FEC8AFDC4CF7EF66F4062* Dictionary_2_get_Keys_mBB1C11170F0A18B59769234F0EDD463FB7E847CB_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t0A79BCFAE6AF3B086D8FEC8AFDC4CF7EF66F4062* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t0A79BCFAE6AF3B086D8FEC8AFDC4CF7EF66F4062* L_1 = (KeyCollection_t0A79BCFAE6AF3B086D8FEC8AFDC4CF7EF66F4062*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t0A79BCFAE6AF3B086D8FEC8AFDC4CF7EF66F4062*, Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t0A79BCFAE6AF3B086D8FEC8AFDC4CF7EF66F4062* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t7114A11798CBF0C844B89BD3ADEDCA6B547731E5* Dictionary_2_get_Values_m49966B0382149342BE56FD03B7E6A16893ED2415_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t7114A11798CBF0C844B89BD3ADEDCA6B547731E5* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t7114A11798CBF0C844B89BD3ADEDCA6B547731E5* L_1 = (ValueCollection_t7114A11798CBF0C844B89BD3ADEDCA6B547731E5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t7114A11798CBF0C844B89BD3ADEDCA6B547731E5*, Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t7114A11798CBF0C844B89BD3ADEDCA6B547731E5* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A Dictionary_2_get_Item_m0BBB8671A3497BF9A2CF4940016CF2A4BECBE6CF_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBC1908D2B70E0FC8BA2C82593577DAFC390E3FA6_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, Guid_t ___0_key, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mE4515062CFDBE4C6CCDB729DA316A3DB53072930_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, Guid_t ___0_key, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m128F373FFA01DA8542BD5FFE718F051BF52C9D2A_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m6F83331B242B26728663C53348EC7471559A7038_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_1;
		L_1 = KeyValuePair_2_get_Value_m8112CDFEBC89FD7944E0BE3D0F10E157755C6308_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m7AD77DA2D4E9BF6577E4C4428A3385B8762E745C_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m6F83331B242B26728663C53348EC7471559A7038_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_3;
		L_3 = ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7;
		L_7 = KeyValuePair_2_get_Value_m8112CDFEBC89FD7944E0BE3D0F10E157755C6308_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Object,System.Object>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m299DD4316C043B3E2EB42BA1E51E60586FEAA8DC_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m6F83331B242B26728663C53348EC7471559A7038_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_3;
		L_3 = ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7;
		L_7 = KeyValuePair_2_get_Value_m8112CDFEBC89FD7944E0BE3D0F10E157755C6308_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Object,System.Object>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m6F83331B242B26728663C53348EC7471559A7038_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m97464D5D1BCEE24FB23B8490339E42E2E7F68F66_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1063235048BB68F57D8B9D95AD5424B2EFB08839_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m39F85216D35DF06E0DE3FB074C4689F11019BDFF_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* V_0 = NULL;
	int32_t V_1 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_15;
		L_15 = ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Object,System.Object>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_24;
		L_24 = ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_28 = V_4;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`2<System.Object,System.Object>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m33DE57B847CE11FC290C1791DC810F8CB31CB46A_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m8C0128B68D77B71C7E5FA2A94B6DB8348044F82D((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE Dictionary_2_GetEnumerator_m264FE02BA1238782180BD88019F06CF18DFC9737_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3F5B99759FA5DCE144B3218EC60DBD8479663F2C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m02C4205E355B9974E26EA3D375E18C8370181E3C_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3F5B99759FA5DCE144B3218EC60DBD8479663F2C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m972B0F4673FB0501F3D9AD5880951C3A125BFED3_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_14 = (KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8*)(KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_15 = V_0;
		((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m2CD720EB90D71080FFDEFE3DB696B8F98462B6F0_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_31;
		L_31 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_38 = V_7;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		Guid_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		Guid_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		Guid_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		Guid_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		Guid_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m4CAC41D68F7F313D16722C791C63A122C89AA3C6_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_5 = (EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77*)(EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAEBFCAE4B4D228ACD2EF4FBD1712748D60D6DCFC_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, Guid_t ___0_key, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_44;
		L_44 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_51 = V_12;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Guid_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		Guid_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Guid_t L_62 = ___0_key;
		Guid_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		Guid_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		Guid_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_88 = ___0_key;
		Guid_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_123 = V_10;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->___Item2_1), (void*)NULL);
		#endif
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCB2C5B8979FAEC7F0CC567BF6A94D62DF8DFFFCC_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m6F83331B242B26728663C53348EC7471559A7038_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m6F83331B242B26728663C53348EC7471559A7038_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27;
		L_27 = KeyValuePair_2_get_Value_m8112CDFEBC89FD7944E0BE3D0F10E157755C6308_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD8ECE69741EAB1B636EEC787A682892263573081_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8353FCFF7DE45402BEF64D16168502EA1C6B0551_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_3 = (EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77*)(EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_5 = __this->____entries_1;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		Guid_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Guid_t* L_19 = (Guid_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m310F4182F32B3016C3F4049F4D1498278EF307B3_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_41 = V_4;
		Guid_t* L_42 = (Guid_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(Guid_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_43 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_44 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0D100D9C2E26AAC2E259CF6D2AF116E475FF2D4C_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, Guid_t ___0_key, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_38 = ___1_value;
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_39 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_40 = L_39->___value_3;
		*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_38)->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_38)->___Item2_1), (void*)NULL);
		#endif
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_44 = V_4;
		Guid_t* L_45 = (Guid_t*)(&L_44->___key_2);
		il2cpp_codegen_initobj(L_45, sizeof(Guid_t));
	}

IL_010c:
	{
		if (!true)
		{
			goto IL_0120;
		}
	}
	{
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_46 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_47 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList_3 = L_48;
		int32_t L_49 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_tE2B14AE8CE80932982F8733B4570A218B32D1C68* L_52 = V_4;
		int32_t L_53 = L_52->___next_1;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m5E9282DF723CF4D9F4B821F919A44FB28D0239E5_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, Guid_t ___0_key, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_3 = ___1_value;
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_3)->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)L_3)->___Item2_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mED1B3B74CE9340FEB37943275EF4B5B31FD00A36_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, Guid_t ___0_key, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mB1CF13D67748F07E54AE254C39C572FFA0148601_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3788917CAAD1D12692EB96422ED94B059F3681FA_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m125C629DB687DFF90DBF9B8112B82184DA13FED6_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, KeyValuePair_2U5BU5D_t7B7D2B074702B95CF6ABCF6A893032AEAA0076C8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m8C0128B68D77B71C7E5FA2A94B6DB8348044F82D((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m82835408A78DD119B055305C97BB2AD1DE92EDEB_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3F5B99759FA5DCE144B3218EC60DBD8479663F2C((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mE88FC5E0D7F9DFCA1A155D6ED90E69FB7F177D97_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mA609F8D84F4E121738DE5EA1D9276B89F1A2331E_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tA1E90788E604C5E4374CC6C48DCFFA7BFB971F77* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mA422035F51A1401CFB05E6A276E6B739BBB17F9A_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9)))));
		}
		try
		{// begin try (depth: 2)
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mADF83C7FF2A4D0F9CD6AAC9C4FD50399AB4CD2BD_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m28DD233FB34D283D470460FB861C5F3389EBB009_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20432D9DD88B3927D0EBCF31F25EAF2293E33DC5_gshared (Dictionary_2_tFE05D96E43F8D5C5B259F27D61B73FA0B35CD54A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3F5B99759FA5DCE144B3218EC60DBD8479663F2C((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t733FBA6F257AEAD7ECC6C322D2CAF28EF55262BE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE09AB59D3AA6DC4B204CC1057B8FBC5065BE2656_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF96467918381443B3439EDB2AE39467E7A45A674_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9596DA83206BD10E79CA46A33E44B50C42C506E8_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAC84EFAE7CC464DD4C3A70C735DB1148485971B6_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF40C83BE3BD6147E72D37E641DA924B3250B6AF5_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m5E7A9B2F72AB0B96175EC1F5ACCECF27E4F21A4A_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE16F7897B0901E3501B7294F5268B014EE8FB803* Dictionary_2_get_Keys_mDB07493A5A82FE70B06D14A9E13728D44AF070A9_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE16F7897B0901E3501B7294F5268B014EE8FB803* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE16F7897B0901E3501B7294F5268B014EE8FB803* L_1 = (KeyCollection_tE16F7897B0901E3501B7294F5268B014EE8FB803*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tE16F7897B0901E3501B7294F5268B014EE8FB803*, Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE16F7897B0901E3501B7294F5268B014EE8FB803* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tA28545A262BC334A74513AD32BA543511981D337* Dictionary_2_get_Values_m3DD5DC933F52D11510590C90074C39D966583ED1_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tA28545A262BC334A74513AD32BA543511981D337* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tA28545A262BC334A74513AD32BA543511981D337* L_1 = (ValueCollection_tA28545A262BC334A74513AD32BA543511981D337*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_tA28545A262BC334A74513AD32BA543511981D337*, Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tA28545A262BC334A74513AD32BA543511981D337* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 Dictionary_2_get_Item_mE8C801D793F68CCBD036305D27785821CA4A0EB6_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01));
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC8DE577DD3B63FC0BAEB4B21A6DC00A8A5FCAD31_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, Guid_t ___0_key, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mD13A187264E0D17FF750C6E11A88551482A5FEA7_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, Guid_t ___0_key, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22BFCDF6838843A151F667FDB0C4164120BE5289_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mFA856F073642EB6C35F9F37BE9107CD4AEC3F0D9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_1;
		L_1 = KeyValuePair_2_get_Value_mDA704D8AD1159932710716FEA06F2F74A30AC326_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mCC8522704CCD985E261CC99207EC777DD11051DC_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mFA856F073642EB6C35F9F37BE9107CD4AEC3F0D9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* L_3;
		L_3 = ((  EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_7;
		L_7 = KeyValuePair_2_get_Value_mDA704D8AD1159932710716FEA06F2F74A30AC326_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m5F33FB01BD66BD9119F204BE34C1C4248F6CCD1B_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mFA856F073642EB6C35F9F37BE9107CD4AEC3F0D9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* L_3;
		L_3 = ((  EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_7;
		L_7 = KeyValuePair_2_get_Value_mDA704D8AD1159932710716FEA06F2F74A30AC326_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_mFA856F073642EB6C35F9F37BE9107CD4AEC3F0D9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m4B0E4B6204253352521740627D212079B7B88B59_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets_0;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count_2 = 0;
		__this->____freeList_3 = (-1);
		__this->____freeCount_4 = 0;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3529D9F7E568DF3974A48C72F59B37517F146D80_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mEEEDDFC41701C20BDF872BEA08BE4EAE0D4F53D3_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* V_0 = NULL;
	int32_t V_1 = 0;
	ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		goto IL_0037;
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count_2;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* L_15;
		L_15 = ((  EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>::Equals(T,T) */, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* L_24;
		L_24 = ((  EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t94B41D5D0906B8C767589E5E8A155056A93ACA8C* L_28 = V_4;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>::Equals(T,T) */, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m40511F608D8F900EA8B2D4342A1FE85D6EBAF968_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count_2;
		V_0 = L_6;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7135CAF76E397A66DB50E5E72728A932742E3F1D((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E Dictionary_2_GetEnumerator_m8C6A8A1764F6D97DA1DC03B8663599D2D40648DD_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAFFD5665A07E198FB095D40313664213F9A51033((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mFAC14454C9BF00DDF31FC02B46DC7E656338AF8C_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAFFD5665A07E198FB095D40313664213F9A51033((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m974447B39FEA320A72D0DF84D097DABF191F9C9B_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version_5;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer_6;
		RuntimeObject* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets_0;
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets_0;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_14 = (KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843*)(KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_15 = V_0;
		((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1E11902A1484D8DA34FC1992ED8F10CF0B85C938_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		V_1 = L_1;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_2 = __this->____entries_1;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer_6;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_31;
		L_31 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_7 = L_31;
	}

IL_00c0:
	{
		int32_t L_32 = V_0;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_34 = V_2;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___hashCode_0;
		int32_t L_37 = V_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_38 = V_7;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_39 = V_2;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		Guid_t L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___key_2;
		Guid_t L_42 = ___0_key;
		NullCheck(L_38);
		bool L_43;
		L_43 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_38, L_41, L_42);
		if (L_43)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_48 = V_2;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_50 = V_4;
		Guid_t L_51 = ___0_key;
		NullCheck(L_50);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_50, L_51);
		V_8 = ((int32_t)(L_52&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_1;
		int32_t L_54 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		NullCheck(L_55);
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)(L_54%((int32_t)(((RuntimeArray*)L_55)->max_length))));
		int32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
	}

IL_012b:
	{
		int32_t L_58 = V_0;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_60 = V_2;
		int32_t L_61 = V_0;
		NullCheck(L_60);
		int32_t L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___hashCode_0;
		int32_t L_63 = V_8;
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_64 = V_4;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_65 = V_2;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		Guid_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___key_2;
		Guid_t L_68 = ___0_key;
		NullCheck(L_64);
		bool L_69;
		L_69 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_64, L_67, L_68);
		if (L_69)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_74 = V_2;
		NullCheck(L_74);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_75 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_76 = V_0;
		return L_76;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m3EC2BA86ED6A57BCAF86646344649640BDF1F405_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList_3 = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_5 = (EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A*)(EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mD769B15A652749F884BE6F072E6CAA2FEF2F02D0_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, Guid_t ___0_key, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets_0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_4 = __this->____entries_1;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer_6;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets_0;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets_0;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode_0;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->___Item3_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_44;
		L_44 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_12 = L_44;
	}

IL_0111:
	{
		int32_t L_45 = V_5;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_47);
		int32_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___hashCode_0;
		int32_t L_50 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_51 = V_12;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_52 = V_0;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Guid_t L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___key_2;
		Guid_t L_55 = ___0_key;
		NullCheck(L_51);
		bool L_56;
		L_56 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_51, L_54, L_55);
		if (!L_56)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_57 = ___2_behavior;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->___Item3_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_61 = ___2_behavior;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Guid_t L_62 = ___0_key;
		Guid_t L_63 = L_62;
		RuntimeObject* L_64 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_63);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_69 = V_0;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_70 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_71 = V_5;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->___hashCode_0;
		int32_t L_76 = V_2;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_77 = V_1;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_78 = V_0;
		int32_t L_79 = V_5;
		NullCheck(L_78);
		Guid_t L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___key_2;
		Guid_t L_81 = ___0_key;
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_77, L_80, L_81);
		if (!L_82)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_83 = ___2_behavior;
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->___Item3_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_87 = ___2_behavior;
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_88 = ___0_key;
		Guid_t L_89 = L_88;
		RuntimeObject* L_90 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_89);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_95 = V_0;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_96 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_97 = __this->____freeCount_4;
		if ((((int32_t)L_97) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_98 = __this->____freeList_3;
		V_8 = L_98;
		V_7 = (bool)1;
		int32_t L_99 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_100 = __this->____count_2;
		V_13 = L_100;
		int32_t L_101 = V_13;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_105 = __this->____entries_1;
		V_0 = L_105;
	}

IL_0250:
	{
		bool L_106 = V_6;
		if (L_106)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_107 = V_4;
		G_B51_0 = L_107;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->____buckets_0;
		int32_t L_109 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets_0;
		NullCheck(L_110);
		NullCheck(L_108);
		G_B51_0 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_109%((int32_t)(((RuntimeArray*)L_110)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_111 = V_0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		V_10 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)));
		bool L_113 = V_7;
		if (!L_113)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_123 = V_10;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->___Item3_2), (void*)NULL);
		#endif
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m541D3B079A8FF03E411947E5BDC2A67E77650717_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 26)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 33))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_mFA856F073642EB6C35F9F37BE9107CD4AEC3F0D9_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_mFA856F073642EB6C35F9F37BE9107CD4AEC3F0D9_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_27;
		L_27 = KeyValuePair_2_get_Value_mDA704D8AD1159932710716FEA06F2F74A30AC326_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version_5 = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m472662B5526A28F8352063943FA5E133670DF2E4_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m355BFF019B9B18EADEE710F3E6C6A04E73B128A4_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_3 = (EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A*)(EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_5 = __this->____entries_1;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		Guid_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_9);
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Guid_t* L_19 = (Guid_t*)(&((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key_2);
		int32_t L_20;
		L_20 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode_0 = ((int32_t)(L_20&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007f:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_31 = V_1;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_0;
		int32_t L_38 = V_6;
		int32_t L_39 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
	}

IL_00c5:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cb:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		__this->____buckets_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_43);
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6DE7A936DB32C26CA0D004AFFEBA3F65C439FB95_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_41 = V_4;
		Guid_t* L_42 = (Guid_t*)(&L_41->___key_2);
		il2cpp_codegen_initobj(L_42, sizeof(Guid_t));
	}

IL_00ff:
	{
		if (!true)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_43 = V_4;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01* L_44 = (ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList_3 = L_45;
		int32_t L_46 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_49 = V_4;
		int32_t L_50 = L_49->___next_1;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE138E1B7AA2F37F0240EBCA7BE31DE04019366A7_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, Guid_t ___0_key, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets_0;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer_6;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets_0;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode_0;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer_6;
		RuntimeObject* L_19 = L_18;
		G_B9_0 = L_19;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_21 = V_4;
		Guid_t L_22 = L_21->___key_2;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_25 = V_4;
		Guid_t L_26 = L_25->___key_2;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets_0;
		int32_t L_31 = V_1;
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01* L_38 = ___1_value;
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_39 = V_4;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_40 = L_39->___value_3;
		*(ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)L_38)->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)L_38)->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)L_38)->___Item3_2), (void*)NULL);
		#endif
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_44 = V_4;
		Guid_t* L_45 = (Guid_t*)(&L_44->___key_2);
		il2cpp_codegen_initobj(L_45, sizeof(Guid_t));
	}

IL_010c:
	{
		if (!true)
		{
			goto IL_0120;
		}
	}
	{
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_46 = V_4;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01* L_47 = (ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01));
	}

IL_0120:
	{
		int32_t L_48 = V_3;
		__this->____freeList_3 = L_48;
		int32_t L_49 = __this->____freeCount_4;
		__this->____freeCount_4 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = __this->____version_5;
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_51 = V_3;
		V_2 = L_51;
		Entry_tC7D076BFD88D0B6FDA17537E4CC0EA200DCE02B7* L_52 = V_4;
		int32_t L_53 = L_52->___next_1;
		V_3 = L_53;
	}

IL_014f:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m81F18251BD2A5B2FC5AC788E5AE454B1B225B41B_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, Guid_t ___0_key, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01* L_3 = ___1_value;
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)L_3)->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)L_3)->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)L_3)->___Item3_2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m621DCA0E66A89E984BF8F1BF297796B7D7C96A53_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, Guid_t ___0_key, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m0FE0CB98B7FB77FE64F363A36456FE53679EF78C_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mB10EEAC1EC0F3725557F813D679206134E799268_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m9E1DDB84064B3C6354EC87359229F53FEFF53AD3_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, KeyValuePair_2U5BU5D_t908D97051502EFF8B9805A4C0AF8B4BFA759E843*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_41 = __this->____count_2;
			V_5 = L_41;
			EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode_0;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m7135CAF76E397A66DB50E5E72728A932742E3F1D((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 22), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{// begin catch(System.ArrayTypeMismatchException)
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}// end catch (depth: 1)

IL_0140:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1C26ED4FEB6CDEC6CB0221AC79BFB4FC6945EE0B_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAFFD5665A07E198FB095D40313664213F9A51033((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m074E2F1E59042E69017CF96A2B9D47236911EA5A_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_9;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot_9);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_9;
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m25E3C25B34BDEB54BE4C7C4A9AB7081A3E54C06D_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tB5F3B9D56F2E8D5247EE627C9737CC5454EF786A* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m39012DA4E01C87ECA87E9B17FD6D094D30697792_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9)))));
		}
		try
		{// begin try (depth: 2)
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			((  void (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)((ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)(ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
			goto IL_003a_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{// begin catch(System.InvalidCastException)
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 44)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}// end catch (depth: 2)

IL_003a_1:
		{
			goto IL_004f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{// begin catch(System.InvalidCastException)
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 45)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}// end catch (depth: 1)

IL_004f:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m185322D2737FA837174A288E8E5778DF904BBBF0_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m42B073A22F52D7F98EF742C620D506796FF6E49E_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = ((  bool (*) (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,System.ValueTuple`3<System.Object,System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mB5136D1FF5B4F9E3F541951BDD30EA1E79731844_gshared (Dictionary_2_tCD617AF07BB9E3BA4A3A194996D3E224904ED460* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mAFFD5665A07E198FB095D40313664213F9A51033((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tE9ADC29D8B1467B27B1384DFAEB4F9F443667C1E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m17D33B895368360897FBFB11CD49508F6B3E06D8_gshared_inline (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 KeyValuePair_2_get_Value_m8A519B84CA5DB614E7A3012DE96CAC5F76BC4CAF_gshared_inline (KeyValuePair_2_tEDE6967BBA785E6FFDC750BB4A1283C7F2BA3EB5* __this, const RuntimeMethod* method) 
{
	{
		CallbackWithState_1_t2D9F830F366A3D8FB9F91BFF2A63C449AE47FF97 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m368A4CFEAEA3BB7B6A72D567612C0ACEE07B76A7_gshared_inline (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 KeyValuePair_2_get_Value_mBC2EF13E9BD18A35E01982C6E166A11CAA1A2127_gshared_inline (KeyValuePair_2_t386CB469A926440C6FCFEED42213070739F399E5* __this, const RuntimeMethod* method) 
{
	{
		CallbackWithState_1_t3E76BE13E215B9FC3CB8B6C84D7E2A26C0095D80 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mCB1CE4FE0C089932C125052ACE37571AE9C4A36D_gshared_inline (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E KeyValuePair_2_get_Value_mB5A057084756BD8112781EE3D3565CE346BC8A6A_gshared_inline (KeyValuePair_2_tDFC2D64913C1F95CC3D7E39B0B675C089ABCA113* __this, const RuntimeMethod* method) 
{
	{
		OVRResult_1_t031FA996F4006B1D5E4CCDB3FFAE638C4F8C706E L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m365B6CE339D93CA226A7AB32FA93C4B19DA05318_gshared_inline (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 KeyValuePair_2_get_Value_mB40DBC2C42C6FE824B7D10033A3E3686FD008513_gshared_inline (KeyValuePair_2_t033DDA48F6E449008548665EF9422C6483F05539* __this, const RuntimeMethod* method) 
{
	{
		OVRResult_2_tEE309DA87971E4B023EDEF7A804AF736830DF0C7 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mCB8EDF2CCE2CD1ABF496F41B57311764A41DF0F0_gshared_inline (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 KeyValuePair_2_get_Value_mC025D35EC9BD3AFEDB01EF68A4B6BD84AA2DD98D_gshared_inline (KeyValuePair_2_t0E461DC0DA699EB504EBB2F9283850A605797D5F* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m6F83331B242B26728663C53348EC7471559A7038_gshared_inline (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Value_m8112CDFEBC89FD7944E0BE3D0F10E157755C6308_gshared_inline (KeyValuePair_2_tBE2CB8704BCDCF667660D9722E4FD5436A080EEF* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mFA856F073642EB6C35F9F37BE9107CD4AEC3F0D9_gshared_inline (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 KeyValuePair_2_get_Value_mDA704D8AD1159932710716FEA06F2F74A30AC326_gshared_inline (KeyValuePair_2_t5670FDAC960EF1FA1ABE6395BF5483CD9BFFAE82* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_3_tC9C1846E6BD237797AE9B56D5138EE67C1B5FA01 L_0 = __this->___value_1;
		return L_0;
	}
}

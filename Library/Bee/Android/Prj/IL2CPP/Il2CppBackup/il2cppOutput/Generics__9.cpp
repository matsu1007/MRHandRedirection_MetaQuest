﻿#include "pch-cpp.hpp"

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

// System.Action`1<OVRResult`2<System.Object,System.Int32Enum>>
struct Action_1_t6DADC37B4AD2BFDAF6F8F80F597870C5693EEE1F;
// System.Action`1<System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct Action_1_tEACDF04A7E59F802BE6074E014636B4DFEECB424;
// System.Action`1<System.ValueTuple`2<System.Object,System.Object>>
struct Action_1_t21EA33523F691BABEB9BCB0E487E8C00D8AC760A;
// System.Action`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct Action_1_tEF1F65D72A365B38A7201C79969CC074AD64EBA0;
// System.Action`1<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>
struct Action_1_tCE9EC38DEFCEA81F5DCF9F80F899271794ACD1D8;
// System.Action`1<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>
struct Action_1_t4ECC393698739A52B03DC984FEA9A3422BC04DCE;
// System.Action`1<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct Action_1_t14D972FD4BBAC5C7150153516D3957BA6A7A9618;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// OVRTask`1/ContinueWithInvoker<OVRResult`2<System.Object,System.Int32Enum>>
struct ContinueWithInvoker_t9224B3C8809CF23BB8FDF74180DEDA9FC41CBA35;
// OVRTask`1/ContinueWithInvoker<System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct ContinueWithInvoker_tE6A6B312613EEC99AD802D15EF2AF586639CC8EB;
// OVRTask`1/ContinueWithInvoker<System.ValueTuple`2<System.Object,System.Object>>
struct ContinueWithInvoker_t77B5C9541820AD46BFF0EC68302C657827D7D294;
// OVRTask`1/ContinueWithInvoker<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct ContinueWithInvoker_t3EF13767D9D43B2EF559D1F7D371BB970A9283C2;
// OVRTask`1/ContinueWithInvoker<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>
struct ContinueWithInvoker_tCE5C5F0F8B3AC15ED84E210C96A35DC906203132;
// OVRTask`1/ContinueWithInvoker<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>
struct ContinueWithInvoker_t21EE6AA71EBB6428FB3C0D7BB7DA014EE40802F3;
// OVRTask`1/ContinueWithInvoker<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct ContinueWithInvoker_tFCF78F1EDCEF9042C9D821631BA359353211F660;
// OVRTask`1/ContinueWithRemover<OVRResult`2<System.Object,System.Int32Enum>>
struct ContinueWithRemover_t1BACA370164F2ADE6EF2A843E9ACCA611FC3F871;
// OVRTask`1/ContinueWithRemover<System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct ContinueWithRemover_t1E316C0F3A3BACE007BA8AF9E409458A609A94A2;
// OVRTask`1/ContinueWithRemover<System.ValueTuple`2<System.Object,System.Object>>
struct ContinueWithRemover_t50E0A43CE354453868D084521F138BB5CDCD8252;
// OVRTask`1/ContinueWithRemover<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct ContinueWithRemover_t6499CDD8D67289EFF634BF6DBCB07F3104C92732;
// OVRTask`1/ContinueWithRemover<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>
struct ContinueWithRemover_t6E3985AB508CC6542BB232C25AAE2DAEDDC87DC5;
// OVRTask`1/ContinueWithRemover<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>
struct ContinueWithRemover_t72709B9A8605E8E1DB05E1483F5FEEB72FD48853;
// OVRTask`1/ContinueWithRemover<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct ContinueWithRemover_t34483A1F3DAE510F381646FB9A734F9EB4E0516A;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct Dictionary_2_t695454913465472BF4309DE335CF2851688D202F;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE;
// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA;
// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9;
// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17;
// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C;
// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F;
// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593;
// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189;
// System.Collections.Generic.EqualityComparer`1<System.Guid>
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>>
struct IEnumerator_1_t893841C358C43F60CA9D69BAAABA34D3C4762181;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>>
struct IEnumerator_1_t5FF79A41CF0301339D4ADE6D8F34870F64B22B7B;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>>
struct IEnumerator_1_t6D1B5806749A2CEF8404D695F7A95E24FB7B2B8D;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>>
struct IEnumerator_1_tD66A2FCB3F80FB86DF50BA4ED171ED2AC1DF9C6A;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>>
struct IEnumerator_1_t1D148B32F97173A896ACC840BA251AE52DCADA6A;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>>
struct IEnumerator_1_tDCA9E787649F0C208C7884620C652A5F8F88D58B;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>>
struct IEnumerator_1_tC8BA4F8B3F2BAAE09FFD0F7C6C4D8BAE8E0166E9;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct KeyCollection_tB2080BB6C2CB49C2A97EE039E870738B9D439874;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct KeyCollection_tBBA11BD02AAB030C9EB9EEA6A24D06D22A586A66;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct KeyCollection_tE6305ADF0B1B83793941FAB8BE858856916DA335;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct KeyCollection_t60103F2F2D2CE8B38707815DCED991265065AD47;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct KeyCollection_tB3B3BA280354BA4783E5B64C0F654689DE876801;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct ValueCollection_t5F9173F97B80D4779107B7F26274DC1315FE9CF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct ValueCollection_t28EB099198B3C8280CB4868B54E4493F9246B6C5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct ValueCollection_t0607A83D58420CB67A432FDD30E219C53D92F70B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct ValueCollection_t3C794FB4C85B6FE17A5E805E70AC975BDD1E4EE2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct ValueCollection_t9EE66F92B910180EF86F569E0A8A2257D39CAC7F;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>[]
struct EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>[]
struct EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>[]
struct EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>[]
struct EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>[]
struct EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>[]
struct EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>[]
struct EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>[]
struct KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>[]
struct KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>[]
struct KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>[]
struct KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>[]
struct KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>[]
struct KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B;
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>[]
struct KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E;
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

struct EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A;
struct EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E;
struct EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60;
struct EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61;
struct EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E;
struct EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488;
struct EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D;
struct KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605;
struct KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11;
struct KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D;
struct KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0;
struct KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB;
struct KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B;
struct KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E;
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

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct Dictionary_2_t695454913465472BF4309DE335CF2851688D202F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* ____entries_1;
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
	KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* ____entries_1;
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
	KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* ____entries_1;
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
	KeyCollection_tB2080BB6C2CB49C2A97EE039E870738B9D439874* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5F9173F97B80D4779107B7F26274DC1315FE9CF3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* ____entries_1;
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
	KeyCollection_tBBA11BD02AAB030C9EB9EEA6A24D06D22A586A66* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t28EB099198B3C8280CB4868B54E4493F9246B6C5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* ____entries_1;
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
	KeyCollection_tE6305ADF0B1B83793941FAB8BE858856916DA335* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t0607A83D58420CB67A432FDD30E219C53D92F70B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* ____entries_1;
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
	KeyCollection_t60103F2F2D2CE8B38707815DCED991265065AD47* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3C794FB4C85B6FE17A5E805E70AC975BDD1E4EE2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* ____entries_1;
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
	KeyCollection_tB3B3BA280354BA4783E5B64C0F654689DE876801* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9EE66F92B910180EF86F569E0A8A2257D39CAC7F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189  : public RuntimeObject
{
};

// System.Collections.Generic.EqualityComparer`1<System.Guid>
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct KeyCollection_tB2080BB6C2CB49C2A97EE039E870738B9D439874  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct KeyCollection_tBBA11BD02AAB030C9EB9EEA6A24D06D22A586A66  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct KeyCollection_tE6305ADF0B1B83793941FAB8BE858856916DA335  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct KeyCollection_t60103F2F2D2CE8B38707815DCED991265065AD47  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct KeyCollection_tB3B3BA280354BA4783E5B64C0F654689DE876801  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct ValueCollection_t5F9173F97B80D4779107B7F26274DC1315FE9CF3  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct ValueCollection_t28EB099198B3C8280CB4868B54E4493F9246B6C5  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct ValueCollection_t0607A83D58420CB67A432FDD30E219C53D92F70B  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct ValueCollection_t3C794FB4C85B6FE17A5E805E70AC975BDD1E4EE2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct ValueCollection_t9EE66F92B910180EF86F569E0A8A2257D39CAC7F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* ____dictionary_0;
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

// OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>
struct Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 
{
	// System.Action`1<TResult> OVRTask`1/Callback::_delegate
	Action_1_t6DADC37B4AD2BFDAF6F8F80F597870C5693EEE1F* ____delegate_1;
};

// OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 
{
	// System.Action`1<TResult> OVRTask`1/Callback::_delegate
	Action_1_tEACDF04A7E59F802BE6074E014636B4DFEECB424* ____delegate_1;
};

// OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>
struct Callback_tAA967A5495364723D611DD674AE351D146E4DE20 
{
	// System.Action`1<TResult> OVRTask`1/Callback::_delegate
	Action_1_t21EA33523F691BABEB9BCB0E487E8C00D8AC760A* ____delegate_1;
};

// OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 
{
	// System.Action`1<TResult> OVRTask`1/Callback::_delegate
	Action_1_tEF1F65D72A365B38A7201C79969CC074AD64EBA0* ____delegate_1;
};

// OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>
struct Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E 
{
	// System.Action`1<TResult> OVRTask`1/Callback::_delegate
	Action_1_tCE9EC38DEFCEA81F5DCF9F80F899271794ACD1D8* ____delegate_1;
};

// OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>
struct Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 
{
	// System.Action`1<TResult> OVRTask`1/Callback::_delegate
	Action_1_t4ECC393698739A52B03DC984FEA9A3422BC04DCE* ____delegate_1;
};

// OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 
{
	// System.Action`1<TResult> OVRTask`1/Callback::_delegate
	Action_1_t14D972FD4BBAC5C7150153516D3957BA6A7A9618* ____delegate_1;
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

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Callback_tAA967A5495364723D611DD674AE351D146E4DE20 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 ___value_3;
};

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE 
{
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::hashCode
	int32_t ___hashCode_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Entry::next
	int32_t ___next_1;
	// TKey System.Collections.Generic.Dictionary`2/Entry::key
	Guid_t ___key_2;
	// TValue System.Collections.Generic.Dictionary`2/Entry::value
	Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 ___value_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Callback_tAA967A5495364723D611DD674AE351D146E4DE20 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 ___value_1;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>
struct EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>
struct EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>
struct EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>
struct EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.EqualityComparer`1<System.Guid>
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Guid>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>
struct Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<TResult>> OVRTask`1/Callback::Callbacks
	Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ___Callbacks_0;
	// OVRTask`1/ContinueWithInvoker<TResult> OVRTask`1/Callback::Invoker
	ContinueWithInvoker_t9224B3C8809CF23BB8FDF74180DEDA9FC41CBA35* ___Invoker_2;
	// OVRTask`1/ContinueWithRemover<TResult> OVRTask`1/Callback::Remover
	ContinueWithRemover_t1BACA370164F2ADE6EF2A843E9ACCA611FC3F871* ___Remover_3;
	// System.Action OVRTask`1/Callback::Clearer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer_4;
};

// OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>

// OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>
struct Callback_tD6F76A27427390AB039AE817762327D0D6848CF0_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<TResult>> OVRTask`1/Callback::Callbacks
	Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ___Callbacks_0;
	// OVRTask`1/ContinueWithInvoker<TResult> OVRTask`1/Callback::Invoker
	ContinueWithInvoker_tE6A6B312613EEC99AD802D15EF2AF586639CC8EB* ___Invoker_2;
	// OVRTask`1/ContinueWithRemover<TResult> OVRTask`1/Callback::Remover
	ContinueWithRemover_t1E316C0F3A3BACE007BA8AF9E409458A609A94A2* ___Remover_3;
	// System.Action OVRTask`1/Callback::Clearer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer_4;
};

// OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>

// OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>
struct Callback_tAA967A5495364723D611DD674AE351D146E4DE20_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<TResult>> OVRTask`1/Callback::Callbacks
	Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* ___Callbacks_0;
	// OVRTask`1/ContinueWithInvoker<TResult> OVRTask`1/Callback::Invoker
	ContinueWithInvoker_t77B5C9541820AD46BFF0EC68302C657827D7D294* ___Invoker_2;
	// OVRTask`1/ContinueWithRemover<TResult> OVRTask`1/Callback::Remover
	ContinueWithRemover_t50E0A43CE354453868D084521F138BB5CDCD8252* ___Remover_3;
	// System.Action OVRTask`1/Callback::Clearer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer_4;
};

// OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>

// OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<TResult>> OVRTask`1/Callback::Callbacks
	Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* ___Callbacks_0;
	// OVRTask`1/ContinueWithInvoker<TResult> OVRTask`1/Callback::Invoker
	ContinueWithInvoker_t3EF13767D9D43B2EF559D1F7D371BB970A9283C2* ___Invoker_2;
	// OVRTask`1/ContinueWithRemover<TResult> OVRTask`1/Callback::Remover
	ContinueWithRemover_t6499CDD8D67289EFF634BF6DBCB07F3104C92732* ___Remover_3;
	// System.Action OVRTask`1/Callback::Clearer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer_4;
};

// OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>

// OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>
struct Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<TResult>> OVRTask`1/Callback::Callbacks
	Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* ___Callbacks_0;
	// OVRTask`1/ContinueWithInvoker<TResult> OVRTask`1/Callback::Invoker
	ContinueWithInvoker_tCE5C5F0F8B3AC15ED84E210C96A35DC906203132* ___Invoker_2;
	// OVRTask`1/ContinueWithRemover<TResult> OVRTask`1/Callback::Remover
	ContinueWithRemover_t6E3985AB508CC6542BB232C25AAE2DAEDDC87DC5* ___Remover_3;
	// System.Action OVRTask`1/Callback::Clearer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer_4;
};

// OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>

// OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>
struct Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<TResult>> OVRTask`1/Callback::Callbacks
	Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* ___Callbacks_0;
	// OVRTask`1/ContinueWithInvoker<TResult> OVRTask`1/Callback::Invoker
	ContinueWithInvoker_t21EE6AA71EBB6428FB3C0D7BB7DA014EE40802F3* ___Invoker_2;
	// OVRTask`1/ContinueWithRemover<TResult> OVRTask`1/Callback::Remover
	ContinueWithRemover_t72709B9A8605E8E1DB05E1483F5FEEB72FD48853* ___Remover_3;
	// System.Action OVRTask`1/Callback::Clearer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer_4;
};

// OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>

// OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<TResult>> OVRTask`1/Callback::Callbacks
	Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* ___Callbacks_0;
	// OVRTask`1/ContinueWithInvoker<TResult> OVRTask`1/Callback::Invoker
	ContinueWithInvoker_tFCF78F1EDCEF9042C9D821631BA359353211F660* ___Invoker_2;
	// OVRTask`1/ContinueWithRemover<TResult> OVRTask`1/Callback::Remover
	ContinueWithRemover_t34483A1F3DAE510F381646FB9A734F9EB4E0516A* ___Remover_3;
	// System.Action OVRTask`1/Callback::Clearer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer_4;
};

// OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>

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

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.ExceptionArgument

// System.ExceptionArgument

// System.ExceptionResource

// System.ExceptionResource

// System.Collections.Generic.InsertionBehavior

// System.Collections.Generic.InsertionBehavior

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>

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

// System.ArrayTypeMismatchException

// System.ArrayTypeMismatchException

// System.InvalidCastException

// System.InvalidCastException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>[]
struct EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF m_Items[1];

	inline Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
	inline Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
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
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>[]
struct KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 m_Items[1];

	inline KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
	inline KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
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
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>[]
struct EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 m_Items[1];

	inline Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
	inline Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>[]
struct KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 m_Items[1];

	inline KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
	inline KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>[]
struct EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687 m_Items[1];

	inline Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
	inline Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>[]
struct KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA m_Items[1];

	inline KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
	inline KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>[]
struct EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83 m_Items[1];

	inline Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
	inline Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>[]
struct KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB m_Items[1];

	inline KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
	inline KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>[]
struct EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE m_Items[1];

	inline Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
	inline Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>[]
struct KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 m_Items[1];

	inline KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
	inline KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>[]
struct EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159 m_Items[1];

	inline Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
	inline Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>[]
struct KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB m_Items[1];

	inline KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
	inline KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>[]
struct EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE m_Items[1];

	inline Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
	inline Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_3))->____delegate_1), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>[]
struct KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C m_Items[1];

	inline KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
	inline KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value_1))->____delegate_1), (void*)NULL);
	}
};


// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_gshared_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_gshared_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m24B652BB989676FB54EDD12DA60E7D13A5AF925E_gshared (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168_gshared (Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B* __this, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_gshared_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_gshared_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mB51582F33DA23CDE9D52DC88A9026C5098F4DD2C_gshared (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F_gshared (Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A* __this, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m766A18EDE9F50A00394CAEC5E5D56F3C0E5A3CA2_gshared_inline (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tAA967A5495364723D611DD674AE351D146E4DE20 KeyValuePair_2_get_Value_m87B0DE3105D0C985CB39A085A1856C8E40C717CA_gshared_inline (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mCDE6F280B4B18FEE6D78D7EE73415EE06A69935C_gshared (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA* __this, Guid_t ___0_key, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m53977028BA773C140C684559DFBE07115C2DD5F2_gshared (Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83* __this, Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mA65B10384A4BB0A25108FDEBCC355E5BC8356BF5_gshared_inline (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 KeyValuePair_2_get_Value_m1CE06EA3FE825C0359362AF158DE1A26C9056D66_gshared_inline (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m1386C342A794F533F96B68B364A7F772266D8515_gshared (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB* __this, Guid_t ___0_key, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2E8B640BED4FFEA651E352B519F5966E52578CAB_gshared (Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197* __this, Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m4418D1ED32F1EF7A43127A50F41C7F89E8752F29_gshared_inline (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E KeyValuePair_2_get_Value_mA84AA571A4D3F7CAEEBD35F4E6F045F98A3C0914_gshared_inline (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m6D1B38B5B2CEAF7B04F323E83FE14C73C2D90D6E_gshared (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927* __this, Guid_t ___0_key, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m170927708130CE38D8D5B62B0B406D322B0D4E20_gshared (Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C* __this, Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m011E91DF0F439D8AF765FF50519CCC53EA822BE1_gshared_inline (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 KeyValuePair_2_get_Value_m2F469C5A5338BAE74A5917F1AAB43F82BB51C2DD_gshared_inline (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF01A96FA2D827E9A3D16810F7136A314038EBFB7_gshared (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB* __this, Guid_t ___0_key, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4C98678500A2B075C8D65619F625B0484D210883_gshared (Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED* __this, Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF4978A5F94635534B568C9EC7553EE244F243EE5_gshared_inline (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 KeyValuePair_2_get_Value_mB617ABEC2CAD4AC63B21559D91BE9FE1CCC22D33_gshared_inline (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE8BF3EED48D14FD6EC0DFB33F72867A3BD60E625_gshared (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C* __this, Guid_t ___0_key, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mBDC3834EC0DB14900ACC2202C151DFF1481DF94E_gshared (Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6* __this, Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;

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
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3*, const RuntimeMethod*))KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::get_Value()
inline Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method)
{
	return ((  Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 (*) (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3*, const RuntimeMethod*))KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_gshared_inline)(__this, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentException(System.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m24B652BB989676FB54EDD12DA60E7D13A5AF925E (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, const RuntimeMethod*))KeyValuePair_2__ctor_m24B652BB989676FB54EDD12DA60E7D13A5AF925E_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168 (Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B* __this, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B*, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, const RuntimeMethod*))Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
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
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191*, const RuntimeMethod*))KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::get_Value()
inline Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method)
{
	return ((  Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 (*) (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191*, const RuntimeMethod*))KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mB51582F33DA23CDE9D52DC88A9026C5098F4DD2C (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, const RuntimeMethod*))KeyValuePair_2__ctor_mB51582F33DA23CDE9D52DC88A9026C5098F4DD2C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F (Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A* __this, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A*, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, const RuntimeMethod*))Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_m766A18EDE9F50A00394CAEC5E5D56F3C0E5A3CA2_inline (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA*, const RuntimeMethod*))KeyValuePair_2_get_Key_m766A18EDE9F50A00394CAEC5E5D56F3C0E5A3CA2_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::get_Value()
inline Callback_tAA967A5495364723D611DD674AE351D146E4DE20 KeyValuePair_2_get_Value_m87B0DE3105D0C985CB39A085A1856C8E40C717CA_inline (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA* __this, const RuntimeMethod* method)
{
	return ((  Callback_tAA967A5495364723D611DD674AE351D146E4DE20 (*) (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA*, const RuntimeMethod*))KeyValuePair_2_get_Value_m87B0DE3105D0C985CB39A085A1856C8E40C717CA_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mCDE6F280B4B18FEE6D78D7EE73415EE06A69935C (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA* __this, Guid_t ___0_key, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA*, Guid_t, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, const RuntimeMethod*))KeyValuePair_2__ctor_mCDE6F280B4B18FEE6D78D7EE73415EE06A69935C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m53977028BA773C140C684559DFBE07115C2DD5F2 (Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83* __this, Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83*, Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, int32_t, const RuntimeMethod*))Enumerator__ctor_m53977028BA773C140C684559DFBE07115C2DD5F2_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_mA65B10384A4BB0A25108FDEBCC355E5BC8356BF5_inline (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB*, const RuntimeMethod*))KeyValuePair_2_get_Key_mA65B10384A4BB0A25108FDEBCC355E5BC8356BF5_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::get_Value()
inline Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 KeyValuePair_2_get_Value_m1CE06EA3FE825C0359362AF158DE1A26C9056D66_inline (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB* __this, const RuntimeMethod* method)
{
	return ((  Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 (*) (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB*, const RuntimeMethod*))KeyValuePair_2_get_Value_m1CE06EA3FE825C0359362AF158DE1A26C9056D66_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m1386C342A794F533F96B68B364A7F772266D8515 (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB* __this, Guid_t ___0_key, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB*, Guid_t, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, const RuntimeMethod*))KeyValuePair_2__ctor_m1386C342A794F533F96B68B364A7F772266D8515_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m2E8B640BED4FFEA651E352B519F5966E52578CAB (Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197* __this, Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197*, Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, int32_t, const RuntimeMethod*))Enumerator__ctor_m2E8B640BED4FFEA651E352B519F5966E52578CAB_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_m4418D1ED32F1EF7A43127A50F41C7F89E8752F29_inline (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927*, const RuntimeMethod*))KeyValuePair_2_get_Key_m4418D1ED32F1EF7A43127A50F41C7F89E8752F29_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::get_Value()
inline Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E KeyValuePair_2_get_Value_mA84AA571A4D3F7CAEEBD35F4E6F045F98A3C0914_inline (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927* __this, const RuntimeMethod* method)
{
	return ((  Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E (*) (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927*, const RuntimeMethod*))KeyValuePair_2_get_Value_mA84AA571A4D3F7CAEEBD35F4E6F045F98A3C0914_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m6D1B38B5B2CEAF7B04F323E83FE14C73C2D90D6E (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927* __this, Guid_t ___0_key, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927*, Guid_t, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, const RuntimeMethod*))KeyValuePair_2__ctor_m6D1B38B5B2CEAF7B04F323E83FE14C73C2D90D6E_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m170927708130CE38D8D5B62B0B406D322B0D4E20 (Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C* __this, Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C*, Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, int32_t, const RuntimeMethod*))Enumerator__ctor_m170927708130CE38D8D5B62B0B406D322B0D4E20_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_m011E91DF0F439D8AF765FF50519CCC53EA822BE1_inline (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB*, const RuntimeMethod*))KeyValuePair_2_get_Key_m011E91DF0F439D8AF765FF50519CCC53EA822BE1_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Value()
inline Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 KeyValuePair_2_get_Value_m2F469C5A5338BAE74A5917F1AAB43F82BB51C2DD_inline (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB* __this, const RuntimeMethod* method)
{
	return ((  Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 (*) (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB*, const RuntimeMethod*))KeyValuePair_2_get_Value_m2F469C5A5338BAE74A5917F1AAB43F82BB51C2DD_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mF01A96FA2D827E9A3D16810F7136A314038EBFB7 (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB* __this, Guid_t ___0_key, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB*, Guid_t, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, const RuntimeMethod*))KeyValuePair_2__ctor_mF01A96FA2D827E9A3D16810F7136A314038EBFB7_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_m4C98678500A2B075C8D65619F625B0484D210883 (Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED* __this, Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED*, Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, int32_t, const RuntimeMethod*))Enumerator__ctor_m4C98678500A2B075C8D65619F625B0484D210883_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Key()
inline Guid_t KeyValuePair_2_get_Key_mF4978A5F94635534B568C9EC7553EE244F243EE5_inline (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C*, const RuntimeMethod*))KeyValuePair_2_get_Key_mF4978A5F94635534B568C9EC7553EE244F243EE5_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Value()
inline Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 KeyValuePair_2_get_Value_mB617ABEC2CAD4AC63B21559D91BE9FE1CCC22D33_inline (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C* __this, const RuntimeMethod* method)
{
	return ((  Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 (*) (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C*, const RuntimeMethod*))KeyValuePair_2_get_Value_mB617ABEC2CAD4AC63B21559D91BE9FE1CCC22D33_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mE8BF3EED48D14FD6EC0DFB33F72867A3BD60E625 (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C* __this, Guid_t ___0_key, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C*, Guid_t, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, const RuntimeMethod*))KeyValuePair_2__ctor_mE8BF3EED48D14FD6EC0DFB33F72867A3BD60E625_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>,System.Int32)
inline void Enumerator__ctor_mBDC3834EC0DB14900ACC2202C151DFF1481DF94E (Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6* __this, Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6*, Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, int32_t, const RuntimeMethod*))Enumerator__ctor_mBDC3834EC0DB14900ACC2202C151DFF1481DF94E_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDC15D0A86E43055433AF983AAB1B8FC8AE64FF5_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB4AE7B1DEF75B777CBDBC74EB66BF3ACBC4718F0_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5F2C75B3697CF482743E952BB4890D54E70F00E3_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m59FF5E4677AF2E899AAE6D8CDC12F528BABAC67C_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m47FF01A9D4166D4746262351CA4DD19F964B1C4F_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC3A740D0BEE683D33CA05504D9BB614330D909BD_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* Dictionary_2_get_Keys_mA2E594DFE820EC9B7486E5D09099D512E041B2DB_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* L_1 = (KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4*, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t00601C385583E5344660E18A962F16613A6AF3D4* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* Dictionary_2_get_Values_m69759552B985287D50A1B72CB38BFB0E07E4A834_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* L_1 = (ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9*, Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t8671B3F73F6A68DCBAEB2C81FC4B85A5FC1219F9* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 Dictionary_2_get_Item_mF222629F79EE5214225E1D3BAC1C09A034DE0148_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0C7C6027F177115E2A64D662DBD0109738407518_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m86E7921CDE93630FCF225F97BDD540EBC5BBE4B5_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m37876434B10D71BC84952B7E31FE10954C0DE09E_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_1;
		L_1 = KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m62B3F20CCE15CB77D64BA76FDBA4DB61E29A0030_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_3;
		L_3 = ((  EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_7;
		L_7 = KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Equals(T,T) */, L_3, L_6, L_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9618832E1B78D81460A2A01B73B65612E2A0444C_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_3;
		L_3 = ((  EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_7;
		L_7 = KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mD82C467CD621096944DFFE5CC1CB0BBB85A38BAD_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_4 = __this->____entries_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD969F6A580D73851321B8BA7F40F58FBFE2554E9_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7433AA4DC97C265291E5B2EFDA30198D6E46568F_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_15;
		L_15 = ((  EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Equals(T,T) */, L_15, L_18, L_19);
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
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_24;
		L_24 = ((  EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tD1B047EE5368BF878136D8A8C219871A6AAF38DA* L_28 = V_4;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Equals(T,T) */, L_28, L_31, L_32);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7B46550CE5C42D59370FA471B7C15509387A88A3_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_0 = ___0_array;
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
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_2 = ___0_array;
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
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m24B652BB989676FB54EDD12DA60E7D13A5AF925E((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3)L_20);
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
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B Dictionary_2_GetEnumerator_m24ABA045907BEE80617341777576D521BFEADAC9_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m001D9B04D630E79A86A0B4D00FB7EA16306F8ECD_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m84A95323D5B15202BFD34CE3213BFDC87830841A_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* V_0 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_14 = (KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*)(KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_15 = V_0;
		((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_17 = V_0;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m520513147136EB1C90C2A43381E197AE45E9C1EB_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_2 = NULL;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_2 = __this->____entries_1;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_15 = V_2;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_20 = V_2;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_29 = V_2;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_34 = V_2;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_39 = V_2;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_48 = V_2;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_60 = V_2;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_65 = V_2;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_74 = V_2;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1EBACA63008A644E1DC927D1611ED9AB8520C95F_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_5 = (EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A*)(EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mF378C6E7BB4E0256BCC88B18C67B33862EC75EEA_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* V_10 = NULL;
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
		L_3 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_4 = __this->____entries_1;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_20 = V_0;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_25 = V_0;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_42 = V_0;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_47 = V_0;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_52 = V_0;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_69 = V_0;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_73 = V_0;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_78 = V_0;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_95 = V_0;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_105 = __this->____entries_1;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_111 = V_0;
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_123 = V_10;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____delegate_1), (void*)NULL);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mB06ABA9AD47ED29954EE4974B0C065593E683062_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* V_3 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_18 = V_3;
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
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_27;
		L_27 = KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_30 = V_3;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4024CA680E7BA1C93BD89F4884845528B25A8481_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
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
		((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE4DB1F9EEB1225F57530E4784E02322B93B40DB7_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_1 = NULL;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_3 = (EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A*)(EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_5 = __this->____entries_1;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_6 = V_1;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_17 = V_1;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_31 = V_1;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m905E588A5819BB00CEE61AED70ADB494B69900D9_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* V_4 = NULL;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_15 = V_4;
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_21 = V_4;
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_25 = V_4;
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_41 = V_4;
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_43 = V_4;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_44 = (Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_49 = V_4;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mE691BEE15E10E8CF16D154731A882633B661B170_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* V_4 = NULL;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_15 = V_4;
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_21 = V_4;
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_25 = V_4;
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_38 = ___1_value;
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_39 = V_4;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_40 = L_39->___value_3;
		*(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)L_38)->____delegate_1), (void*)NULL);
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_44 = V_4;
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_46 = V_4;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_47 = (Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
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
		Entry_tF84B768DDA37CAAE5F6F4FC41FB375630692C3DF* L_52 = V_4;
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
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD66101B781C1B79C723AA9E4DB34A3A29A3E32FE_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_3 = ___1_value;
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)L_3)->____delegate_1), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m83732769A3B71DD705AAEC559117B9E340506E1A_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, Guid_t ___0_key, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m08001F39ED0AE65C7A5914DE337648E4618D4897_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m62B8B72494D807095C743F5F972D6863FDD2AADA_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mE29B4B02BC8079E3865A653DFDDD5A4FE940A63A_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* V_6 = NULL;
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
		L_11 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		V_0 = ((KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, KeyValuePair_2U5BU5D_tACABC269E8C3975C054BC0D1BC3D94D8E5345605*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_19 = V_2;
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
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_33 = L_32;
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
			EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_43 = V_6;
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
			EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m24B652BB989676FB54EDD12DA60E7D13A5AF925E((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3 L_56 = L_55;
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
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mFF0542792830BF03269057316B594F8CB19395D9_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3F7F86C9AE641D8DB49113AEFABD3BCE9CED957D_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
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
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mE7CE88D0A8DE3DDBD0E4469CCF3F53EE13779E7B_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t9A8928AEAF1B8E38653492B92D5E769A0D4ADE0A* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mBD0E6412D27BBDDFE37179008884BFDE2A3C9159_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
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
			((  void (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)((Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)(Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mDA09E66D1E1827388C42B7E1B2C8C6AB7273F75B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mFA7F604C0178446D8011B184753290ADE80E3D51_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  bool (*) (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<OVRResult`2<System.Object,System.Int32Enum>>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8F155820C1C913A4556904422F526057CBD8F5B3_gshared (Dictionary_2_t695454913465472BF4309DE335CF2851688D202F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D0C9B6C14B1B96264B5E4B57BE5F714EEFC6168((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t2FA7784F6183E3BEA2A6597A2691582E1754073B L_1 = L_0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5AB42D09E063AA0219B14519A1AF28CC8A207856_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m23013C365E4594A692C8CA74C5DD64359F711D0B_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92BD2FC3E1B52D21B5E3E80C6C7CBE2C45DFFCF0_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m23746F45330979DC67FC026FA486871C2EB640D1_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC5AF9A0ADD55815D150975312306D4A998968C22_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB6B69CA958F384D051ABC4E9E2EAB692046A7F3E_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* Dictionary_2_get_Keys_m08EC609F99F9F2B1E19814A54067A2A65E7F96A1_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* L_1 = (KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB*, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tDB1A15237BA08394D72A3EB3A73CBE5BA0168EBB* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* Dictionary_2_get_Values_m711C50A4393F6BC04DAC860F0465EE0BFE637BF0_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* L_1 = (ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66*, Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t1846B1348A674A1BA3751A48E7E0B26566D46B66* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 Dictionary_2_get_Item_m0732E71B9186F8DD5FADD143B3674106EBD052F8_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A967B5A7922AB2E6CC4935FFB6EFDA8F5EEC029_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m25395CDFBF35C13C7AAC77FCA1A3BE870559D2BC_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mA383B6403BB14D94D15DD85678BF045733FD1FC2_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_1;
		L_1 = KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1414A7E1E644FC383069B045726228C100F4C519_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_3;
		L_3 = ((  EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_7;
		L_7 = KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Equals(T,T) */, L_3, L_6, L_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mAC0E715DE932077D1810F239A5987234468DD381_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_3;
		L_3 = ((  EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_7;
		L_7 = KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1D9C7106B98991D9A33F2DAE6C714829759D99BD_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_4 = __this->____entries_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m824E7E45149FFA5370C26F71CF1B7D8920DCF8EE_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mCB053A2AAD9FD19C8146EFBA174A90D2C1247BCB_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_15;
		L_15 = ((  EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Equals(T,T) */, L_15, L_18, L_19);
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
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_24;
		L_24 = ((  EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t69EEB5AB45FD1C8141085E465AB9A568C788ECA9* L_28 = V_4;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Equals(T,T) */, L_28, L_31, L_32);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB1D4DCEF3F5048C74DFD0802F27F9CC453013DBB_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_0 = ___0_array;
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
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_2 = ___0_array;
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
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mB51582F33DA23CDE9D52DC88A9026C5098F4DD2C((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191)L_20);
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
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A Dictionary_2_GetEnumerator_m6B407BA3766F4ECDBC0DCFE5E995257B954DBB10_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m160EC9B3A044AD922ACE0369546E79A053208278_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m2A6D55BB9B1367D67DB73AD1A91EEE307F859461_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* V_0 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_14 = (KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*)(KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_15 = V_0;
		((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_17 = V_0;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m7015AA765D04837357FDFA20E86D840525CC8332_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_2 = NULL;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_2 = __this->____entries_1;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_15 = V_2;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_20 = V_2;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_29 = V_2;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_34 = V_2;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_39 = V_2;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_48 = V_2;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_60 = V_2;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_65 = V_2;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_74 = V_2;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m09BCDE85BD43B188BBA0E73A6FA02687FC4876AA_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_5 = (EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E*)(EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m37D5F1C48F33458B57A78D59A9D1C878BDB06544_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* V_10 = NULL;
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
		L_3 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_4 = __this->____entries_1;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_20 = V_0;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_25 = V_0;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_42 = V_0;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_47 = V_0;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_52 = V_0;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_69 = V_0;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_73 = V_0;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_78 = V_0;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_95 = V_0;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_105 = __this->____entries_1;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_111 = V_0;
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_123 = V_10;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____delegate_1), (void*)NULL);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m6E45D3D4F467F92C7D809A535B7CB7866A8DE439_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* V_3 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_18 = V_3;
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
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_27;
		L_27 = KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_30 = V_3;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2C4C256DE0E3D50E65529675CC5F0B1233C7A0E5_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
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
		((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6ABA7C6D65342343845462EF61478E58B4B14631_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_1 = NULL;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_3 = (EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E*)(EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_5 = __this->____entries_1;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_6 = V_1;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_17 = V_1;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_31 = V_1;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAEFCB8652B79869B803B02892152584DD08D65DC_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* V_4 = NULL;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_15 = V_4;
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_21 = V_4;
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_25 = V_4;
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_41 = V_4;
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_43 = V_4;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_44 = (Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_49 = V_4;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7E19CC3C7CA18BF7334E3FF5888ADD6B560EB558_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* V_4 = NULL;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_15 = V_4;
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_21 = V_4;
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_25 = V_4;
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_38 = ___1_value;
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_39 = V_4;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_40 = L_39->___value_3;
		*(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)L_38)->____delegate_1), (void*)NULL);
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_44 = V_4;
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_46 = V_4;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_47 = (Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
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
		Entry_tFA8CBF345FB14CC4009CAFE79E0B8872860EAC17* L_52 = V_4;
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
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0E3277A01CFDF475FC375CE9544251F58617A1B0_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_3 = ___1_value;
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)L_3)->____delegate_1), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m5933BAC94B09BDA316350DAC1337B97D52410AB6_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, Guid_t ___0_key, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m6C6FE544EF205C882555C999BDD457D4EE111C77_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m47C52EC7240AC56FDFEFDB093775D514EA8E34F5_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m17B0EACEE873B0DA85339E50C2155B4F96CBB358_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* V_6 = NULL;
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
		L_11 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		V_0 = ((KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, KeyValuePair_2U5BU5D_t953D2C01FB15F32FD4750106AA778568A3BE4F11*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_19 = V_2;
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
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_33 = L_32;
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
			EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_43 = V_6;
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
			EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mB51582F33DA23CDE9D52DC88A9026C5098F4DD2C((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191 L_56 = L_55;
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
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE325C8296E0FF8E37CB54CEFA17F737D0612CF4B_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mB63CB012C9393C0D9458A7B0211D571F8574650C_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
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
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mA2F8FC6A7105AF72795975C86BDF423637C8DB9B_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t9E8358879E751EA408019893CF18E9AC14F37B9E* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mD8DF77BA9DD3220F681C68EF5134CC758ED8A0AD_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
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
			((  void (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, Callback_tD6F76A27427390AB039AE817762327D0D6848CF0, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)((Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)(Callback_tD6F76A27427390AB039AE817762327D0D6848CF0*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m09F4B9C2DB263EDD0F9CEB5B965DB2FD717438BA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mDDE168CCA994443673996E37A6FCB6740967A87C_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  bool (*) (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Int32Enum,System.Int32>>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m379E947612E2499523BA360A5D9F98A6E3519F6B_gshared (Dictionary_2_t95684763C4C5157B40F106941364DCAB9016DC6B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB2501C1EC7D2DC177E1730CFF731AE4E051C039F((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tB79A9453BF3D92307FCE3E93B51C37B89779394A L_1 = L_0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC92F18E45ED73520F2C78A947B826D0F3343AB1A_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m980AF7E657F134CA8A38C72A02BD08DA1CC06B3C_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA086E172998DBF5D15A62D4D5F95375501B4DA9B_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1769E491EE4A57623C3A1061EEC92276BD0D597A_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m96F1170363A3EA2C45368C035E2F451FD901AEBF_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBF285A8F0F5774CB86D2FD05AE09F86EE41E1D41_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB2080BB6C2CB49C2A97EE039E870738B9D439874* Dictionary_2_get_Keys_m2346CA88559DB4B812F91DA844E90FCB2AA1123B_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB2080BB6C2CB49C2A97EE039E870738B9D439874* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB2080BB6C2CB49C2A97EE039E870738B9D439874* L_1 = (KeyCollection_tB2080BB6C2CB49C2A97EE039E870738B9D439874*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tB2080BB6C2CB49C2A97EE039E870738B9D439874*, Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB2080BB6C2CB49C2A97EE039E870738B9D439874* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5F9173F97B80D4779107B7F26274DC1315FE9CF3* Dictionary_2_get_Values_m9BE919D52DCB45AA1817712CD0C9DB56B3C0AACC_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5F9173F97B80D4779107B7F26274DC1315FE9CF3* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5F9173F97B80D4779107B7F26274DC1315FE9CF3* L_1 = (ValueCollection_t5F9173F97B80D4779107B7F26274DC1315FE9CF3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t5F9173F97B80D4779107B7F26274DC1315FE9CF3*, Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5F9173F97B80D4779107B7F26274DC1315FE9CF3* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_tAA967A5495364723D611DD674AE351D146E4DE20 Dictionary_2_get_Item_m7B0F349A50E7BAEE6F85ED53634596C3C85C6FDB_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_tAA967A5495364723D611DD674AE351D146E4DE20 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_tAA967A5495364723D611DD674AE351D146E4DE20));
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m257400DA4A8C9E529C7FBA373648BF67F16B766F_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Guid_t ___0_key, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5C5450E736E9984D7C0C375B5CB23CE7BA69D188_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Guid_t ___0_key, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1EC402138386E40CF110B670FEEF8E32ACF48CC1_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m766A18EDE9F50A00394CAEC5E5D56F3C0E5A3CA2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_1;
		L_1 = KeyValuePair_2_get_Value_m87B0DE3105D0C985CB39A085A1856C8E40C717CA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m697D2FEB8B083B989BC05EFAA190F63DED2F18C5_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m766A18EDE9F50A00394CAEC5E5D56F3C0E5A3CA2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* L_3;
		L_3 = ((  EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_7;
		L_7 = KeyValuePair_2_get_Value_m87B0DE3105D0C985CB39A085A1856C8E40C717CA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Equals(T,T) */, L_3, L_6, L_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m75283BEA5B2E43456AE19C627F16F4E588427BC7_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m766A18EDE9F50A00394CAEC5E5D56F3C0E5A3CA2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* L_3;
		L_3 = ((  EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_7;
		L_7 = KeyValuePair_2_get_Value_m87B0DE3105D0C985CB39A085A1856C8E40C717CA_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m766A18EDE9F50A00394CAEC5E5D56F3C0E5A3CA2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mD671A8F10EDEAD0805F94D9A2EE951FB9AE1490B_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_4 = __this->____entries_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4E297C901257CBCDA1AAA1B45FE002CFBBAEA6A0_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m4F8326D92F2D0D678B0BA65CDBC8FA7B5D51D51B_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_tAA967A5495364723D611DD674AE351D146E4DE20 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_tAA967A5495364723D611DD674AE351D146E4DE20));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* L_15;
		L_15 = ((  EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Equals(T,T) */, L_15, L_18, L_19);
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
		EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* L_24;
		L_24 = ((  EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t878A36814BEB2D107A3B1BEAA1A340453FBE0A17* L_28 = V_4;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Equals(T,T) */, L_28, L_31, L_32);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m152A7BC1B394B849B2ACB0D6B5F6D75C10D19D5C_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_0 = ___0_array;
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
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_2 = ___0_array;
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
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mCDE6F280B4B18FEE6D78D7EE73415EE06A69935C((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA)L_20);
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
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83 Dictionary_2_GetEnumerator_m0F00BAB5CD0AFE0F3CC98970FA29500C46684318_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53977028BA773C140C684559DFBE07115C2DD5F2((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2056473E031B75EDAAA9E592E1BF864319A4F007_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53977028BA773C140C684559DFBE07115C2DD5F2((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mED40C7F5AB873959EA02E4F62E8A87EFCD5EAED9_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* V_0 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_14 = (KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D*)(KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_15 = V_0;
		((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_17 = V_0;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mA19604F2B1AC2529E3543CF6C24DAFF0BFB23232_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* V_2 = NULL;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_2 = __this->____entries_1;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_15 = V_2;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_20 = V_2;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_29 = V_2;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_34 = V_2;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_39 = V_2;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_48 = V_2;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_60 = V_2;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_65 = V_2;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_74 = V_2;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1D1A0540B1DBB3942BC3EF253A50AECE9A477A54_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_5 = (EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60*)(EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4E6385E03A4DF28AFBB4C6F34B5D9F86712E4D21_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Guid_t ___0_key, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* V_10 = NULL;
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
		L_3 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_4 = __this->____entries_1;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_20 = V_0;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_25 = V_0;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_42 = V_0;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_47 = V_0;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_52 = V_0;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_69 = V_0;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_73 = V_0;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_78 = V_0;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_95 = V_0;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_105 = __this->____entries_1;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_111 = V_0;
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_123 = V_10;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____delegate_1), (void*)NULL);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCEB8D41EFF7E0198CC83A4AB46DFAA2B4DD53E7C_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* V_3 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_18 = V_3;
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
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m766A18EDE9F50A00394CAEC5E5D56F3C0E5A3CA2_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m766A18EDE9F50A00394CAEC5E5D56F3C0E5A3CA2_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_27;
		L_27 = KeyValuePair_2_get_Value_m87B0DE3105D0C985CB39A085A1856C8E40C717CA_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_30 = V_3;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m0D8CAE09C1AF0394DED671B6CAEC62135D0EB4C1_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
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
		((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDA540DC406B62D5CD482784885FE50C7B8D5A6F7_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* V_1 = NULL;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_3 = (EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60*)(EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_5 = __this->____entries_1;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_6 = V_1;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_17 = V_1;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_31 = V_1;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAF4644D55C503ADC48EAE71524F69E6ABDAB2666_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* V_4 = NULL;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_15 = V_4;
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_21 = V_4;
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_25 = V_4;
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_41 = V_4;
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_43 = V_4;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20* L_44 = (Callback_tAA967A5495364723D611DD674AE351D146E4DE20*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Callback_tAA967A5495364723D611DD674AE351D146E4DE20));
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_49 = V_4;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mEFDBF036BAD4BDD9F9658E8B3D508ED1C7D52864_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Guid_t ___0_key, Callback_tAA967A5495364723D611DD674AE351D146E4DE20* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* V_4 = NULL;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_15 = V_4;
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_21 = V_4;
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_25 = V_4;
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20* L_38 = ___1_value;
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_39 = V_4;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_40 = L_39->___value_3;
		*(Callback_tAA967A5495364723D611DD674AE351D146E4DE20*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_tAA967A5495364723D611DD674AE351D146E4DE20*)L_38)->____delegate_1), (void*)NULL);
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_44 = V_4;
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_46 = V_4;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20* L_47 = (Callback_tAA967A5495364723D611DD674AE351D146E4DE20*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(Callback_tAA967A5495364723D611DD674AE351D146E4DE20));
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
		Entry_tAED5B939D61977BB3C33E0D0E958B7E7EA5EC687* L_52 = V_4;
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
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(Callback_tAA967A5495364723D611DD674AE351D146E4DE20));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m140139C3A93114503846C78FA0BDC7199915354C_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Guid_t ___0_key, Callback_tAA967A5495364723D611DD674AE351D146E4DE20* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20* L_3 = ___1_value;
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Callback_tAA967A5495364723D611DD674AE351D146E4DE20*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_tAA967A5495364723D611DD674AE351D146E4DE20*)L_3)->____delegate_1), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_tAA967A5495364723D611DD674AE351D146E4DE20));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mA8610479C9E727890C9BF016D0337AE762F268D3_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, Guid_t ___0_key, Callback_tAA967A5495364723D611DD674AE351D146E4DE20 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m657CBF7220A3A37C8DD55BFDD94C4AE6A3C25C16_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m46C1BB85BAACB37AB8F09B9F6BD4F44B25D486A2_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m07B1B81F41EC367037AC290375970F83C1BC6F40_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* V_6 = NULL;
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
		L_11 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		V_0 = ((KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, KeyValuePair_2U5BU5D_t0DE2CF7E1E4B33B906794E6D3CC2381CC89FE60D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_19 = V_2;
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
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_33 = L_32;
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
			EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_43 = V_6;
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
			EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mCDE6F280B4B18FEE6D78D7EE73415EE06A69935C((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA L_56 = L_55;
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
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m06D43211228F9858BEBD822CFA3CF715C2924256_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53977028BA773C140C684559DFBE07115C2DD5F2((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mCA89FB8724BEEA4743E4AB65E523093BCB796732_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
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
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC80D6100A44FF7228052C9CB93D7EC784750289D_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tCB11FD6D53876458F92BCC7F0F4105154CB72E60* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m4F201925E7109A90C6474CD1A43C9F6826149B67_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
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
			((  void (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, Callback_tAA967A5495364723D611DD674AE351D146E4DE20, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(Callback_tAA967A5495364723D611DD674AE351D146E4DE20*)((Callback_tAA967A5495364723D611DD674AE351D146E4DE20*)(Callback_tAA967A5495364723D611DD674AE351D146E4DE20*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m90B92DEB6566B80134E09BF1271442AA3348B4FA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m47CC349612B860485C03CE19816AF2BDAE1ACB73_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  bool (*) (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`2<System.Object,System.Object>>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m0AC9F6BAE24FD338353FA1A2BBCD129230099367_gshared (Dictionary_2_t79AF6E5166CB66009D42713BAB711E9721CA41E8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m53977028BA773C140C684559DFBE07115C2DD5F2((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t29D0FC30ED21A8A8FFED00EEE97A96509B9D7D83 L_1 = L_0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5FB46CA613527082DC2607BF5B78CE21CA0E4B8E_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4202D9EDBE8744C07A184CB0337F6488EA13DB52_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB41D5D161E1A9AFDF001BF8C1FB6D775C510B4FD_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4286B4ACAF237FB06967095A37994BA5C1739153_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0E9E032C262E8424B3E4A53FAD63BA5B1F8046E9_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mE0AFA984A762C0554FE3D9DDBCEDCD94FB62BB00_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tBBA11BD02AAB030C9EB9EEA6A24D06D22A586A66* Dictionary_2_get_Keys_m081DB9C21AB82109758FD03D1BC5036D4CF74D2F_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tBBA11BD02AAB030C9EB9EEA6A24D06D22A586A66* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tBBA11BD02AAB030C9EB9EEA6A24D06D22A586A66* L_1 = (KeyCollection_tBBA11BD02AAB030C9EB9EEA6A24D06D22A586A66*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tBBA11BD02AAB030C9EB9EEA6A24D06D22A586A66*, Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tBBA11BD02AAB030C9EB9EEA6A24D06D22A586A66* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t28EB099198B3C8280CB4868B54E4493F9246B6C5* Dictionary_2_get_Values_mCCBFF8FEC8E20C35FA4615CAF7670E382B4AA145_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t28EB099198B3C8280CB4868B54E4493F9246B6C5* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t28EB099198B3C8280CB4868B54E4493F9246B6C5* L_1 = (ValueCollection_t28EB099198B3C8280CB4868B54E4493F9246B6C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t28EB099198B3C8280CB4868B54E4493F9246B6C5*, Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t28EB099198B3C8280CB4868B54E4493F9246B6C5* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 Dictionary_2_get_Item_m435FFCCF2790E0BC6992B3E3C7F63A907230D897_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872));
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m021DEEAC5DE1C6FD68101ACB07336B2A25BD43D0_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Guid_t ___0_key, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7B358499AB46F5643409187545F80AA6D5F0E833_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Guid_t ___0_key, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m6BB0EC7E7F600B6498DA77B07F1D80CE22F97BAA_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA65B10384A4BB0A25108FDEBCC355E5BC8356BF5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_1;
		L_1 = KeyValuePair_2_get_Value_m1CE06EA3FE825C0359362AF158DE1A26C9056D66_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m7664E78B1B5AA537E26C597F95EC6A76AEBBBC16_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA65B10384A4BB0A25108FDEBCC355E5BC8356BF5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* L_3;
		L_3 = ((  EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_7;
		L_7 = KeyValuePair_2_get_Value_m1CE06EA3FE825C0359362AF158DE1A26C9056D66_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_3, L_6, L_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mF7FB090234A8B2FD5609A1E249C347901BBE84A2_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA65B10384A4BB0A25108FDEBCC355E5BC8356BF5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* L_3;
		L_3 = ((  EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_7;
		L_7 = KeyValuePair_2_get_Value_m1CE06EA3FE825C0359362AF158DE1A26C9056D66_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_mA65B10384A4BB0A25108FDEBCC355E5BC8356BF5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m247BE46134C290EE35339C5FACEF9F0936ED2A95_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_4 = __this->____entries_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC4802F7804BABADE2818FFCD7C944F2DDA2A4392_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m03316A91B5F9E35E176FB40911B33F2266ACAA2A_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* L_15;
		L_15 = ((  EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_15, L_18, L_19);
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
		EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* L_24;
		L_24 = ((  EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t4ED3C840F229934F950AB25786A194CC0F769F3C* L_28 = V_4;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_28, L_31, L_32);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6471F7684009613BFD46B3D9BD36A8DBF8BF3981_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_0 = ___0_array;
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
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_2 = ___0_array;
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
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m1386C342A794F533F96B68B364A7F772266D8515((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB)L_20);
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
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197 Dictionary_2_GetEnumerator_mA863E6B4AC42B2E44233B0E441EB1B1B709857BC_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2E8B640BED4FFEA651E352B519F5966E52578CAB((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m82E7193F3468ABF6B907F74F9E7FB244D7B4531D_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2E8B640BED4FFEA651E352B519F5966E52578CAB((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mB4C52DBF34CB7C490EF1C53627B28A4AFE0624B8_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* V_0 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_14 = (KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0*)(KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_15 = V_0;
		((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_17 = V_0;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mE32D04180CB6F7EA7C72CAEA41EFCA8EAE4B8FE4_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* V_2 = NULL;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_2 = __this->____entries_1;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_15 = V_2;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_20 = V_2;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_29 = V_2;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_34 = V_2;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_39 = V_2;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_48 = V_2;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_60 = V_2;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_65 = V_2;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_74 = V_2;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mD720A9257989E3642E69015E2EA9721506C17B0C_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_5 = (EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61*)(EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m2A82458F6FDCA7C72F7D3EA91EC83D3A8BF3CD94_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Guid_t ___0_key, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* V_10 = NULL;
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
		L_3 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_4 = __this->____entries_1;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_20 = V_0;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_25 = V_0;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_42 = V_0;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_47 = V_0;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_52 = V_0;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_69 = V_0;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_73 = V_0;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_78 = V_0;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_95 = V_0;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_105 = __this->____entries_1;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_111 = V_0;
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_123 = V_10;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____delegate_1), (void*)NULL);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mC03EA1951611AFA879D02B79D9ECF7A7D360CADB_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* V_3 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_18 = V_3;
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
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_mA65B10384A4BB0A25108FDEBCC355E5BC8356BF5_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_mA65B10384A4BB0A25108FDEBCC355E5BC8356BF5_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_27;
		L_27 = KeyValuePair_2_get_Value_m1CE06EA3FE825C0359362AF158DE1A26C9056D66_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_30 = V_3;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mF9F71EA7B4D263A8A3E4E7CBB032DA00B0FDCF47_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
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
		((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mECA03068FC519BAC47C769F066AE1E79D799DDD0_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* V_1 = NULL;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_3 = (EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61*)(EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_5 = __this->____entries_1;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_6 = V_1;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_17 = V_1;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_31 = V_1;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5D0257DD653674BE29E6AD01F8C2C7C5B66173DB_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* V_4 = NULL;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_15 = V_4;
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_21 = V_4;
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_25 = V_4;
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_41 = V_4;
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_43 = V_4;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872* L_44 = (Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872));
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_49 = V_4;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC91CC5BD23CC6089E7CF2F69246273FA31ECD376_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Guid_t ___0_key, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* V_4 = NULL;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_15 = V_4;
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_21 = V_4;
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_25 = V_4;
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872* L_38 = ___1_value;
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_39 = V_4;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_40 = L_39->___value_3;
		*(Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872*)L_38)->____delegate_1), (void*)NULL);
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_44 = V_4;
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_46 = V_4;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872* L_47 = (Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872));
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
		Entry_t442B4F4D1CC1F5B3193C91393B5646976584EE83* L_52 = V_4;
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
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7D23949EEC66C1DB355A0F692B7DB89E56266E77_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Guid_t ___0_key, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872* L_3 = ___1_value;
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872*)L_3)->____delegate_1), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mE7DE72017C2D4B3FDDB42AF7666665254B11283B_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, Guid_t ___0_key, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m577DB10617755DD6AA23AA3F2E8B84BD56F1977E_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mA52AC92A52FF0668FBD0DE8BD489796FCB28451B_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mCB78E3BF075645258C16FD7659843327F0E7A99B_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* V_6 = NULL;
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
		L_11 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		V_0 = ((KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, KeyValuePair_2U5BU5D_t01240352A44043EF72203336BFD15BF44AA0C9A0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_19 = V_2;
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
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_33 = L_32;
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
			EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_43 = V_6;
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
			EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m1386C342A794F533F96B68B364A7F772266D8515((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB L_56 = L_55;
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
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m0AA534E7B779ECFA3B4F91DA001A1F7E435395CF_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2E8B640BED4FFEA651E352B519F5966E52578CAB((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m0580C10601940E4E2041C6A8DB1C49AF706FC426_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
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
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mB1577FCBBAC340FA73F39803B4554F80EB161D95_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t9008291E40759BE7326DA4F3EC6ACD197A5FED61* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m7A86615E32226E9E4C442504D8A98A24A0697AF0_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
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
			((  void (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872*)((Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872*)(Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m729972C05634C12A726478D7C94C82CDF54BD6B9_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mD3F74378411375DDB3F8491777251B72762BACD3_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  bool (*) (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`3<System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m566BE556FAE7D03B905A0A67904D35A7AECE53D5_gshared (Dictionary_2_t372EC58A245112A1CF9A05CDB2B4CD9426306AC0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2E8B640BED4FFEA651E352B519F5966E52578CAB((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tEBED77A4BE3ED0F47DF92B8A71FA48EA35078197 L_1 = L_0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC83A67A2EAB3D66CAACD1A8627236715431D1F3E_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m42FBE402A96CC410D588097BEB91270414A0A36E_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1B72C8C0F9B6605CC582800C1C1B11ADEA2365C8_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m37997F770DE655A6AAA7E645F995F8205CBB4ADA_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD4455947AA4663D8EF80661F53F1F372291FE59_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m2A056ACABAE75902DA898D85EEED3F82AB904ED9_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE6305ADF0B1B83793941FAB8BE858856916DA335* Dictionary_2_get_Keys_m1C6BC44C545DF4FE498D117548DB269F2ABA8197_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tE6305ADF0B1B83793941FAB8BE858856916DA335* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE6305ADF0B1B83793941FAB8BE858856916DA335* L_1 = (KeyCollection_tE6305ADF0B1B83793941FAB8BE858856916DA335*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tE6305ADF0B1B83793941FAB8BE858856916DA335*, Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE6305ADF0B1B83793941FAB8BE858856916DA335* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0607A83D58420CB67A432FDD30E219C53D92F70B* Dictionary_2_get_Values_m99B0434B14982894BFE3A9EE4EBC7AD0DD25AE13_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t0607A83D58420CB67A432FDD30E219C53D92F70B* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t0607A83D58420CB67A432FDD30E219C53D92F70B* L_1 = (ValueCollection_t0607A83D58420CB67A432FDD30E219C53D92F70B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t0607A83D58420CB67A432FDD30E219C53D92F70B*, Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t0607A83D58420CB67A432FDD30E219C53D92F70B* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E Dictionary_2_get_Item_mEBC1D21E77C52A89C07D2E376D8E52851BFF7A24_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E));
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE69E1FA15E8F20F61F1F07B4182F68D353C8B241_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Guid_t ___0_key, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m03B3575C4298F2543DAE3996E5CA1A67B78C6A40_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Guid_t ___0_key, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m7730EB3759E189ED8EEEDF67AED56AB960F1B29C_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4418D1ED32F1EF7A43127A50F41C7F89E8752F29_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_1;
		L_1 = KeyValuePair_2_get_Value_mA84AA571A4D3F7CAEEBD35F4E6F045F98A3C0914_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mC86DD256F3BED88F06D3C8BEF6AEA8FD1CAF580B_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4418D1ED32F1EF7A43127A50F41C7F89E8752F29_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* L_3;
		L_3 = ((  EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_7;
		L_7 = KeyValuePair_2_get_Value_mA84AA571A4D3F7CAEEBD35F4E6F045F98A3C0914_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_3, L_6, L_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m72B9109BEF6C6B87CAC0AD030B22EF338A3EF746_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4418D1ED32F1EF7A43127A50F41C7F89E8752F29_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* L_3;
		L_3 = ((  EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_7;
		L_7 = KeyValuePair_2_get_Value_mA84AA571A4D3F7CAEEBD35F4E6F045F98A3C0914_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m4418D1ED32F1EF7A43127A50F41C7F89E8752F29_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mF9F0E8CF2D6BCCB029CC02E4F1FBA0722AE38EA3_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_4 = __this->____entries_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC6BCECBBB67DFCEE53CB61FF1F360361FF3BA816_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mD5B089C368179B360674AA50A77AB700D655E0D1_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* L_15;
		L_15 = ((  EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_15, L_18, L_19);
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
		EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* L_24;
		L_24 = ((  EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t5F6831CE78951145FFEF6975124D400E4FCED44F* L_28 = V_4;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_28, L_31, L_32);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m95EA106A2A39A7B857BC105778524139C02586D1_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_0 = ___0_array;
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
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_2 = ___0_array;
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
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m6D1B38B5B2CEAF7B04F323E83FE14C73C2D90D6E((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927)L_20);
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
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C Dictionary_2_GetEnumerator_mB117C8F13A567F2C1D42A323F72CB285F227E778_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m170927708130CE38D8D5B62B0B406D322B0D4E20((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2525CCCB7EA39F3E21635AE2FDF1BBC20DC63A95_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m170927708130CE38D8D5B62B0B406D322B0D4E20((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m712576336D1CFB446669ECD400F996496E54444C_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* V_0 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_14 = (KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB*)(KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_15 = V_0;
		((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_17 = V_0;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m595624E19BF409146A8F37EF5466D51EA308FD09_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* V_2 = NULL;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_2 = __this->____entries_1;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_15 = V_2;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_20 = V_2;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_29 = V_2;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_34 = V_2;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_39 = V_2;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_48 = V_2;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_60 = V_2;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_65 = V_2;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_74 = V_2;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mBC5FC76D95B204B06E544D0037ED57B66ACB818D_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_5 = (EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E*)(EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mFE830CBAB4392C1AD7870BD78AD690F3E3F4AE24_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Guid_t ___0_key, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* V_10 = NULL;
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
		L_3 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_4 = __this->____entries_1;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_20 = V_0;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_25 = V_0;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_42 = V_0;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_47 = V_0;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_52 = V_0;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_69 = V_0;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_73 = V_0;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_78 = V_0;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_95 = V_0;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_105 = __this->____entries_1;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_111 = V_0;
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_123 = V_10;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____delegate_1), (void*)NULL);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m57A67F3C21C0CCA1504514E7CFFAA0BBE565F78E_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* V_3 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_18 = V_3;
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
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m4418D1ED32F1EF7A43127A50F41C7F89E8752F29_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m4418D1ED32F1EF7A43127A50F41C7F89E8752F29_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_27;
		L_27 = KeyValuePair_2_get_Value_mA84AA571A4D3F7CAEEBD35F4E6F045F98A3C0914_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_30 = V_3;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8FCEB02530F0E7E0CA6CE122F6737D78A1E3927B_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
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
		((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mBAFBB6A5547A680524C0206963A0C34D578155BE_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* V_1 = NULL;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_3 = (EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E*)(EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_5 = __this->____entries_1;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_6 = V_1;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_17 = V_1;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_31 = V_1;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC28D0CD3ED8CD580332FFA6A0EFC88E25C06F1AF_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* V_4 = NULL;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_15 = V_4;
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_21 = V_4;
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_25 = V_4;
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_41 = V_4;
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_43 = V_4;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E* L_44 = (Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E));
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_49 = V_4;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5F19522B68DB49375083773AFB678BB0586A2F82_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Guid_t ___0_key, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* V_4 = NULL;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_15 = V_4;
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_21 = V_4;
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_25 = V_4;
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E* L_38 = ___1_value;
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_39 = V_4;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_40 = L_39->___value_3;
		*(Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E*)L_38)->____delegate_1), (void*)NULL);
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_44 = V_4;
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_46 = V_4;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E* L_47 = (Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E));
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
		Entry_tCE5C8A4D8536DC2E8ACDEF3A29E2E126B9E449DE* L_52 = V_4;
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
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m6C5064419AFF320FF07B687675081B635E90FE21_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Guid_t ___0_key, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E* L_3 = ___1_value;
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E*)L_3)->____delegate_1), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m97273EDFF5F8C1187C7865E8D59C83943E2E9BA9_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, Guid_t ___0_key, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m673D6B3A7B638BC75DE5F9689FF63DD228BA37CE_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3879B66AF01E15BF5C6D2A94F4C82C079C9F0276_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m64C12C8B7AEDA573798BDF83C7499ED718C3FF70_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* V_6 = NULL;
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
		L_11 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		V_0 = ((KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, KeyValuePair_2U5BU5D_tCC99F6F4E90C5DE51FF9703968EEF9A9D627D5BB*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_19 = V_2;
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
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_33 = L_32;
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
			EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_43 = V_6;
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
			EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m6D1B38B5B2CEAF7B04F323E83FE14C73C2D90D6E((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927 L_56 = L_55;
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
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m503F7A62E9683258155B4F1FA9B9715AB0E08299_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m170927708130CE38D8D5B62B0B406D322B0D4E20((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mFC35D80676291CA113D1A48EE6C3B93E9861A154_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
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
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m802494BE112CF19E76909486EC4F79AABABD89DD_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tBF24673DA07CBE56419B9CA31AEEC9C9359D647E* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mA2DBC91E0721A50329DA77D9EB72444C9CE692D6_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
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
			((  void (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E*)((Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E*)(Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m8FCEB3E4F0FA6493D68D50563DDA2CD9BB22FE90_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m7027F7D79EA4B0DED8516A9961CD4BEC97503F29_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  bool (*) (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE2FC37DCE9171D930552B20ECE9574B3A11316D9_gshared (Dictionary_2_tFCE87AD1E9E303589498757A0FBE7876E29D1C8C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m170927708130CE38D8D5B62B0B406D322B0D4E20((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_tE268125F6F1C91D2FC370717B66A8439325C879C L_1 = L_0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9D4589D6CA74E0F934B7BA6659694AEA102D6F91_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA73D6017BE55294C51665336F2EFEB88468EF6F0_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA33BA4DE67BA6B06B8958835EB01BD21DE013B37_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7EDF4ECD8441FA390AE1C10C3A6D7831484F1E31_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF13B5C8208F519C73811856FE0DF285B086642D_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m2BB5E14C4F57A54A1317C525E65FA829AF964B32_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t60103F2F2D2CE8B38707815DCED991265065AD47* Dictionary_2_get_Keys_mE616F8F09A18E57573D9EF55AD50DA33AF1A363C_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t60103F2F2D2CE8B38707815DCED991265065AD47* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t60103F2F2D2CE8B38707815DCED991265065AD47* L_1 = (KeyCollection_t60103F2F2D2CE8B38707815DCED991265065AD47*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_t60103F2F2D2CE8B38707815DCED991265065AD47*, Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t60103F2F2D2CE8B38707815DCED991265065AD47* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t3C794FB4C85B6FE17A5E805E70AC975BDD1E4EE2* Dictionary_2_get_Values_mADFC7AC0FDAEFCAA37D11D454DB54BA6E69CBF46_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t3C794FB4C85B6FE17A5E805E70AC975BDD1E4EE2* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t3C794FB4C85B6FE17A5E805E70AC975BDD1E4EE2* L_1 = (ValueCollection_t3C794FB4C85B6FE17A5E805E70AC975BDD1E4EE2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t3C794FB4C85B6FE17A5E805E70AC975BDD1E4EE2*, Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t3C794FB4C85B6FE17A5E805E70AC975BDD1E4EE2* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 Dictionary_2_get_Item_mCB15214A8943F513BCDB955AFFB6D690B8FA181D_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32));
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCC06495CAF55A0000AB70B1F85415AD176E48C23_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Guid_t ___0_key, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mBDE0CC5470B30480E89F3C3074BDD6F4F33873FF_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Guid_t ___0_key, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mB8E0ECFC4BEACCACD76911FECD75FF3EB2C6BA20_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m011E91DF0F439D8AF765FF50519CCC53EA822BE1_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_1;
		L_1 = KeyValuePair_2_get_Value_m2F469C5A5338BAE74A5917F1AAB43F82BB51C2DD_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m690A06B3AC7A0389EB5A04DAB48E36B7EC4EE14E_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m011E91DF0F439D8AF765FF50519CCC53EA822BE1_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* L_3;
		L_3 = ((  EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_7;
		L_7 = KeyValuePair_2_get_Value_m2F469C5A5338BAE74A5917F1AAB43F82BB51C2DD_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_3, L_6, L_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m5BC85C2C0A8105A1C1B21E6AC766368337DC8D14_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m011E91DF0F439D8AF765FF50519CCC53EA822BE1_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* L_3;
		L_3 = ((  EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_7;
		L_7 = KeyValuePair_2_get_Value_m2F469C5A5338BAE74A5917F1AAB43F82BB51C2DD_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m011E91DF0F439D8AF765FF50519CCC53EA822BE1_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mF1997A9DD00F812DB923ABAC25C0A82EF9E6A496_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_4 = __this->____entries_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9FFDC269A5B0E87058720A07ADE88127CFB3B909_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m010D5A0202ADB1B38B2EBA4AAE309D4CDD928D5F_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* L_15;
		L_15 = ((  EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_15, L_18, L_19);
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
		EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* L_24;
		L_24 = ((  EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t2B1A30784C9908364D195840AD44DBDD339B5593* L_28 = V_4;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_28, L_31, L_32);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m2B8E6A614030900E7AB4D4857DB6C7BF4979695C_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_0 = ___0_array;
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
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_2 = ___0_array;
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
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF01A96FA2D827E9A3D16810F7136A314038EBFB7((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB)L_20);
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
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED Dictionary_2_GetEnumerator_mDC1D49EF1CEB748AF81F9B7903D2AC7546753CBD_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4C98678500A2B075C8D65619F625B0484D210883((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7FE759C99411C5095DC0A541DEAC3D4E0CB6DA47_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4C98678500A2B075C8D65619F625B0484D210883((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mB95C47E882A90C384BD1A8C32B6D93B2DBB968F3_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* V_0 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_14 = (KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B*)(KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_15 = V_0;
		((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_17 = V_0;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5D40D5457511855EAAFE80AF085EB62E798806E9_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* V_2 = NULL;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_2 = __this->____entries_1;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_15 = V_2;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_20 = V_2;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_29 = V_2;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_34 = V_2;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_39 = V_2;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_48 = V_2;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_60 = V_2;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_65 = V_2;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_74 = V_2;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7AE76EEC4A2E30547EE4C1BADB996679FD1BB504_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_5 = (EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488*)(EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mBDC1D6EF3EE04DC85C0A7C00EBBBC726EB42A10D_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Guid_t ___0_key, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* V_10 = NULL;
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
		L_3 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_4 = __this->____entries_1;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_20 = V_0;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_25 = V_0;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_42 = V_0;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_47 = V_0;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_52 = V_0;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_69 = V_0;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_73 = V_0;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_78 = V_0;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_95 = V_0;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_105 = __this->____entries_1;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_111 = V_0;
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_123 = V_10;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____delegate_1), (void*)NULL);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mC3AE887912F6A0A0C809DBA612F51AD219049EE1_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* V_3 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_18 = V_3;
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
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m011E91DF0F439D8AF765FF50519CCC53EA822BE1_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m011E91DF0F439D8AF765FF50519CCC53EA822BE1_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_27;
		L_27 = KeyValuePair_2_get_Value_m2F469C5A5338BAE74A5917F1AAB43F82BB51C2DD_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_30 = V_3;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m53FC345ACEB9B54F94561FC0C64D36C783D65882_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
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
		((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m69FA895F4420274670993CDCA5708D601D887819_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* V_1 = NULL;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_3 = (EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488*)(EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_5 = __this->____entries_1;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_6 = V_1;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_17 = V_1;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_31 = V_1;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0E65E4A0D3108E53DFD9BC3641584EB8404D8D89_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* V_4 = NULL;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_15 = V_4;
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_21 = V_4;
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_25 = V_4;
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_41 = V_4;
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_43 = V_4;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32* L_44 = (Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32));
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_49 = V_4;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mB148B8AA98DB0374E37F105F6E4F7272D9D81D48_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Guid_t ___0_key, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* V_4 = NULL;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_15 = V_4;
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_21 = V_4;
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_25 = V_4;
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32* L_38 = ___1_value;
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_39 = V_4;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_40 = L_39->___value_3;
		*(Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32*)L_38)->____delegate_1), (void*)NULL);
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_44 = V_4;
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_46 = V_4;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32* L_47 = (Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32));
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
		Entry_t383540125B8EDA4065E5C4CFE1068312F8F08159* L_52 = V_4;
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
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBC34A52B18CD6E298B7186BD9B2A55B7973FEB5A_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Guid_t ___0_key, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32* L_3 = ___1_value;
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32*)L_3)->____delegate_1), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mBE492D04C2F048CDAED46AC86C13B6D236401A97_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, Guid_t ___0_key, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m7CDC71C23484BC2728CBD288A9FFC0C4140E0115_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1CE86166AAC7B2FF75025EFD020248748874D7C5_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mED35643676CF24A7C54F0FF98BA421A61E64BF81_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* V_6 = NULL;
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
		L_11 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		V_0 = ((KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, KeyValuePair_2U5BU5D_t675B14C1342CE9C9BA6870BDFF0E0FE56A16836B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_19 = V_2;
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
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_33 = L_32;
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
			EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_43 = V_6;
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
			EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mF01A96FA2D827E9A3D16810F7136A314038EBFB7((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB L_56 = L_55;
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
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE129BC15EC7AB3EAD3CCB20D9601C97C06DC0F7C_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4C98678500A2B075C8D65619F625B0484D210883((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m483A724035E7C16F1D89C9DFCAD83369ABE0C177_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
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
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m65ACC1A1C87355437C5060263E299BD52595A18D_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t715910E5093AA861CC0B0851925376F41AC0B488* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mD1440669EF9CF477A613862EE7C9F179EF1D3000_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
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
			((  void (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32*)((Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32*)(Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m04DE4F7BA3F84895719D167783F3CA8364B809DA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m798E772019649675D9A1A10A83E81D713DE5A8A2_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  bool (*) (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m093F19611992501833B2C74E632272856A04E466_gshared (Dictionary_2_tC39B620BED78FBBFF88DDD04283D413E5A6B56AE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4C98678500A2B075C8D65619F625B0484D210883((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t48516BC098BA11B342A890F1090EAEEA8C8D11ED L_1 = L_0;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD4B49DD2E5BB802B527FAD7630A98D44BEF8FB5_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m696122D3152A56C5ADA50C642DF3A062E3CB3932_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8203BA184957BB41B4F6FBD89926A3D261425E63_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7C3E56493D94A156BB9641E3AE386992D69515C6_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4BFD7EA6AB19029F3BCF5469F181CA9B46275A07_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF3613C8860BD8EE6A4631D543D4D6B2E284CD0B6_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_2;
		int32_t L_1 = __this->____freeCount_4;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB3B3BA280354BA4783E5B64C0F654689DE876801* Dictionary_2_get_Keys_m6083735E2CB62AA389EDC83A42603A5A20186D68_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tB3B3BA280354BA4783E5B64C0F654689DE876801* L_0 = __this->____keys_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB3B3BA280354BA4783E5B64C0F654689DE876801* L_1 = (KeyCollection_tB3B3BA280354BA4783E5B64C0F654689DE876801*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
		NullCheck(L_1);
		((  void (*) (KeyCollection_tB3B3BA280354BA4783E5B64C0F654689DE876801*, Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->____keys_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_7), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB3B3BA280354BA4783E5B64C0F654689DE876801* L_2 = __this->____keys_7;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t9EE66F92B910180EF86F569E0A8A2257D39CAC7F* Dictionary_2_get_Values_mA7567CE0AB9AFCF8F7A898FFA6C59208958968CD_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t9EE66F92B910180EF86F569E0A8A2257D39CAC7F* L_0 = __this->____values_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t9EE66F92B910180EF86F569E0A8A2257D39CAC7F* L_1 = (ValueCollection_t9EE66F92B910180EF86F569E0A8A2257D39CAC7F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		((  void (*) (ValueCollection_t9EE66F92B910180EF86F569E0A8A2257D39CAC7F*, Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->____values_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_8), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t9EE66F92B910180EF86F569E0A8A2257D39CAC7F* L_2 = __this->____values_8;
		return L_2;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 Dictionary_2_get_Item_mFDE56F84861B1F4CC3F2D7D982EE4D85E16A3BF5_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_3 = __this->____entries_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value_3;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7));
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m56780051B3126D91FC03B1B5146805FA17A8BAC5_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Guid_t ___0_key, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8665ACC017E369F59813D2B135BDC8D5B1EDE279_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Guid_t ___0_key, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mAA2427233E1F945455752F53B5E5EBEC41F03CDC_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF4978A5F94635534B568C9EC7553EE244F243EE5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_1;
		L_1 = KeyValuePair_2_get_Value_mB617ABEC2CAD4AC63B21559D91BE9FE1CCC22D33_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mC48531E24F210FF25AF7DEFB0F06CC2E9BE156FC_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF4978A5F94635534B568C9EC7553EE244F243EE5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* L_3;
		L_3 = ((  EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_7;
		L_7 = KeyValuePair_2_get_Value_mB617ABEC2CAD4AC63B21559D91BE9FE1CCC22D33_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_3, L_6, L_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mC1DEC16E11E7AD060110786FF568C68BDBF012B0_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mF4978A5F94635534B568C9EC7553EE244F243EE5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* L_3;
		L_3 = ((  EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_7;
		L_7 = KeyValuePair_2_get_Value_mB617ABEC2CAD4AC63B21559D91BE9FE1CCC22D33_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_mF4978A5F94635534B568C9EC7553EE244F243EE5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		bool L_10;
		L_10 = ((  bool (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mBCFFBADBDE95573D8CC9C7240B28655192F32B19_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_4 = __this->____entries_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2F633E3D060306293B878D39B46340A310772389_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mD190EA08DA27291C65E07712143C8B52B0AB5130_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_0 = __this->____entries_1;
		V_0 = L_0;
		goto IL_0049;
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
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
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* L_15;
		L_15 = ((  EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value_3;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_15, L_18, L_19);
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
		EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* L_24;
		L_24 = ((  EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode_0;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_tE5267F23C4D1BBFAECE98E958836EA4D8D173189* L_28 = V_4;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value_3;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Equals(T,T) */, L_28, L_31, L_32);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m348EE5EC7F0C5160480E5BC5162F3220CEFD9677_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_0 = ___0_array;
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
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_2 = ___0_array;
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
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_7 = __this->____entries_1;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key_2;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value_3;
		KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mE8BF3EED48D14FD6EC0DFB33F72867A3BD60E625((&L_20), L_16, L_19, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C)L_20);
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
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6 Dictionary_2_GetEnumerator_m1F11886FDEDC6683DF2D63C08A7FFAD31F9ADF06_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBDC3834EC0DB14900ACC2202C151DFF1481DF94E((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF2EF7F99BB3332965A4A7E2865452CF6E896B9B0_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBDC3834EC0DB14900ACC2202C151DFF1481DF94E((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mABBD8F3C5CF5D201012F2F8AD7065AF4BA3ED846_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* V_0 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_14 = (KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E*)(KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 27), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_15 = V_0;
		((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_17 = V_0;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::FindEntry(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m1C80CEF17A497B64DC2E7A07EA10CEA2C4CF9286_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* V_2 = NULL;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_2 = __this->____entries_1;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_15 = V_2;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_20 = V_2;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next_1;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_29 = V_2;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_33 = V_2;
		NullCheck(L_33);
		if ((!(((uint32_t)L_32) < ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_34 = V_2;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_39 = V_2;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___next_1;
		V_0 = L_46;
		int32_t L_47 = V_3;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_48 = V_2;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_59 = V_2;
		NullCheck(L_59);
		if ((!(((uint32_t)L_58) < ((uint32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_60 = V_2;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_65 = V_2;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_70 = V_2;
		int32_t L_71 = V_0;
		NullCheck(L_70);
		int32_t L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___next_1;
		V_0 = L_72;
		int32_t L_73 = V_3;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_74 = V_2;
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
// System.Int32 System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Initialize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m000F9312B90D7BD7BA41A601A1EFB7CFDBB50CB2_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_5 = (EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D*)(EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_4);
		__this->____entries_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::TryInsert(TKey,TValue,System.Collections.Generic.InsertionBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE1C47B1B8B5406EC9C61D5FCFC5E974F132219F9_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Guid_t ___0_key, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* V_10 = NULL;
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
		L_3 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
	}

IL_002c:
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_4 = __this->____entries_1;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_20 = V_0;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_25 = V_0;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3 = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next_1;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_42 = V_0;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_46 = V_0;
		NullCheck(L_46);
		if ((!(((uint32_t)L_45) < ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_47 = V_0;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_52 = V_0;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_58 = V_0;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_60 = ___1_value;
		((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3 = L_60;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next_1;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_69 = V_0;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_72 = V_0;
		NullCheck(L_72);
		if ((!(((uint32_t)L_71) < ((uint32_t)((int32_t)(((RuntimeArray*)L_72)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_73 = V_0;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_78 = V_0;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_84 = V_0;
		int32_t L_85 = V_5;
		NullCheck(L_84);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_86 = ___1_value;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3 = L_86;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->___value_3))->____delegate_1), (void*)NULL);
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next_1;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_95 = V_0;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_102 = V_0;
		NullCheck(L_102);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)(((RuntimeArray*)L_102)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		V_8 = L_103;
		int32_t L_104 = V_13;
		__this->____count_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_105 = __this->____entries_1;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_111 = V_0;
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_114 = V_10;
		int32_t L_115 = L_114->___next_1;
		__this->____freeList_3 = L_115;
	}

IL_028a:
	{
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_116 = V_10;
		int32_t L_117 = V_2;
		L_116->___hashCode_0 = L_117;
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_118 = V_10;
		int32_t* L_119 = V_9;
		int32_t L_120 = *((int32_t*)L_119);
		L_118->___next_1 = ((int32_t)il2cpp_codegen_subtract(L_120, 1));
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_121 = V_10;
		Guid_t L_122 = ___0_key;
		L_121->___key_2 = L_122;
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_123 = V_10;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_124 = ___1_value;
		L_123->___value_3 = L_124;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_123->___value_3))->____delegate_1), (void*)NULL);
		int32_t* L_125 = V_9;
		int32_t L_126 = V_8;
		*((int32_t*)L_125) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mA6B9E75D190C27C510416BD5FA5E4F0D12ED993B_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
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
	KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* V_3 = NULL;
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
		L_13 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 29)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_18 = V_3;
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
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_mF4978A5F94635534B568C9EC7553EE244F243EE5_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		goto IL_009a;
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_mF4978A5F94635534B568C9EC7553EE244F243EE5_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_27;
		L_27 = KeyValuePair_2_get_Value_mB617ABEC2CAD4AC63B21559D91BE9FE1CCC22D33_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_30 = V_3;
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
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m80D6A371B4F384C0C6177AA395398AF116957E37_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
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
		((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4C089E5DB1229AA0C59DE68D70E76A510A973AF9_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* V_1 = NULL;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_3 = (EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D*)(EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 36), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count_2;
		V_2 = L_4;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_5 = __this->____entries_1;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_6 = V_1;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode_0;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_17 = V_1;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_24 = V_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode_0;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hashCode_0;
		int32_t L_30 = ___0_newSize;
		V_6 = ((int32_t)(L_29%L_30));
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_31 = V_1;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_44 = V_1;
		__this->____entries_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_44);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m52D64C46E6E71F2786BCA58C2AE1FE866C515BE4_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* V_4 = NULL;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_15 = V_4;
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_21 = V_4;
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_25 = V_4;
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_38 = V_4;
		L_38->___hashCode_0 = (-1);
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_39 = V_4;
		int32_t L_40 = __this->____freeList_3;
		L_39->___next_1 = L_40;
		if (!false)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_41 = V_4;
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_43 = V_4;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7* L_44 = (Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7*)(&L_43->___value_3);
		il2cpp_codegen_initobj(L_44, sizeof(Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7));
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_49 = V_4;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mCE14F286E610F30F992AA242D634A74C0E77E8B1_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Guid_t ___0_key, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* V_4 = NULL;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_13 = __this->____entries_1;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_15 = V_4;
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_21 = V_4;
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_25 = V_4;
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_32 = V_4;
		int32_t L_33 = L_32->___next_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_34 = __this->____entries_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_36 = V_4;
		int32_t L_37 = L_36->___next_1;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next_1 = L_37;
	}

IL_00d6:
	{
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7* L_38 = ___1_value;
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_39 = V_4;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_40 = L_39->___value_3;
		*(Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7*)L_38 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7*)L_38)->____delegate_1), (void*)NULL);
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_41 = V_4;
		L_41->___hashCode_0 = (-1);
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_42 = V_4;
		int32_t L_43 = __this->____freeList_3;
		L_42->___next_1 = L_43;
		if (!false)
		{
			goto IL_010c;
		}
	}
	{
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_44 = V_4;
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_46 = V_4;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7* L_47 = (Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7*)(&L_46->___value_3);
		il2cpp_codegen_initobj(L_47, sizeof(Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7));
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
		Entry_t149D96A169ECCE6E99643EE941C82FECF7E568FE* L_52 = V_4;
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
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7* L_55 = ___1_value;
		il2cpp_codegen_initobj(L_55, sizeof(Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m6B606F6AE88579DED335D11BB0E6A5FCFBB010E0_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Guid_t ___0_key, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7* L_3 = ___1_value;
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_4 = __this->____entries_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value_3;
		*(Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7*)L_3)->____delegate_1), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7));
		return (bool)0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::TryAdd(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m81926957AC67C835A747DD2AFAFF73110A97AFA7_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, Guid_t ___0_key, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_1 = ___1_value;
		bool L_2;
		L_2 = ((  bool (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mBE5A5494D310BC643ECDF9A7ED12BD68F0633AA3_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m925D3B80511AECF6F6ACE2AE2682FC23D8EBB35E_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mB8C25142CC2F8C0E13AD3FAAE394B752F50DAA85_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* V_6 = NULL;
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
		L_11 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
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
		V_0 = ((KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, KeyValuePair_2U5BU5D_t814EA354AFD37D17D628DD1322079DA40193098E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)))(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_18 = __this->____entries_1;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_19 = V_2;
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
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key_2;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 9), &L_28);
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value_3;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_33 = L_32;
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
			EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_42 = __this->____entries_1;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_43 = V_6;
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
			EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key_2;
			EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value_3;
			KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mE8BF3EED48D14FD6EC0DFB33F72867A3BD60E625((&L_55), L_51, L_54, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C L_56 = L_55;
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
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mD76668F57805C8CDB76E32B843055EF6D1F235B1_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBDC3834EC0DB14900ACC2202C151DFF1481DF94E((&L_0), __this, 2, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mD5CDAE7D523BE886B1479C446DE03D929621007C_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
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
// System.Object System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mEFD784B81D87AFFE11428A5211F8ED58BC550261_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  int32_t (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t46EC1AF0ACCA9B3AAF21146C9AAE0A2D98629B2D* L_5 = __this->____entries_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value_3;
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 20), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mCF3BEC4570D66E684446B6DBA0761D11C9048FC9_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
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
			((  void (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)))(__this, L_3, ((*(Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7*)((Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7*)(Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 20))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::IsCompatibleKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m8A256182BF36015190F3CD6E5E82A25B867A754C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAC430C5A56664866544B41327734A97EDE521386_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
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
		L_3 = ((  bool (*) (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346*, Guid_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Guid,OVRTask`1/Callback<System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>>::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE6B31D363EA0CC805D386B80598A1CDB5D784003_gshared (Dictionary_2_tB8DB456E4F659E954E09D51AD9FC1AF597600346* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBDC3834EC0DB14900ACC2202C151DFF1481DF94E((&L_0), __this, 1, /*hidden argument*/il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		Enumerator_t520E19A19BCD5ABD1697FE2CB7FE8953318811B6 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 24), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m5E10FAB49F6614C1D6F9B24FED3174564A2ED721_gshared_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 KeyValuePair_2_get_Value_mA139017C30706AC5CD1EF9D9F2462955EA4A8D7E_gshared_inline (KeyValuePair_2_t8BEDB18D002E71361005E2582396BD336C834FF3* __this, const RuntimeMethod* method) 
{
	{
		Callback_t9D55A9A4FC02D0C18C52E74F8D07E7D0F2393F30 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m24E14A25736058F28DDDAD2D1BB7B4AA00A9B0F5_gshared_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 KeyValuePair_2_get_Value_m38295F6821DB42CEB17C27DE559E16052AFCB50D_gshared_inline (KeyValuePair_2_t0206C580A6C63F27735F7E5A4B3D4A99EF3A0191* __this, const RuntimeMethod* method) 
{
	{
		Callback_tD6F76A27427390AB039AE817762327D0D6848CF0 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m766A18EDE9F50A00394CAEC5E5D56F3C0E5A3CA2_gshared_inline (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tAA967A5495364723D611DD674AE351D146E4DE20 KeyValuePair_2_get_Value_m87B0DE3105D0C985CB39A085A1856C8E40C717CA_gshared_inline (KeyValuePair_2_tB5B5AEEEB6DD5DC0BF404B9899C02DFB2E6BDDBA* __this, const RuntimeMethod* method) 
{
	{
		Callback_tAA967A5495364723D611DD674AE351D146E4DE20 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mA65B10384A4BB0A25108FDEBCC355E5BC8356BF5_gshared_inline (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 KeyValuePair_2_get_Value_m1CE06EA3FE825C0359362AF158DE1A26C9056D66_gshared_inline (KeyValuePair_2_t7A76C03A462DF731381D859A6FB5547BBF9F62FB* __this, const RuntimeMethod* method) 
{
	{
		Callback_t450EA0267BC1BDC06C37AE0FAD803B6996945872 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m4418D1ED32F1EF7A43127A50F41C7F89E8752F29_gshared_inline (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E KeyValuePair_2_get_Value_mA84AA571A4D3F7CAEEBD35F4E6F045F98A3C0914_gshared_inline (KeyValuePair_2_t7FF46153162746B8A40AD74F78AD75A836A77927* __this, const RuntimeMethod* method) 
{
	{
		Callback_tD124B0F55435C1C7EC50AD98DFD5E717FD94E75E L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m011E91DF0F439D8AF765FF50519CCC53EA822BE1_gshared_inline (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 KeyValuePair_2_get_Value_m2F469C5A5338BAE74A5917F1AAB43F82BB51C2DD_gshared_inline (KeyValuePair_2_t9393311E377A3D6A5F31AE42BFA96EFDBA268DAB* __this, const RuntimeMethod* method) 
{
	{
		Callback_t33128369BA462655DABB4ADF743A85C6D08BBB32 L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mF4978A5F94635534B568C9EC7553EE244F243EE5_gshared_inline (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 KeyValuePair_2_get_Value_mB617ABEC2CAD4AC63B21559D91BE9FE1CCC22D33_gshared_inline (KeyValuePair_2_t7E1E2361FDB74954D365F4E20D96CDAE4A88BA6C* __this, const RuntimeMethod* method) 
{
	{
		Callback_t60A6F49FA10CD9A7118BEE8586372386433733E7 L_0 = __this->___value_1;
		return L_0;
	}
}

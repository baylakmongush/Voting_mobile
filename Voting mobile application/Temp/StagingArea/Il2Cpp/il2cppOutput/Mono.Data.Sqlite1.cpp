#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB;
// Mono.Data.Sqlite.SQLiteCallback
struct SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7;
// Mono.Data.Sqlite.SQLiteCollation
struct SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_t23469643A857ABBFBDE727511CD648AC1A1FC611;
// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_t39B1768014E0D0E6B80EDFE773E58A4AB8972E20;
// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_tD81E4D7539454DD2AA76C188EB5BFDA50740FB04;
// Mono.Data.Sqlite.SQLiteFinalCallback
struct SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t33DC59BE1404B8BE92AF830966FF0110918D0F6D;
// Mono.Data.Sqlite.SQLiteTypeNames[]
struct SQLiteTypeNamesU5BU5D_t55FB08B3D72DA4B8F41703007530E234A1E15D82;
// Mono.Data.Sqlite.SQLiteType[]
struct SQLiteTypeU5BU5D_tF6C4F4F31FF9485FBF7C92B08961A04411EB928E;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_tB88EE36DAC2DEA9DE2F2B413BBF91A81FB0D480F;
// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t73CE31C31E61C0FB8A07EFE63323DA4AE678D2DB;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA;
// Mono.Data.Sqlite.SqliteCommandBuilder
struct SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C;
// Mono.Data.Sqlite.SqliteConvert
struct SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343;
// Mono.Data.Sqlite.SqliteDataReader
struct SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB;
// Mono.Data.Sqlite.SqliteException
struct SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF;
// Mono.Data.Sqlite.SqliteFactory
struct SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F;
// Mono.Data.Sqlite.SqliteFunction
struct SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB;
// Mono.Data.Sqlite.SqliteFunction/AggregateData
struct AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8;
// Mono.Data.Sqlite.SqliteFunctionAttribute
struct SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4;
// Mono.Data.Sqlite.SqliteFunctionAttribute[]
struct SqliteFunctionAttributeU5BU5D_tC37181EDC57C5A71F2DE1EAF49576DC5DD9D4300;
// Mono.Data.Sqlite.SqliteFunction[]
struct SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6;
// Mono.Data.Sqlite.SqliteKeyReader
struct SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5;
// Mono.Data.Sqlite.SqliteKeyReader/KeyInfo[]
struct KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B;
// Mono.Data.Sqlite.SqliteKeyReader/KeyQuery
struct KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051;
// Mono.Data.Sqlite.SqliteParameter
struct SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A;
// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E;
// Mono.Data.Sqlite.SqliteParameter[]
struct SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969;
// Mono.Data.Sqlite.SqliteStatementHandle
struct SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB;
// Mono.Data.Sqlite.SqliteStatement[]
struct SqliteStatementU5BU5D_tD500901B92EED6F3B986F00947C0C1F2D94901AF;
// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C;
// Mono.Data.Sqlite.TypeAffinity[]
struct TypeAffinityU5BU5D_t1574A60D980179EFE10308793C649882DD63EF87;
// System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>[]
struct EntryU5BU5D_tDFC0D3BA1A3495CC3F52F2ED184E8529B4955F38;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t93A9CA6130DD91CD0DB38479F79BF5051686DCE4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct KeyCollection_t0A3420F88A5B8F7B2DEE095342F60CE0D6E111AA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tBACED3278A8EB1F1BBCC4734A2023EB82A5E5DA8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t666396E67E50284D48938851873CE562083D67F2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct ValueCollection_tCE09EBBF22955CD5384FD74159C515F0DCC4B380;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_tB7628BE4B822A9CF2123177DEEB8853F8E222E2F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>
struct Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tA111E8E29826F4195DBA282CAAD4CFD77A11D250;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>
struct List_1_tAD7E3A3044B6732D931945E268FE5829A633497A;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>
struct List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>
struct List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>
struct List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct List_1_t4D51535875D05BE2D5B9E04831852C86794124DF;
// System.Collections.Generic.List`1<System.Data.DataColumn>
struct List_1_t70187E1F2F9140ADB155B98F17D5D765F84B9204;
// System.Collections.Generic.List`1<System.Data.DataView>
struct List_1_tD0DF2B545957BB968E2D9198A87C3B784F3837F8;
// System.Collections.Generic.List`1<System.Data.DataViewListener>
struct List_1_t1748BC8A0D25EE6A55AA236787A9AA35B5AF8808;
// System.Collections.Generic.List`1<System.Data.Index>
struct List_1_tA40E855828D2BD351AE459CC0CEFC5246704CDEA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t63CA165C1F7D765B04CB139EB6577577479E57B0;
// System.ComponentModel.Component
struct Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4;
// System.ComponentModel.ISite
struct ISite_t6804B48BC23ABB5F4141903F878589BCEF6097A2;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t19FEFDD6CEF7609BB10282A4B52C3C09A04B41A2;
// System.Data.Common.DbCommand
struct DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55;
// System.Data.Common.DbCommandBuilder/ParameterNames
struct ParameterNames_tC8571837DB584F0E7ED76EEF1B6C27507CEB0755;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_tD491D36DE53638EDEC3069CE96717AD87D4225CA;
// System.Data.Common.DbDataReader
struct DbDataReader_t4CADA7880D6F85CABC4096FA5AE10C327A07CCD8;
// System.Data.Common.DbException
struct DbException_t7601D64CEA3E4A5396F01EDC71423DE6209F7F0D;
// System.Data.Common.DbParameter
struct DbParameter_tEE5AEAD8B429B8EF8994063C151A25A76B94B76F;
// System.Data.Common.DbParameterCollection
struct DbParameterCollection_t6FF3670B12D04B797F09E79DFEA4CF93E92D249C;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_tD097542E2A2591557E9349A9AA0C1DD301D50DD4;
// System.Data.Common.DbSchemaRow[]
struct DbSchemaRowU5BU5D_tBD2A74D689F73CA84C5390B2A586C6AE904C9A31;
// System.Data.Common.DbTransaction
struct DbTransaction_tADC1A857259448190F882AC47E0B18317779FE56;
// System.Data.ConstraintCollection
struct ConstraintCollection_t349E02C7469F2E3DF17D381D9BCACF8B7E7CCF62;
// System.Data.DataColumn
struct DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_tC860540A9091FE1BB1DF718AB44874A54585FE07;
// System.Data.DataColumnCollection
struct DataColumnCollection_t398628201192B6EF9DB23A650DAB1E79CEA1796A;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t5E093A4F34F11AFCA04923FE842DCC5ED1B398BC;
// System.Data.DataError
struct DataError_tD52C55EF7C5FABAA58B11DBB0C55BE671F18F786;
// System.Data.DataExpression
struct DataExpression_tECCBF728C87CAF0185856F73F7DB54BB94EF094D;
// System.Data.DataRelationCollection
struct DataRelationCollection_tB592C84F2EE6B60DFB933CC67B8DE1065098269B;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t705BDBA68D45143524D5C70D82EA04F0B676C15B;
// System.Data.DataRow
struct DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B;
// System.Data.DataRowBuilder
struct DataRowBuilder_t1686A02FA53DF491D826A981024C255668E94CC6;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0;
// System.Data.DataRowCollection
struct DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0;
// System.Data.DataRowCollection/DataRowTree
struct DataRowTree_t885C3CBC17060B726BFEE177710D6E9E57FEA230;
// System.Data.DataRow[]
struct DataRowU5BU5D_tCA5181B3540ACD7702228F224388EA4B4F5885CA;
// System.Data.DataSet
struct DataSet_t6D7B0F1EC989A523B88F4BDABABD8B828631E1B8;
// System.Data.DataTable
struct DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863;
// System.Data.DataTableClearEventHandler
struct DataTableClearEventHandler_t661CB2EAAB20D6574190694F4DDD86BDD06FA982;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_tA2A38967A9C8796075CBF1C31585C4C6E3C6F43B;
// System.Data.DataView
struct DataView_t6489092472EA45039A541483F0E43D26C6723E4C;
// System.Data.DbType[]
struct DbTypeU5BU5D_t1989AABCD9738543E7FF7B0F5D510F4A7EC82B1E;
// System.Data.Index
struct Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7;
// System.Data.IndexField[]
struct IndexFieldU5BU5D_tE0FF1739A3834C07A83EAF2EC3B32E14CC967548;
// System.Data.PropertyCollection
struct PropertyCollection_tA766717BE7105BC47681AD434BF66003DEDB68F4;
// System.Data.RecordManager
struct RecordManager_t923097B51945932B6775CB40CF53683A864A3C65;
// System.Data.StateChangeEventHandler
struct StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1;
// System.Data.UniqueConstraint
struct UniqueConstraint_t291F6C173D4820C1ACAE889805C3649A44DC1D22;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF;
// System.Exception[]
struct ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E;
// System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ReflectionTypeLoadException
struct ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD;
// System.ResolveEventHandler
struct ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5;
// System.Runtime.InteropServices.CriticalHandle
struct CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_tC3280D64D358F47EA4DAF1A65609BA0FC081888A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_tD820AC67812C645B2F8C16ABB4DE694A19D6A315;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WeakReference
struct WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D;

IL2CPP_EXTERN_C RuntimeClass* AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DbType_t46DC393C53E0CB52DF1792FD357A7E596C5F432E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAD7E3A3044B6732D931945E268FE5829A633497A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteFunctionEx_tC3D68AFE7A958C0DE3167D08B2AE365AB84AB164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1D50DE06C0851DADFB9EE493AAE1FD7F9F818318____A5F5D64EF7BB696455C9841B907D2E09986EA902_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08868372FCC6DF03923FF0A62B6740AAB4B59A1D;
IL2CPP_EXTERN_C String_t* _stringLiteral1178CAFBD64BBBFA77F5AC0A9D5032ED88162781;
IL2CPP_EXTERN_C String_t* _stringLiteral193DAF137ED8B89DE36D47C3DF5FD8F66C0E1D14;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
IL2CPP_EXTERN_C String_t* _stringLiteral2301A3AED57BDF6FA84FA74B2553B52161EE1A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral246AFB2A711D8CCEC2D90C6953074DABA1E3FF7E;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
IL2CPP_EXTERN_C String_t* _stringLiteral2ADF0A0954741E1AF5766479C5643CD51B0B69B5;
IL2CPP_EXTERN_C String_t* _stringLiteral2CE42E824F2163751D62C49D3226C338EFA1179D;
IL2CPP_EXTERN_C String_t* _stringLiteral2D14AB97CC3DC294C51C0D6814F4EA45F4B4E312;
IL2CPP_EXTERN_C String_t* _stringLiteral3598517C826F1480A241800CE73F781AE2B1CD6A;
IL2CPP_EXTERN_C String_t* _stringLiteral40EA9041285003E004A8F6FE2DD14EBB07961AF2;
IL2CPP_EXTERN_C String_t* _stringLiteral4152C03A902AA9F8A5A2B4A510C2AB07BF79F058;
IL2CPP_EXTERN_C String_t* _stringLiteral427AF4F4D3D5F55621070F2B61A550075D057138;
IL2CPP_EXTERN_C String_t* _stringLiteral4821EDEB87E72FFADC6BC2DD7758D1AF495E515F;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
IL2CPP_EXTERN_C String_t* _stringLiteral5277F74EC6B2C07897AE08C4150298F4A47BFEE7;
IL2CPP_EXTERN_C String_t* _stringLiteral56184EC642B956FAF32203EDC14DB32A5BB3377F;
IL2CPP_EXTERN_C String_t* _stringLiteral58DF3A419CF3B1ABF1540CA19363117D737798BC;
IL2CPP_EXTERN_C String_t* _stringLiteral58F69C9012CFB997F9D3FFE4F607D66F6E932A1F;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral5E44B1AE3D4CE260D0B6E54DFE79B9E83C8A047E;
IL2CPP_EXTERN_C String_t* _stringLiteral5F97F8775628E86310829AB9E8C465258AB92A5E;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC00849B213BD1E4B88D515FA3A807DCB282C84;
IL2CPP_EXTERN_C String_t* _stringLiteral62F94C337A62422091EEC8AF220557BC9D2A0F7D;
IL2CPP_EXTERN_C String_t* _stringLiteral634EC12D9C33E3B4FA5EE77192789853C0944473;
IL2CPP_EXTERN_C String_t* _stringLiteral654053DB7D1826E8BC0FB8C5C17C5E62B7C9C87C;
IL2CPP_EXTERN_C String_t* _stringLiteral660C1D424389A5FB82204BA7BB89B07419AAC1C0;
IL2CPP_EXTERN_C String_t* _stringLiteral66D2C601FBFA7B406B77381952D6A78FC0BD2564;
IL2CPP_EXTERN_C String_t* _stringLiteral66D5524BC6E9A905BCD8AD67AE1EB457C570B564;
IL2CPP_EXTERN_C String_t* _stringLiteral78B3F17895B8C6A1EC55D26A5815C6B3E2F691AD;
IL2CPP_EXTERN_C String_t* _stringLiteral79AEF385243E2292791E733AF2A99ACEF86C3DCE;
IL2CPP_EXTERN_C String_t* _stringLiteral7E15BB5C01E7DD56499E37C634CF791D3A519AEE;
IL2CPP_EXTERN_C String_t* _stringLiteral7F97480B11C2DFEFA56814087360C69E4B05A84D;
IL2CPP_EXTERN_C String_t* _stringLiteral805E631B2C4331634631AB9D3D378E6F37AE988C;
IL2CPP_EXTERN_C String_t* _stringLiteral84B715DD42CB515250F3406C66517DD9D7115450;
IL2CPP_EXTERN_C String_t* _stringLiteral89865DF2AE553E13CE078A7680590FE066489642;
IL2CPP_EXTERN_C String_t* _stringLiteral89F89C02CF47E091E726A4E07B88AF0966806897;
IL2CPP_EXTERN_C String_t* _stringLiteral96B270E30E3C5C4FDE9E03F6B30D4F2F1657F16C;
IL2CPP_EXTERN_C String_t* _stringLiteral99B3C2C49461425BF6CFF4391127F75D483D0614;
IL2CPP_EXTERN_C String_t* _stringLiteral9BD63A04AE7FE42E2B683DEF764089A3D56FFE25;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF86E4634BA8C788A847BD10019CC0D59BCC00C;
IL2CPP_EXTERN_C String_t* _stringLiteralA7362D38845D769AB9292607291056855E2183B1;
IL2CPP_EXTERN_C String_t* _stringLiteralAB2A2923359CC254D1142CB254FA079493CE8064;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBA7B74E6880085D4646D2D47931AD9243932EB41;
IL2CPP_EXTERN_C String_t* _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27;
IL2CPP_EXTERN_C String_t* _stringLiteralBB4B470AC8E8BC7DB9A08102DEBACDD14B1D6379;
IL2CPP_EXTERN_C String_t* _stringLiteralC039B00BFF507642D69C98D494E70774AA200821;
IL2CPP_EXTERN_C String_t* _stringLiteralC41E97B906298C39611A796CAB1539411C1CF874;
IL2CPP_EXTERN_C String_t* _stringLiteralC9E6A29D14F3F27CD2EE75B65407552AD50A3078;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0AD5ADA4DB8ECDE7F83BAC072E7C784CDC3F1F;
IL2CPP_EXTERN_C String_t* _stringLiteralD1C6600798D630F9B1438048EE63D61789E1AF88;
IL2CPP_EXTERN_C String_t* _stringLiteralD1D50AF319576CA6C6CBA296631E193D490A5370;
IL2CPP_EXTERN_C String_t* _stringLiteralD87C8562414047004383CEFAB06DDE994AB29260;
IL2CPP_EXTERN_C String_t* _stringLiteralD99C226D02CB06DF9C4F96D0E0140B91C9B8F41F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC2DB8AB152AE696D77BDC87D45929DEB94DE5DC;
IL2CPP_EXTERN_C String_t* _stringLiteralDD64AB817AB410403092565BB65F18EDEE243B7F;
IL2CPP_EXTERN_C String_t* _stringLiteralDF063BF53C8E8CB3FD9AA4249D1FA6357775527C;
IL2CPP_EXTERN_C String_t* _stringLiteralED503B617B69F0DA3889F48E0D624A31DABDAE45;
IL2CPP_EXTERN_C String_t* _stringLiteralF0057D58EF952A7C3FAC90EE4D6ACBCD891B847A;
IL2CPP_EXTERN_C String_t* _stringLiteralF642EE196088372EA886186C6C617515599AFD3F;
IL2CPP_EXTERN_C String_t* _stringLiteralF6ECAD2FBBDD77D9B35BA368C2417FA482DD0A58;
IL2CPP_EXTERN_C String_t* _stringLiteralFF736B7140FADCCC4ABF6A7A3CAA5B49362CE730;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5453726952CE3720733822DBF38A0091037F0F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5B95C1D0D8DF469906AE411C3774C9D88F7AAB66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAEA8CB378DE45C02BE02FC919DE4DF3AFEFBABEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD56CE1C90741C181D0119F225F9F94610EF672D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m5330001CB129799E88B8F362732D472B5FE2E30D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1A760F2A72D99B9A0ECAA0A3BEDEB767D141A1ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m05610D3516B06774B9B1169A4189C9A76C74B566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3F2ED0F81D513F866594E0DED7106B05985FA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8B16E8CBD6B9EE71984601DB60ADB40673ADD5CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA92E46D6CC469985E57848D95079F58E82A5FA90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC57580CB610EF86CE23A34BBBDA471DB2E55AC56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB9AE9B8E7AD20F656F84FE963E45CA627D7E4F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4E6587A2AC3C47D1B1835490F4D4FE3319B080C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m61C4DD31E4F8ACDAE2E2EA613259AE49871FC4D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA9F49DB526C7AA569AFF16681D566400C740AD51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m185DCFF47AE91F647CD1E459520807C87651A7DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m60C19A4EF271FD373AED9B332B993C34CEE4777E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCF50FAAD565B13E2355E10FCCD8CBED148992C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1B357C74BA17105E21969DF5288A73E1873549F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m85D3AB75DB2B470E4205D37539278CBB8B1235D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8BCBD806970FD0577EA043FD96E8E7C68B782981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyQuery_set_IsValid_m04575B63742D87C840E5F78A24AA8023861386CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5C78F8E2E70517CE23882FE76E912B19A6DF0D05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m62B3202FFB4276C1DFAADF0390DC20EA1FAE24EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDC0BE52A08145926A3037CE04FC07B7F07C3E06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE745EE2CC57B607435CC396916EE4B9F90BF2126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mEE04B19B8737B430DF2A0BF0E36BF703AF5DCE5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m3DAADD39ED6686DE079F5056901F3260E09179A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m085C23E93F3D97F191B8A5862C0023CBA31779A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m1D1DCE16256250FF5D49BBC5B2170B8469A0550B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_mE7D57EB1C1BD956B331BE1F706D455B519093D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4FB9C8F0BBC4821205AFB89A9D2D7C01E04ACA40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF4E3E31F7753761DF52180726B7FB52F164EADFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m9C78D06C8B9D4B0F998320C74B8B4A888DB898A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m2E51CE65637809D7D93C062529E5A7D30E24E133_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mB2016428E769441E9C87E656660ABA58BAE6FA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mD17877118EA5CCF90E0D36CF420287270492A0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA7075CC228A8B426BEF45ED0A100608D0D0AECCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m50BF7B9AB3445C4EC9E8F10EC20ECFAF8B7458DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9A195A72E70D58E5EFCA3C0A18BD3D29181124F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA8F8D9D038083E6E29B326BE0EB1D2045F69DD68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCBE457D94EF9F24E38A4094A576F1CFEDC521ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m18B6F2D3ACC8EAC194AB57D5325DD32BB5802AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m35A363B2C951173832B69EA3CC50DF4C5C735C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5213820495B0EBCF3981324C3E9BD78BAE50715F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m76195183806581950B0EFE1852C8255E6EDA2337_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0FED0390D45670958CA29E86C5D58839251075D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA7650FA6BC6222743B22C6252E8B6477292F5AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m339B7FAFE361D88FEB5F47A169B5A37969D71764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFunction_CompareCallback16_mCB2BC4C159CCFBC8F5CE6B1BE45859CF2BCB022F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFunction_CompareCallback_mF78A67F91A7431BB2A8B35FBB61E20586E0438E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFunction_FinalCallback_mC3E2D0B6906A582DA67FC0B2F2A1540C46AD1D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFunction_ScalarCallback_m0A2E7C47B3481E9F7510E4007B0D241ECC834271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteFunction_StepCallback_m1C0CF2F896F3863C25B9E9F5AF2D764371D9E354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_GetBoolean_m48043D3935B41A96E9FBE5FA6895360CDAE998C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_GetDateTime_mEC1CE94A64358FFBC0DE34DE3DF0FE3A3E291F12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_GetInt32_m9E673772C3B115BF9DE1340F1D5E0CD08FB360BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_GetInt64_m8393B7DF4B7EAA2BCE677E0D5FF84F2C885146BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_GetString_mA6F5C53838A266C7B0A74704282439AA12401FDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteParameterCollection_CopyTo_m3D99299076E2DE0DD92FEF8C748940A02E1FCC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteParameter_set_Direction_m834F8F4C2E593C35DA0F4167BB6544F54D863A1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteStatement_BindParameter_m4F5DB47C7652CF87B979FEB4710D77A8C07BC165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteStatement_SetTypes_m589EFA32D447E2515B6C2FD4219FCC86CBBC33AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqliteTransaction__ctor_m1A752E72A7B8361248FD62BD2DC1B7E5F2E8F2A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ISQLiteSchemaExtensions_t0E88FC0F740D4586124EE1CEF90C3F3ED86E261E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t KeyQuery_Sync_mB6A4987196C5C4EC8445DAF57F6CE74401B9A40A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KeyQuery__ctor_m22449788AF65C3ABA3E3AFFD7EF344606B4A3C77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t KeyQuery_set_IsValid_m04575B63742D87C840E5F78A24AA8023861386CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteException_GetStockErrorMessage_mBCF83F54889B55E016F7E032A3BC4BD3A704A340_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteException__cctor_mE96C2B8F9109A119826FE7FB6BC3605472F29294_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteException__ctor_m595860D2E2C4B4E75E31A0D8F336F108AA592F8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteFactory_GetSQLiteProviderServicesInstance_m518B11A2EE1AA7F61D9EAEED666547B3FE0AEA94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteFactory_System_IServiceProvider_GetService_mE0D29875DA5B29B8B4D68C42BC6066601A4C5946_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteFactory__cctor_mDF10E97E1A5EA31CC2EF8C4340BCEB7AA4D0D7C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteFunction_BindFunctions_m1A6158D062BBC35D0C77E5FDE67E87413C4C3CD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteFunction_CompareCallback_mF78A67F91A7431BB2A8B35FBB61E20586E0438E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteFunction_ConvertParams_m919DBC8C690DBE96137AFDD78BC9248AB4674302_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteFunction_FinalCallback_mC3E2D0B6906A582DA67FC0B2F2A1540C46AD1D21_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteFunction_SetReturnValue_m9AE556DD446025687C2BE8FAD86E4486BD7FEBCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteFunction_StepCallback_m1C0CF2F896F3863C25B9E9F5AF2D764371D9E354_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteFunction__cctor_mA167C878D96A7F7E37AB93565194DFA23085CE6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader_AppendSchemaTable_mD5A482CC15D52E9B725793C96FF9CCA147BB015D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader_GetBoolean_m48043D3935B41A96E9FBE5FA6895360CDAE998C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader_GetDataTypeName_mDA1CBF596DA05B2D17D522BCBE7DA9FE05D8ACEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader_GetDateTime_mEC1CE94A64358FFBC0DE34DE3DF0FE3A3E291F12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader_GetFieldType_m6FDEFF33561C9DE5588D25723C227B87FA9F6989_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader_GetInt32_m9E673772C3B115BF9DE1340F1D5E0CD08FB360BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader_GetInt64_m8393B7DF4B7EAA2BCE677E0D5FF84F2C885146BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader_GetString_mA6F5C53838A266C7B0A74704282439AA12401FDB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader_GetValue_m5C70699FC326649431FA6FBEBE356C82CD277604_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteKeyReader__ctor_mA7F6040E66EBDCFDCB1CEA8348179FDEFA68AF1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_AddWithValue_m97C980AD107D4CCB1CD2BA377DE2C3C0A06971D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_Add_m0FC27E00530EE3C96AFCFC994D0FB5731053E2EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_Add_mC80811CB2BF2117A72B037472821DDE4C0F92CC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_Clear_mA6EC383EFF6923E41591AFF7CFE5A0C1C79C7F89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_Contains_m839CF97D62730EDEFA81BB7DC1A761ADFA2B50B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_CopyTo_m3D99299076E2DE0DD92FEF8C748940A02E1FCC8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_GetEnumerator_m69FAC35711842655B2E278567F44912977B46E4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_GetParameter_m5737F8626A08122C062C4C1B862235A0006EF1B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_IndexOf_m450F61FF740CB5038E6D9DC85FE32F9073D809C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_IndexOf_m99779C46C388DBB144BE88E31343332401FBBAA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_Insert_mF771D89C5478F0D1EA89C8DEEB8827F7403274D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_MapParameters_m1E0737759D666193B226FD46F4841264016B2E90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_RemoveAt_mC170B0F20676CEF6CE18161983976280251CBF15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_Remove_mC7FD06913C68E795A229DFA628DC152B753AC27E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_SetParameter_m4629EFE7A727916A7BA3A533820DB5BF9E6476B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection__ctor_m289CFE5E4BFA0BB60172BE14F5DD7F8A564C73A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_get_Count_mB12197C044F13A0BE61FB55E0C514B7957E7BAEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameterCollection_get_Item_mB143F08024B5011763E114BE87F511BB2A8CBD86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameter_Clone_m21B83DB2ACD7EE995C900F7D5342743EDB5F5558_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameter_get_DbType_mA8E59EC51C78A991AC03563AF968986C17FB8C5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameter_set_Direction_m834F8F4C2E593C35DA0F4167BB6544F54D863A1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteParameter_set_Value_m87E20591316C4B22439B5D6C3BFF9554F30831CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteStatementHandle_ReleaseHandle_m95939B3B0697A005A1E22E61C902148B4C27F524_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteStatementHandle__ctor_m673603194B1DE0388222BBF3E873662F06E5F6F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteStatementHandle_get_IsInvalid_m837218B1AE04403F3D6560E1F8CC41546717AC82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteStatementHandle_op_Implicit_mD6450F31B1D437F9C755CFB513EB035CB8D836F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteStatement_BindParameter_m4F5DB47C7652CF87B979FEB4710D77A8C07BC165_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteStatement_MapParameter_mB771EFEBC2D26A8B4AC4E12D5F16961473093748_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteStatement_SetTypes_m589EFA32D447E2515B6C2FD4219FCC86CBBC33AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteStatement__ctor_m4633CD23B90A35EF77F0B526A3719E1680A7AE51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteTransaction_IssueRollback_m09587571EAC81A3BB360B27EA5FBE2BB3C8E937F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SqliteTransaction__ctor_m1A752E72A7B8361248FD62BD2DC1B7E5F2E8F2A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnsafeNativeMethods__cctor_mE99975B2EFE4CD56565B7E95F6C60C752D207308_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6;
struct KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B;
struct SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B;
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mono.Data.Sqlite.SqliteFunction_AggregateData
struct  AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8  : public RuntimeObject
{
public:
	// System.Int32 Mono.Data.Sqlite.SqliteFunction_AggregateData::_count
	int32_t ____count_0;
	// System.Object Mono.Data.Sqlite.SqliteFunction_AggregateData::_data
	RuntimeObject * ____data_1;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8, ____count_0)); }
	inline int32_t get__count_0() const { return ____count_0; }
	inline int32_t* get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(int32_t value)
	{
		____count_0 = value;
	}

	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8, ____data_1)); }
	inline RuntimeObject * get__data_1() const { return ____data_1; }
	inline RuntimeObject ** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(RuntimeObject * value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}
};


// Mono.Data.Sqlite.SqliteKeyReader
struct  SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SqliteKeyReader_KeyInfo[] Mono.Data.Sqlite.SqliteKeyReader::_keyInfo
	KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* ____keyInfo_0;
	// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteKeyReader::_stmt
	SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * ____stmt_1;
	// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::_isValid
	bool ____isValid_2;

public:
	inline static int32_t get_offset_of__keyInfo_0() { return static_cast<int32_t>(offsetof(SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5, ____keyInfo_0)); }
	inline KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* get__keyInfo_0() const { return ____keyInfo_0; }
	inline KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B** get_address_of__keyInfo_0() { return &____keyInfo_0; }
	inline void set__keyInfo_0(KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* value)
	{
		____keyInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of__stmt_1() { return static_cast<int32_t>(offsetof(SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5, ____stmt_1)); }
	inline SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * get__stmt_1() const { return ____stmt_1; }
	inline SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 ** get_address_of__stmt_1() { return &____stmt_1; }
	inline void set__stmt_1(SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * value)
	{
		____stmt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stmt_1), (void*)value);
	}

	inline static int32_t get_offset_of__isValid_2() { return static_cast<int32_t>(offsetof(SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5, ____isValid_2)); }
	inline bool get__isValid_2() const { return ____isValid_2; }
	inline bool* get_address_of__isValid_2() { return &____isValid_2; }
	inline void set__isValid_2(bool value)
	{
		____isValid_2 = value;
	}
};


// Mono.Data.Sqlite.SqliteKeyReader_KeyQuery
struct  KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteKeyReader_KeyQuery::_command
	SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * ____command_0;
	// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteKeyReader_KeyQuery::_reader
	SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * ____reader_1;

public:
	inline static int32_t get_offset_of__command_0() { return static_cast<int32_t>(offsetof(KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051, ____command_0)); }
	inline SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * get__command_0() const { return ____command_0; }
	inline SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA ** get_address_of__command_0() { return &____command_0; }
	inline void set__command_0(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * value)
	{
		____command_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____command_0), (void*)value);
	}

	inline static int32_t get_offset_of__reader_1() { return static_cast<int32_t>(offsetof(KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051, ____reader_1)); }
	inline SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * get__reader_1() const { return ____reader_1; }
	inline SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB ** get_address_of__reader_1() { return &____reader_1; }
	inline void set__reader_1(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * value)
	{
		____reader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reader_1), (void*)value);
	}
};


// Mono.Data.Sqlite.SqliteStatement
struct  SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteStatement::_sql
	SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * ____sql_0;
	// System.String Mono.Data.Sqlite.SqliteStatement::_sqlStatement
	String_t* ____sqlStatement_1;
	// Mono.Data.Sqlite.SqliteStatementHandle Mono.Data.Sqlite.SqliteStatement::_sqlite_stmt
	SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * ____sqlite_stmt_2;
	// System.Int32 Mono.Data.Sqlite.SqliteStatement::_unnamedParameters
	int32_t ____unnamedParameters_3;
	// System.String[] Mono.Data.Sqlite.SqliteStatement::_paramNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____paramNames_4;
	// Mono.Data.Sqlite.SqliteParameter[] Mono.Data.Sqlite.SqliteStatement::_paramValues
	SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* ____paramValues_5;
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteStatement::_command
	SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * ____command_6;
	// System.String[] Mono.Data.Sqlite.SqliteStatement::_types
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____types_7;

public:
	inline static int32_t get_offset_of__sql_0() { return static_cast<int32_t>(offsetof(SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969, ____sql_0)); }
	inline SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * get__sql_0() const { return ____sql_0; }
	inline SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB ** get_address_of__sql_0() { return &____sql_0; }
	inline void set__sql_0(SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * value)
	{
		____sql_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sql_0), (void*)value);
	}

	inline static int32_t get_offset_of__sqlStatement_1() { return static_cast<int32_t>(offsetof(SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969, ____sqlStatement_1)); }
	inline String_t* get__sqlStatement_1() const { return ____sqlStatement_1; }
	inline String_t** get_address_of__sqlStatement_1() { return &____sqlStatement_1; }
	inline void set__sqlStatement_1(String_t* value)
	{
		____sqlStatement_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sqlStatement_1), (void*)value);
	}

	inline static int32_t get_offset_of__sqlite_stmt_2() { return static_cast<int32_t>(offsetof(SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969, ____sqlite_stmt_2)); }
	inline SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * get__sqlite_stmt_2() const { return ____sqlite_stmt_2; }
	inline SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB ** get_address_of__sqlite_stmt_2() { return &____sqlite_stmt_2; }
	inline void set__sqlite_stmt_2(SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * value)
	{
		____sqlite_stmt_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sqlite_stmt_2), (void*)value);
	}

	inline static int32_t get_offset_of__unnamedParameters_3() { return static_cast<int32_t>(offsetof(SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969, ____unnamedParameters_3)); }
	inline int32_t get__unnamedParameters_3() const { return ____unnamedParameters_3; }
	inline int32_t* get_address_of__unnamedParameters_3() { return &____unnamedParameters_3; }
	inline void set__unnamedParameters_3(int32_t value)
	{
		____unnamedParameters_3 = value;
	}

	inline static int32_t get_offset_of__paramNames_4() { return static_cast<int32_t>(offsetof(SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969, ____paramNames_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__paramNames_4() const { return ____paramNames_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__paramNames_4() { return &____paramNames_4; }
	inline void set__paramNames_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____paramNames_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____paramNames_4), (void*)value);
	}

	inline static int32_t get_offset_of__paramValues_5() { return static_cast<int32_t>(offsetof(SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969, ____paramValues_5)); }
	inline SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* get__paramValues_5() const { return ____paramValues_5; }
	inline SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251** get_address_of__paramValues_5() { return &____paramValues_5; }
	inline void set__paramValues_5(SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* value)
	{
		____paramValues_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____paramValues_5), (void*)value);
	}

	inline static int32_t get_offset_of__command_6() { return static_cast<int32_t>(offsetof(SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969, ____command_6)); }
	inline SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * get__command_6() const { return ____command_6; }
	inline SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA ** get_address_of__command_6() { return &____command_6; }
	inline void set__command_6(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * value)
	{
		____command_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____command_6), (void*)value);
	}

	inline static int32_t get_offset_of__types_7() { return static_cast<int32_t>(offsetof(SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969, ____types_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__types_7() const { return ____types_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__types_7() { return &____types_7; }
	inline void set__types_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____types_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____types_7), (void*)value);
	}
};


// Mono.Data.Sqlite.UnsafeNativeMethods
struct  UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A  : public RuntimeObject
{
public:

public:
};

struct UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_StaticFields
{
public:
	// System.Boolean Mono.Data.Sqlite.UnsafeNativeMethods::use_sqlite3_close_v2
	bool ___use_sqlite3_close_v2_0;
	// System.Boolean Mono.Data.Sqlite.UnsafeNativeMethods::use_sqlite3_open_v2
	bool ___use_sqlite3_open_v2_1;
	// System.Boolean Mono.Data.Sqlite.UnsafeNativeMethods::use_sqlite3_create_function_v2
	bool ___use_sqlite3_create_function_v2_2;

public:
	inline static int32_t get_offset_of_use_sqlite3_close_v2_0() { return static_cast<int32_t>(offsetof(UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_StaticFields, ___use_sqlite3_close_v2_0)); }
	inline bool get_use_sqlite3_close_v2_0() const { return ___use_sqlite3_close_v2_0; }
	inline bool* get_address_of_use_sqlite3_close_v2_0() { return &___use_sqlite3_close_v2_0; }
	inline void set_use_sqlite3_close_v2_0(bool value)
	{
		___use_sqlite3_close_v2_0 = value;
	}

	inline static int32_t get_offset_of_use_sqlite3_open_v2_1() { return static_cast<int32_t>(offsetof(UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_StaticFields, ___use_sqlite3_open_v2_1)); }
	inline bool get_use_sqlite3_open_v2_1() const { return ___use_sqlite3_open_v2_1; }
	inline bool* get_address_of_use_sqlite3_open_v2_1() { return &___use_sqlite3_open_v2_1; }
	inline void set_use_sqlite3_open_v2_1(bool value)
	{
		___use_sqlite3_open_v2_1 = value;
	}

	inline static int32_t get_offset_of_use_sqlite3_create_function_v2_2() { return static_cast<int32_t>(offsetof(UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_StaticFields, ___use_sqlite3_create_function_v2_2)); }
	inline bool get_use_sqlite3_create_function_v2_2() const { return ___use_sqlite3_create_function_v2_2; }
	inline bool* get_address_of_use_sqlite3_create_function_v2_2() { return &___use_sqlite3_create_function_v2_2; }
	inline void set_use_sqlite3_create_function_v2_2(bool value)
	{
		___use_sqlite3_create_function_v2_2 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction_AggregateData>
struct  Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDFC0D3BA1A3495CC3F52F2ED184E8529B4955F38* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0A3420F88A5B8F7B2DEE095342F60CE0D6E111AA * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCE09EBBF22955CD5384FD74159C515F0DCC4B380 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703, ___entries_1)); }
	inline EntryU5BU5D_tDFC0D3BA1A3495CC3F52F2ED184E8529B4955F38* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDFC0D3BA1A3495CC3F52F2ED184E8529B4955F38** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDFC0D3BA1A3495CC3F52F2ED184E8529B4955F38* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703, ___keys_7)); }
	inline KeyCollection_t0A3420F88A5B8F7B2DEE095342F60CE0D6E111AA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0A3420F88A5B8F7B2DEE095342F60CE0D6E111AA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0A3420F88A5B8F7B2DEE095342F60CE0D6E111AA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703, ___values_8)); }
	inline ValueCollection_tCE09EBBF22955CD5384FD74159C515F0DCC4B380 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCE09EBBF22955CD5384FD74159C515F0DCC4B380 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCE09EBBF22955CD5384FD74159C515F0DCC4B380 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct  Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t93A9CA6130DD91CD0DB38479F79BF5051686DCE4* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBACED3278A8EB1F1BBCC4734A2023EB82A5E5DA8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB7628BE4B822A9CF2123177DEEB8853F8E222E2F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___entries_1)); }
	inline EntryU5BU5D_t93A9CA6130DD91CD0DB38479F79BF5051686DCE4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t93A9CA6130DD91CD0DB38479F79BF5051686DCE4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t93A9CA6130DD91CD0DB38479F79BF5051686DCE4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___keys_7)); }
	inline KeyCollection_tBACED3278A8EB1F1BBCC4734A2023EB82A5E5DA8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBACED3278A8EB1F1BBCC4734A2023EB82A5E5DA8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBACED3278A8EB1F1BBCC4734A2023EB82A5E5DA8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ___values_8)); }
	inline ValueCollection_tB7628BE4B822A9CF2123177DEEB8853F8E222E2F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB7628BE4B822A9CF2123177DEEB8853F8E222E2F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB7628BE4B822A9CF2123177DEEB8853F8E222E2F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___entries_1)); }
	inline EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___keys_7)); }
	inline KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t666396E67E50284D48938851873CE562083D67F2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___values_8)); }
	inline ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>
struct  List_1_tAD7E3A3044B6732D931945E268FE5829A633497A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAD7E3A3044B6732D931945E268FE5829A633497A, ____items_1)); }
	inline SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* get__items_1() const { return ____items_1; }
	inline SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAD7E3A3044B6732D931945E268FE5829A633497A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAD7E3A3044B6732D931945E268FE5829A633497A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAD7E3A3044B6732D931945E268FE5829A633497A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAD7E3A3044B6732D931945E268FE5829A633497A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAD7E3A3044B6732D931945E268FE5829A633497A_StaticFields, ____emptyArray_5)); }
	inline SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>
struct  List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SqliteFunctionAttributeU5BU5D_tC37181EDC57C5A71F2DE1EAF49576DC5DD9D4300* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF, ____items_1)); }
	inline SqliteFunctionAttributeU5BU5D_tC37181EDC57C5A71F2DE1EAF49576DC5DD9D4300* get__items_1() const { return ____items_1; }
	inline SqliteFunctionAttributeU5BU5D_tC37181EDC57C5A71F2DE1EAF49576DC5DD9D4300** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SqliteFunctionAttributeU5BU5D_tC37181EDC57C5A71F2DE1EAF49576DC5DD9D4300* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SqliteFunctionAttributeU5BU5D_tC37181EDC57C5A71F2DE1EAF49576DC5DD9D4300* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF_StaticFields, ____emptyArray_5)); }
	inline SqliteFunctionAttributeU5BU5D_tC37181EDC57C5A71F2DE1EAF49576DC5DD9D4300* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SqliteFunctionAttributeU5BU5D_tC37181EDC57C5A71F2DE1EAF49576DC5DD9D4300** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SqliteFunctionAttributeU5BU5D_tC37181EDC57C5A71F2DE1EAF49576DC5DD9D4300* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader_KeyInfo>
struct  List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16, ____items_1)); }
	inline KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* get__items_1() const { return ____items_1; }
	inline KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16_StaticFields, ____emptyArray_5)); }
	inline KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>
struct  List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930, ____items_1)); }
	inline SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* get__items_1() const { return ____items_1; }
	inline SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930_StaticFields, ____emptyArray_5)); }
	inline SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct  List_1_t4D51535875D05BE2D5B9E04831852C86794124DF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SqliteStatementU5BU5D_tD500901B92EED6F3B986F00947C0C1F2D94901AF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4D51535875D05BE2D5B9E04831852C86794124DF, ____items_1)); }
	inline SqliteStatementU5BU5D_tD500901B92EED6F3B986F00947C0C1F2D94901AF* get__items_1() const { return ____items_1; }
	inline SqliteStatementU5BU5D_tD500901B92EED6F3B986F00947C0C1F2D94901AF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SqliteStatementU5BU5D_tD500901B92EED6F3B986F00947C0C1F2D94901AF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4D51535875D05BE2D5B9E04831852C86794124DF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4D51535875D05BE2D5B9E04831852C86794124DF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4D51535875D05BE2D5B9E04831852C86794124DF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4D51535875D05BE2D5B9E04831852C86794124DF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SqliteStatementU5BU5D_tD500901B92EED6F3B986F00947C0C1F2D94901AF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4D51535875D05BE2D5B9E04831852C86794124DF_StaticFields, ____emptyArray_5)); }
	inline SqliteStatementU5BU5D_tD500901B92EED6F3B986F00947C0C1F2D94901AF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SqliteStatementU5BU5D_tD500901B92EED6F3B986F00947C0C1F2D94901AF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SqliteStatementU5BU5D_tD500901B92EED6F3B986F00947C0C1F2D94901AF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B  : public RuntimeObject
{
public:
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::site
	RuntimeObject* ___site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::events
	EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * ___events_2;

public:
	inline static int32_t get_offset_of_site_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B, ___site_1)); }
	inline RuntimeObject* get_site_1() const { return ___site_1; }
	inline RuntimeObject** get_address_of_site_1() { return &___site_1; }
	inline void set_site_1(RuntimeObject* value)
	{
		___site_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_1), (void*)value);
	}

	inline static int32_t get_offset_of_events_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B, ___events_2)); }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * get_events_2() const { return ___events_2; }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 ** get_address_of_events_2() { return &___events_2; }
	inline void set_events_2(EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * value)
	{
		___events_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_2), (void*)value);
	}
};

struct MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B_StaticFields
{
public:
	// System.Object System.ComponentModel.MarshalByValueComponent::EventDisposed
	RuntimeObject * ___EventDisposed_0;

public:
	inline static int32_t get_offset_of_EventDisposed_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B_StaticFields, ___EventDisposed_0)); }
	inline RuntimeObject * get_EventDisposed_0() const { return ___EventDisposed_0; }
	inline RuntimeObject ** get_address_of_EventDisposed_0() { return &___EventDisposed_0; }
	inline void set_EventDisposed_0(RuntimeObject * value)
	{
		___EventDisposed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_0), (void*)value);
	}
};


// System.DBNull
struct  DBNull_t7400E04939C2C29699B389B106997892BF53A8E5  : public RuntimeObject
{
public:

public:
};

struct DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields, ___Value_0)); }
	inline DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Data.Common.DbProviderFactory
struct  DbProviderFactory_tD097542E2A2591557E9349A9AA0C1DD301D50DD4  : public RuntimeObject
{
public:

public:
};


// System.Data.Common.SchemaTableColumn
struct  SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD  : public RuntimeObject
{
public:

public:
};

struct SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields
{
public:
	// System.String System.Data.Common.SchemaTableColumn::ColumnName
	String_t* ___ColumnName_0;
	// System.String System.Data.Common.SchemaTableColumn::ColumnOrdinal
	String_t* ___ColumnOrdinal_1;
	// System.String System.Data.Common.SchemaTableColumn::ColumnSize
	String_t* ___ColumnSize_2;
	// System.String System.Data.Common.SchemaTableColumn::NumericPrecision
	String_t* ___NumericPrecision_3;
	// System.String System.Data.Common.SchemaTableColumn::NumericScale
	String_t* ___NumericScale_4;
	// System.String System.Data.Common.SchemaTableColumn::DataType
	String_t* ___DataType_5;
	// System.String System.Data.Common.SchemaTableColumn::ProviderType
	String_t* ___ProviderType_6;
	// System.String System.Data.Common.SchemaTableColumn::NonVersionedProviderType
	String_t* ___NonVersionedProviderType_7;
	// System.String System.Data.Common.SchemaTableColumn::IsLong
	String_t* ___IsLong_8;
	// System.String System.Data.Common.SchemaTableColumn::AllowDBNull
	String_t* ___AllowDBNull_9;
	// System.String System.Data.Common.SchemaTableColumn::IsAliased
	String_t* ___IsAliased_10;
	// System.String System.Data.Common.SchemaTableColumn::IsExpression
	String_t* ___IsExpression_11;
	// System.String System.Data.Common.SchemaTableColumn::IsKey
	String_t* ___IsKey_12;
	// System.String System.Data.Common.SchemaTableColumn::IsUnique
	String_t* ___IsUnique_13;
	// System.String System.Data.Common.SchemaTableColumn::BaseSchemaName
	String_t* ___BaseSchemaName_14;
	// System.String System.Data.Common.SchemaTableColumn::BaseTableName
	String_t* ___BaseTableName_15;
	// System.String System.Data.Common.SchemaTableColumn::BaseColumnName
	String_t* ___BaseColumnName_16;

public:
	inline static int32_t get_offset_of_ColumnName_0() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___ColumnName_0)); }
	inline String_t* get_ColumnName_0() const { return ___ColumnName_0; }
	inline String_t** get_address_of_ColumnName_0() { return &___ColumnName_0; }
	inline void set_ColumnName_0(String_t* value)
	{
		___ColumnName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColumnName_0), (void*)value);
	}

	inline static int32_t get_offset_of_ColumnOrdinal_1() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___ColumnOrdinal_1)); }
	inline String_t* get_ColumnOrdinal_1() const { return ___ColumnOrdinal_1; }
	inline String_t** get_address_of_ColumnOrdinal_1() { return &___ColumnOrdinal_1; }
	inline void set_ColumnOrdinal_1(String_t* value)
	{
		___ColumnOrdinal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColumnOrdinal_1), (void*)value);
	}

	inline static int32_t get_offset_of_ColumnSize_2() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___ColumnSize_2)); }
	inline String_t* get_ColumnSize_2() const { return ___ColumnSize_2; }
	inline String_t** get_address_of_ColumnSize_2() { return &___ColumnSize_2; }
	inline void set_ColumnSize_2(String_t* value)
	{
		___ColumnSize_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColumnSize_2), (void*)value);
	}

	inline static int32_t get_offset_of_NumericPrecision_3() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___NumericPrecision_3)); }
	inline String_t* get_NumericPrecision_3() const { return ___NumericPrecision_3; }
	inline String_t** get_address_of_NumericPrecision_3() { return &___NumericPrecision_3; }
	inline void set_NumericPrecision_3(String_t* value)
	{
		___NumericPrecision_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumericPrecision_3), (void*)value);
	}

	inline static int32_t get_offset_of_NumericScale_4() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___NumericScale_4)); }
	inline String_t* get_NumericScale_4() const { return ___NumericScale_4; }
	inline String_t** get_address_of_NumericScale_4() { return &___NumericScale_4; }
	inline void set_NumericScale_4(String_t* value)
	{
		___NumericScale_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumericScale_4), (void*)value);
	}

	inline static int32_t get_offset_of_DataType_5() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___DataType_5)); }
	inline String_t* get_DataType_5() const { return ___DataType_5; }
	inline String_t** get_address_of_DataType_5() { return &___DataType_5; }
	inline void set_DataType_5(String_t* value)
	{
		___DataType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataType_5), (void*)value);
	}

	inline static int32_t get_offset_of_ProviderType_6() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___ProviderType_6)); }
	inline String_t* get_ProviderType_6() const { return ___ProviderType_6; }
	inline String_t** get_address_of_ProviderType_6() { return &___ProviderType_6; }
	inline void set_ProviderType_6(String_t* value)
	{
		___ProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProviderType_6), (void*)value);
	}

	inline static int32_t get_offset_of_NonVersionedProviderType_7() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___NonVersionedProviderType_7)); }
	inline String_t* get_NonVersionedProviderType_7() const { return ___NonVersionedProviderType_7; }
	inline String_t** get_address_of_NonVersionedProviderType_7() { return &___NonVersionedProviderType_7; }
	inline void set_NonVersionedProviderType_7(String_t* value)
	{
		___NonVersionedProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NonVersionedProviderType_7), (void*)value);
	}

	inline static int32_t get_offset_of_IsLong_8() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___IsLong_8)); }
	inline String_t* get_IsLong_8() const { return ___IsLong_8; }
	inline String_t** get_address_of_IsLong_8() { return &___IsLong_8; }
	inline void set_IsLong_8(String_t* value)
	{
		___IsLong_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsLong_8), (void*)value);
	}

	inline static int32_t get_offset_of_AllowDBNull_9() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___AllowDBNull_9)); }
	inline String_t* get_AllowDBNull_9() const { return ___AllowDBNull_9; }
	inline String_t** get_address_of_AllowDBNull_9() { return &___AllowDBNull_9; }
	inline void set_AllowDBNull_9(String_t* value)
	{
		___AllowDBNull_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllowDBNull_9), (void*)value);
	}

	inline static int32_t get_offset_of_IsAliased_10() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___IsAliased_10)); }
	inline String_t* get_IsAliased_10() const { return ___IsAliased_10; }
	inline String_t** get_address_of_IsAliased_10() { return &___IsAliased_10; }
	inline void set_IsAliased_10(String_t* value)
	{
		___IsAliased_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsAliased_10), (void*)value);
	}

	inline static int32_t get_offset_of_IsExpression_11() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___IsExpression_11)); }
	inline String_t* get_IsExpression_11() const { return ___IsExpression_11; }
	inline String_t** get_address_of_IsExpression_11() { return &___IsExpression_11; }
	inline void set_IsExpression_11(String_t* value)
	{
		___IsExpression_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsExpression_11), (void*)value);
	}

	inline static int32_t get_offset_of_IsKey_12() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___IsKey_12)); }
	inline String_t* get_IsKey_12() const { return ___IsKey_12; }
	inline String_t** get_address_of_IsKey_12() { return &___IsKey_12; }
	inline void set_IsKey_12(String_t* value)
	{
		___IsKey_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsKey_12), (void*)value);
	}

	inline static int32_t get_offset_of_IsUnique_13() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___IsUnique_13)); }
	inline String_t* get_IsUnique_13() const { return ___IsUnique_13; }
	inline String_t** get_address_of_IsUnique_13() { return &___IsUnique_13; }
	inline void set_IsUnique_13(String_t* value)
	{
		___IsUnique_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsUnique_13), (void*)value);
	}

	inline static int32_t get_offset_of_BaseSchemaName_14() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___BaseSchemaName_14)); }
	inline String_t* get_BaseSchemaName_14() const { return ___BaseSchemaName_14; }
	inline String_t** get_address_of_BaseSchemaName_14() { return &___BaseSchemaName_14; }
	inline void set_BaseSchemaName_14(String_t* value)
	{
		___BaseSchemaName_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseSchemaName_14), (void*)value);
	}

	inline static int32_t get_offset_of_BaseTableName_15() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___BaseTableName_15)); }
	inline String_t* get_BaseTableName_15() const { return ___BaseTableName_15; }
	inline String_t** get_address_of_BaseTableName_15() { return &___BaseTableName_15; }
	inline void set_BaseTableName_15(String_t* value)
	{
		___BaseTableName_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseTableName_15), (void*)value);
	}

	inline static int32_t get_offset_of_BaseColumnName_16() { return static_cast<int32_t>(offsetof(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields, ___BaseColumnName_16)); }
	inline String_t* get_BaseColumnName_16() const { return ___BaseColumnName_16; }
	inline String_t** get_address_of_BaseColumnName_16() { return &___BaseColumnName_16; }
	inline void set_BaseColumnName_16(String_t* value)
	{
		___BaseColumnName_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseColumnName_16), (void*)value);
	}
};


// System.Data.Common.SchemaTableOptionalColumn
struct  SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93  : public RuntimeObject
{
public:

public:
};

struct SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields
{
public:
	// System.String System.Data.Common.SchemaTableOptionalColumn::ProviderSpecificDataType
	String_t* ___ProviderSpecificDataType_0;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsAutoIncrement
	String_t* ___IsAutoIncrement_1;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsHidden
	String_t* ___IsHidden_2;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsReadOnly
	String_t* ___IsReadOnly_3;
	// System.String System.Data.Common.SchemaTableOptionalColumn::IsRowVersion
	String_t* ___IsRowVersion_4;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseServerName
	String_t* ___BaseServerName_5;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseCatalogName
	String_t* ___BaseCatalogName_6;
	// System.String System.Data.Common.SchemaTableOptionalColumn::AutoIncrementSeed
	String_t* ___AutoIncrementSeed_7;
	// System.String System.Data.Common.SchemaTableOptionalColumn::AutoIncrementStep
	String_t* ___AutoIncrementStep_8;
	// System.String System.Data.Common.SchemaTableOptionalColumn::DefaultValue
	String_t* ___DefaultValue_9;
	// System.String System.Data.Common.SchemaTableOptionalColumn::Expression
	String_t* ___Expression_10;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseTableNamespace
	String_t* ___BaseTableNamespace_11;
	// System.String System.Data.Common.SchemaTableOptionalColumn::BaseColumnNamespace
	String_t* ___BaseColumnNamespace_12;
	// System.String System.Data.Common.SchemaTableOptionalColumn::ColumnMapping
	String_t* ___ColumnMapping_13;

public:
	inline static int32_t get_offset_of_ProviderSpecificDataType_0() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___ProviderSpecificDataType_0)); }
	inline String_t* get_ProviderSpecificDataType_0() const { return ___ProviderSpecificDataType_0; }
	inline String_t** get_address_of_ProviderSpecificDataType_0() { return &___ProviderSpecificDataType_0; }
	inline void set_ProviderSpecificDataType_0(String_t* value)
	{
		___ProviderSpecificDataType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProviderSpecificDataType_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsAutoIncrement_1() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___IsAutoIncrement_1)); }
	inline String_t* get_IsAutoIncrement_1() const { return ___IsAutoIncrement_1; }
	inline String_t** get_address_of_IsAutoIncrement_1() { return &___IsAutoIncrement_1; }
	inline void set_IsAutoIncrement_1(String_t* value)
	{
		___IsAutoIncrement_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsAutoIncrement_1), (void*)value);
	}

	inline static int32_t get_offset_of_IsHidden_2() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___IsHidden_2)); }
	inline String_t* get_IsHidden_2() const { return ___IsHidden_2; }
	inline String_t** get_address_of_IsHidden_2() { return &___IsHidden_2; }
	inline void set_IsHidden_2(String_t* value)
	{
		___IsHidden_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsHidden_2), (void*)value);
	}

	inline static int32_t get_offset_of_IsReadOnly_3() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___IsReadOnly_3)); }
	inline String_t* get_IsReadOnly_3() const { return ___IsReadOnly_3; }
	inline String_t** get_address_of_IsReadOnly_3() { return &___IsReadOnly_3; }
	inline void set_IsReadOnly_3(String_t* value)
	{
		___IsReadOnly_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsReadOnly_3), (void*)value);
	}

	inline static int32_t get_offset_of_IsRowVersion_4() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___IsRowVersion_4)); }
	inline String_t* get_IsRowVersion_4() const { return ___IsRowVersion_4; }
	inline String_t** get_address_of_IsRowVersion_4() { return &___IsRowVersion_4; }
	inline void set_IsRowVersion_4(String_t* value)
	{
		___IsRowVersion_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsRowVersion_4), (void*)value);
	}

	inline static int32_t get_offset_of_BaseServerName_5() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___BaseServerName_5)); }
	inline String_t* get_BaseServerName_5() const { return ___BaseServerName_5; }
	inline String_t** get_address_of_BaseServerName_5() { return &___BaseServerName_5; }
	inline void set_BaseServerName_5(String_t* value)
	{
		___BaseServerName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseServerName_5), (void*)value);
	}

	inline static int32_t get_offset_of_BaseCatalogName_6() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___BaseCatalogName_6)); }
	inline String_t* get_BaseCatalogName_6() const { return ___BaseCatalogName_6; }
	inline String_t** get_address_of_BaseCatalogName_6() { return &___BaseCatalogName_6; }
	inline void set_BaseCatalogName_6(String_t* value)
	{
		___BaseCatalogName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseCatalogName_6), (void*)value);
	}

	inline static int32_t get_offset_of_AutoIncrementSeed_7() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___AutoIncrementSeed_7)); }
	inline String_t* get_AutoIncrementSeed_7() const { return ___AutoIncrementSeed_7; }
	inline String_t** get_address_of_AutoIncrementSeed_7() { return &___AutoIncrementSeed_7; }
	inline void set_AutoIncrementSeed_7(String_t* value)
	{
		___AutoIncrementSeed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AutoIncrementSeed_7), (void*)value);
	}

	inline static int32_t get_offset_of_AutoIncrementStep_8() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___AutoIncrementStep_8)); }
	inline String_t* get_AutoIncrementStep_8() const { return ___AutoIncrementStep_8; }
	inline String_t** get_address_of_AutoIncrementStep_8() { return &___AutoIncrementStep_8; }
	inline void set_AutoIncrementStep_8(String_t* value)
	{
		___AutoIncrementStep_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AutoIncrementStep_8), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValue_9() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___DefaultValue_9)); }
	inline String_t* get_DefaultValue_9() const { return ___DefaultValue_9; }
	inline String_t** get_address_of_DefaultValue_9() { return &___DefaultValue_9; }
	inline void set_DefaultValue_9(String_t* value)
	{
		___DefaultValue_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValue_9), (void*)value);
	}

	inline static int32_t get_offset_of_Expression_10() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___Expression_10)); }
	inline String_t* get_Expression_10() const { return ___Expression_10; }
	inline String_t** get_address_of_Expression_10() { return &___Expression_10; }
	inline void set_Expression_10(String_t* value)
	{
		___Expression_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Expression_10), (void*)value);
	}

	inline static int32_t get_offset_of_BaseTableNamespace_11() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___BaseTableNamespace_11)); }
	inline String_t* get_BaseTableNamespace_11() const { return ___BaseTableNamespace_11; }
	inline String_t** get_address_of_BaseTableNamespace_11() { return &___BaseTableNamespace_11; }
	inline void set_BaseTableNamespace_11(String_t* value)
	{
		___BaseTableNamespace_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseTableNamespace_11), (void*)value);
	}

	inline static int32_t get_offset_of_BaseColumnNamespace_12() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___BaseColumnNamespace_12)); }
	inline String_t* get_BaseColumnNamespace_12() const { return ___BaseColumnNamespace_12; }
	inline String_t** get_address_of_BaseColumnNamespace_12() { return &___BaseColumnNamespace_12; }
	inline void set_BaseColumnNamespace_12(String_t* value)
	{
		___BaseColumnNamespace_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseColumnNamespace_12), (void*)value);
	}

	inline static int32_t get_offset_of_ColumnMapping_13() { return static_cast<int32_t>(offsetof(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields, ___ColumnMapping_13)); }
	inline String_t* get_ColumnMapping_13() const { return ___ColumnMapping_13; }
	inline String_t** get_address_of_ColumnMapping_13() { return &___ColumnMapping_13; }
	inline void set_ColumnMapping_13(String_t* value)
	{
		___ColumnMapping_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColumnMapping_13), (void*)value);
	}
};


// System.Data.InternalDataCollectionBase
struct  InternalDataCollectionBase_t8A94DFD07E59FFED7EE80E5F808509E3B2DA7334  : public RuntimeObject
{
public:

public:
};

struct InternalDataCollectionBase_t8A94DFD07E59FFED7EE80E5F808509E3B2DA7334_StaticFields
{
public:
	// System.ComponentModel.CollectionChangeEventArgs System.Data.InternalDataCollectionBase::s_refreshEventArgs
	CollectionChangeEventArgs_t63CA165C1F7D765B04CB139EB6577577479E57B0 * ___s_refreshEventArgs_0;

public:
	inline static int32_t get_offset_of_s_refreshEventArgs_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t8A94DFD07E59FFED7EE80E5F808509E3B2DA7334_StaticFields, ___s_refreshEventArgs_0)); }
	inline CollectionChangeEventArgs_t63CA165C1F7D765B04CB139EB6577577479E57B0 * get_s_refreshEventArgs_0() const { return ___s_refreshEventArgs_0; }
	inline CollectionChangeEventArgs_t63CA165C1F7D765B04CB139EB6577577479E57B0 ** get_address_of_s_refreshEventArgs_0() { return &___s_refreshEventArgs_0; }
	inline void set_s_refreshEventArgs_0(CollectionChangeEventArgs_t63CA165C1F7D765B04CB139EB6577577479E57B0 * value)
	{
		___s_refreshEventArgs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_refreshEventArgs_0), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_members_3)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_data_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_types_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_nameToIndex_6)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Version
struct  Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D104
struct  __StaticArrayInitTypeSizeU3D104_tCE4872E97E6DAACAA8F561FCD39E1FBA335D0680 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D104_tCE4872E97E6DAACAA8F561FCD39E1FBA335D0680__padding[104];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D76
struct  __StaticArrayInitTypeSizeU3D76_t3502793FAE9056D016CDDDF8C2BD20AE73057707 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t3502793FAE9056D016CDDDF8C2BD20AE73057707__padding[76];
	};

public:
};


// Mono.Data.Sqlite.SqliteFactory
struct  SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F  : public DbProviderFactory_tD097542E2A2591557E9349A9AA0C1DD301D50DD4
{
public:

public:
};

struct SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields
{
public:
	// System.Type Mono.Data.Sqlite.SqliteFactory::_dbProviderServicesType
	Type_t * ____dbProviderServicesType_0;
	// System.Object Mono.Data.Sqlite.SqliteFactory::_sqliteServices
	RuntimeObject * ____sqliteServices_1;
	// Mono.Data.Sqlite.SqliteFactory Mono.Data.Sqlite.SqliteFactory::Instance
	SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F * ___Instance_2;

public:
	inline static int32_t get_offset_of__dbProviderServicesType_0() { return static_cast<int32_t>(offsetof(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields, ____dbProviderServicesType_0)); }
	inline Type_t * get__dbProviderServicesType_0() const { return ____dbProviderServicesType_0; }
	inline Type_t ** get_address_of__dbProviderServicesType_0() { return &____dbProviderServicesType_0; }
	inline void set__dbProviderServicesType_0(Type_t * value)
	{
		____dbProviderServicesType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dbProviderServicesType_0), (void*)value);
	}

	inline static int32_t get_offset_of__sqliteServices_1() { return static_cast<int32_t>(offsetof(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields, ____sqliteServices_1)); }
	inline RuntimeObject * get__sqliteServices_1() const { return ____sqliteServices_1; }
	inline RuntimeObject ** get_address_of__sqliteServices_1() { return &____sqliteServices_1; }
	inline void set__sqliteServices_1(RuntimeObject * value)
	{
		____sqliteServices_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sqliteServices_1), (void*)value);
	}

	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields, ___Instance_2)); }
	inline SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F * get_Instance_2() const { return ___Instance_2; }
	inline SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_2), (void*)value);
	}
};


// Mono.Data.Sqlite.SqliteKeyReader_KeyInfo
struct  KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D 
{
public:
	// System.String Mono.Data.Sqlite.SqliteKeyReader_KeyInfo::databaseName
	String_t* ___databaseName_0;
	// System.String Mono.Data.Sqlite.SqliteKeyReader_KeyInfo::tableName
	String_t* ___tableName_1;
	// System.String Mono.Data.Sqlite.SqliteKeyReader_KeyInfo::columnName
	String_t* ___columnName_2;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader_KeyInfo::database
	int32_t ___database_3;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader_KeyInfo::rootPage
	int32_t ___rootPage_4;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader_KeyInfo::cursor
	int32_t ___cursor_5;
	// Mono.Data.Sqlite.SqliteKeyReader_KeyQuery Mono.Data.Sqlite.SqliteKeyReader_KeyInfo::query
	KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * ___query_6;
	// System.Int32 Mono.Data.Sqlite.SqliteKeyReader_KeyInfo::column
	int32_t ___column_7;

public:
	inline static int32_t get_offset_of_databaseName_0() { return static_cast<int32_t>(offsetof(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D, ___databaseName_0)); }
	inline String_t* get_databaseName_0() const { return ___databaseName_0; }
	inline String_t** get_address_of_databaseName_0() { return &___databaseName_0; }
	inline void set_databaseName_0(String_t* value)
	{
		___databaseName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databaseName_0), (void*)value);
	}

	inline static int32_t get_offset_of_tableName_1() { return static_cast<int32_t>(offsetof(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D, ___tableName_1)); }
	inline String_t* get_tableName_1() const { return ___tableName_1; }
	inline String_t** get_address_of_tableName_1() { return &___tableName_1; }
	inline void set_tableName_1(String_t* value)
	{
		___tableName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tableName_1), (void*)value);
	}

	inline static int32_t get_offset_of_columnName_2() { return static_cast<int32_t>(offsetof(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D, ___columnName_2)); }
	inline String_t* get_columnName_2() const { return ___columnName_2; }
	inline String_t** get_address_of_columnName_2() { return &___columnName_2; }
	inline void set_columnName_2(String_t* value)
	{
		___columnName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___columnName_2), (void*)value);
	}

	inline static int32_t get_offset_of_database_3() { return static_cast<int32_t>(offsetof(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D, ___database_3)); }
	inline int32_t get_database_3() const { return ___database_3; }
	inline int32_t* get_address_of_database_3() { return &___database_3; }
	inline void set_database_3(int32_t value)
	{
		___database_3 = value;
	}

	inline static int32_t get_offset_of_rootPage_4() { return static_cast<int32_t>(offsetof(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D, ___rootPage_4)); }
	inline int32_t get_rootPage_4() const { return ___rootPage_4; }
	inline int32_t* get_address_of_rootPage_4() { return &___rootPage_4; }
	inline void set_rootPage_4(int32_t value)
	{
		___rootPage_4 = value;
	}

	inline static int32_t get_offset_of_cursor_5() { return static_cast<int32_t>(offsetof(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D, ___cursor_5)); }
	inline int32_t get_cursor_5() const { return ___cursor_5; }
	inline int32_t* get_address_of_cursor_5() { return &___cursor_5; }
	inline void set_cursor_5(int32_t value)
	{
		___cursor_5 = value;
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D, ___query_6)); }
	inline KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * get_query_6() const { return ___query_6; }
	inline KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 ** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___query_6), (void*)value);
	}

	inline static int32_t get_offset_of_column_7() { return static_cast<int32_t>(offsetof(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D, ___column_7)); }
	inline int32_t get_column_7() const { return ___column_7; }
	inline int32_t* get_address_of_column_7() { return &___column_7; }
	inline void set_column_7(int32_t value)
	{
		___column_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
struct KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshaled_pinvoke
{
	char* ___databaseName_0;
	char* ___tableName_1;
	char* ___columnName_2;
	int32_t ___database_3;
	int32_t ___rootPage_4;
	int32_t ___cursor_5;
	KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * ___query_6;
	int32_t ___column_7;
};
// Native definition for COM marshalling of Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
struct KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshaled_com
{
	Il2CppChar* ___databaseName_0;
	Il2CppChar* ___tableName_1;
	Il2CppChar* ___columnName_2;
	int32_t ___database_3;
	int32_t ___rootPage_4;
	int32_t ___cursor_5;
	KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * ___query_6;
	int32_t ___column_7;
};

// Mono.Data.Sqlite.UpdateEventArgs
struct  UpdateEventArgs_t68205249DE9A5CDD03D9D8604BE08987B6569927  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
struct  KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751, ___value_1)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_value_1() const { return ___value_1; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<Mono.Data.Sqlite.SqliteFunctionAttribute>
struct  Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050, ___list_0)); }
	inline List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * get_list_0() const { return ___list_0; }
	inline List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050, ___current_3)); }
	inline SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * get_current_3() const { return ___current_3; }
	inline SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<Mono.Data.Sqlite.SqliteParameter>
struct  Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9, ___list_0)); }
	inline List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * get_list_0() const { return ___list_0; }
	inline List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9, ___current_3)); }
	inline SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * get_current_3() const { return ___current_3; }
	inline SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.ComponentModel.Component
struct  Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473, ___events_3)); }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
	}
};


// System.Data.Common.DbDataReader
struct  DbDataReader_t4CADA7880D6F85CABC4096FA5AE10C327A07CCD8  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};


// System.Data.Common.DbParameter
struct  DbParameter_tEE5AEAD8B429B8EF8994063C151A25A76B94B76F  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};


// System.Data.Common.DbParameterCollection
struct  DbParameterCollection_t6FF3670B12D04B797F09E79DFEA4CF93E92D249C  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};


// System.Data.Common.DbTransaction
struct  DbTransaction_tADC1A857259448190F882AC47E0B18317779FE56  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};


// System.Data.DataRowCollection
struct  DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0  : public InternalDataCollectionBase_t8A94DFD07E59FFED7EE80E5F808509E3B2DA7334
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::_table
	DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * ____table_1;
	// System.Data.DataRowCollection_DataRowTree System.Data.DataRowCollection::_list
	DataRowTree_t885C3CBC17060B726BFEE177710D6E9E57FEA230 * ____list_2;
	// System.Int32 System.Data.DataRowCollection::_nullInList
	int32_t ____nullInList_3;

public:
	inline static int32_t get_offset_of__table_1() { return static_cast<int32_t>(offsetof(DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0, ____table_1)); }
	inline DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * get__table_1() const { return ____table_1; }
	inline DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 ** get_address_of__table_1() { return &____table_1; }
	inline void set__table_1(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * value)
	{
		____table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_1), (void*)value);
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0, ____list_2)); }
	inline DataRowTree_t885C3CBC17060B726BFEE177710D6E9E57FEA230 * get__list_2() const { return ____list_2; }
	inline DataRowTree_t885C3CBC17060B726BFEE177710D6E9E57FEA230 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(DataRowTree_t885C3CBC17060B726BFEE177710D6E9E57FEA230 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_2), (void*)value);
	}

	inline static int32_t get_offset_of__nullInList_3() { return static_cast<int32_t>(offsetof(DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0, ____nullInList_3)); }
	inline int32_t get__nullInList_3() const { return ____nullInList_3; }
	inline int32_t* get_address_of__nullInList_3() { return &____nullInList_3; }
	inline void set__nullInList_3(int32_t value)
	{
		____nullInList_3 = value;
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
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
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
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
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

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
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1D50DE06C0851DADFB9EE493AAE1FD7F9F818318  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1D50DE06C0851DADFB9EE493AAE1FD7F9F818318_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D104 <PrivateImplementationDetails>::1D1E8406C3A31F2298952B0976625EEDFB010FDC
	__StaticArrayInitTypeSizeU3D104_tCE4872E97E6DAACAA8F561FCD39E1FBA335D0680  ___1D1E8406C3A31F2298952B0976625EEDFB010FDC_0;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D76 <PrivateImplementationDetails>::339A8BB625A037BA37DB4DF24A276E689D62172D
	__StaticArrayInitTypeSizeU3D76_t3502793FAE9056D016CDDDF8C2BD20AE73057707  ___339A8BB625A037BA37DB4DF24A276E689D62172D_1;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D76 <PrivateImplementationDetails>::48DE754CC0C776DAD1A85DB81BEFAAADE3A447E9
	__StaticArrayInitTypeSizeU3D76_t3502793FAE9056D016CDDDF8C2BD20AE73057707  ___48DE754CC0C776DAD1A85DB81BEFAAADE3A447E9_2;
	// System.Int64 <PrivateImplementationDetails>::A5F5D64EF7BB696455C9841B907D2E09986EA902
	int64_t ___A5F5D64EF7BB696455C9841B907D2E09986EA902_3;

public:
	inline static int32_t get_offset_of_U31D1E8406C3A31F2298952B0976625EEDFB010FDC_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1D50DE06C0851DADFB9EE493AAE1FD7F9F818318_StaticFields, ___1D1E8406C3A31F2298952B0976625EEDFB010FDC_0)); }
	inline __StaticArrayInitTypeSizeU3D104_tCE4872E97E6DAACAA8F561FCD39E1FBA335D0680  get_U31D1E8406C3A31F2298952B0976625EEDFB010FDC_0() const { return ___1D1E8406C3A31F2298952B0976625EEDFB010FDC_0; }
	inline __StaticArrayInitTypeSizeU3D104_tCE4872E97E6DAACAA8F561FCD39E1FBA335D0680 * get_address_of_U31D1E8406C3A31F2298952B0976625EEDFB010FDC_0() { return &___1D1E8406C3A31F2298952B0976625EEDFB010FDC_0; }
	inline void set_U31D1E8406C3A31F2298952B0976625EEDFB010FDC_0(__StaticArrayInitTypeSizeU3D104_tCE4872E97E6DAACAA8F561FCD39E1FBA335D0680  value)
	{
		___1D1E8406C3A31F2298952B0976625EEDFB010FDC_0 = value;
	}

	inline static int32_t get_offset_of_U3339A8BB625A037BA37DB4DF24A276E689D62172D_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1D50DE06C0851DADFB9EE493AAE1FD7F9F818318_StaticFields, ___339A8BB625A037BA37DB4DF24A276E689D62172D_1)); }
	inline __StaticArrayInitTypeSizeU3D76_t3502793FAE9056D016CDDDF8C2BD20AE73057707  get_U3339A8BB625A037BA37DB4DF24A276E689D62172D_1() const { return ___339A8BB625A037BA37DB4DF24A276E689D62172D_1; }
	inline __StaticArrayInitTypeSizeU3D76_t3502793FAE9056D016CDDDF8C2BD20AE73057707 * get_address_of_U3339A8BB625A037BA37DB4DF24A276E689D62172D_1() { return &___339A8BB625A037BA37DB4DF24A276E689D62172D_1; }
	inline void set_U3339A8BB625A037BA37DB4DF24A276E689D62172D_1(__StaticArrayInitTypeSizeU3D76_t3502793FAE9056D016CDDDF8C2BD20AE73057707  value)
	{
		___339A8BB625A037BA37DB4DF24A276E689D62172D_1 = value;
	}

	inline static int32_t get_offset_of_U348DE754CC0C776DAD1A85DB81BEFAAADE3A447E9_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1D50DE06C0851DADFB9EE493AAE1FD7F9F818318_StaticFields, ___48DE754CC0C776DAD1A85DB81BEFAAADE3A447E9_2)); }
	inline __StaticArrayInitTypeSizeU3D76_t3502793FAE9056D016CDDDF8C2BD20AE73057707  get_U348DE754CC0C776DAD1A85DB81BEFAAADE3A447E9_2() const { return ___48DE754CC0C776DAD1A85DB81BEFAAADE3A447E9_2; }
	inline __StaticArrayInitTypeSizeU3D76_t3502793FAE9056D016CDDDF8C2BD20AE73057707 * get_address_of_U348DE754CC0C776DAD1A85DB81BEFAAADE3A447E9_2() { return &___48DE754CC0C776DAD1A85DB81BEFAAADE3A447E9_2; }
	inline void set_U348DE754CC0C776DAD1A85DB81BEFAAADE3A447E9_2(__StaticArrayInitTypeSizeU3D76_t3502793FAE9056D016CDDDF8C2BD20AE73057707  value)
	{
		___48DE754CC0C776DAD1A85DB81BEFAAADE3A447E9_2 = value;
	}

	inline static int32_t get_offset_of_A5F5D64EF7BB696455C9841B907D2E09986EA902_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1D50DE06C0851DADFB9EE493AAE1FD7F9F818318_StaticFields, ___A5F5D64EF7BB696455C9841B907D2E09986EA902_3)); }
	inline int64_t get_A5F5D64EF7BB696455C9841B907D2E09986EA902_3() const { return ___A5F5D64EF7BB696455C9841B907D2E09986EA902_3; }
	inline int64_t* get_address_of_A5F5D64EF7BB696455C9841B907D2E09986EA902_3() { return &___A5F5D64EF7BB696455C9841B907D2E09986EA902_3; }
	inline void set_A5F5D64EF7BB696455C9841B907D2E09986EA902_3(int64_t value)
	{
		___A5F5D64EF7BB696455C9841B907D2E09986EA902_3 = value;
	}
};


// Mono.Data.Sqlite.FunctionType
struct  FunctionType_t5AD10863E2B25CA14D909726C8252DD0397BD02C 
{
public:
	// System.Int32 Mono.Data.Sqlite.FunctionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FunctionType_t5AD10863E2B25CA14D909726C8252DD0397BD02C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Data.Sqlite.SQLiteDateFormats
struct  SQLiteDateFormats_t6D8B2DDE91A16B7E8E673342B92C73984E4F93D9 
{
public:
	// System.Int32 Mono.Data.Sqlite.SQLiteDateFormats::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SQLiteDateFormats_t6D8B2DDE91A16B7E8E673342B92C73984E4F93D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Data.Sqlite.SQLiteErrorCode
struct  SQLiteErrorCode_tF64A9DAA00F08702461EAB8A7A2F59F95E96351C 
{
public:
	// System.Int32 Mono.Data.Sqlite.SQLiteErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SQLiteErrorCode_tF64A9DAA00F08702461EAB8A7A2F59F95E96351C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Data.Sqlite.SqliteFunction
struct  SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteFunction::_base
	SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * ____base_0;
	// System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction_AggregateData> Mono.Data.Sqlite.SqliteFunction::_contextDataList
	Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * ____contextDataList_1;
	// Mono.Data.Sqlite.SQLiteCallback Mono.Data.Sqlite.SqliteFunction::_InvokeFunc
	SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * ____InvokeFunc_2;
	// Mono.Data.Sqlite.SQLiteCallback Mono.Data.Sqlite.SqliteFunction::_StepFunc
	SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * ____StepFunc_3;
	// Mono.Data.Sqlite.SQLiteFinalCallback Mono.Data.Sqlite.SqliteFunction::_FinalFunc
	SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 * ____FinalFunc_4;
	// Mono.Data.Sqlite.SQLiteCollation Mono.Data.Sqlite.SqliteFunction::_CompareFunc
	SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * ____CompareFunc_5;
	// Mono.Data.Sqlite.SQLiteCollation Mono.Data.Sqlite.SqliteFunction::_CompareFunc16
	SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * ____CompareFunc16_6;
	// System.IntPtr Mono.Data.Sqlite.SqliteFunction::_context
	intptr_t ____context_7;

public:
	inline static int32_t get_offset_of__base_0() { return static_cast<int32_t>(offsetof(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB, ____base_0)); }
	inline SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * get__base_0() const { return ____base_0; }
	inline SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB ** get_address_of__base_0() { return &____base_0; }
	inline void set__base_0(SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * value)
	{
		____base_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____base_0), (void*)value);
	}

	inline static int32_t get_offset_of__contextDataList_1() { return static_cast<int32_t>(offsetof(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB, ____contextDataList_1)); }
	inline Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * get__contextDataList_1() const { return ____contextDataList_1; }
	inline Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 ** get_address_of__contextDataList_1() { return &____contextDataList_1; }
	inline void set__contextDataList_1(Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * value)
	{
		____contextDataList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contextDataList_1), (void*)value);
	}

	inline static int32_t get_offset_of__InvokeFunc_2() { return static_cast<int32_t>(offsetof(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB, ____InvokeFunc_2)); }
	inline SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * get__InvokeFunc_2() const { return ____InvokeFunc_2; }
	inline SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 ** get_address_of__InvokeFunc_2() { return &____InvokeFunc_2; }
	inline void set__InvokeFunc_2(SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * value)
	{
		____InvokeFunc_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____InvokeFunc_2), (void*)value);
	}

	inline static int32_t get_offset_of__StepFunc_3() { return static_cast<int32_t>(offsetof(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB, ____StepFunc_3)); }
	inline SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * get__StepFunc_3() const { return ____StepFunc_3; }
	inline SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 ** get_address_of__StepFunc_3() { return &____StepFunc_3; }
	inline void set__StepFunc_3(SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * value)
	{
		____StepFunc_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____StepFunc_3), (void*)value);
	}

	inline static int32_t get_offset_of__FinalFunc_4() { return static_cast<int32_t>(offsetof(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB, ____FinalFunc_4)); }
	inline SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 * get__FinalFunc_4() const { return ____FinalFunc_4; }
	inline SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 ** get_address_of__FinalFunc_4() { return &____FinalFunc_4; }
	inline void set__FinalFunc_4(SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 * value)
	{
		____FinalFunc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FinalFunc_4), (void*)value);
	}

	inline static int32_t get_offset_of__CompareFunc_5() { return static_cast<int32_t>(offsetof(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB, ____CompareFunc_5)); }
	inline SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * get__CompareFunc_5() const { return ____CompareFunc_5; }
	inline SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 ** get_address_of__CompareFunc_5() { return &____CompareFunc_5; }
	inline void set__CompareFunc_5(SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * value)
	{
		____CompareFunc_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____CompareFunc_5), (void*)value);
	}

	inline static int32_t get_offset_of__CompareFunc16_6() { return static_cast<int32_t>(offsetof(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB, ____CompareFunc16_6)); }
	inline SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * get__CompareFunc16_6() const { return ____CompareFunc16_6; }
	inline SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 ** get_address_of__CompareFunc16_6() { return &____CompareFunc16_6; }
	inline void set__CompareFunc16_6(SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * value)
	{
		____CompareFunc16_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____CompareFunc16_6), (void*)value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB, ____context_7)); }
	inline intptr_t get__context_7() const { return ____context_7; }
	inline intptr_t* get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(intptr_t value)
	{
		____context_7 = value;
	}
};

struct SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_StaticFields
{
public:
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute> Mono.Data.Sqlite.SqliteFunction::_registeredFunctions
	List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * ____registeredFunctions_8;

public:
	inline static int32_t get_offset_of__registeredFunctions_8() { return static_cast<int32_t>(offsetof(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_StaticFields, ____registeredFunctions_8)); }
	inline List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * get__registeredFunctions_8() const { return ____registeredFunctions_8; }
	inline List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF ** get_address_of__registeredFunctions_8() { return &____registeredFunctions_8; }
	inline void set__registeredFunctions_8(List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * value)
	{
		____registeredFunctions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registeredFunctions_8), (void*)value);
	}
};


// Mono.Data.Sqlite.SqliteParameterCollection
struct  SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E  : public DbParameterCollection_t6FF3670B12D04B797F09E79DFEA4CF93E92D249C
{
public:
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteParameterCollection::_command
	SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * ____command_1;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter> Mono.Data.Sqlite.SqliteParameterCollection::_parameterList
	List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * ____parameterList_2;
	// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::_unboundFlag
	bool ____unboundFlag_3;

public:
	inline static int32_t get_offset_of__command_1() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E, ____command_1)); }
	inline SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * get__command_1() const { return ____command_1; }
	inline SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA ** get_address_of__command_1() { return &____command_1; }
	inline void set__command_1(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * value)
	{
		____command_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____command_1), (void*)value);
	}

	inline static int32_t get_offset_of__parameterList_2() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E, ____parameterList_2)); }
	inline List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * get__parameterList_2() const { return ____parameterList_2; }
	inline List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 ** get_address_of__parameterList_2() { return &____parameterList_2; }
	inline void set__parameterList_2(List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * value)
	{
		____parameterList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterList_2), (void*)value);
	}

	inline static int32_t get_offset_of__unboundFlag_3() { return static_cast<int32_t>(offsetof(SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E, ____unboundFlag_3)); }
	inline bool get__unboundFlag_3() const { return ____unboundFlag_3; }
	inline bool* get_address_of__unboundFlag_3() { return &____unboundFlag_3; }
	inline void set__unboundFlag_3(bool value)
	{
		____unboundFlag_3 = value;
	}
};


// Mono.Data.Sqlite.TypeAffinity
struct  TypeAffinity_tD298E57D83C26EDD3D4D55BD6DB89B96E17B1719 
{
public:
	// System.Int32 Mono.Data.Sqlite.TypeAffinity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeAffinity_tD298E57D83C26EDD3D4D55BD6DB89B96E17B1719, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.AppDomain
struct  AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___DomainUnload_13)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ProcessExit_14)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ResourceResolve_15)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___TypeResolve_16)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___FirstChanceException_18)); }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___compatibility_switch_23)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ___default_domain_10)); }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
};

// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,System.Collections.Generic.List`1<System.String>>
struct  Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87, ___dictionary_0)); }
	inline Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87, ___current_3)); }
	inline KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t31E4F1BC642CF668706C9D0FBD9DFDF5EE01CEB9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_tEA062AB37A9A750B33F6CA2898EEF03A4EEA496C 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_tEA062AB37A9A750B33F6CA2898EEF03A4EEA496C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.CommandBehavior
struct  CommandBehavior_t44AD8D7F0B6029BE0E79118321DA1061E90095D9 
{
public:
	// System.Int32 System.Data.CommandBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CommandBehavior_t44AD8D7F0B6029BE0E79118321DA1061E90095D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.Common.CatalogLocation
struct  CatalogLocation_t70D7B8F0E4A2AEF63022025AC052B6A153786370 
{
public:
	// System.Int32 System.Data.Common.CatalogLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CatalogLocation_t70D7B8F0E4A2AEF63022025AC052B6A153786370, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.Common.DbCommand
struct  DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55  : public Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473
{
public:

public:
};


// System.Data.Common.DbConnection
struct  DbConnection_tBCDED104D8D1B6EB4ED87AB6845D3ACF18C9807E  : public Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473
{
public:
	// System.Boolean System.Data.Common.DbConnection::_suppressStateChangeForReconnection
	bool ____suppressStateChangeForReconnection_4;
	// System.Data.StateChangeEventHandler System.Data.Common.DbConnection::StateChange
	StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 * ___StateChange_5;

public:
	inline static int32_t get_offset_of__suppressStateChangeForReconnection_4() { return static_cast<int32_t>(offsetof(DbConnection_tBCDED104D8D1B6EB4ED87AB6845D3ACF18C9807E, ____suppressStateChangeForReconnection_4)); }
	inline bool get__suppressStateChangeForReconnection_4() const { return ____suppressStateChangeForReconnection_4; }
	inline bool* get_address_of__suppressStateChangeForReconnection_4() { return &____suppressStateChangeForReconnection_4; }
	inline void set__suppressStateChangeForReconnection_4(bool value)
	{
		____suppressStateChangeForReconnection_4 = value;
	}

	inline static int32_t get_offset_of_StateChange_5() { return static_cast<int32_t>(offsetof(DbConnection_tBCDED104D8D1B6EB4ED87AB6845D3ACF18C9807E, ___StateChange_5)); }
	inline StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 * get_StateChange_5() const { return ___StateChange_5; }
	inline StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 ** get_address_of_StateChange_5() { return &___StateChange_5; }
	inline void set_StateChange_5(StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 * value)
	{
		___StateChange_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChange_5), (void*)value);
	}
};


// System.Data.ConflictOption
struct  ConflictOption_t8D450868FE5E02770715B6FDC0C1ADC398DB4D58 
{
public:
	// System.Int32 System.Data.ConflictOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConflictOption_t8D450868FE5E02770715B6FDC0C1ADC398DB4D58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.ConnectionState
struct  ConnectionState_tAA8341EF50FDF898227D4EE5243C7841AC0AD0C9 
{
public:
	// System.Int32 System.Data.ConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionState_tAA8341EF50FDF898227D4EE5243C7841AC0AD0C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.DataRowAction
struct  DataRowAction_tDA5E813CDEE8ABF5D37A4A055D75B66DDBEB068F 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataRowAction_tDA5E813CDEE8ABF5D37A4A055D75B66DDBEB068F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.DataRowVersion
struct  DataRowVersion_tE3833F3D79C7978019CE3224F5C1AA86C503A219 
{
public:
	// System.Int32 System.Data.DataRowVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataRowVersion_tE3833F3D79C7978019CE3224F5C1AA86C503A219, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.DbType
struct  DbType_t46DC393C53E0CB52DF1792FD357A7E596C5F432E 
{
public:
	// System.Int32 System.Data.DbType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DbType_t46DC393C53E0CB52DF1792FD357A7E596C5F432E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.IsolationLevel
struct  IsolationLevel_t0E1D740CF5F0A7D8142C442923C3613E02A7DC30 
{
public:
	// System.Int32 System.Data.IsolationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IsolationLevel_t0E1D740CF5F0A7D8142C442923C3613E02A7DC30, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.MissingMappingAction
struct  MissingMappingAction_t4409584F4138F01A0F7C4C3685C631111E98646B 
{
public:
	// System.Int32 System.Data.MissingMappingAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissingMappingAction_t4409584F4138F01A0F7C4C3685C631111E98646B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.ParameterDirection
struct  ParameterDirection_t1DFA1B38D7DEE0B5D5A97F26AF77351FDA8539EB 
{
public:
	// System.Int32 System.Data.ParameterDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterDirection_t1DFA1B38D7DEE0B5D5A97F26AF77351FDA8539EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.SerializationFormat
struct  SerializationFormat_t2E21C627CA0559AFC056EF32704C94DFF740DA4B 
{
public:
	// System.Int32 System.Data.SerializationFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationFormat_t2E21C627CA0559AFC056EF32704C94DFF740DA4B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.UpdateRowSource
struct  UpdateRowSource_t73E9A51EC13A3C2409EF35D94C972313D4F7DB54 
{
public:
	// System.Int32 System.Data.UpdateRowSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateRowSource_t73E9A51EC13A3C2409EF35D94C972313D4F7DB54, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.CompareOptions
struct  CompareOptions_t163DCEA9A0972750294CC1A8348E5CA69E943939 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_t163DCEA9A0972750294CC1A8348E5CA69E943939, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.AssemblyContentType
struct  AssemblyContentType_t9869DE40B7B1976B389F3B6A5A5D18B09E623401 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t9869DE40B7B1976B389F3B6A5A5D18B09E623401, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t7834EDF078E7ECA985AA434A1EA0D95C2A44F256 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t7834EDF078E7ECA985AA434A1EA0D95C2A44F256, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t0CFB73A83469D6AC222B9FE46E81EAC73C2627C7 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t0CFB73A83469D6AC222B9FE46E81EAC73C2627C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.CriticalHandle
struct  CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.IntPtr System.Runtime.InteropServices.CriticalHandle::handle
	intptr_t ___handle_0;
	// System.Boolean System.Runtime.InteropServices.CriticalHandle::_isClosed
	bool ____isClosed_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__isClosed_1() { return static_cast<int32_t>(offsetof(CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9, ____isClosed_1)); }
	inline bool get__isClosed_1() const { return ____isClosed_1; }
	inline bool* get_address_of__isClosed_1() { return &____isClosed_1; }
	inline void set__isClosed_1(bool value)
	{
		____isClosed_1 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t6D16CD7BC584A66A29B702F5FD59DF62BB1BDD3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Data.Sqlite.SqliteCommand
struct  SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA  : public DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55
{
public:
	// System.String Mono.Data.Sqlite.SqliteCommand::_commandText
	String_t* ____commandText_4;
	// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteCommand::_cnn
	SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * ____cnn_5;
	// System.Int64 Mono.Data.Sqlite.SqliteCommand::_version
	int64_t ____version_6;
	// System.WeakReference Mono.Data.Sqlite.SqliteCommand::_activeReader
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ____activeReader_7;
	// System.Int32 Mono.Data.Sqlite.SqliteCommand::_commandTimeout
	int32_t ____commandTimeout_8;
	// System.Boolean Mono.Data.Sqlite.SqliteCommand::_designTimeVisible
	bool ____designTimeVisible_9;
	// System.Data.UpdateRowSource Mono.Data.Sqlite.SqliteCommand::_updateRowSource
	int32_t ____updateRowSource_10;
	// Mono.Data.Sqlite.SqliteParameterCollection Mono.Data.Sqlite.SqliteCommand::_parameterCollection
	SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * ____parameterCollection_11;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement> Mono.Data.Sqlite.SqliteCommand::_statementList
	List_1_t4D51535875D05BE2D5B9E04831852C86794124DF * ____statementList_12;
	// System.String Mono.Data.Sqlite.SqliteCommand::_remainingText
	String_t* ____remainingText_13;
	// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SqliteCommand::_transaction
	SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * ____transaction_14;

public:
	inline static int32_t get_offset_of__commandText_4() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____commandText_4)); }
	inline String_t* get__commandText_4() const { return ____commandText_4; }
	inline String_t** get_address_of__commandText_4() { return &____commandText_4; }
	inline void set__commandText_4(String_t* value)
	{
		____commandText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____commandText_4), (void*)value);
	}

	inline static int32_t get_offset_of__cnn_5() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____cnn_5)); }
	inline SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * get__cnn_5() const { return ____cnn_5; }
	inline SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C ** get_address_of__cnn_5() { return &____cnn_5; }
	inline void set__cnn_5(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * value)
	{
		____cnn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cnn_5), (void*)value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____version_6)); }
	inline int64_t get__version_6() const { return ____version_6; }
	inline int64_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int64_t value)
	{
		____version_6 = value;
	}

	inline static int32_t get_offset_of__activeReader_7() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____activeReader_7)); }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * get__activeReader_7() const { return ____activeReader_7; }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** get_address_of__activeReader_7() { return &____activeReader_7; }
	inline void set__activeReader_7(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * value)
	{
		____activeReader_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReader_7), (void*)value);
	}

	inline static int32_t get_offset_of__commandTimeout_8() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____commandTimeout_8)); }
	inline int32_t get__commandTimeout_8() const { return ____commandTimeout_8; }
	inline int32_t* get_address_of__commandTimeout_8() { return &____commandTimeout_8; }
	inline void set__commandTimeout_8(int32_t value)
	{
		____commandTimeout_8 = value;
	}

	inline static int32_t get_offset_of__designTimeVisible_9() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____designTimeVisible_9)); }
	inline bool get__designTimeVisible_9() const { return ____designTimeVisible_9; }
	inline bool* get_address_of__designTimeVisible_9() { return &____designTimeVisible_9; }
	inline void set__designTimeVisible_9(bool value)
	{
		____designTimeVisible_9 = value;
	}

	inline static int32_t get_offset_of__updateRowSource_10() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____updateRowSource_10)); }
	inline int32_t get__updateRowSource_10() const { return ____updateRowSource_10; }
	inline int32_t* get_address_of__updateRowSource_10() { return &____updateRowSource_10; }
	inline void set__updateRowSource_10(int32_t value)
	{
		____updateRowSource_10 = value;
	}

	inline static int32_t get_offset_of__parameterCollection_11() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____parameterCollection_11)); }
	inline SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * get__parameterCollection_11() const { return ____parameterCollection_11; }
	inline SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E ** get_address_of__parameterCollection_11() { return &____parameterCollection_11; }
	inline void set__parameterCollection_11(SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * value)
	{
		____parameterCollection_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterCollection_11), (void*)value);
	}

	inline static int32_t get_offset_of__statementList_12() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____statementList_12)); }
	inline List_1_t4D51535875D05BE2D5B9E04831852C86794124DF * get__statementList_12() const { return ____statementList_12; }
	inline List_1_t4D51535875D05BE2D5B9E04831852C86794124DF ** get_address_of__statementList_12() { return &____statementList_12; }
	inline void set__statementList_12(List_1_t4D51535875D05BE2D5B9E04831852C86794124DF * value)
	{
		____statementList_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____statementList_12), (void*)value);
	}

	inline static int32_t get_offset_of__remainingText_13() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____remainingText_13)); }
	inline String_t* get__remainingText_13() const { return ____remainingText_13; }
	inline String_t** get_address_of__remainingText_13() { return &____remainingText_13; }
	inline void set__remainingText_13(String_t* value)
	{
		____remainingText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remainingText_13), (void*)value);
	}

	inline static int32_t get_offset_of__transaction_14() { return static_cast<int32_t>(offsetof(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA, ____transaction_14)); }
	inline SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * get__transaction_14() const { return ____transaction_14; }
	inline SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C ** get_address_of__transaction_14() { return &____transaction_14; }
	inline void set__transaction_14(SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * value)
	{
		____transaction_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transaction_14), (void*)value);
	}
};


// Mono.Data.Sqlite.SqliteConnection
struct  SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C  : public DbConnection_tBCDED104D8D1B6EB4ED87AB6845D3ACF18C9807E
{
public:
	// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::_connectionState
	int32_t ____connectionState_6;
	// System.String Mono.Data.Sqlite.SqliteConnection::_connectionString
	String_t* ____connectionString_7;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_transactionLevel
	int32_t ____transactionLevel_8;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteConnection::_defaultIsolation
	int32_t ____defaultIsolation_9;
	// Mono.Data.Sqlite.SQLiteEnlistment Mono.Data.Sqlite.SqliteConnection::_enlistment
	SQLiteEnlistment_tD81E4D7539454DD2AA76C188EB5BFDA50740FB04 * ____enlistment_10;
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteConnection::_sql
	SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * ____sql_11;
	// System.String Mono.Data.Sqlite.SqliteConnection::_dataSource
	String_t* ____dataSource_12;
	// System.Byte[] Mono.Data.Sqlite.SqliteConnection::_password
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____password_13;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_defaultTimeout
	int32_t ____defaultTimeout_14;
	// System.Boolean Mono.Data.Sqlite.SqliteConnection::_binaryGuid
	bool ____binaryGuid_15;
	// System.Int64 Mono.Data.Sqlite.SqliteConnection::_version
	int64_t ____version_16;
	// Mono.Data.Sqlite.SQLiteUpdateEventHandler Mono.Data.Sqlite.SqliteConnection::_updateHandler
	SQLiteUpdateEventHandler_t73CE31C31E61C0FB8A07EFE63323DA4AE678D2DB * ____updateHandler_17;
	// Mono.Data.Sqlite.SQLiteCommitHandler Mono.Data.Sqlite.SqliteConnection::_commitHandler
	SQLiteCommitHandler_t39B1768014E0D0E6B80EDFE773E58A4AB8972E20 * ____commitHandler_18;
	// System.EventHandler Mono.Data.Sqlite.SqliteConnection::_rollbackHandler
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ____rollbackHandler_19;
	// Mono.Data.Sqlite.SQLiteUpdateCallback Mono.Data.Sqlite.SqliteConnection::_updateCallback
	SQLiteUpdateCallback_tB88EE36DAC2DEA9DE2F2B413BBF91A81FB0D480F * ____updateCallback_20;
	// Mono.Data.Sqlite.SQLiteCommitCallback Mono.Data.Sqlite.SqliteConnection::_commitCallback
	SQLiteCommitCallback_t23469643A857ABBFBDE727511CD648AC1A1FC611 * ____commitCallback_21;
	// Mono.Data.Sqlite.SQLiteRollbackCallback Mono.Data.Sqlite.SqliteConnection::_rollbackCallback
	SQLiteRollbackCallback_t33DC59BE1404B8BE92AF830966FF0110918D0F6D * ____rollbackCallback_22;
	// System.Data.StateChangeEventHandler Mono.Data.Sqlite.SqliteConnection::StateChange
	StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 * ___StateChange_23;

public:
	inline static int32_t get_offset_of__connectionState_6() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____connectionState_6)); }
	inline int32_t get__connectionState_6() const { return ____connectionState_6; }
	inline int32_t* get_address_of__connectionState_6() { return &____connectionState_6; }
	inline void set__connectionState_6(int32_t value)
	{
		____connectionState_6 = value;
	}

	inline static int32_t get_offset_of__connectionString_7() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____connectionString_7)); }
	inline String_t* get__connectionString_7() const { return ____connectionString_7; }
	inline String_t** get_address_of__connectionString_7() { return &____connectionString_7; }
	inline void set__connectionString_7(String_t* value)
	{
		____connectionString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionString_7), (void*)value);
	}

	inline static int32_t get_offset_of__transactionLevel_8() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____transactionLevel_8)); }
	inline int32_t get__transactionLevel_8() const { return ____transactionLevel_8; }
	inline int32_t* get_address_of__transactionLevel_8() { return &____transactionLevel_8; }
	inline void set__transactionLevel_8(int32_t value)
	{
		____transactionLevel_8 = value;
	}

	inline static int32_t get_offset_of__defaultIsolation_9() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____defaultIsolation_9)); }
	inline int32_t get__defaultIsolation_9() const { return ____defaultIsolation_9; }
	inline int32_t* get_address_of__defaultIsolation_9() { return &____defaultIsolation_9; }
	inline void set__defaultIsolation_9(int32_t value)
	{
		____defaultIsolation_9 = value;
	}

	inline static int32_t get_offset_of__enlistment_10() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____enlistment_10)); }
	inline SQLiteEnlistment_tD81E4D7539454DD2AA76C188EB5BFDA50740FB04 * get__enlistment_10() const { return ____enlistment_10; }
	inline SQLiteEnlistment_tD81E4D7539454DD2AA76C188EB5BFDA50740FB04 ** get_address_of__enlistment_10() { return &____enlistment_10; }
	inline void set__enlistment_10(SQLiteEnlistment_tD81E4D7539454DD2AA76C188EB5BFDA50740FB04 * value)
	{
		____enlistment_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enlistment_10), (void*)value);
	}

	inline static int32_t get_offset_of__sql_11() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____sql_11)); }
	inline SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * get__sql_11() const { return ____sql_11; }
	inline SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB ** get_address_of__sql_11() { return &____sql_11; }
	inline void set__sql_11(SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * value)
	{
		____sql_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sql_11), (void*)value);
	}

	inline static int32_t get_offset_of__dataSource_12() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____dataSource_12)); }
	inline String_t* get__dataSource_12() const { return ____dataSource_12; }
	inline String_t** get_address_of__dataSource_12() { return &____dataSource_12; }
	inline void set__dataSource_12(String_t* value)
	{
		____dataSource_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSource_12), (void*)value);
	}

	inline static int32_t get_offset_of__password_13() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____password_13)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__password_13() const { return ____password_13; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__password_13() { return &____password_13; }
	inline void set__password_13(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____password_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____password_13), (void*)value);
	}

	inline static int32_t get_offset_of__defaultTimeout_14() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____defaultTimeout_14)); }
	inline int32_t get__defaultTimeout_14() const { return ____defaultTimeout_14; }
	inline int32_t* get_address_of__defaultTimeout_14() { return &____defaultTimeout_14; }
	inline void set__defaultTimeout_14(int32_t value)
	{
		____defaultTimeout_14 = value;
	}

	inline static int32_t get_offset_of__binaryGuid_15() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____binaryGuid_15)); }
	inline bool get__binaryGuid_15() const { return ____binaryGuid_15; }
	inline bool* get_address_of__binaryGuid_15() { return &____binaryGuid_15; }
	inline void set__binaryGuid_15(bool value)
	{
		____binaryGuid_15 = value;
	}

	inline static int32_t get_offset_of__version_16() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____version_16)); }
	inline int64_t get__version_16() const { return ____version_16; }
	inline int64_t* get_address_of__version_16() { return &____version_16; }
	inline void set__version_16(int64_t value)
	{
		____version_16 = value;
	}

	inline static int32_t get_offset_of__updateHandler_17() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____updateHandler_17)); }
	inline SQLiteUpdateEventHandler_t73CE31C31E61C0FB8A07EFE63323DA4AE678D2DB * get__updateHandler_17() const { return ____updateHandler_17; }
	inline SQLiteUpdateEventHandler_t73CE31C31E61C0FB8A07EFE63323DA4AE678D2DB ** get_address_of__updateHandler_17() { return &____updateHandler_17; }
	inline void set__updateHandler_17(SQLiteUpdateEventHandler_t73CE31C31E61C0FB8A07EFE63323DA4AE678D2DB * value)
	{
		____updateHandler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updateHandler_17), (void*)value);
	}

	inline static int32_t get_offset_of__commitHandler_18() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____commitHandler_18)); }
	inline SQLiteCommitHandler_t39B1768014E0D0E6B80EDFE773E58A4AB8972E20 * get__commitHandler_18() const { return ____commitHandler_18; }
	inline SQLiteCommitHandler_t39B1768014E0D0E6B80EDFE773E58A4AB8972E20 ** get_address_of__commitHandler_18() { return &____commitHandler_18; }
	inline void set__commitHandler_18(SQLiteCommitHandler_t39B1768014E0D0E6B80EDFE773E58A4AB8972E20 * value)
	{
		____commitHandler_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____commitHandler_18), (void*)value);
	}

	inline static int32_t get_offset_of__rollbackHandler_19() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____rollbackHandler_19)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get__rollbackHandler_19() const { return ____rollbackHandler_19; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of__rollbackHandler_19() { return &____rollbackHandler_19; }
	inline void set__rollbackHandler_19(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		____rollbackHandler_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rollbackHandler_19), (void*)value);
	}

	inline static int32_t get_offset_of__updateCallback_20() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____updateCallback_20)); }
	inline SQLiteUpdateCallback_tB88EE36DAC2DEA9DE2F2B413BBF91A81FB0D480F * get__updateCallback_20() const { return ____updateCallback_20; }
	inline SQLiteUpdateCallback_tB88EE36DAC2DEA9DE2F2B413BBF91A81FB0D480F ** get_address_of__updateCallback_20() { return &____updateCallback_20; }
	inline void set__updateCallback_20(SQLiteUpdateCallback_tB88EE36DAC2DEA9DE2F2B413BBF91A81FB0D480F * value)
	{
		____updateCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updateCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of__commitCallback_21() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____commitCallback_21)); }
	inline SQLiteCommitCallback_t23469643A857ABBFBDE727511CD648AC1A1FC611 * get__commitCallback_21() const { return ____commitCallback_21; }
	inline SQLiteCommitCallback_t23469643A857ABBFBDE727511CD648AC1A1FC611 ** get_address_of__commitCallback_21() { return &____commitCallback_21; }
	inline void set__commitCallback_21(SQLiteCommitCallback_t23469643A857ABBFBDE727511CD648AC1A1FC611 * value)
	{
		____commitCallback_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____commitCallback_21), (void*)value);
	}

	inline static int32_t get_offset_of__rollbackCallback_22() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ____rollbackCallback_22)); }
	inline SQLiteRollbackCallback_t33DC59BE1404B8BE92AF830966FF0110918D0F6D * get__rollbackCallback_22() const { return ____rollbackCallback_22; }
	inline SQLiteRollbackCallback_t33DC59BE1404B8BE92AF830966FF0110918D0F6D ** get_address_of__rollbackCallback_22() { return &____rollbackCallback_22; }
	inline void set__rollbackCallback_22(SQLiteRollbackCallback_t33DC59BE1404B8BE92AF830966FF0110918D0F6D * value)
	{
		____rollbackCallback_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rollbackCallback_22), (void*)value);
	}

	inline static int32_t get_offset_of_StateChange_23() { return static_cast<int32_t>(offsetof(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C, ___StateChange_23)); }
	inline StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 * get_StateChange_23() const { return ___StateChange_23; }
	inline StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 ** get_address_of_StateChange_23() { return &___StateChange_23; }
	inline void set_StateChange_23(StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 * value)
	{
		___StateChange_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChange_23), (void*)value);
	}
};


// Mono.Data.Sqlite.SqliteConvert
struct  SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343  : public RuntimeObject
{
public:
	// Mono.Data.Sqlite.SQLiteDateFormats Mono.Data.Sqlite.SqliteConvert::_datetimeFormat
	int32_t ____datetimeFormat_3;

public:
	inline static int32_t get_offset_of__datetimeFormat_3() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343, ____datetimeFormat_3)); }
	inline int32_t get__datetimeFormat_3() const { return ____datetimeFormat_3; }
	inline int32_t* get_address_of__datetimeFormat_3() { return &____datetimeFormat_3; }
	inline void set__datetimeFormat_3(int32_t value)
	{
		____datetimeFormat_3 = value;
	}
};

struct SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields
{
public:
	// System.DateTime Mono.Data.Sqlite.SqliteConvert::UnixEpoch
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___UnixEpoch_0;
	// System.String[] Mono.Data.Sqlite.SqliteConvert::_datetimeFormats
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____datetimeFormats_1;
	// System.Text.Encoding Mono.Data.Sqlite.SqliteConvert::_utf8
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____utf8_2;
	// System.Type[] Mono.Data.Sqlite.SqliteConvert::_affinitytotype
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____affinitytotype_4;
	// System.Data.DbType[] Mono.Data.Sqlite.SqliteConvert::_typetodbtype
	DbTypeU5BU5D_t1989AABCD9738543E7FF7B0F5D510F4A7EC82B1E* ____typetodbtype_5;
	// System.Int32[] Mono.Data.Sqlite.SqliteConvert::_dbtypetocolumnsize
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____dbtypetocolumnsize_6;
	// System.Object[] Mono.Data.Sqlite.SqliteConvert::_dbtypetonumericprecision
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____dbtypetonumericprecision_7;
	// System.Object[] Mono.Data.Sqlite.SqliteConvert::_dbtypetonumericscale
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____dbtypetonumericscale_8;
	// Mono.Data.Sqlite.SQLiteTypeNames[] Mono.Data.Sqlite.SqliteConvert::_dbtypeNames
	SQLiteTypeNamesU5BU5D_t55FB08B3D72DA4B8F41703007530E234A1E15D82* ____dbtypeNames_9;
	// System.Type[] Mono.Data.Sqlite.SqliteConvert::_dbtypeToType
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____dbtypeToType_10;
	// Mono.Data.Sqlite.TypeAffinity[] Mono.Data.Sqlite.SqliteConvert::_typecodeAffinities
	TypeAffinityU5BU5D_t1574A60D980179EFE10308793C649882DD63EF87* ____typecodeAffinities_11;
	// Mono.Data.Sqlite.SQLiteTypeNames[] Mono.Data.Sqlite.SqliteConvert::_typeNames
	SQLiteTypeNamesU5BU5D_t55FB08B3D72DA4B8F41703007530E234A1E15D82* ____typeNames_12;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___UnixEpoch_0 = value;
	}

	inline static int32_t get_offset_of__datetimeFormats_1() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____datetimeFormats_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__datetimeFormats_1() const { return ____datetimeFormats_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__datetimeFormats_1() { return &____datetimeFormats_1; }
	inline void set__datetimeFormats_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____datetimeFormats_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____datetimeFormats_1), (void*)value);
	}

	inline static int32_t get_offset_of__utf8_2() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____utf8_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__utf8_2() const { return ____utf8_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__utf8_2() { return &____utf8_2; }
	inline void set__utf8_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____utf8_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____utf8_2), (void*)value);
	}

	inline static int32_t get_offset_of__affinitytotype_4() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____affinitytotype_4)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get__affinitytotype_4() const { return ____affinitytotype_4; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of__affinitytotype_4() { return &____affinitytotype_4; }
	inline void set__affinitytotype_4(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		____affinitytotype_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____affinitytotype_4), (void*)value);
	}

	inline static int32_t get_offset_of__typetodbtype_5() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____typetodbtype_5)); }
	inline DbTypeU5BU5D_t1989AABCD9738543E7FF7B0F5D510F4A7EC82B1E* get__typetodbtype_5() const { return ____typetodbtype_5; }
	inline DbTypeU5BU5D_t1989AABCD9738543E7FF7B0F5D510F4A7EC82B1E** get_address_of__typetodbtype_5() { return &____typetodbtype_5; }
	inline void set__typetodbtype_5(DbTypeU5BU5D_t1989AABCD9738543E7FF7B0F5D510F4A7EC82B1E* value)
	{
		____typetodbtype_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typetodbtype_5), (void*)value);
	}

	inline static int32_t get_offset_of__dbtypetocolumnsize_6() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____dbtypetocolumnsize_6)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__dbtypetocolumnsize_6() const { return ____dbtypetocolumnsize_6; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__dbtypetocolumnsize_6() { return &____dbtypetocolumnsize_6; }
	inline void set__dbtypetocolumnsize_6(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____dbtypetocolumnsize_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dbtypetocolumnsize_6), (void*)value);
	}

	inline static int32_t get_offset_of__dbtypetonumericprecision_7() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____dbtypetonumericprecision_7)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__dbtypetonumericprecision_7() const { return ____dbtypetonumericprecision_7; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__dbtypetonumericprecision_7() { return &____dbtypetonumericprecision_7; }
	inline void set__dbtypetonumericprecision_7(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____dbtypetonumericprecision_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dbtypetonumericprecision_7), (void*)value);
	}

	inline static int32_t get_offset_of__dbtypetonumericscale_8() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____dbtypetonumericscale_8)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__dbtypetonumericscale_8() const { return ____dbtypetonumericscale_8; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__dbtypetonumericscale_8() { return &____dbtypetonumericscale_8; }
	inline void set__dbtypetonumericscale_8(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____dbtypetonumericscale_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dbtypetonumericscale_8), (void*)value);
	}

	inline static int32_t get_offset_of__dbtypeNames_9() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____dbtypeNames_9)); }
	inline SQLiteTypeNamesU5BU5D_t55FB08B3D72DA4B8F41703007530E234A1E15D82* get__dbtypeNames_9() const { return ____dbtypeNames_9; }
	inline SQLiteTypeNamesU5BU5D_t55FB08B3D72DA4B8F41703007530E234A1E15D82** get_address_of__dbtypeNames_9() { return &____dbtypeNames_9; }
	inline void set__dbtypeNames_9(SQLiteTypeNamesU5BU5D_t55FB08B3D72DA4B8F41703007530E234A1E15D82* value)
	{
		____dbtypeNames_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dbtypeNames_9), (void*)value);
	}

	inline static int32_t get_offset_of__dbtypeToType_10() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____dbtypeToType_10)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get__dbtypeToType_10() const { return ____dbtypeToType_10; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of__dbtypeToType_10() { return &____dbtypeToType_10; }
	inline void set__dbtypeToType_10(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		____dbtypeToType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dbtypeToType_10), (void*)value);
	}

	inline static int32_t get_offset_of__typecodeAffinities_11() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____typecodeAffinities_11)); }
	inline TypeAffinityU5BU5D_t1574A60D980179EFE10308793C649882DD63EF87* get__typecodeAffinities_11() const { return ____typecodeAffinities_11; }
	inline TypeAffinityU5BU5D_t1574A60D980179EFE10308793C649882DD63EF87** get_address_of__typecodeAffinities_11() { return &____typecodeAffinities_11; }
	inline void set__typecodeAffinities_11(TypeAffinityU5BU5D_t1574A60D980179EFE10308793C649882DD63EF87* value)
	{
		____typecodeAffinities_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typecodeAffinities_11), (void*)value);
	}

	inline static int32_t get_offset_of__typeNames_12() { return static_cast<int32_t>(offsetof(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_StaticFields, ____typeNames_12)); }
	inline SQLiteTypeNamesU5BU5D_t55FB08B3D72DA4B8F41703007530E234A1E15D82* get__typeNames_12() const { return ____typeNames_12; }
	inline SQLiteTypeNamesU5BU5D_t55FB08B3D72DA4B8F41703007530E234A1E15D82** get_address_of__typeNames_12() { return &____typeNames_12; }
	inline void set__typeNames_12(SQLiteTypeNamesU5BU5D_t55FB08B3D72DA4B8F41703007530E234A1E15D82* value)
	{
		____typeNames_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeNames_12), (void*)value);
	}
};


// Mono.Data.Sqlite.SqliteDataReader
struct  SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB  : public DbDataReader_t4CADA7880D6F85CABC4096FA5AE10C327A07CCD8
{
public:
	// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteDataReader::_command
	SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * ____command_1;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_activeStatementIndex
	int32_t ____activeStatementIndex_2;
	// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SqliteDataReader::_activeStatement
	SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * ____activeStatement_3;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_readingState
	int32_t ____readingState_4;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_rowsAffected
	int32_t ____rowsAffected_5;
	// System.Int32 Mono.Data.Sqlite.SqliteDataReader::_fieldCount
	int32_t ____fieldCount_6;
	// Mono.Data.Sqlite.SQLiteType[] Mono.Data.Sqlite.SqliteDataReader::_fieldTypeArray
	SQLiteTypeU5BU5D_tF6C4F4F31FF9485FBF7C92B08961A04411EB928E* ____fieldTypeArray_7;
	// System.Data.CommandBehavior Mono.Data.Sqlite.SqliteDataReader::_commandBehavior
	int32_t ____commandBehavior_8;
	// System.Boolean Mono.Data.Sqlite.SqliteDataReader::_disposeCommand
	bool ____disposeCommand_9;
	// Mono.Data.Sqlite.SqliteKeyReader Mono.Data.Sqlite.SqliteDataReader::_keyInfo
	SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * ____keyInfo_10;
	// System.Int64 Mono.Data.Sqlite.SqliteDataReader::_version
	int64_t ____version_11;

public:
	inline static int32_t get_offset_of__command_1() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____command_1)); }
	inline SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * get__command_1() const { return ____command_1; }
	inline SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA ** get_address_of__command_1() { return &____command_1; }
	inline void set__command_1(SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * value)
	{
		____command_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____command_1), (void*)value);
	}

	inline static int32_t get_offset_of__activeStatementIndex_2() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____activeStatementIndex_2)); }
	inline int32_t get__activeStatementIndex_2() const { return ____activeStatementIndex_2; }
	inline int32_t* get_address_of__activeStatementIndex_2() { return &____activeStatementIndex_2; }
	inline void set__activeStatementIndex_2(int32_t value)
	{
		____activeStatementIndex_2 = value;
	}

	inline static int32_t get_offset_of__activeStatement_3() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____activeStatement_3)); }
	inline SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * get__activeStatement_3() const { return ____activeStatement_3; }
	inline SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 ** get_address_of__activeStatement_3() { return &____activeStatement_3; }
	inline void set__activeStatement_3(SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * value)
	{
		____activeStatement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeStatement_3), (void*)value);
	}

	inline static int32_t get_offset_of__readingState_4() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____readingState_4)); }
	inline int32_t get__readingState_4() const { return ____readingState_4; }
	inline int32_t* get_address_of__readingState_4() { return &____readingState_4; }
	inline void set__readingState_4(int32_t value)
	{
		____readingState_4 = value;
	}

	inline static int32_t get_offset_of__rowsAffected_5() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____rowsAffected_5)); }
	inline int32_t get__rowsAffected_5() const { return ____rowsAffected_5; }
	inline int32_t* get_address_of__rowsAffected_5() { return &____rowsAffected_5; }
	inline void set__rowsAffected_5(int32_t value)
	{
		____rowsAffected_5 = value;
	}

	inline static int32_t get_offset_of__fieldCount_6() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____fieldCount_6)); }
	inline int32_t get__fieldCount_6() const { return ____fieldCount_6; }
	inline int32_t* get_address_of__fieldCount_6() { return &____fieldCount_6; }
	inline void set__fieldCount_6(int32_t value)
	{
		____fieldCount_6 = value;
	}

	inline static int32_t get_offset_of__fieldTypeArray_7() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____fieldTypeArray_7)); }
	inline SQLiteTypeU5BU5D_tF6C4F4F31FF9485FBF7C92B08961A04411EB928E* get__fieldTypeArray_7() const { return ____fieldTypeArray_7; }
	inline SQLiteTypeU5BU5D_tF6C4F4F31FF9485FBF7C92B08961A04411EB928E** get_address_of__fieldTypeArray_7() { return &____fieldTypeArray_7; }
	inline void set__fieldTypeArray_7(SQLiteTypeU5BU5D_tF6C4F4F31FF9485FBF7C92B08961A04411EB928E* value)
	{
		____fieldTypeArray_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fieldTypeArray_7), (void*)value);
	}

	inline static int32_t get_offset_of__commandBehavior_8() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____commandBehavior_8)); }
	inline int32_t get__commandBehavior_8() const { return ____commandBehavior_8; }
	inline int32_t* get_address_of__commandBehavior_8() { return &____commandBehavior_8; }
	inline void set__commandBehavior_8(int32_t value)
	{
		____commandBehavior_8 = value;
	}

	inline static int32_t get_offset_of__disposeCommand_9() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____disposeCommand_9)); }
	inline bool get__disposeCommand_9() const { return ____disposeCommand_9; }
	inline bool* get_address_of__disposeCommand_9() { return &____disposeCommand_9; }
	inline void set__disposeCommand_9(bool value)
	{
		____disposeCommand_9 = value;
	}

	inline static int32_t get_offset_of__keyInfo_10() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____keyInfo_10)); }
	inline SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * get__keyInfo_10() const { return ____keyInfo_10; }
	inline SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 ** get_address_of__keyInfo_10() { return &____keyInfo_10; }
	inline void set__keyInfo_10(SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * value)
	{
		____keyInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of__version_11() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB, ____version_11)); }
	inline int64_t get__version_11() const { return ____version_11; }
	inline int64_t* get_address_of__version_11() { return &____version_11; }
	inline void set__version_11(int64_t value)
	{
		____version_11 = value;
	}
};

struct SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB_StaticFields
{
public:
	// System.Boolean Mono.Data.Sqlite.SqliteDataReader::hasColumnMetadataSupport
	bool ___hasColumnMetadataSupport_12;

public:
	inline static int32_t get_offset_of_hasColumnMetadataSupport_12() { return static_cast<int32_t>(offsetof(SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB_StaticFields, ___hasColumnMetadataSupport_12)); }
	inline bool get_hasColumnMetadataSupport_12() const { return ___hasColumnMetadataSupport_12; }
	inline bool* get_address_of_hasColumnMetadataSupport_12() { return &___hasColumnMetadataSupport_12; }
	inline void set_hasColumnMetadataSupport_12(bool value)
	{
		___hasColumnMetadataSupport_12 = value;
	}
};


// Mono.Data.Sqlite.SqliteFunctionAttribute
struct  SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String Mono.Data.Sqlite.SqliteFunctionAttribute::_name
	String_t* ____name_0;
	// System.Int32 Mono.Data.Sqlite.SqliteFunctionAttribute::_arguments
	int32_t ____arguments_1;
	// Mono.Data.Sqlite.FunctionType Mono.Data.Sqlite.SqliteFunctionAttribute::_functionType
	int32_t ____functionType_2;
	// System.Type Mono.Data.Sqlite.SqliteFunctionAttribute::_instanceType
	Type_t * ____instanceType_3;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_0), (void*)value);
	}

	inline static int32_t get_offset_of__arguments_1() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4, ____arguments_1)); }
	inline int32_t get__arguments_1() const { return ____arguments_1; }
	inline int32_t* get_address_of__arguments_1() { return &____arguments_1; }
	inline void set__arguments_1(int32_t value)
	{
		____arguments_1 = value;
	}

	inline static int32_t get_offset_of__functionType_2() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4, ____functionType_2)); }
	inline int32_t get__functionType_2() const { return ____functionType_2; }
	inline int32_t* get_address_of__functionType_2() { return &____functionType_2; }
	inline void set__functionType_2(int32_t value)
	{
		____functionType_2 = value;
	}

	inline static int32_t get_offset_of__instanceType_3() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4, ____instanceType_3)); }
	inline Type_t * get__instanceType_3() const { return ____instanceType_3; }
	inline Type_t ** get_address_of__instanceType_3() { return &____instanceType_3; }
	inline void set__instanceType_3(Type_t * value)
	{
		____instanceType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instanceType_3), (void*)value);
	}
};


// Mono.Data.Sqlite.SqliteFunctionEx
struct  SqliteFunctionEx_tC3D68AFE7A958C0DE3167D08B2AE365AB84AB164  : public SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB
{
public:

public:
};


// Mono.Data.Sqlite.SqliteParameter
struct  SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A  : public DbParameter_tEE5AEAD8B429B8EF8994063C151A25A76B94B76F
{
public:
	// System.Int32 Mono.Data.Sqlite.SqliteParameter::_dbType
	int32_t ____dbType_1;
	// System.Data.DataRowVersion Mono.Data.Sqlite.SqliteParameter::_rowVersion
	int32_t ____rowVersion_2;
	// System.Object Mono.Data.Sqlite.SqliteParameter::_objValue
	RuntimeObject * ____objValue_3;
	// System.String Mono.Data.Sqlite.SqliteParameter::_sourceColumn
	String_t* ____sourceColumn_4;
	// System.String Mono.Data.Sqlite.SqliteParameter::_parameterName
	String_t* ____parameterName_5;
	// System.Int32 Mono.Data.Sqlite.SqliteParameter::_dataSize
	int32_t ____dataSize_6;
	// System.Boolean Mono.Data.Sqlite.SqliteParameter::_nullable
	bool ____nullable_7;
	// System.Boolean Mono.Data.Sqlite.SqliteParameter::_nullMapping
	bool ____nullMapping_8;

public:
	inline static int32_t get_offset_of__dbType_1() { return static_cast<int32_t>(offsetof(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A, ____dbType_1)); }
	inline int32_t get__dbType_1() const { return ____dbType_1; }
	inline int32_t* get_address_of__dbType_1() { return &____dbType_1; }
	inline void set__dbType_1(int32_t value)
	{
		____dbType_1 = value;
	}

	inline static int32_t get_offset_of__rowVersion_2() { return static_cast<int32_t>(offsetof(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A, ____rowVersion_2)); }
	inline int32_t get__rowVersion_2() const { return ____rowVersion_2; }
	inline int32_t* get_address_of__rowVersion_2() { return &____rowVersion_2; }
	inline void set__rowVersion_2(int32_t value)
	{
		____rowVersion_2 = value;
	}

	inline static int32_t get_offset_of__objValue_3() { return static_cast<int32_t>(offsetof(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A, ____objValue_3)); }
	inline RuntimeObject * get__objValue_3() const { return ____objValue_3; }
	inline RuntimeObject ** get_address_of__objValue_3() { return &____objValue_3; }
	inline void set__objValue_3(RuntimeObject * value)
	{
		____objValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objValue_3), (void*)value);
	}

	inline static int32_t get_offset_of__sourceColumn_4() { return static_cast<int32_t>(offsetof(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A, ____sourceColumn_4)); }
	inline String_t* get__sourceColumn_4() const { return ____sourceColumn_4; }
	inline String_t** get_address_of__sourceColumn_4() { return &____sourceColumn_4; }
	inline void set__sourceColumn_4(String_t* value)
	{
		____sourceColumn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sourceColumn_4), (void*)value);
	}

	inline static int32_t get_offset_of__parameterName_5() { return static_cast<int32_t>(offsetof(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A, ____parameterName_5)); }
	inline String_t* get__parameterName_5() const { return ____parameterName_5; }
	inline String_t** get_address_of__parameterName_5() { return &____parameterName_5; }
	inline void set__parameterName_5(String_t* value)
	{
		____parameterName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterName_5), (void*)value);
	}

	inline static int32_t get_offset_of__dataSize_6() { return static_cast<int32_t>(offsetof(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A, ____dataSize_6)); }
	inline int32_t get__dataSize_6() const { return ____dataSize_6; }
	inline int32_t* get_address_of__dataSize_6() { return &____dataSize_6; }
	inline void set__dataSize_6(int32_t value)
	{
		____dataSize_6 = value;
	}

	inline static int32_t get_offset_of__nullable_7() { return static_cast<int32_t>(offsetof(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A, ____nullable_7)); }
	inline bool get__nullable_7() const { return ____nullable_7; }
	inline bool* get_address_of__nullable_7() { return &____nullable_7; }
	inline void set__nullable_7(bool value)
	{
		____nullable_7 = value;
	}

	inline static int32_t get_offset_of__nullMapping_8() { return static_cast<int32_t>(offsetof(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A, ____nullMapping_8)); }
	inline bool get__nullMapping_8() const { return ____nullMapping_8; }
	inline bool* get_address_of__nullMapping_8() { return &____nullMapping_8; }
	inline void set__nullMapping_8(bool value)
	{
		____nullMapping_8 = value;
	}
};


// Mono.Data.Sqlite.SqliteStatementHandle
struct  SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB  : public CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9
{
public:

public:
};


// Mono.Data.Sqlite.SqliteTransaction
struct  SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C  : public DbTransaction_tADC1A857259448190F882AC47E0B18317779FE56
{
public:
	// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteTransaction::_cnn
	SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * ____cnn_1;
	// System.Int64 Mono.Data.Sqlite.SqliteTransaction::_version
	int64_t ____version_2;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteTransaction::_level
	int32_t ____level_3;

public:
	inline static int32_t get_offset_of__cnn_1() { return static_cast<int32_t>(offsetof(SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C, ____cnn_1)); }
	inline SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * get__cnn_1() const { return ____cnn_1; }
	inline SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C ** get_address_of__cnn_1() { return &____cnn_1; }
	inline void set__cnn_1(SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * value)
	{
		____cnn_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cnn_1), (void*)value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C, ____version_2)); }
	inline int64_t get__version_2() const { return ____version_2; }
	inline int64_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int64_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__level_3() { return static_cast<int32_t>(offsetof(SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C, ____level_3)); }
	inline int32_t get__level_3() const { return ____level_3; }
	inline int32_t* get_address_of__level_3() { return &____level_3; }
	inline void set__level_3(int32_t value)
	{
		____level_3 = value;
	}
};


// System.Data.Common.DbCommandBuilder
struct  DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4  : public Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473
{
public:
	// System.Data.Common.DbDataAdapter System.Data.Common.DbCommandBuilder::_dataAdapter
	DbDataAdapter_tD491D36DE53638EDEC3069CE96717AD87D4225CA * ____dataAdapter_4;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_insertCommand
	DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 * ____insertCommand_5;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_updateCommand
	DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 * ____updateCommand_6;
	// System.Data.Common.DbCommand System.Data.Common.DbCommandBuilder::_deleteCommand
	DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 * ____deleteCommand_7;
	// System.Data.MissingMappingAction System.Data.Common.DbCommandBuilder::_missingMappingAction
	int32_t ____missingMappingAction_8;
	// System.Data.ConflictOption System.Data.Common.DbCommandBuilder::_conflictDetection
	int32_t ____conflictDetection_9;
	// System.Boolean System.Data.Common.DbCommandBuilder::_setAllValues
	bool ____setAllValues_10;
	// System.Boolean System.Data.Common.DbCommandBuilder::_hasPartialPrimaryKey
	bool ____hasPartialPrimaryKey_11;
	// System.Data.DataTable System.Data.Common.DbCommandBuilder::_dbSchemaTable
	DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * ____dbSchemaTable_12;
	// System.Data.Common.DbSchemaRow[] System.Data.Common.DbCommandBuilder::_dbSchemaRows
	DbSchemaRowU5BU5D_tBD2A74D689F73CA84C5390B2A586C6AE904C9A31* ____dbSchemaRows_13;
	// System.String[] System.Data.Common.DbCommandBuilder::_sourceColumnNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____sourceColumnNames_14;
	// System.Data.Common.DbCommandBuilder_ParameterNames System.Data.Common.DbCommandBuilder::_parameterNames
	ParameterNames_tC8571837DB584F0E7ED76EEF1B6C27507CEB0755 * ____parameterNames_15;
	// System.String System.Data.Common.DbCommandBuilder::_quotedBaseTableName
	String_t* ____quotedBaseTableName_16;
	// System.Data.Common.CatalogLocation System.Data.Common.DbCommandBuilder::_catalogLocation
	int32_t ____catalogLocation_17;
	// System.String System.Data.Common.DbCommandBuilder::_catalogSeparator
	String_t* ____catalogSeparator_18;
	// System.String System.Data.Common.DbCommandBuilder::_schemaSeparator
	String_t* ____schemaSeparator_19;
	// System.String System.Data.Common.DbCommandBuilder::_quotePrefix
	String_t* ____quotePrefix_20;
	// System.String System.Data.Common.DbCommandBuilder::_quoteSuffix
	String_t* ____quoteSuffix_21;
	// System.String System.Data.Common.DbCommandBuilder::_parameterNamePattern
	String_t* ____parameterNamePattern_22;
	// System.String System.Data.Common.DbCommandBuilder::_parameterMarkerFormat
	String_t* ____parameterMarkerFormat_23;
	// System.Int32 System.Data.Common.DbCommandBuilder::_parameterNameMaxLength
	int32_t ____parameterNameMaxLength_24;

public:
	inline static int32_t get_offset_of__dataAdapter_4() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____dataAdapter_4)); }
	inline DbDataAdapter_tD491D36DE53638EDEC3069CE96717AD87D4225CA * get__dataAdapter_4() const { return ____dataAdapter_4; }
	inline DbDataAdapter_tD491D36DE53638EDEC3069CE96717AD87D4225CA ** get_address_of__dataAdapter_4() { return &____dataAdapter_4; }
	inline void set__dataAdapter_4(DbDataAdapter_tD491D36DE53638EDEC3069CE96717AD87D4225CA * value)
	{
		____dataAdapter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataAdapter_4), (void*)value);
	}

	inline static int32_t get_offset_of__insertCommand_5() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____insertCommand_5)); }
	inline DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 * get__insertCommand_5() const { return ____insertCommand_5; }
	inline DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 ** get_address_of__insertCommand_5() { return &____insertCommand_5; }
	inline void set__insertCommand_5(DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 * value)
	{
		____insertCommand_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____insertCommand_5), (void*)value);
	}

	inline static int32_t get_offset_of__updateCommand_6() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____updateCommand_6)); }
	inline DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 * get__updateCommand_6() const { return ____updateCommand_6; }
	inline DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 ** get_address_of__updateCommand_6() { return &____updateCommand_6; }
	inline void set__updateCommand_6(DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 * value)
	{
		____updateCommand_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updateCommand_6), (void*)value);
	}

	inline static int32_t get_offset_of__deleteCommand_7() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____deleteCommand_7)); }
	inline DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 * get__deleteCommand_7() const { return ____deleteCommand_7; }
	inline DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 ** get_address_of__deleteCommand_7() { return &____deleteCommand_7; }
	inline void set__deleteCommand_7(DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55 * value)
	{
		____deleteCommand_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____deleteCommand_7), (void*)value);
	}

	inline static int32_t get_offset_of__missingMappingAction_8() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____missingMappingAction_8)); }
	inline int32_t get__missingMappingAction_8() const { return ____missingMappingAction_8; }
	inline int32_t* get_address_of__missingMappingAction_8() { return &____missingMappingAction_8; }
	inline void set__missingMappingAction_8(int32_t value)
	{
		____missingMappingAction_8 = value;
	}

	inline static int32_t get_offset_of__conflictDetection_9() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____conflictDetection_9)); }
	inline int32_t get__conflictDetection_9() const { return ____conflictDetection_9; }
	inline int32_t* get_address_of__conflictDetection_9() { return &____conflictDetection_9; }
	inline void set__conflictDetection_9(int32_t value)
	{
		____conflictDetection_9 = value;
	}

	inline static int32_t get_offset_of__setAllValues_10() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____setAllValues_10)); }
	inline bool get__setAllValues_10() const { return ____setAllValues_10; }
	inline bool* get_address_of__setAllValues_10() { return &____setAllValues_10; }
	inline void set__setAllValues_10(bool value)
	{
		____setAllValues_10 = value;
	}

	inline static int32_t get_offset_of__hasPartialPrimaryKey_11() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____hasPartialPrimaryKey_11)); }
	inline bool get__hasPartialPrimaryKey_11() const { return ____hasPartialPrimaryKey_11; }
	inline bool* get_address_of__hasPartialPrimaryKey_11() { return &____hasPartialPrimaryKey_11; }
	inline void set__hasPartialPrimaryKey_11(bool value)
	{
		____hasPartialPrimaryKey_11 = value;
	}

	inline static int32_t get_offset_of__dbSchemaTable_12() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____dbSchemaTable_12)); }
	inline DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * get__dbSchemaTable_12() const { return ____dbSchemaTable_12; }
	inline DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 ** get_address_of__dbSchemaTable_12() { return &____dbSchemaTable_12; }
	inline void set__dbSchemaTable_12(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * value)
	{
		____dbSchemaTable_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dbSchemaTable_12), (void*)value);
	}

	inline static int32_t get_offset_of__dbSchemaRows_13() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____dbSchemaRows_13)); }
	inline DbSchemaRowU5BU5D_tBD2A74D689F73CA84C5390B2A586C6AE904C9A31* get__dbSchemaRows_13() const { return ____dbSchemaRows_13; }
	inline DbSchemaRowU5BU5D_tBD2A74D689F73CA84C5390B2A586C6AE904C9A31** get_address_of__dbSchemaRows_13() { return &____dbSchemaRows_13; }
	inline void set__dbSchemaRows_13(DbSchemaRowU5BU5D_tBD2A74D689F73CA84C5390B2A586C6AE904C9A31* value)
	{
		____dbSchemaRows_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dbSchemaRows_13), (void*)value);
	}

	inline static int32_t get_offset_of__sourceColumnNames_14() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____sourceColumnNames_14)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__sourceColumnNames_14() const { return ____sourceColumnNames_14; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__sourceColumnNames_14() { return &____sourceColumnNames_14; }
	inline void set__sourceColumnNames_14(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____sourceColumnNames_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sourceColumnNames_14), (void*)value);
	}

	inline static int32_t get_offset_of__parameterNames_15() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____parameterNames_15)); }
	inline ParameterNames_tC8571837DB584F0E7ED76EEF1B6C27507CEB0755 * get__parameterNames_15() const { return ____parameterNames_15; }
	inline ParameterNames_tC8571837DB584F0E7ED76EEF1B6C27507CEB0755 ** get_address_of__parameterNames_15() { return &____parameterNames_15; }
	inline void set__parameterNames_15(ParameterNames_tC8571837DB584F0E7ED76EEF1B6C27507CEB0755 * value)
	{
		____parameterNames_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterNames_15), (void*)value);
	}

	inline static int32_t get_offset_of__quotedBaseTableName_16() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____quotedBaseTableName_16)); }
	inline String_t* get__quotedBaseTableName_16() const { return ____quotedBaseTableName_16; }
	inline String_t** get_address_of__quotedBaseTableName_16() { return &____quotedBaseTableName_16; }
	inline void set__quotedBaseTableName_16(String_t* value)
	{
		____quotedBaseTableName_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____quotedBaseTableName_16), (void*)value);
	}

	inline static int32_t get_offset_of__catalogLocation_17() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____catalogLocation_17)); }
	inline int32_t get__catalogLocation_17() const { return ____catalogLocation_17; }
	inline int32_t* get_address_of__catalogLocation_17() { return &____catalogLocation_17; }
	inline void set__catalogLocation_17(int32_t value)
	{
		____catalogLocation_17 = value;
	}

	inline static int32_t get_offset_of__catalogSeparator_18() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____catalogSeparator_18)); }
	inline String_t* get__catalogSeparator_18() const { return ____catalogSeparator_18; }
	inline String_t** get_address_of__catalogSeparator_18() { return &____catalogSeparator_18; }
	inline void set__catalogSeparator_18(String_t* value)
	{
		____catalogSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____catalogSeparator_18), (void*)value);
	}

	inline static int32_t get_offset_of__schemaSeparator_19() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____schemaSeparator_19)); }
	inline String_t* get__schemaSeparator_19() const { return ____schemaSeparator_19; }
	inline String_t** get_address_of__schemaSeparator_19() { return &____schemaSeparator_19; }
	inline void set__schemaSeparator_19(String_t* value)
	{
		____schemaSeparator_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schemaSeparator_19), (void*)value);
	}

	inline static int32_t get_offset_of__quotePrefix_20() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____quotePrefix_20)); }
	inline String_t* get__quotePrefix_20() const { return ____quotePrefix_20; }
	inline String_t** get_address_of__quotePrefix_20() { return &____quotePrefix_20; }
	inline void set__quotePrefix_20(String_t* value)
	{
		____quotePrefix_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____quotePrefix_20), (void*)value);
	}

	inline static int32_t get_offset_of__quoteSuffix_21() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____quoteSuffix_21)); }
	inline String_t* get__quoteSuffix_21() const { return ____quoteSuffix_21; }
	inline String_t** get_address_of__quoteSuffix_21() { return &____quoteSuffix_21; }
	inline void set__quoteSuffix_21(String_t* value)
	{
		____quoteSuffix_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____quoteSuffix_21), (void*)value);
	}

	inline static int32_t get_offset_of__parameterNamePattern_22() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____parameterNamePattern_22)); }
	inline String_t* get__parameterNamePattern_22() const { return ____parameterNamePattern_22; }
	inline String_t** get_address_of__parameterNamePattern_22() { return &____parameterNamePattern_22; }
	inline void set__parameterNamePattern_22(String_t* value)
	{
		____parameterNamePattern_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterNamePattern_22), (void*)value);
	}

	inline static int32_t get_offset_of__parameterMarkerFormat_23() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____parameterMarkerFormat_23)); }
	inline String_t* get__parameterMarkerFormat_23() const { return ____parameterMarkerFormat_23; }
	inline String_t** get_address_of__parameterMarkerFormat_23() { return &____parameterMarkerFormat_23; }
	inline void set__parameterMarkerFormat_23(String_t* value)
	{
		____parameterMarkerFormat_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterMarkerFormat_23), (void*)value);
	}

	inline static int32_t get_offset_of__parameterNameMaxLength_24() { return static_cast<int32_t>(offsetof(DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4, ____parameterNameMaxLength_24)); }
	inline int32_t get__parameterNameMaxLength_24() const { return ____parameterNameMaxLength_24; }
	inline int32_t* get_address_of__parameterNameMaxLength_24() { return &____parameterNameMaxLength_24; }
	inline void set__parameterNameMaxLength_24(int32_t value)
	{
		____parameterNameMaxLength_24 = value;
	}
};


// System.Data.DataRow
struct  DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * ____table_0;
	// System.Data.DataColumnCollection System.Data.DataRow::_columns
	DataColumnCollection_t398628201192B6EF9DB23A650DAB1E79CEA1796A * ____columns_1;
	// System.Int32 System.Data.DataRow::_oldRecord
	int32_t ____oldRecord_2;
	// System.Int32 System.Data.DataRow::_newRecord
	int32_t ____newRecord_3;
	// System.Int32 System.Data.DataRow::_tempRecord
	int32_t ____tempRecord_4;
	// System.Int64 System.Data.DataRow::_rowID
	int64_t ____rowID_5;
	// System.Data.DataRowAction System.Data.DataRow::_action
	int32_t ____action_6;
	// System.Boolean System.Data.DataRow::_inChangingEvent
	bool ____inChangingEvent_7;
	// System.Boolean System.Data.DataRow::_inDeletingEvent
	bool ____inDeletingEvent_8;
	// System.Boolean System.Data.DataRow::_inCascade
	bool ____inCascade_9;
	// System.Data.DataColumn System.Data.DataRow::_lastChangedColumn
	DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D * ____lastChangedColumn_10;
	// System.Int32 System.Data.DataRow::_countColumnChange
	int32_t ____countColumnChange_11;
	// System.Data.DataError System.Data.DataRow::_error
	DataError_tD52C55EF7C5FABAA58B11DBB0C55BE671F18F786 * ____error_12;
	// System.Int32 System.Data.DataRow::_rbTreeNodeId
	int32_t ____rbTreeNodeId_13;
	// System.Int32 System.Data.DataRow::_objectID
	int32_t ____objectID_15;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____table_0)); }
	inline DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * get__table_0() const { return ____table_0; }
	inline DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_0), (void*)value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____columns_1)); }
	inline DataColumnCollection_t398628201192B6EF9DB23A650DAB1E79CEA1796A * get__columns_1() const { return ____columns_1; }
	inline DataColumnCollection_t398628201192B6EF9DB23A650DAB1E79CEA1796A ** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnCollection_t398628201192B6EF9DB23A650DAB1E79CEA1796A * value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columns_1), (void*)value);
	}

	inline static int32_t get_offset_of__oldRecord_2() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____oldRecord_2)); }
	inline int32_t get__oldRecord_2() const { return ____oldRecord_2; }
	inline int32_t* get_address_of__oldRecord_2() { return &____oldRecord_2; }
	inline void set__oldRecord_2(int32_t value)
	{
		____oldRecord_2 = value;
	}

	inline static int32_t get_offset_of__newRecord_3() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____newRecord_3)); }
	inline int32_t get__newRecord_3() const { return ____newRecord_3; }
	inline int32_t* get_address_of__newRecord_3() { return &____newRecord_3; }
	inline void set__newRecord_3(int32_t value)
	{
		____newRecord_3 = value;
	}

	inline static int32_t get_offset_of__tempRecord_4() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____tempRecord_4)); }
	inline int32_t get__tempRecord_4() const { return ____tempRecord_4; }
	inline int32_t* get_address_of__tempRecord_4() { return &____tempRecord_4; }
	inline void set__tempRecord_4(int32_t value)
	{
		____tempRecord_4 = value;
	}

	inline static int32_t get_offset_of__rowID_5() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____rowID_5)); }
	inline int64_t get__rowID_5() const { return ____rowID_5; }
	inline int64_t* get_address_of__rowID_5() { return &____rowID_5; }
	inline void set__rowID_5(int64_t value)
	{
		____rowID_5 = value;
	}

	inline static int32_t get_offset_of__action_6() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____action_6)); }
	inline int32_t get__action_6() const { return ____action_6; }
	inline int32_t* get_address_of__action_6() { return &____action_6; }
	inline void set__action_6(int32_t value)
	{
		____action_6 = value;
	}

	inline static int32_t get_offset_of__inChangingEvent_7() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____inChangingEvent_7)); }
	inline bool get__inChangingEvent_7() const { return ____inChangingEvent_7; }
	inline bool* get_address_of__inChangingEvent_7() { return &____inChangingEvent_7; }
	inline void set__inChangingEvent_7(bool value)
	{
		____inChangingEvent_7 = value;
	}

	inline static int32_t get_offset_of__inDeletingEvent_8() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____inDeletingEvent_8)); }
	inline bool get__inDeletingEvent_8() const { return ____inDeletingEvent_8; }
	inline bool* get_address_of__inDeletingEvent_8() { return &____inDeletingEvent_8; }
	inline void set__inDeletingEvent_8(bool value)
	{
		____inDeletingEvent_8 = value;
	}

	inline static int32_t get_offset_of__inCascade_9() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____inCascade_9)); }
	inline bool get__inCascade_9() const { return ____inCascade_9; }
	inline bool* get_address_of__inCascade_9() { return &____inCascade_9; }
	inline void set__inCascade_9(bool value)
	{
		____inCascade_9 = value;
	}

	inline static int32_t get_offset_of__lastChangedColumn_10() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____lastChangedColumn_10)); }
	inline DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D * get__lastChangedColumn_10() const { return ____lastChangedColumn_10; }
	inline DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D ** get_address_of__lastChangedColumn_10() { return &____lastChangedColumn_10; }
	inline void set__lastChangedColumn_10(DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D * value)
	{
		____lastChangedColumn_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastChangedColumn_10), (void*)value);
	}

	inline static int32_t get_offset_of__countColumnChange_11() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____countColumnChange_11)); }
	inline int32_t get__countColumnChange_11() const { return ____countColumnChange_11; }
	inline int32_t* get_address_of__countColumnChange_11() { return &____countColumnChange_11; }
	inline void set__countColumnChange_11(int32_t value)
	{
		____countColumnChange_11 = value;
	}

	inline static int32_t get_offset_of__error_12() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____error_12)); }
	inline DataError_tD52C55EF7C5FABAA58B11DBB0C55BE671F18F786 * get__error_12() const { return ____error_12; }
	inline DataError_tD52C55EF7C5FABAA58B11DBB0C55BE671F18F786 ** get_address_of__error_12() { return &____error_12; }
	inline void set__error_12(DataError_tD52C55EF7C5FABAA58B11DBB0C55BE671F18F786 * value)
	{
		____error_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_12), (void*)value);
	}

	inline static int32_t get_offset_of__rbTreeNodeId_13() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____rbTreeNodeId_13)); }
	inline int32_t get__rbTreeNodeId_13() const { return ____rbTreeNodeId_13; }
	inline int32_t* get_address_of__rbTreeNodeId_13() { return &____rbTreeNodeId_13; }
	inline void set__rbTreeNodeId_13(int32_t value)
	{
		____rbTreeNodeId_13 = value;
	}

	inline static int32_t get_offset_of__objectID_15() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B, ____objectID_15)); }
	inline int32_t get__objectID_15() const { return ____objectID_15; }
	inline int32_t* get_address_of__objectID_15() { return &____objectID_15; }
	inline void set__objectID_15(int32_t value)
	{
		____objectID_15 = value;
	}
};

struct DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B_StaticFields
{
public:
	// System.Int32 System.Data.DataRow::s_objectTypeCount
	int32_t ___s_objectTypeCount_14;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_14() { return static_cast<int32_t>(offsetof(DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B_StaticFields, ___s_objectTypeCount_14)); }
	inline int32_t get_s_objectTypeCount_14() const { return ___s_objectTypeCount_14; }
	inline int32_t* get_address_of_s_objectTypeCount_14() { return &___s_objectTypeCount_14; }
	inline void set_s_objectTypeCount_14(int32_t value)
	{
		___s_objectTypeCount_14 = value;
	}
};


// System.Data.DataTable
struct  DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863  : public MarshalByValueComponent_tADC0E481D4D19F965AB659F9038A1D7D47FA636B
{
public:
	// System.Data.DataSet System.Data.DataTable::_dataSet
	DataSet_t6D7B0F1EC989A523B88F4BDABABD8B828631E1B8 * ____dataSet_3;
	// System.Data.DataView System.Data.DataTable::_defaultView
	DataView_t6489092472EA45039A541483F0E43D26C6723E4C * ____defaultView_4;
	// System.Int64 System.Data.DataTable::_nextRowID
	int64_t ____nextRowID_5;
	// System.Data.DataRowCollection System.Data.DataTable::_rowCollection
	DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * ____rowCollection_6;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t398628201192B6EF9DB23A650DAB1E79CEA1796A * ____columnCollection_7;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t349E02C7469F2E3DF17D381D9BCACF8B7E7CCF62 * ____constraintCollection_8;
	// System.Int32 System.Data.DataTable::_elementColumnCount
	int32_t ____elementColumnCount_9;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelationsCollection
	DataRelationCollection_tB592C84F2EE6B60DFB933CC67B8DE1065098269B * ____parentRelationsCollection_10;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelationsCollection
	DataRelationCollection_tB592C84F2EE6B60DFB933CC67B8DE1065098269B * ____childRelationsCollection_11;
	// System.Data.RecordManager System.Data.DataTable::_recordManager
	RecordManager_t923097B51945932B6775CB40CF53683A864A3C65 * ____recordManager_12;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_indexes
	List_1_tA40E855828D2BD351AE459CC0CEFC5246704CDEA * ____indexes_13;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_shadowIndexes
	List_1_tA40E855828D2BD351AE459CC0CEFC5246704CDEA * ____shadowIndexes_14;
	// System.Int32 System.Data.DataTable::_shadowCount
	int32_t ____shadowCount_15;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_tA766717BE7105BC47681AD434BF66003DEDB68F4 * ____extendedProperties_16;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_17;
	// System.String System.Data.DataTable::_tableNamespace
	String_t* ____tableNamespace_18;
	// System.String System.Data.DataTable::_tablePrefix
	String_t* ____tablePrefix_19;
	// System.Data.DataExpression System.Data.DataTable::_displayExpression
	DataExpression_tECCBF728C87CAF0185856F73F7DB54BB94EF094D * ____displayExpression_20;
	// System.Boolean System.Data.DataTable::_fNestedInDataset
	bool ____fNestedInDataset_21;
	// System.Globalization.CultureInfo System.Data.DataTable::_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ____culture_22;
	// System.Boolean System.Data.DataTable::_cultureUserSet
	bool ____cultureUserSet_23;
	// System.Globalization.CompareInfo System.Data.DataTable::_compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ____compareInfo_24;
	// System.Globalization.CompareOptions System.Data.DataTable::_compareFlags
	int32_t ____compareFlags_25;
	// System.IFormatProvider System.Data.DataTable::_formatProvider
	RuntimeObject* ____formatProvider_26;
	// System.StringComparer System.Data.DataTable::_hashCodeProvider
	StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * ____hashCodeProvider_27;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_28;
	// System.Boolean System.Data.DataTable::_caseSensitiveUserSet
	bool ____caseSensitiveUserSet_29;
	// System.String System.Data.DataTable::_encodedTableName
	String_t* ____encodedTableName_30;
	// System.Data.DataColumn System.Data.DataTable::_xmlText
	DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D * ____xmlText_31;
	// System.Data.DataColumn System.Data.DataTable::_colUnique
	DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D * ____colUnique_32;
	// System.Decimal System.Data.DataTable::_minOccurs
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ____minOccurs_33;
	// System.Decimal System.Data.DataTable::_maxOccurs
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ____maxOccurs_34;
	// System.Boolean System.Data.DataTable::_repeatableElement
	bool ____repeatableElement_35;
	// System.Object System.Data.DataTable::_typeName
	RuntimeObject * ____typeName_36;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKey
	UniqueConstraint_t291F6C173D4820C1ACAE889805C3649A44DC1D22 * ____primaryKey_37;
	// System.Data.IndexField[] System.Data.DataTable::_primaryIndex
	IndexFieldU5BU5D_tE0FF1739A3834C07A83EAF2EC3B32E14CC967548* ____primaryIndex_38;
	// System.Data.DataColumn[] System.Data.DataTable::_delayedSetPrimaryKey
	DataColumnU5BU5D_t5E093A4F34F11AFCA04923FE842DCC5ED1B398BC* ____delayedSetPrimaryKey_39;
	// System.Data.Index System.Data.DataTable::_loadIndex
	Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 * ____loadIndex_40;
	// System.Data.Index System.Data.DataTable::_loadIndexwithOriginalAdded
	Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 * ____loadIndexwithOriginalAdded_41;
	// System.Data.Index System.Data.DataTable::_loadIndexwithCurrentDeleted
	Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 * ____loadIndexwithCurrentDeleted_42;
	// System.Int32 System.Data.DataTable::_suspendIndexEvents
	int32_t ____suspendIndexEvents_43;
	// System.Boolean System.Data.DataTable::_savedEnforceConstraints
	bool ____savedEnforceConstraints_44;
	// System.Boolean System.Data.DataTable::_inDataLoad
	bool ____inDataLoad_45;
	// System.Boolean System.Data.DataTable::_initialLoad
	bool ____initialLoad_46;
	// System.Boolean System.Data.DataTable::_schemaLoading
	bool ____schemaLoading_47;
	// System.Boolean System.Data.DataTable::_enforceConstraints
	bool ____enforceConstraints_48;
	// System.Boolean System.Data.DataTable::_suspendEnforceConstraints
	bool ____suspendEnforceConstraints_49;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_50;
	// System.Boolean System.Data.DataTable::_inLoad
	bool ____inLoad_51;
	// System.Boolean System.Data.DataTable::_fInLoadDiffgram
	bool ____fInLoadDiffgram_52;
	// System.Byte System.Data.DataTable::_isTypedDataTable
	uint8_t ____isTypedDataTable_53;
	// System.Data.DataRow[] System.Data.DataTable::_emptyDataRowArray
	DataRowU5BU5D_tCA5181B3540ACD7702228F224388EA4B4F5885CA* ____emptyDataRowArray_54;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorCollectionCache
	PropertyDescriptorCollection_t19FEFDD6CEF7609BB10282A4B52C3C09A04B41A2 * ____propertyDescriptorCollectionCache_55;
	// System.Data.DataRelation[] System.Data.DataTable::_nestedParentRelations
	DataRelationU5BU5D_t705BDBA68D45143524D5C70D82EA04F0B676C15B* ____nestedParentRelations_56;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataTable::_dependentColumns
	List_1_t70187E1F2F9140ADB155B98F17D5D765F84B9204 * ____dependentColumns_57;
	// System.Boolean System.Data.DataTable::_mergingData
	bool ____mergingData_58;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangedDelegate
	DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * ____onRowChangedDelegate_59;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangingDelegate
	DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * ____onRowChangingDelegate_60;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletingDelegate
	DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * ____onRowDeletingDelegate_61;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletedDelegate
	DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * ____onRowDeletedDelegate_62;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangedDelegate
	DataColumnChangeEventHandler_tC860540A9091FE1BB1DF718AB44874A54585FE07 * ____onColumnChangedDelegate_63;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangingDelegate
	DataColumnChangeEventHandler_tC860540A9091FE1BB1DF718AB44874A54585FE07 * ____onColumnChangingDelegate_64;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearingDelegate
	DataTableClearEventHandler_t661CB2EAAB20D6574190694F4DDD86BDD06FA982 * ____onTableClearingDelegate_65;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearedDelegate
	DataTableClearEventHandler_t661CB2EAAB20D6574190694F4DDD86BDD06FA982 * ____onTableClearedDelegate_66;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::_onTableNewRowDelegate
	DataTableNewRowEventHandler_tA2A38967A9C8796075CBF1C31585C4C6E3C6F43B * ____onTableNewRowDelegate_67;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataTable::_onPropertyChangingDelegate
	PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * ____onPropertyChangingDelegate_68;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t1686A02FA53DF491D826A981024C255668E94CC6 * ____rowBuilder_69;
	// System.Collections.Generic.List`1<System.Data.DataView> System.Data.DataTable::_delayedViews
	List_1_tD0DF2B545957BB968E2D9198A87C3B784F3837F8 * ____delayedViews_70;
	// System.Collections.Generic.List`1<System.Data.DataViewListener> System.Data.DataTable::_dataViewListeners
	List_1_t1748BC8A0D25EE6A55AA236787A9AA35B5AF8808 * ____dataViewListeners_71;
	// System.Collections.Hashtable System.Data.DataTable::_rowDiffId
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ____rowDiffId_72;
	// System.Threading.ReaderWriterLockSlim System.Data.DataTable::_indexesLock
	ReaderWriterLockSlim_tD820AC67812C645B2F8C16ABB4DE694A19D6A315 * ____indexesLock_73;
	// System.Int32 System.Data.DataTable::_ukColumnPositionForInference
	int32_t ____ukColumnPositionForInference_74;
	// System.Data.SerializationFormat System.Data.DataTable::_remotingFormat
	int32_t ____remotingFormat_75;
	// System.Int32 System.Data.DataTable::_objectID
	int32_t ____objectID_77;

public:
	inline static int32_t get_offset_of__dataSet_3() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____dataSet_3)); }
	inline DataSet_t6D7B0F1EC989A523B88F4BDABABD8B828631E1B8 * get__dataSet_3() const { return ____dataSet_3; }
	inline DataSet_t6D7B0F1EC989A523B88F4BDABABD8B828631E1B8 ** get_address_of__dataSet_3() { return &____dataSet_3; }
	inline void set__dataSet_3(DataSet_t6D7B0F1EC989A523B88F4BDABABD8B828631E1B8 * value)
	{
		____dataSet_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSet_3), (void*)value);
	}

	inline static int32_t get_offset_of__defaultView_4() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____defaultView_4)); }
	inline DataView_t6489092472EA45039A541483F0E43D26C6723E4C * get__defaultView_4() const { return ____defaultView_4; }
	inline DataView_t6489092472EA45039A541483F0E43D26C6723E4C ** get_address_of__defaultView_4() { return &____defaultView_4; }
	inline void set__defaultView_4(DataView_t6489092472EA45039A541483F0E43D26C6723E4C * value)
	{
		____defaultView_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultView_4), (void*)value);
	}

	inline static int32_t get_offset_of__nextRowID_5() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____nextRowID_5)); }
	inline int64_t get__nextRowID_5() const { return ____nextRowID_5; }
	inline int64_t* get_address_of__nextRowID_5() { return &____nextRowID_5; }
	inline void set__nextRowID_5(int64_t value)
	{
		____nextRowID_5 = value;
	}

	inline static int32_t get_offset_of__rowCollection_6() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____rowCollection_6)); }
	inline DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * get__rowCollection_6() const { return ____rowCollection_6; }
	inline DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 ** get_address_of__rowCollection_6() { return &____rowCollection_6; }
	inline void set__rowCollection_6(DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * value)
	{
		____rowCollection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowCollection_6), (void*)value);
	}

	inline static int32_t get_offset_of__columnCollection_7() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____columnCollection_7)); }
	inline DataColumnCollection_t398628201192B6EF9DB23A650DAB1E79CEA1796A * get__columnCollection_7() const { return ____columnCollection_7; }
	inline DataColumnCollection_t398628201192B6EF9DB23A650DAB1E79CEA1796A ** get_address_of__columnCollection_7() { return &____columnCollection_7; }
	inline void set__columnCollection_7(DataColumnCollection_t398628201192B6EF9DB23A650DAB1E79CEA1796A * value)
	{
		____columnCollection_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____columnCollection_7), (void*)value);
	}

	inline static int32_t get_offset_of__constraintCollection_8() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____constraintCollection_8)); }
	inline ConstraintCollection_t349E02C7469F2E3DF17D381D9BCACF8B7E7CCF62 * get__constraintCollection_8() const { return ____constraintCollection_8; }
	inline ConstraintCollection_t349E02C7469F2E3DF17D381D9BCACF8B7E7CCF62 ** get_address_of__constraintCollection_8() { return &____constraintCollection_8; }
	inline void set__constraintCollection_8(ConstraintCollection_t349E02C7469F2E3DF17D381D9BCACF8B7E7CCF62 * value)
	{
		____constraintCollection_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constraintCollection_8), (void*)value);
	}

	inline static int32_t get_offset_of__elementColumnCount_9() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____elementColumnCount_9)); }
	inline int32_t get__elementColumnCount_9() const { return ____elementColumnCount_9; }
	inline int32_t* get_address_of__elementColumnCount_9() { return &____elementColumnCount_9; }
	inline void set__elementColumnCount_9(int32_t value)
	{
		____elementColumnCount_9 = value;
	}

	inline static int32_t get_offset_of__parentRelationsCollection_10() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____parentRelationsCollection_10)); }
	inline DataRelationCollection_tB592C84F2EE6B60DFB933CC67B8DE1065098269B * get__parentRelationsCollection_10() const { return ____parentRelationsCollection_10; }
	inline DataRelationCollection_tB592C84F2EE6B60DFB933CC67B8DE1065098269B ** get_address_of__parentRelationsCollection_10() { return &____parentRelationsCollection_10; }
	inline void set__parentRelationsCollection_10(DataRelationCollection_tB592C84F2EE6B60DFB933CC67B8DE1065098269B * value)
	{
		____parentRelationsCollection_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parentRelationsCollection_10), (void*)value);
	}

	inline static int32_t get_offset_of__childRelationsCollection_11() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____childRelationsCollection_11)); }
	inline DataRelationCollection_tB592C84F2EE6B60DFB933CC67B8DE1065098269B * get__childRelationsCollection_11() const { return ____childRelationsCollection_11; }
	inline DataRelationCollection_tB592C84F2EE6B60DFB933CC67B8DE1065098269B ** get_address_of__childRelationsCollection_11() { return &____childRelationsCollection_11; }
	inline void set__childRelationsCollection_11(DataRelationCollection_tB592C84F2EE6B60DFB933CC67B8DE1065098269B * value)
	{
		____childRelationsCollection_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childRelationsCollection_11), (void*)value);
	}

	inline static int32_t get_offset_of__recordManager_12() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____recordManager_12)); }
	inline RecordManager_t923097B51945932B6775CB40CF53683A864A3C65 * get__recordManager_12() const { return ____recordManager_12; }
	inline RecordManager_t923097B51945932B6775CB40CF53683A864A3C65 ** get_address_of__recordManager_12() { return &____recordManager_12; }
	inline void set__recordManager_12(RecordManager_t923097B51945932B6775CB40CF53683A864A3C65 * value)
	{
		____recordManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recordManager_12), (void*)value);
	}

	inline static int32_t get_offset_of__indexes_13() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____indexes_13)); }
	inline List_1_tA40E855828D2BD351AE459CC0CEFC5246704CDEA * get__indexes_13() const { return ____indexes_13; }
	inline List_1_tA40E855828D2BD351AE459CC0CEFC5246704CDEA ** get_address_of__indexes_13() { return &____indexes_13; }
	inline void set__indexes_13(List_1_tA40E855828D2BD351AE459CC0CEFC5246704CDEA * value)
	{
		____indexes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexes_13), (void*)value);
	}

	inline static int32_t get_offset_of__shadowIndexes_14() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____shadowIndexes_14)); }
	inline List_1_tA40E855828D2BD351AE459CC0CEFC5246704CDEA * get__shadowIndexes_14() const { return ____shadowIndexes_14; }
	inline List_1_tA40E855828D2BD351AE459CC0CEFC5246704CDEA ** get_address_of__shadowIndexes_14() { return &____shadowIndexes_14; }
	inline void set__shadowIndexes_14(List_1_tA40E855828D2BD351AE459CC0CEFC5246704CDEA * value)
	{
		____shadowIndexes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shadowIndexes_14), (void*)value);
	}

	inline static int32_t get_offset_of__shadowCount_15() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____shadowCount_15)); }
	inline int32_t get__shadowCount_15() const { return ____shadowCount_15; }
	inline int32_t* get_address_of__shadowCount_15() { return &____shadowCount_15; }
	inline void set__shadowCount_15(int32_t value)
	{
		____shadowCount_15 = value;
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____extendedProperties_16)); }
	inline PropertyCollection_tA766717BE7105BC47681AD434BF66003DEDB68F4 * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_tA766717BE7105BC47681AD434BF66003DEDB68F4 ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_tA766717BE7105BC47681AD434BF66003DEDB68F4 * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____extendedProperties_16), (void*)value);
	}

	inline static int32_t get_offset_of__tableName_17() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____tableName_17)); }
	inline String_t* get__tableName_17() const { return ____tableName_17; }
	inline String_t** get_address_of__tableName_17() { return &____tableName_17; }
	inline void set__tableName_17(String_t* value)
	{
		____tableName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tableName_17), (void*)value);
	}

	inline static int32_t get_offset_of__tableNamespace_18() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____tableNamespace_18)); }
	inline String_t* get__tableNamespace_18() const { return ____tableNamespace_18; }
	inline String_t** get_address_of__tableNamespace_18() { return &____tableNamespace_18; }
	inline void set__tableNamespace_18(String_t* value)
	{
		____tableNamespace_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tableNamespace_18), (void*)value);
	}

	inline static int32_t get_offset_of__tablePrefix_19() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____tablePrefix_19)); }
	inline String_t* get__tablePrefix_19() const { return ____tablePrefix_19; }
	inline String_t** get_address_of__tablePrefix_19() { return &____tablePrefix_19; }
	inline void set__tablePrefix_19(String_t* value)
	{
		____tablePrefix_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tablePrefix_19), (void*)value);
	}

	inline static int32_t get_offset_of__displayExpression_20() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____displayExpression_20)); }
	inline DataExpression_tECCBF728C87CAF0185856F73F7DB54BB94EF094D * get__displayExpression_20() const { return ____displayExpression_20; }
	inline DataExpression_tECCBF728C87CAF0185856F73F7DB54BB94EF094D ** get_address_of__displayExpression_20() { return &____displayExpression_20; }
	inline void set__displayExpression_20(DataExpression_tECCBF728C87CAF0185856F73F7DB54BB94EF094D * value)
	{
		____displayExpression_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayExpression_20), (void*)value);
	}

	inline static int32_t get_offset_of__fNestedInDataset_21() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____fNestedInDataset_21)); }
	inline bool get__fNestedInDataset_21() const { return ____fNestedInDataset_21; }
	inline bool* get_address_of__fNestedInDataset_21() { return &____fNestedInDataset_21; }
	inline void set__fNestedInDataset_21(bool value)
	{
		____fNestedInDataset_21 = value;
	}

	inline static int32_t get_offset_of__culture_22() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____culture_22)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get__culture_22() const { return ____culture_22; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of__culture_22() { return &____culture_22; }
	inline void set__culture_22(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		____culture_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_22), (void*)value);
	}

	inline static int32_t get_offset_of__cultureUserSet_23() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____cultureUserSet_23)); }
	inline bool get__cultureUserSet_23() const { return ____cultureUserSet_23; }
	inline bool* get_address_of__cultureUserSet_23() { return &____cultureUserSet_23; }
	inline void set__cultureUserSet_23(bool value)
	{
		____cultureUserSet_23 = value;
	}

	inline static int32_t get_offset_of__compareInfo_24() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____compareInfo_24)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get__compareInfo_24() const { return ____compareInfo_24; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of__compareInfo_24() { return &____compareInfo_24; }
	inline void set__compareInfo_24(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		____compareInfo_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____compareInfo_24), (void*)value);
	}

	inline static int32_t get_offset_of__compareFlags_25() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____compareFlags_25)); }
	inline int32_t get__compareFlags_25() const { return ____compareFlags_25; }
	inline int32_t* get_address_of__compareFlags_25() { return &____compareFlags_25; }
	inline void set__compareFlags_25(int32_t value)
	{
		____compareFlags_25 = value;
	}

	inline static int32_t get_offset_of__formatProvider_26() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____formatProvider_26)); }
	inline RuntimeObject* get__formatProvider_26() const { return ____formatProvider_26; }
	inline RuntimeObject** get_address_of__formatProvider_26() { return &____formatProvider_26; }
	inline void set__formatProvider_26(RuntimeObject* value)
	{
		____formatProvider_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____formatProvider_26), (void*)value);
	}

	inline static int32_t get_offset_of__hashCodeProvider_27() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____hashCodeProvider_27)); }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * get__hashCodeProvider_27() const { return ____hashCodeProvider_27; }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE ** get_address_of__hashCodeProvider_27() { return &____hashCodeProvider_27; }
	inline void set__hashCodeProvider_27(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * value)
	{
		____hashCodeProvider_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashCodeProvider_27), (void*)value);
	}

	inline static int32_t get_offset_of__caseSensitive_28() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____caseSensitive_28)); }
	inline bool get__caseSensitive_28() const { return ____caseSensitive_28; }
	inline bool* get_address_of__caseSensitive_28() { return &____caseSensitive_28; }
	inline void set__caseSensitive_28(bool value)
	{
		____caseSensitive_28 = value;
	}

	inline static int32_t get_offset_of__caseSensitiveUserSet_29() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____caseSensitiveUserSet_29)); }
	inline bool get__caseSensitiveUserSet_29() const { return ____caseSensitiveUserSet_29; }
	inline bool* get_address_of__caseSensitiveUserSet_29() { return &____caseSensitiveUserSet_29; }
	inline void set__caseSensitiveUserSet_29(bool value)
	{
		____caseSensitiveUserSet_29 = value;
	}

	inline static int32_t get_offset_of__encodedTableName_30() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____encodedTableName_30)); }
	inline String_t* get__encodedTableName_30() const { return ____encodedTableName_30; }
	inline String_t** get_address_of__encodedTableName_30() { return &____encodedTableName_30; }
	inline void set__encodedTableName_30(String_t* value)
	{
		____encodedTableName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encodedTableName_30), (void*)value);
	}

	inline static int32_t get_offset_of__xmlText_31() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____xmlText_31)); }
	inline DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D * get__xmlText_31() const { return ____xmlText_31; }
	inline DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D ** get_address_of__xmlText_31() { return &____xmlText_31; }
	inline void set__xmlText_31(DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D * value)
	{
		____xmlText_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xmlText_31), (void*)value);
	}

	inline static int32_t get_offset_of__colUnique_32() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____colUnique_32)); }
	inline DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D * get__colUnique_32() const { return ____colUnique_32; }
	inline DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D ** get_address_of__colUnique_32() { return &____colUnique_32; }
	inline void set__colUnique_32(DataColumn_t397593FCD95F7B10FA2D2E706EFDA54B05E5835D * value)
	{
		____colUnique_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colUnique_32), (void*)value);
	}

	inline static int32_t get_offset_of__minOccurs_33() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____minOccurs_33)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get__minOccurs_33() const { return ____minOccurs_33; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of__minOccurs_33() { return &____minOccurs_33; }
	inline void set__minOccurs_33(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		____minOccurs_33 = value;
	}

	inline static int32_t get_offset_of__maxOccurs_34() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____maxOccurs_34)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get__maxOccurs_34() const { return ____maxOccurs_34; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of__maxOccurs_34() { return &____maxOccurs_34; }
	inline void set__maxOccurs_34(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		____maxOccurs_34 = value;
	}

	inline static int32_t get_offset_of__repeatableElement_35() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____repeatableElement_35)); }
	inline bool get__repeatableElement_35() const { return ____repeatableElement_35; }
	inline bool* get_address_of__repeatableElement_35() { return &____repeatableElement_35; }
	inline void set__repeatableElement_35(bool value)
	{
		____repeatableElement_35 = value;
	}

	inline static int32_t get_offset_of__typeName_36() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____typeName_36)); }
	inline RuntimeObject * get__typeName_36() const { return ____typeName_36; }
	inline RuntimeObject ** get_address_of__typeName_36() { return &____typeName_36; }
	inline void set__typeName_36(RuntimeObject * value)
	{
		____typeName_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____typeName_36), (void*)value);
	}

	inline static int32_t get_offset_of__primaryKey_37() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____primaryKey_37)); }
	inline UniqueConstraint_t291F6C173D4820C1ACAE889805C3649A44DC1D22 * get__primaryKey_37() const { return ____primaryKey_37; }
	inline UniqueConstraint_t291F6C173D4820C1ACAE889805C3649A44DC1D22 ** get_address_of__primaryKey_37() { return &____primaryKey_37; }
	inline void set__primaryKey_37(UniqueConstraint_t291F6C173D4820C1ACAE889805C3649A44DC1D22 * value)
	{
		____primaryKey_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryKey_37), (void*)value);
	}

	inline static int32_t get_offset_of__primaryIndex_38() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____primaryIndex_38)); }
	inline IndexFieldU5BU5D_tE0FF1739A3834C07A83EAF2EC3B32E14CC967548* get__primaryIndex_38() const { return ____primaryIndex_38; }
	inline IndexFieldU5BU5D_tE0FF1739A3834C07A83EAF2EC3B32E14CC967548** get_address_of__primaryIndex_38() { return &____primaryIndex_38; }
	inline void set__primaryIndex_38(IndexFieldU5BU5D_tE0FF1739A3834C07A83EAF2EC3B32E14CC967548* value)
	{
		____primaryIndex_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryIndex_38), (void*)value);
	}

	inline static int32_t get_offset_of__delayedSetPrimaryKey_39() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____delayedSetPrimaryKey_39)); }
	inline DataColumnU5BU5D_t5E093A4F34F11AFCA04923FE842DCC5ED1B398BC* get__delayedSetPrimaryKey_39() const { return ____delayedSetPrimaryKey_39; }
	inline DataColumnU5BU5D_t5E093A4F34F11AFCA04923FE842DCC5ED1B398BC** get_address_of__delayedSetPrimaryKey_39() { return &____delayedSetPrimaryKey_39; }
	inline void set__delayedSetPrimaryKey_39(DataColumnU5BU5D_t5E093A4F34F11AFCA04923FE842DCC5ED1B398BC* value)
	{
		____delayedSetPrimaryKey_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedSetPrimaryKey_39), (void*)value);
	}

	inline static int32_t get_offset_of__loadIndex_40() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____loadIndex_40)); }
	inline Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 * get__loadIndex_40() const { return ____loadIndex_40; }
	inline Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 ** get_address_of__loadIndex_40() { return &____loadIndex_40; }
	inline void set__loadIndex_40(Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 * value)
	{
		____loadIndex_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadIndex_40), (void*)value);
	}

	inline static int32_t get_offset_of__loadIndexwithOriginalAdded_41() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____loadIndexwithOriginalAdded_41)); }
	inline Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 * get__loadIndexwithOriginalAdded_41() const { return ____loadIndexwithOriginalAdded_41; }
	inline Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 ** get_address_of__loadIndexwithOriginalAdded_41() { return &____loadIndexwithOriginalAdded_41; }
	inline void set__loadIndexwithOriginalAdded_41(Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 * value)
	{
		____loadIndexwithOriginalAdded_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadIndexwithOriginalAdded_41), (void*)value);
	}

	inline static int32_t get_offset_of__loadIndexwithCurrentDeleted_42() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____loadIndexwithCurrentDeleted_42)); }
	inline Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 * get__loadIndexwithCurrentDeleted_42() const { return ____loadIndexwithCurrentDeleted_42; }
	inline Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 ** get_address_of__loadIndexwithCurrentDeleted_42() { return &____loadIndexwithCurrentDeleted_42; }
	inline void set__loadIndexwithCurrentDeleted_42(Index_t0B13AD066A6CAA0045DCA5BB8912F8E599BE9AF7 * value)
	{
		____loadIndexwithCurrentDeleted_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____loadIndexwithCurrentDeleted_42), (void*)value);
	}

	inline static int32_t get_offset_of__suspendIndexEvents_43() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____suspendIndexEvents_43)); }
	inline int32_t get__suspendIndexEvents_43() const { return ____suspendIndexEvents_43; }
	inline int32_t* get_address_of__suspendIndexEvents_43() { return &____suspendIndexEvents_43; }
	inline void set__suspendIndexEvents_43(int32_t value)
	{
		____suspendIndexEvents_43 = value;
	}

	inline static int32_t get_offset_of__savedEnforceConstraints_44() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____savedEnforceConstraints_44)); }
	inline bool get__savedEnforceConstraints_44() const { return ____savedEnforceConstraints_44; }
	inline bool* get_address_of__savedEnforceConstraints_44() { return &____savedEnforceConstraints_44; }
	inline void set__savedEnforceConstraints_44(bool value)
	{
		____savedEnforceConstraints_44 = value;
	}

	inline static int32_t get_offset_of__inDataLoad_45() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____inDataLoad_45)); }
	inline bool get__inDataLoad_45() const { return ____inDataLoad_45; }
	inline bool* get_address_of__inDataLoad_45() { return &____inDataLoad_45; }
	inline void set__inDataLoad_45(bool value)
	{
		____inDataLoad_45 = value;
	}

	inline static int32_t get_offset_of__initialLoad_46() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____initialLoad_46)); }
	inline bool get__initialLoad_46() const { return ____initialLoad_46; }
	inline bool* get_address_of__initialLoad_46() { return &____initialLoad_46; }
	inline void set__initialLoad_46(bool value)
	{
		____initialLoad_46 = value;
	}

	inline static int32_t get_offset_of__schemaLoading_47() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____schemaLoading_47)); }
	inline bool get__schemaLoading_47() const { return ____schemaLoading_47; }
	inline bool* get_address_of__schemaLoading_47() { return &____schemaLoading_47; }
	inline void set__schemaLoading_47(bool value)
	{
		____schemaLoading_47 = value;
	}

	inline static int32_t get_offset_of__enforceConstraints_48() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____enforceConstraints_48)); }
	inline bool get__enforceConstraints_48() const { return ____enforceConstraints_48; }
	inline bool* get_address_of__enforceConstraints_48() { return &____enforceConstraints_48; }
	inline void set__enforceConstraints_48(bool value)
	{
		____enforceConstraints_48 = value;
	}

	inline static int32_t get_offset_of__suspendEnforceConstraints_49() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____suspendEnforceConstraints_49)); }
	inline bool get__suspendEnforceConstraints_49() const { return ____suspendEnforceConstraints_49; }
	inline bool* get_address_of__suspendEnforceConstraints_49() { return &____suspendEnforceConstraints_49; }
	inline void set__suspendEnforceConstraints_49(bool value)
	{
		____suspendEnforceConstraints_49 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_50() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ___fInitInProgress_50)); }
	inline bool get_fInitInProgress_50() const { return ___fInitInProgress_50; }
	inline bool* get_address_of_fInitInProgress_50() { return &___fInitInProgress_50; }
	inline void set_fInitInProgress_50(bool value)
	{
		___fInitInProgress_50 = value;
	}

	inline static int32_t get_offset_of__inLoad_51() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____inLoad_51)); }
	inline bool get__inLoad_51() const { return ____inLoad_51; }
	inline bool* get_address_of__inLoad_51() { return &____inLoad_51; }
	inline void set__inLoad_51(bool value)
	{
		____inLoad_51 = value;
	}

	inline static int32_t get_offset_of__fInLoadDiffgram_52() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____fInLoadDiffgram_52)); }
	inline bool get__fInLoadDiffgram_52() const { return ____fInLoadDiffgram_52; }
	inline bool* get_address_of__fInLoadDiffgram_52() { return &____fInLoadDiffgram_52; }
	inline void set__fInLoadDiffgram_52(bool value)
	{
		____fInLoadDiffgram_52 = value;
	}

	inline static int32_t get_offset_of__isTypedDataTable_53() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____isTypedDataTable_53)); }
	inline uint8_t get__isTypedDataTable_53() const { return ____isTypedDataTable_53; }
	inline uint8_t* get_address_of__isTypedDataTable_53() { return &____isTypedDataTable_53; }
	inline void set__isTypedDataTable_53(uint8_t value)
	{
		____isTypedDataTable_53 = value;
	}

	inline static int32_t get_offset_of__emptyDataRowArray_54() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____emptyDataRowArray_54)); }
	inline DataRowU5BU5D_tCA5181B3540ACD7702228F224388EA4B4F5885CA* get__emptyDataRowArray_54() const { return ____emptyDataRowArray_54; }
	inline DataRowU5BU5D_tCA5181B3540ACD7702228F224388EA4B4F5885CA** get_address_of__emptyDataRowArray_54() { return &____emptyDataRowArray_54; }
	inline void set__emptyDataRowArray_54(DataRowU5BU5D_tCA5181B3540ACD7702228F224388EA4B4F5885CA* value)
	{
		____emptyDataRowArray_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyDataRowArray_54), (void*)value);
	}

	inline static int32_t get_offset_of__propertyDescriptorCollectionCache_55() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____propertyDescriptorCollectionCache_55)); }
	inline PropertyDescriptorCollection_t19FEFDD6CEF7609BB10282A4B52C3C09A04B41A2 * get__propertyDescriptorCollectionCache_55() const { return ____propertyDescriptorCollectionCache_55; }
	inline PropertyDescriptorCollection_t19FEFDD6CEF7609BB10282A4B52C3C09A04B41A2 ** get_address_of__propertyDescriptorCollectionCache_55() { return &____propertyDescriptorCollectionCache_55; }
	inline void set__propertyDescriptorCollectionCache_55(PropertyDescriptorCollection_t19FEFDD6CEF7609BB10282A4B52C3C09A04B41A2 * value)
	{
		____propertyDescriptorCollectionCache_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyDescriptorCollectionCache_55), (void*)value);
	}

	inline static int32_t get_offset_of__nestedParentRelations_56() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____nestedParentRelations_56)); }
	inline DataRelationU5BU5D_t705BDBA68D45143524D5C70D82EA04F0B676C15B* get__nestedParentRelations_56() const { return ____nestedParentRelations_56; }
	inline DataRelationU5BU5D_t705BDBA68D45143524D5C70D82EA04F0B676C15B** get_address_of__nestedParentRelations_56() { return &____nestedParentRelations_56; }
	inline void set__nestedParentRelations_56(DataRelationU5BU5D_t705BDBA68D45143524D5C70D82EA04F0B676C15B* value)
	{
		____nestedParentRelations_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nestedParentRelations_56), (void*)value);
	}

	inline static int32_t get_offset_of__dependentColumns_57() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____dependentColumns_57)); }
	inline List_1_t70187E1F2F9140ADB155B98F17D5D765F84B9204 * get__dependentColumns_57() const { return ____dependentColumns_57; }
	inline List_1_t70187E1F2F9140ADB155B98F17D5D765F84B9204 ** get_address_of__dependentColumns_57() { return &____dependentColumns_57; }
	inline void set__dependentColumns_57(List_1_t70187E1F2F9140ADB155B98F17D5D765F84B9204 * value)
	{
		____dependentColumns_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dependentColumns_57), (void*)value);
	}

	inline static int32_t get_offset_of__mergingData_58() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____mergingData_58)); }
	inline bool get__mergingData_58() const { return ____mergingData_58; }
	inline bool* get_address_of__mergingData_58() { return &____mergingData_58; }
	inline void set__mergingData_58(bool value)
	{
		____mergingData_58 = value;
	}

	inline static int32_t get_offset_of__onRowChangedDelegate_59() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____onRowChangedDelegate_59)); }
	inline DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * get__onRowChangedDelegate_59() const { return ____onRowChangedDelegate_59; }
	inline DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 ** get_address_of__onRowChangedDelegate_59() { return &____onRowChangedDelegate_59; }
	inline void set__onRowChangedDelegate_59(DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * value)
	{
		____onRowChangedDelegate_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowChangedDelegate_59), (void*)value);
	}

	inline static int32_t get_offset_of__onRowChangingDelegate_60() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____onRowChangingDelegate_60)); }
	inline DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * get__onRowChangingDelegate_60() const { return ____onRowChangingDelegate_60; }
	inline DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 ** get_address_of__onRowChangingDelegate_60() { return &____onRowChangingDelegate_60; }
	inline void set__onRowChangingDelegate_60(DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * value)
	{
		____onRowChangingDelegate_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowChangingDelegate_60), (void*)value);
	}

	inline static int32_t get_offset_of__onRowDeletingDelegate_61() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____onRowDeletingDelegate_61)); }
	inline DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * get__onRowDeletingDelegate_61() const { return ____onRowDeletingDelegate_61; }
	inline DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 ** get_address_of__onRowDeletingDelegate_61() { return &____onRowDeletingDelegate_61; }
	inline void set__onRowDeletingDelegate_61(DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * value)
	{
		____onRowDeletingDelegate_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowDeletingDelegate_61), (void*)value);
	}

	inline static int32_t get_offset_of__onRowDeletedDelegate_62() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____onRowDeletedDelegate_62)); }
	inline DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * get__onRowDeletedDelegate_62() const { return ____onRowDeletedDelegate_62; }
	inline DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 ** get_address_of__onRowDeletedDelegate_62() { return &____onRowDeletedDelegate_62; }
	inline void set__onRowDeletedDelegate_62(DataRowChangeEventHandler_t528DC5369A320B2397E1E5CF4E27CC518C0C72A0 * value)
	{
		____onRowDeletedDelegate_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onRowDeletedDelegate_62), (void*)value);
	}

	inline static int32_t get_offset_of__onColumnChangedDelegate_63() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____onColumnChangedDelegate_63)); }
	inline DataColumnChangeEventHandler_tC860540A9091FE1BB1DF718AB44874A54585FE07 * get__onColumnChangedDelegate_63() const { return ____onColumnChangedDelegate_63; }
	inline DataColumnChangeEventHandler_tC860540A9091FE1BB1DF718AB44874A54585FE07 ** get_address_of__onColumnChangedDelegate_63() { return &____onColumnChangedDelegate_63; }
	inline void set__onColumnChangedDelegate_63(DataColumnChangeEventHandler_tC860540A9091FE1BB1DF718AB44874A54585FE07 * value)
	{
		____onColumnChangedDelegate_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onColumnChangedDelegate_63), (void*)value);
	}

	inline static int32_t get_offset_of__onColumnChangingDelegate_64() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____onColumnChangingDelegate_64)); }
	inline DataColumnChangeEventHandler_tC860540A9091FE1BB1DF718AB44874A54585FE07 * get__onColumnChangingDelegate_64() const { return ____onColumnChangingDelegate_64; }
	inline DataColumnChangeEventHandler_tC860540A9091FE1BB1DF718AB44874A54585FE07 ** get_address_of__onColumnChangingDelegate_64() { return &____onColumnChangingDelegate_64; }
	inline void set__onColumnChangingDelegate_64(DataColumnChangeEventHandler_tC860540A9091FE1BB1DF718AB44874A54585FE07 * value)
	{
		____onColumnChangingDelegate_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onColumnChangingDelegate_64), (void*)value);
	}

	inline static int32_t get_offset_of__onTableClearingDelegate_65() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____onTableClearingDelegate_65)); }
	inline DataTableClearEventHandler_t661CB2EAAB20D6574190694F4DDD86BDD06FA982 * get__onTableClearingDelegate_65() const { return ____onTableClearingDelegate_65; }
	inline DataTableClearEventHandler_t661CB2EAAB20D6574190694F4DDD86BDD06FA982 ** get_address_of__onTableClearingDelegate_65() { return &____onTableClearingDelegate_65; }
	inline void set__onTableClearingDelegate_65(DataTableClearEventHandler_t661CB2EAAB20D6574190694F4DDD86BDD06FA982 * value)
	{
		____onTableClearingDelegate_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onTableClearingDelegate_65), (void*)value);
	}

	inline static int32_t get_offset_of__onTableClearedDelegate_66() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____onTableClearedDelegate_66)); }
	inline DataTableClearEventHandler_t661CB2EAAB20D6574190694F4DDD86BDD06FA982 * get__onTableClearedDelegate_66() const { return ____onTableClearedDelegate_66; }
	inline DataTableClearEventHandler_t661CB2EAAB20D6574190694F4DDD86BDD06FA982 ** get_address_of__onTableClearedDelegate_66() { return &____onTableClearedDelegate_66; }
	inline void set__onTableClearedDelegate_66(DataTableClearEventHandler_t661CB2EAAB20D6574190694F4DDD86BDD06FA982 * value)
	{
		____onTableClearedDelegate_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onTableClearedDelegate_66), (void*)value);
	}

	inline static int32_t get_offset_of__onTableNewRowDelegate_67() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____onTableNewRowDelegate_67)); }
	inline DataTableNewRowEventHandler_tA2A38967A9C8796075CBF1C31585C4C6E3C6F43B * get__onTableNewRowDelegate_67() const { return ____onTableNewRowDelegate_67; }
	inline DataTableNewRowEventHandler_tA2A38967A9C8796075CBF1C31585C4C6E3C6F43B ** get_address_of__onTableNewRowDelegate_67() { return &____onTableNewRowDelegate_67; }
	inline void set__onTableNewRowDelegate_67(DataTableNewRowEventHandler_tA2A38967A9C8796075CBF1C31585C4C6E3C6F43B * value)
	{
		____onTableNewRowDelegate_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onTableNewRowDelegate_67), (void*)value);
	}

	inline static int32_t get_offset_of__onPropertyChangingDelegate_68() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____onPropertyChangingDelegate_68)); }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * get__onPropertyChangingDelegate_68() const { return ____onPropertyChangingDelegate_68; }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 ** get_address_of__onPropertyChangingDelegate_68() { return &____onPropertyChangingDelegate_68; }
	inline void set__onPropertyChangingDelegate_68(PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * value)
	{
		____onPropertyChangingDelegate_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onPropertyChangingDelegate_68), (void*)value);
	}

	inline static int32_t get_offset_of__rowBuilder_69() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____rowBuilder_69)); }
	inline DataRowBuilder_t1686A02FA53DF491D826A981024C255668E94CC6 * get__rowBuilder_69() const { return ____rowBuilder_69; }
	inline DataRowBuilder_t1686A02FA53DF491D826A981024C255668E94CC6 ** get_address_of__rowBuilder_69() { return &____rowBuilder_69; }
	inline void set__rowBuilder_69(DataRowBuilder_t1686A02FA53DF491D826A981024C255668E94CC6 * value)
	{
		____rowBuilder_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowBuilder_69), (void*)value);
	}

	inline static int32_t get_offset_of__delayedViews_70() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____delayedViews_70)); }
	inline List_1_tD0DF2B545957BB968E2D9198A87C3B784F3837F8 * get__delayedViews_70() const { return ____delayedViews_70; }
	inline List_1_tD0DF2B545957BB968E2D9198A87C3B784F3837F8 ** get_address_of__delayedViews_70() { return &____delayedViews_70; }
	inline void set__delayedViews_70(List_1_tD0DF2B545957BB968E2D9198A87C3B784F3837F8 * value)
	{
		____delayedViews_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedViews_70), (void*)value);
	}

	inline static int32_t get_offset_of__dataViewListeners_71() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____dataViewListeners_71)); }
	inline List_1_t1748BC8A0D25EE6A55AA236787A9AA35B5AF8808 * get__dataViewListeners_71() const { return ____dataViewListeners_71; }
	inline List_1_t1748BC8A0D25EE6A55AA236787A9AA35B5AF8808 ** get_address_of__dataViewListeners_71() { return &____dataViewListeners_71; }
	inline void set__dataViewListeners_71(List_1_t1748BC8A0D25EE6A55AA236787A9AA35B5AF8808 * value)
	{
		____dataViewListeners_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataViewListeners_71), (void*)value);
	}

	inline static int32_t get_offset_of__rowDiffId_72() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____rowDiffId_72)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get__rowDiffId_72() const { return ____rowDiffId_72; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of__rowDiffId_72() { return &____rowDiffId_72; }
	inline void set__rowDiffId_72(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		____rowDiffId_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rowDiffId_72), (void*)value);
	}

	inline static int32_t get_offset_of__indexesLock_73() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____indexesLock_73)); }
	inline ReaderWriterLockSlim_tD820AC67812C645B2F8C16ABB4DE694A19D6A315 * get__indexesLock_73() const { return ____indexesLock_73; }
	inline ReaderWriterLockSlim_tD820AC67812C645B2F8C16ABB4DE694A19D6A315 ** get_address_of__indexesLock_73() { return &____indexesLock_73; }
	inline void set__indexesLock_73(ReaderWriterLockSlim_tD820AC67812C645B2F8C16ABB4DE694A19D6A315 * value)
	{
		____indexesLock_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexesLock_73), (void*)value);
	}

	inline static int32_t get_offset_of__ukColumnPositionForInference_74() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____ukColumnPositionForInference_74)); }
	inline int32_t get__ukColumnPositionForInference_74() const { return ____ukColumnPositionForInference_74; }
	inline int32_t* get_address_of__ukColumnPositionForInference_74() { return &____ukColumnPositionForInference_74; }
	inline void set__ukColumnPositionForInference_74(int32_t value)
	{
		____ukColumnPositionForInference_74 = value;
	}

	inline static int32_t get_offset_of__remotingFormat_75() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____remotingFormat_75)); }
	inline int32_t get__remotingFormat_75() const { return ____remotingFormat_75; }
	inline int32_t* get_address_of__remotingFormat_75() { return &____remotingFormat_75; }
	inline void set__remotingFormat_75(int32_t value)
	{
		____remotingFormat_75 = value;
	}

	inline static int32_t get_offset_of__objectID_77() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863, ____objectID_77)); }
	inline int32_t get__objectID_77() const { return ____objectID_77; }
	inline int32_t* get_address_of__objectID_77() { return &____objectID_77; }
	inline void set__objectID_77(int32_t value)
	{
		____objectID_77 = value;
	}
};

struct DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863_StaticFields
{
public:
	// System.Int32 System.Data.DataTable::s_objectTypeCount
	int32_t ___s_objectTypeCount_76;

public:
	inline static int32_t get_offset_of_s_objectTypeCount_76() { return static_cast<int32_t>(offsetof(DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863_StaticFields, ___s_objectTypeCount_76)); }
	inline int32_t get_s_objectTypeCount_76() const { return ___s_objectTypeCount_76; }
	inline int32_t* get_address_of_s_objectTypeCount_76() { return &___s_objectTypeCount_76; }
	inline void set_s_objectTypeCount_76(int32_t value)
	{
		___s_objectTypeCount_76 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.Reflection.AssemblyName
struct  AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codebase_1), (void*)value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___cultureinfo_6)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cultureinfo_6), (void*)value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___keypair_9)); }
	inline StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keypair_9), (void*)value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___publicKey_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicKey_10), (void*)value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___keyToken_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyToken_11), (void*)value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___version_13)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_version_13() const { return ___version_13; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_13), (void*)value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}

	inline static int32_t get_offset_of_contentType_15() { return static_cast<int32_t>(offsetof(AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82, ___contentType_15)); }
	inline int32_t get_contentType_15() const { return ___contentType_15; }
	inline int32_t* get_address_of_contentType_15() { return &___contentType_15; }
	inline void set_contentType_15(int32_t value)
	{
		___contentType_15 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_tD9AA282E59F4526338781AFD862680ED461FCCFD * ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Mono.Data.Sqlite.SQLiteBase
struct  SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB  : public SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343
{
public:

public:
};

struct SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB_StaticFields
{
public:
	// System.Object Mono.Data.Sqlite.SQLiteBase::_lock
	RuntimeObject * ____lock_13;

public:
	inline static int32_t get_offset_of__lock_13() { return static_cast<int32_t>(offsetof(SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB_StaticFields, ____lock_13)); }
	inline RuntimeObject * get__lock_13() const { return ____lock_13; }
	inline RuntimeObject ** get_address_of__lock_13() { return &____lock_13; }
	inline void set__lock_13(RuntimeObject * value)
	{
		____lock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_13), (void*)value);
	}
};


// Mono.Data.Sqlite.SQLiteCallback
struct  SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Data.Sqlite.SQLiteCollation
struct  SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Data.Sqlite.SQLiteCommitCallback
struct  SQLiteCommitCallback_t23469643A857ABBFBDE727511CD648AC1A1FC611  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Data.Sqlite.SQLiteFinalCallback
struct  SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Data.Sqlite.SQLiteRollbackCallback
struct  SQLiteRollbackCallback_t33DC59BE1404B8BE92AF830966FF0110918D0F6D  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Data.Sqlite.SQLiteUpdateCallback
struct  SQLiteUpdateCallback_tB88EE36DAC2DEA9DE2F2B413BBF91A81FB0D480F  : public MulticastDelegate_t
{
public:

public:
};


// Mono.Data.Sqlite.SqliteCommandBuilder
struct  SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439  : public DbCommandBuilder_t09ABFF5C5CEC0E32ED84FA0EA08D9631CAC24CD4
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Reflection.ReflectionTypeLoadException
struct  ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.Type[] System.Reflection.ReflectionTypeLoadException::_classes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____classes_17;
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::_exceptions
	ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* ____exceptions_18;

public:
	inline static int32_t get_offset_of__classes_17() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115, ____classes_17)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get__classes_17() const { return ____classes_17; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of__classes_17() { return &____classes_17; }
	inline void set__classes_17(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		____classes_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____classes_17), (void*)value);
	}

	inline static int32_t get_offset_of__exceptions_18() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115, ____exceptions_18)); }
	inline ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* get__exceptions_18() const { return ____exceptions_18; }
	inline ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209** get_address_of__exceptions_18() { return &____exceptions_18; }
	inline void set__exceptions_18(ExceptionU5BU5D_t09C3EFFA7CF3F84DA802016E2017E1608442F209* value)
	{
		____exceptions_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exceptions_18), (void*)value);
	}
};


// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.Data.Common.DbException
struct  DbException_t7601D64CEA3E4A5396F01EDC71423DE6209F7F0D  : public ExternalException_t68841FD169C0CB00CC950EDA7E2A59540D65B1CE
{
public:

public:
};


// Mono.Data.Sqlite.SqliteException
struct  SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF  : public DbException_t7601D64CEA3E4A5396F01EDC71423DE6209F7F0D
{
public:
	// Mono.Data.Sqlite.SQLiteErrorCode Mono.Data.Sqlite.SqliteException::_errorCode
	int32_t ____errorCode_17;

public:
	inline static int32_t get_offset_of__errorCode_17() { return static_cast<int32_t>(offsetof(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF, ____errorCode_17)); }
	inline int32_t get__errorCode_17() const { return ____errorCode_17; }
	inline int32_t* get_address_of__errorCode_17() { return &____errorCode_17; }
	inline void set__errorCode_17(int32_t value)
	{
		____errorCode_17 = value;
	}
};

struct SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_StaticFields
{
public:
	// System.String[] Mono.Data.Sqlite.SqliteException::_errorMessages
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____errorMessages_18;

public:
	inline static int32_t get_offset_of__errorMessages_18() { return static_cast<int32_t>(offsetof(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_StaticFields, ____errorMessages_18)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__errorMessages_18() const { return ____errorMessages_18; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__errorMessages_18() { return &____errorMessages_18; }
	inline void set__errorMessages_18(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____errorMessages_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____errorMessages_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Assembly_t * m_Items[1];

public:
	inline Assembly_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.AssemblyName[]
struct AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * m_Items[1];

public:
	inline AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.Data.Sqlite.SqliteFunction[]
struct SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * m_Items[1];

public:
	inline SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.Data.Sqlite.SqliteKeyReader_KeyInfo[]
struct KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D  m_Items[1];

public:
	inline KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___databaseName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tableName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___columnName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___query_6), (void*)NULL);
		#endif
	}
	inline KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___databaseName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tableName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___columnName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___query_6), (void*)NULL);
		#endif
	}
};
// Mono.Data.Sqlite.SqliteParameter[]
struct SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * m_Items[1];

public:
	inline SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD505D618179AB84ED9864D70B3895FA7F3BF328D_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5501914E7BE497D24880C023C56B05EC5C2F9167_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m88386525B48C63BBEA4D45818CC1FD77D32347BC_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m303D4CB83E8551A1DD98E748A02F796DA08D84AE_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0B4BDFC69B7CED643AE1DAA4F9DDA3AA099DDFAB_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mBC8DEE264FD7E346D098E28FB1D5096B0F9132FB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCBE457D94EF9F24E38A4094A576F1CFEDC521ABE_gshared (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m786A1D72D4E499C0776742D3B2921F47E3A54545_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m6F2BB7FC61476D210FA060962086B5B21FB1B6CA_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m54E18E9C1ECE23383EF0EA1E98330235DEAD7B39_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mDC0BE52A08145926A3037CE04FC07B7F07C3E06E_gshared (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * __this, KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m76195183806581950B0EFE1852C8255E6EDA2337_gshared_inline (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::CopyTo(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1D1DCE16256250FF5D49BBC5B2170B8469A0550B_gshared (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * __this, KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* ___array0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m98E4245F46A6D90AE3E96EFF3880D50ED6E2C728_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m327E513FB78F72441BBF2756AFCC788F89A4FA52_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m451452782977192583A6374A799099FCCD9BD83E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void System.Data.Common.DbException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbException__ctor_mF3F74F35C2E4A18D1453D34B20D717AFC6E2B26E (DbException_t7601D64CEA3E4A5396F01EDC71423DE6209F7F0D * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteException::GetStockErrorMessage(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteException_GetStockErrorMessage_mBCF83F54889B55E016F7E032A3BC4BD3A704A340 (int32_t ___errorCode0, String_t* ___errorMessage1, const RuntimeMethod* method);
// System.Void System.Data.Common.DbException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbException__ctor_m8D3347951D17C9738FD28FC7B47443DFF1EE8BAC (DbException_t7601D64CEA3E4A5396F01EDC71423DE6209F7F0D * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbException__ctor_m8ED5675B5AF207A2B903B620C936BEA5D27D2FAE (DbException_t7601D64CEA3E4A5396F01EDC71423DE6209F7F0D * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFactory__ctor_mCB1F7EA41687DDC35EC5C1150AA298A15A9BB12D (SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F * __this, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A (String_t* ___typeName0, bool ___throwOnError1);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Object Mono.Data.Sqlite.SqliteFactory::GetSQLiteProviderServicesInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SqliteFactory_GetSQLiteProviderServicesInstance_m518B11A2EE1AA7F61D9EAEED666547B3FE0AEA94 (SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F * __this, const RuntimeMethod* method);
// System.Void System.Data.Common.DbProviderFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbProviderFactory__ctor_m1376F504CE5DDF21DAFA220AB675124C32B285CE (DbProviderFactory_tD097542E2A2591557E9349A9AA0C1DD301D50DD4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.IntPtr[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m1E0083CB21F1FE2109590AF0916893C349871CED (intptr_t ___source0, IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.DateTime Mono.Data.Sqlite.SqliteConvert::ToDateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  SqliteConvert_ToDateTime_mA0FB5F04DBA84394B9DC7ADB142CF67A90D6DE2B (SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343 * __this, String_t* ___dateText0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteConvert::ToString(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteConvert_ToString_m42FDCFEDE02C2C4DCF1C44D722340BB21C40825E (SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___dateValue0, const RuntimeMethod* method);
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SqliteConvert::TypeToAffinity(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteConvert_TypeToAffinity_mEDBB652545E859771B09537E60B1C9DAEB4C6357 (Type_t * ___typ0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831 (const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m8964FDE5D82FEC54106DBF35E1F67D70F6E73E29 (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m053A47D87C59CA7A87D4E67E5E06368D775D7651 (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Object[] Mono.Data.Sqlite.SqliteFunction::ConvertParams(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* SqliteFunction_ConvertParams_m919DBC8C690DBE96137AFDD78BC9248AB4674302 (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, int32_t ___nArgs0, intptr_t ___argsptr1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteFunction::SetReturnValue(System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_SetReturnValue_m9AE556DD446025687C2BE8FAD86E4486BD7FEBCD (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, intptr_t ___context0, RuntimeObject * ___returnValue1, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteConvert::UTF8ToString(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteConvert_UTF8ToString_m3ADBD367FE3E40C49AD05F6231675D3702951BE2 (intptr_t ___nativestring0, int32_t ___nativestringlen1, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SQLite3_UTF16::UTF16ToString(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SQLite3_UTF16_UTF16ToString_m9FB0D04CAA07FE529840E227209446D22FA09926 (intptr_t ___b0, int32_t ___nbytelen1, const RuntimeMethod* method);
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m254924E8680FCCF870F18064DC0B114445B09172 (intptr_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m05610D3516B06774B9B1169A4189C9A76C74B566 (Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * __this, int64_t ___key0, AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 *, int64_t, AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mD505D618179AB84ED9864D70B3895FA7F3BF328D_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Mono.Data.Sqlite.SqliteFunction/AggregateData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateData__ctor_m8E3585E6A527DCB2AFB2246835E4C9F811C107E3 (AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mB9AE9B8E7AD20F656F84FE963E45CA627D7E4F13 (Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * __this, int64_t ___key0, AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 *, int64_t, AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 *, const RuntimeMethod*))Dictionary_2_set_Item_m5501914E7BE497D24880C023C56B05EC5C2F9167_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mAEA8CB378DE45C02BE02FC919DE4DF3AFEFBABEA (Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * __this, int64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 *, int64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m88386525B48C63BBEA4D45818CC1FD77D32347BC_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::get_Item(!0)
inline AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * Dictionary_2_get_Item_mA92E46D6CC469985E57848D95079F58E82A5FA90 (Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * __this, int64_t ___key0, const RuntimeMethod* method)
{
	return ((  AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * (*) (Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 *, int64_t, const RuntimeMethod*))Dictionary_2_get_Item_m303D4CB83E8551A1DD98E748A02F796DA08D84AE_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,Mono.Data.Sqlite.SqliteFunction/AggregateData>::Remove(!0)
inline bool Dictionary_2_Remove_m1A760F2A72D99B9A0ECAA0A3BEDEB767D141A1ED (Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * __this, int64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 *, int64_t, const RuntimeMethod*))Dictionary_2_Remove_m0B4BDFC69B7CED643AE1DAA4F9DDA3AA099DDFAB_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>::.ctor()
inline void List_1__ctor_m9A195A72E70D58E5EFCA3C0A18BD3D29181124F4 (List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0 (const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* AppDomain_GetAssemblies_mF1A63ADFC80562168DF846017BB72CAB09298A23 (AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * __this, const RuntimeMethod* method);
// System.Reflection.Assembly System.Reflection.Assembly::GetCallingAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t * Assembly_GetCallingAssembly_m0DB9F5D2B9770113FF2E239A9EB0DB0EC3A6E384 (const RuntimeMethod* method);
// System.String System.Reflection.AssemblyName::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B_inline (AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Type[] System.Reflection.ReflectionTypeLoadException::get_Types()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ReflectionTypeLoadException_get_Types_mF7DBBFDB3486667189D72A2A0B95DF42D463E3DE_inline (ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>::Add(!0)
inline void List_1_Add_m62B3202FFB4276C1DFAADF0390DC20EA1FAE24EE (List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * __this, SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF *, SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::.ctor()
inline void List_1__ctor_mA8F8D9D038083E6E29B326BE0EB1D2045F69DD68 (List_1_tAD7E3A3044B6732D931945E268FE5829A633497A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAD7E3A3044B6732D931945E268FE5829A633497A *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunctionAttribute>::GetEnumerator()
inline Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050  List_1_GetEnumerator_mF4E3E31F7753761DF52180726B7FB52F164EADFE (List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050  (*) (List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteFunctionAttribute>::get_Current()
inline SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * Enumerator_get_Current_m8BCBD806970FD0577EA043FD96E8E7C68B782981_inline (Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050 * __this, const RuntimeMethod* method)
{
	return ((  SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * (*) (Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// Mono.Data.Sqlite.FunctionType Mono.Data.Sqlite.SqliteFunctionAttribute::get_FuncType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SqliteFunctionAttribute_get_FuncType_mCDAF2AB4D025ED5188F572AB49A712A7B3EDF2D7_inline (SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SQLiteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCallback__ctor_m00EA9333C13CFCCB5E57947BF50E65DB445584C6 (SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SQLiteFinalCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteFinalCallback__ctor_mE944146B4AAE084D5C2E210E6DFB06BF32FC6350 (SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SQLiteCollation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteCollation__ctor_m366A5662B192906A27642EFFB381EE39F74D3A85 (SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String Mono.Data.Sqlite.SqliteFunctionAttribute::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SqliteFunctionAttribute_get_Name_m13200595DC91239E3741CD8B1E80A503782294AF_inline (SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * __this, const RuntimeMethod* method);
// System.Int32 Mono.Data.Sqlite.SqliteFunctionAttribute::get_Arguments()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SqliteFunctionAttribute_get_Arguments_m9BB52E199ABD250949CC9D17643058F2191A2F93_inline (SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::Add(!0)
inline void List_1_Add_mE745EE2CC57B607435CC396916EE4B9F90BF2126 (List_1_tAD7E3A3044B6732D931945E268FE5829A633497A * __this, SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAD7E3A3044B6732D931945E268FE5829A633497A *, SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteFunctionAttribute>::MoveNext()
inline bool Enumerator_MoveNext_m60C19A4EF271FD373AED9B332B993C34CEE4777E (Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteFunctionAttribute>::Dispose()
inline void Enumerator_Dispose_mA9F49DB526C7AA569AFF16681D566400C740AD51 (Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::get_Count()
inline int32_t List_1_get_Count_m35A363B2C951173832B69EA3CC50DF4C5C735C9D_inline (List_1_tAD7E3A3044B6732D931945E268FE5829A633497A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAD7E3A3044B6732D931945E268FE5829A633497A *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteFunction>::CopyTo(!0[],System.Int32)
inline void List_1_CopyTo_mE7D57EB1C1BD956B331BE1F706D455B519093D34 (List_1_tAD7E3A3044B6732D931945E268FE5829A633497A * __this, SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAD7E3A3044B6732D931945E268FE5829A633497A *, SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6*, int32_t, const RuntimeMethod*))List_1_CopyTo_mBC8DEE264FD7E346D098E28FB1D5096B0F9132FB_gshared)(__this, ___array0, ___arrayIndex1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62 (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *, const RuntimeMethod*))Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_mA3F2ED0F81D513F866594E0DED7106B05985FA30 (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::.ctor()
inline void List_1__ctor_mCBE457D94EF9F24E38A4094A576F1CFEDC521ABE (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 *, const RuntimeMethod*))List_1__ctor_mCBE457D94EF9F24E38A4094A576F1CFEDC521ABE_gshared)(__this, method);
}
// System.Data.DataRowCollection System.Data.DataTable::get_Rows()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline (DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * __this, const RuntimeMethod* method);
// System.Object System.Data.DataRow::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89 (DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * __this, String_t* ___columnName0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCF1152AF4138C1DD7A16643B22EE69A38373EF86 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m5453726952CE3720733822DBF38A0091037F0F76 (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m786A1D72D4E499C0776742D3B2921F47E3A54545_gshared)(__this, ___key0, ___value1, method);
}
// System.Data.DataTable Mono.Data.Sqlite.SqliteDataReader::GetSchemaTable(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * SqliteDataReader_GetSchemaTable_mF7F1F6E17B3131396CFD99B6F38507B75710030E (SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * __this, bool ___wantUniqueInfo0, bool ___wantDefaultValue1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mD56CE1C90741C181D0119F225F9F94610EF672D9 (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::Add(!0,!1)
inline void Dictionary_2_Add_m5B95C1D0D8DF469906AE411C3774C9D88F7AAB66 (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * __this, String_t* ___key0, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *, String_t*, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Item(!0)
inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * Dictionary_2_get_Item_mC57580CB610EF86CE23A34BBBDA471DB2E55AC56 (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * (*) (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::GetEnumerator()
inline Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87  Dictionary_2_GetEnumerator_m5330001CB129799E88B8F362732D472B5FE2E30D (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87  (*) (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::get_Current()
inline KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  Enumerator_get_Current_m85D3AB75DB2B470E4205D37539278CBB8B1235D8_inline (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  (*) (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Value()
inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_inline (KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 * __this, const RuntimeMethod* method)
{
	return ((  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * (*) (KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_inline (KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mD17877118EA5CCF90E0D36CF420287270492A0F2 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared)(__this, ___index0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m8B16E8CBD6B9EE71984601DB60ADB40673ADD5CC (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6F2BB7FC61476D210FA060962086B5B21FB1B6CA_gshared)(__this, ___key0, method);
}
// System.Data.DataRow System.Data.DataRowCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * DataRowCollection_get_Item_mDF585AB070DEE6DB7B63881536E7072B0C87834F (DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Data.DataRow::IsNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataRow_IsNull_mCF24987852F1AC348E419E59F28F1A84F90AF1D0 (DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * __this, String_t* ___columnName0, const RuntimeMethod* method);
// System.Void System.Data.DataRowCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRowCollection_RemoveAt_mC10D9EEAF5FD8346FA1CB1575543488540B93D08 (DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(!0[])
inline void List_1_CopyTo_m085C23E93F3D97F191B8A5862C0023CBA31779A0 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___array0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, const RuntimeMethod*))List_1_CopyTo_m54E18E9C1ECE23383EF0EA1E98330235DEAD7B39_gshared)(__this, ___array0, method);
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::.ctor(Mono.Data.Sqlite.SqliteConnection,System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery__ctor_m22449788AF65C3ABA3E3AFFD7EF344606B4A3C77 (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * __this, SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * ___cnn0, String_t* ___database1, String_t* ___table2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___columns3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::Add(!0)
inline void List_1_Add_mDC0BE52A08145926A3037CE04FC07B7F07C3E06E (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * __this, KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 *, KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D , const RuntimeMethod*))List_1_Add_mDC0BE52A08145926A3037CE04FC07B7F07C3E06E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_m185DCFF47AE91F647CD1E459520807C87651A7DE (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::Dispose()
inline void Enumerator_Dispose_m4E6587A2AC3C47D1B1835490F4D4FE3319B080C0 (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::get_Count()
inline int32_t List_1_get_Count_m76195183806581950B0EFE1852C8255E6EDA2337_inline (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 *, const RuntimeMethod*))List_1_get_Count_m76195183806581950B0EFE1852C8255E6EDA2337_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteKeyReader/KeyInfo>::CopyTo(!0[])
inline void List_1_CopyTo_m1D1DCE16256250FF5D49BBC5B2170B8469A0550B (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * __this, KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* ___array0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 *, KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B*, const RuntimeMethod*))List_1_CopyTo_m1D1DCE16256250FF5D49BBC5B2170B8469A0550B_gshared)(__this, ___array0, method);
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_mF95BC00BBA792D80BEE20FB2006BE1CA18972657 (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Sync(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_Sync_mB6A4987196C5C4EC8445DAF57F6CE74401B9A40A (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * __this, int64_t ___rowid0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::set_IsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_set_IsValid_m04575B63742D87C840E5F78A24AA8023861386CE (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteKeyReader/KeyQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_Dispose_m4462EF3644051D288FBABE7BF137781BBC3D5485 (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * __this, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m5BD1EF8904C9B13BEDB7A876B122F117B317B442 (String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m5CE30569A0A5B70CBD85954BEEF436F57D6FAE6B (int64_t ___value0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mA01BFA4EFA523B93F48D03811D44AE225059E0AD (int64_t ___value0, const RuntimeMethod* method);
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::IsDBNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteKeyReader_IsDBNull_mA8F844DAB1708D254FF6D4C2EC0C6342741927DE (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int64 Mono.Data.Sqlite.SqliteKeyReader::GetInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SqliteKeyReader_GetInt64_m8393B7DF4B7EAA2BCE677E0D5FF84F2C885146BC (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Data.DataRow System.Data.DataTable::NewRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * DataTable_NewRow_m74E2026105B65A19E657631DDAC31916F004CBF1 (DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * __this, const RuntimeMethod* method);
// System.Void System.Data.DataRow::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2 (DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * __this, String_t* ___columnName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Data.DataRowCollection::Add(System.Data.DataRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRowCollection_Add_mD58F34C8E5D4FD55D6CEFA56F121935E467C11F6 (DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * __this, DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * ___row0, const RuntimeMethod* method);
// System.Object[] System.Data.DataRow::get_ItemArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* DataRow_get_ItemArray_mABB1F804FE8BDE1C715C2609EBE1DC7E9668C2E7 (DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * __this, const RuntimeMethod* method);
// System.Data.DataRow System.Data.DataRowCollection::Add(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * DataRowCollection_Add_mE9B4B34E992D02D8E1A859F2EB1FD2706B801983 (DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteCommandBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteCommandBuilder__ctor_m97ECB392EE85A86F10C6E643EDA38A28BF115C7E (SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439 * __this, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteConnection::CreateCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * SqliteConnection_CreateCommand_mD5C1C6500EB461245BA81A02EAB7D8ACA28D2771 (SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * __this, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* ___separator0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___value1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteParameterCollection Mono.Data.Sqlite.SqliteCommand::get_Parameters()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * SqliteCommand_get_Parameters_mB71352C6F2201A184CDE252A0BDECE961A0F1034_inline (SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * __this, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::AddWithValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * SqliteParameterCollection_AddWithValue_m97C980AD107D4CCB1CD2BA377DE2C3C0A06971D9 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m77591C20EDA3ADEE2FAF1987321D686E249326C5 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, const RuntimeMethod* method);
// System.Void System.Data.Common.DbDataReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbDataReader_Dispose_mD3B8FDCD448F9FFB52287C8D4D95710EAA646B72 (DbDataReader_t4CADA7880D6F85CABC4096FA5AE10C327A07CCD8 * __this, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * SqliteParameterCollection_get_Item_mB143F08024B5011763E114BE87F511BB2A8CBD86 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, int32_t ___index0, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteDataReader Mono.Data.Sqlite.SqliteCommand::ExecuteReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * SqliteCommand_ExecuteReader_mC8FA5C8396CD03E5B515AD99FCC274705268E4A3 (SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * __this, const RuntimeMethod* method);
// System.Void System.ComponentModel.Component::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_m823396D3128BA14DDC7522A760EEEEAC30518E98 (Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.String,System.Data.DataRowVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m3D85651E2B5D0E4E443F30504BBAB145E5393ADD (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, String_t* ___sourceColumn3, int32_t ___rowVersion4, const RuntimeMethod* method);
// System.Void System.Data.Common.DbParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbParameter__ctor_mBC6F98079269BE4009ED11B5581B93D7550921FF (DbParameter_tEE5AEAD8B429B8EF8994063C151A25A76B94B76F * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.Data.ParameterDirection,System.Boolean,System.Byte,System.Byte,System.String,System.Data.DataRowVersion,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m168BB032DBCEFE987EB44B27151991ABD587C705 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, int32_t ___direction3, bool ___isNullable4, uint8_t ___precision5, uint8_t ___scale6, String_t* ___sourceColumn7, int32_t ___rowVersion8, RuntimeObject * ___value9, const RuntimeMethod* method);
// System.Data.DbType Mono.Data.Sqlite.SqliteConvert::TypeToDbType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteConvert_TypeToDbType_mFEE3BBE06FB578BF29C9FD1578EF4D4A59163275 (Type_t * ___typ0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m1F1A168B4A71DF0CCB46FE708B81716D08A05DB8 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___source0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbParameterCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbParameterCollection__ctor_m1170B63FB42DB24CF67CDD28B2F1152DC0CDB6B2 (DbParameterCollection_t6FF3670B12D04B797F09E79DFEA4CF93E92D249C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::.ctor()
inline void List_1__ctor_m50BF7B9AB3445C4EC9E8F10EC20ECFAF8B7458DF (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::GetEnumerator()
inline Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9  List_1_GetEnumerator_m4FB9C8F0BBC4821205AFB89A9D2D7C01E04ACA40 (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9  (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::get_Count()
inline int32_t List_1_get_Count_m18B6F2D3ACC8EAC194AB57D5325DD32BB5802AA8_inline (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Add(!0)
inline void List_1_Add_m5C78F8E2E70517CE23882FE76E912B19A6DF0D05 (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_mC80811CB2BF2117A72B037472821DDE4C0F92CC0 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___parameter0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_mBC9628DF3C388388D3C656750799750462E0F01C (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Clear()
inline void List_1_Clear_mEE04B19B8737B430DF2A0BF0E36BF703AF5DCE5E (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Contains(!0)
inline bool List_1_Contains_m3DAADD39ED6686DE079F5056901F3260E09179A8 (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::get_Item(System.Int32)
inline SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * List_1_get_Item_m0FED0390D45670958CA29E86C5D58839251075D0_inline (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mA1D43767F882FE677F238637A8785FCCEE7173D9 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___culture3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::IndexOf(!0)
inline int32_t List_1_IndexOf_m9C78D06C8B9D4B0F998320C74B8B4A888DB898A0 (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *, const RuntimeMethod*))List_1_IndexOf_m98E4245F46A6D90AE3E96EFF3880D50ED6E2C728_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Insert(System.Int32,!0)
inline void List_1_Insert_m2E51CE65637809D7D93C062529E5A7D30E24E133 (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, int32_t ___index0, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, int32_t, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *, const RuntimeMethod*))List_1_Insert_m327E513FB78F72441BBF2756AFCC788F89A4FA52_gshared)(__this, ___index0, ___item1, method);
}
// System.Boolean System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::Remove(!0)
inline bool List_1_Remove_mA7075CC228A8B426BEF45ED0A100608D0D0AECCD (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mB2016428E769441E9C87E656660ABA58BAE6FA9C (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3CAF82E0FF61CD84E251E0F7231BBB867C9755C2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteParameter>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m339B7FAFE361D88FEB5F47A169B5A37969D71764 (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * __this, int32_t ___index0, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *, int32_t, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *, const RuntimeMethod*))List_1_set_Item_m451452782977192583A6374A799099FCCD9BD83E_gshared)(__this, ___index0, ___value1, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>::get_Current()
inline SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * Enumerator_get_Current_m1B357C74BA17105E21969DF5288A73E1873549F2_inline (Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9 * __this, const RuntimeMethod* method)
{
	return ((  SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * (*) (Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m30892041DA5F50D7B8CFD82FFC0F55B5B97A2B7F (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>::get_Count()
inline int32_t List_1_get_Count_m5213820495B0EBCF3981324C3E9BD78BAE50715F_inline (List_1_t4D51535875D05BE2D5B9E04831852C86794124DF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4D51535875D05BE2D5B9E04831852C86794124DF *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>::get_Item(System.Int32)
inline SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * List_1_get_Item_mA7650FA6BC6222743B22C6252E8B6477292F5AE2_inline (List_1_t4D51535875D05BE2D5B9E04831852C86794124DF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * (*) (List_1_t4D51535875D05BE2D5B9E04831852C86794124DF *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Boolean Mono.Data.Sqlite.SqliteStatement::MapParameter(System.String,Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteStatement_MapParameter_mB771EFEBC2D26A8B4AC4E12D5F16961473093748 (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * __this, String_t* ___s0, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>::MoveNext()
inline bool Enumerator_MoveNext_mCF50FAAD565B13E2355E10FCCD8CBED148992C3E (Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mono.Data.Sqlite.SqliteParameter>::Dispose()
inline void Enumerator_Dispose_m61C4DD31E4F8ACDAE2E2EA613259AE49871FC4D2 (Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m759578081B55965D2CE733DF538FA20554F2F874 (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, bool ___ignoreCase5, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___culture6, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.CriticalHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CriticalHandle_Dispose_mDBA1677ABB0EE5E4AB408B301A6FC58E2E75EBBF (CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameter(System.Int32,Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement_BindParameter_m4F5DB47C7652CF87B979FEB4710D77A8C07BC165 (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * __this, int32_t ___index0, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___param1, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteException__ctor_m595860D2E2C4B4E75E31A0D8F336F108AA592F8F (SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF * __this, int32_t ___errorCode0, String_t* ___extendedInformation1, const RuntimeMethod* method);
// System.Boolean System.Convert::IsDBNull(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_IsDBNull_m5523BC521CD361615CE6846388C7BD5BA1EDDCE5 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Convert_ToDateTime_m246003CF3103F7DF9D6E817DCEFAE2CF8068862D (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m5D40340597602FB6C20BAB933E8B29617232757A (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteCommand::get_Connection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * SqliteCommand_get_Connection_mE3EDCFB30073F79B4BA70951014260D05D634F6F_inline (SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * __this, const RuntimeMethod* method);
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Guid_ToByteArray_m5E99B09A26EA3A1943CC8FE697E247DAC5465223 (Guid_t * __this, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_mD8F65E8B251DBE61789CAD032172D089375D1E5B (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Decimal::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Decimal_ToString_mC257A35A991F88D3CFE6F29F619F8EC9D1D5ADFB (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2B8FDE7216A37799B7B3A093EDDF1A820AAF4D01 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___separator0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m03BB3CE8DC5152855096BD796BEA8311CD7F6287 (SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * __this, intptr_t ___stmt0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m673603194B1DE0388222BBF3E873662F06E5F6F6 (SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.CriticalHandle::SetHandle(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CriticalHandle_SetHandle_m4EE9D69A73EF79440558738F688DA93682B8A955_inline (CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 * __this, intptr_t ___handle0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.CriticalHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CriticalHandle__ctor_m63298C852798FD29EC96265E0D6F5B3E72398349 (CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 * __this, intptr_t ___invalidHandleValue0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SQLiteBase::FinalizeStatement(Mono.Data.Sqlite.SqliteStatementHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SQLiteBase_FinalizeStatement_m75714619EE123FB9487D94769D8FDFECAE1D2119 (SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * ___stmt0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Data.Common.DbTransaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbTransaction__ctor_mEB19A16BE9BED0A70FDCC7E5EC8134E85EEA327B (DbTransaction_tADC1A857259448190F882AC47E0B18317779FE56 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Boolean Mono.Data.Sqlite.SqliteTransaction::IsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569 (SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * __this, bool ___throwError0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbTransaction::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbTransaction_Dispose_m1D66CE2B68FF0CAAEE9B9110D58087350BBBDB6A (DbTransaction_tADC1A857259448190F882AC47E0B18317779FE56 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteTransaction::IssueRollback(Mono.Data.Sqlite.SqliteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction_IssueRollback_m09587571EAC81A3BB360B27EA5FBE2BB3C8E937F (SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * ___cnn0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_libversion_number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_libversion_number_m45BC577ED5BC138A7841076C6BDB59F707868BA8 (const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method);
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_m1F4E6E2B52256D92AE8B2A07DBCFF1F325634612 (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v10, Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___v21, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteException__ctor_m2C4EC7C04CB50465D051C9F86071A65F2C0BB387 (SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF * __this, SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ___info0, StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * L_0 = ___info0;
		StreamingContext_t2CCDC54E0E8D078AF4A50E3A8B921B828A900034  L_1 = ___context1;
		DbException__ctor_mF3F74F35C2E4A18D1453D34B20D717AFC6E2B26E(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteException__ctor_m595860D2E2C4B4E75E31A0D8F336F108AA592F8F (SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF * __this, int32_t ___errorCode0, String_t* ___extendedInformation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteException__ctor_m595860D2E2C4B4E75E31A0D8F336F108AA592F8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errorCode0;
		String_t* L_1 = ___extendedInformation1;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var);
		String_t* L_2 = SqliteException_GetStockErrorMessage_mBCF83F54889B55E016F7E032A3BC4BD3A704A340(L_0, L_1, /*hidden argument*/NULL);
		DbException__ctor_m8D3347951D17C9738FD28FC7B47443DFF1EE8BAC(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___errorCode0;
		__this->set__errorCode_17(L_3);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteException__ctor_m6168B0AAC1851CBADC7B5B7049E086B09902FB8A (SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF * __this, const RuntimeMethod* method)
{
	{
		DbException__ctor_m8ED5675B5AF207A2B903B620C936BEA5D27D2FAE(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteException::GetStockErrorMessage(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteException_GetStockErrorMessage_mBCF83F54889B55E016F7E032A3BC4BD3A704A340 (int32_t ___errorCode0, String_t* ___errorMessage1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteException_GetStockErrorMessage_mBCF83F54889B55E016F7E032A3BC4BD3A704A340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___errorMessage1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		___errorMessage1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000a:
	{
		String_t* L_1 = ___errorMessage1;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = ___errorMessage1;
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, L_3, /*hidden argument*/NULL);
		___errorMessage1 = L_4;
	}

IL_0020:
	{
		int32_t L_5 = ___errorCode0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_6 = ___errorCode0;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = ((SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_StaticFields*)il2cpp_codegen_static_fields_for(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var))->get__errorMessages_18();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))))
		{
			goto IL_0031;
		}
	}

IL_002e:
	{
		___errorCode0 = 1;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = ((SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_StaticFields*)il2cpp_codegen_static_fields_for(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var))->get__errorMessages_18();
		int32_t L_9 = ___errorCode0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12 = ___errorMessage1;
		String_t* L_13 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void Mono.Data.Sqlite.SqliteException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteException__cctor_mE96C2B8F9109A119826FE7FB6BC3605472F29294 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteException__cctor_mE96C2B8F9109A119826FE7FB6BC3605472F29294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)27));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC41E97B906298C39611A796CAB1539411C1CF874);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC41E97B906298C39611A796CAB1539411C1CF874);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral58DF3A419CF3B1ABF1540CA19363117D737798BC);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral58DF3A419CF3B1ABF1540CA19363117D737798BC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5FC00849B213BD1E4B88D515FA3A807DCB282C84);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5FC00849B213BD1E4B88D515FA3A807DCB282C84);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralCF0AD5ADA4DB8ECDE7F83BAC072E7C784CDC3F1F);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralCF0AD5ADA4DB8ECDE7F83BAC072E7C784CDC3F1F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral5277F74EC6B2C07897AE08C4150298F4A47BFEE7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5277F74EC6B2C07897AE08C4150298F4A47BFEE7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral99B3C2C49461425BF6CFF4391127F75D483D0614);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral99B3C2C49461425BF6CFF4391127F75D483D0614);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral84B715DD42CB515250F3406C66517DD9D7115450);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral84B715DD42CB515250F3406C66517DD9D7115450);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral634EC12D9C33E3B4FA5EE77192789853C0944473);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral634EC12D9C33E3B4FA5EE77192789853C0944473);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralD1C6600798D630F9B1438048EE63D61789E1AF88);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralD1C6600798D630F9B1438048EE63D61789E1AF88);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralDC2DB8AB152AE696D77BDC87D45929DEB94DE5DC);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDC2DB8AB152AE696D77BDC87D45929DEB94DE5DC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralED503B617B69F0DA3889F48E0D624A31DABDAE45);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralED503B617B69F0DA3889F48E0D624A31DABDAE45);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral78B3F17895B8C6A1EC55D26A5815C6B3E2F691AD);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral78B3F17895B8C6A1EC55D26A5815C6B3E2F691AD);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral9BD63A04AE7FE42E2B683DEF764089A3D56FFE25);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral9BD63A04AE7FE42E2B683DEF764089A3D56FFE25);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral79AEF385243E2292791E733AF2A99ACEF86C3DCE);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral79AEF385243E2292791E733AF2A99ACEF86C3DCE);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralA7362D38845D769AB9292607291056855E2183B1);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralA7362D38845D769AB9292607291056855E2183B1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral08868372FCC6DF03923FF0A62B6740AAB4B59A1D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral08868372FCC6DF03923FF0A62B6740AAB4B59A1D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral427AF4F4D3D5F55621070F2B61A550075D057138);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral427AF4F4D3D5F55621070F2B61A550075D057138);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral5E44B1AE3D4CE260D0B6E54DFE79B9E83C8A047E);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteral5E44B1AE3D4CE260D0B6E54DFE79B9E83C8A047E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralF0057D58EF952A7C3FAC90EE4D6ACBCD891B847A);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteralF0057D58EF952A7C3FAC90EE4D6ACBCD891B847A);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralD87C8562414047004383CEFAB06DDE994AB29260);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteralD87C8562414047004383CEFAB06DDE994AB29260);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral805E631B2C4331634631AB9D3D378E6F37AE988C);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral805E631B2C4331634631AB9D3D378E6F37AE988C);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralDF063BF53C8E8CB3FD9AA4249D1FA6357775527C);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteralDF063BF53C8E8CB3FD9AA4249D1FA6357775527C);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral89865DF2AE553E13CE078A7680590FE066489642);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral89865DF2AE553E13CE078A7680590FE066489642);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral66D5524BC6E9A905BCD8AD67AE1EB457C570B564);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteral66D5524BC6E9A905BCD8AD67AE1EB457C570B564);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral56184EC642B956FAF32203EDC14DB32A5BB3377F);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral56184EC642B956FAF32203EDC14DB32A5BB3377F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralC039B00BFF507642D69C98D494E70774AA200821);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteralC039B00BFF507642D69C98D494E70774AA200821);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralAB2A2923359CC254D1142CB254FA079493CE8064);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralAB2A2923359CC254D1142CB254FA079493CE8064);
		((SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_StaticFields*)il2cpp_codegen_static_fields_for(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var))->set__errorMessages_18(L_27);
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
// System.Void Mono.Data.Sqlite.SqliteFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFactory__cctor_mDF10E97E1A5EA31CC2EF8C4340BCEB7AA4D0D7C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFactory__cctor_mDF10E97E1A5EA31CC2EF8C4340BCEB7AA4D0D7C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F * L_0 = (SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F *)il2cpp_codegen_object_new(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var);
		SqliteFactory__ctor_mCB1F7EA41687DDC35EC5C1150AA298A15A9BB12D(L_0, /*hidden argument*/NULL);
		((SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var))->set_Instance_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteralBA7B74E6880085D4646D2D47931AD9243932EB41, (bool)0, "Mono.Data.Sqlite, Version=4.0.0.0, Culture=neutral, PublicKeyToken=0738eb9f132ed756");
		((SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var))->set__dbProviderServicesType_0(L_1);
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFactory::System.IServiceProvider.GetService(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SqliteFactory_System_IServiceProvider_GetService_mE0D29875DA5B29B8B4D68C42BC6066601A4C5946 (SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F * __this, Type_t * ___serviceType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFactory_System_IServiceProvider_GetService_mE0D29875DA5B29B8B4D68C42BC6066601A4C5946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___serviceType0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (ISQLiteSchemaExtensions_t0E88FC0F740D4586124EE1CEF90C3F3ED86E261E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		bool L_3 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_0, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var);
		Type_t * L_4 = ((SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var))->get__dbProviderServicesType_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_4, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = ___serviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var);
		Type_t * L_7 = ((SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var))->get__dbProviderServicesType_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0033;
		}
	}

IL_002c:
	{
		RuntimeObject * L_9 = SqliteFactory_GetSQLiteProviderServicesInstance_m518B11A2EE1AA7F61D9EAEED666547B3FE0AEA94(__this, /*hidden argument*/NULL);
		return L_9;
	}

IL_0033:
	{
		return NULL;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFactory::GetSQLiteProviderServicesInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SqliteFactory_GetSQLiteProviderServicesInstance_m518B11A2EE1AA7F61D9EAEED666547B3FE0AEA94 (SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFactory_GetSQLiteProviderServicesInstance_m518B11A2EE1AA7F61D9EAEED666547B3FE0AEA94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var))->get__sqliteServices_1();
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteral246AFB2A711D8CCEC2D90C6953074DABA1E3FF7E, (bool)0, "Mono.Data.Sqlite, Version=4.0.0.0, Culture=neutral, PublicKeyToken=0738eb9f132ed756");
		V_0 = L_1;
		Type_t * L_2 = V_0;
		bool L_3 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_2, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Type_t * L_4 = V_0;
		NullCheck(L_4);
		FieldInfo_t * L_5 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(43 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_4, _stringLiteral5F97F8775628E86310829AB9E8C465258AB92A5E, ((int32_t)44));
		NullCheck(L_5);
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_5, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var);
		((SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var))->set__sqliteServices_1(L_6);
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var);
		RuntimeObject * L_7 = ((SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F_il2cpp_TypeInfo_var))->get__sqliteServices_1();
		return L_7;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFactory__ctor_mCB1F7EA41687DDC35EC5C1150AA298A15A9BB12D (SqliteFactory_t70DE9372F36B021996968D122AFA6CDA2846794F * __this, const RuntimeMethod* method)
{
	{
		DbProviderFactory__ctor_m1376F504CE5DDF21DAFA220AB675124C32B285CE(__this, /*hidden argument*/NULL);
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
// System.Object Mono.Data.Sqlite.SqliteFunction::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SqliteFunction_Invoke_mC13E961C00E437D282F4850983164212D2C15B3E (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::Step(System.Object[],System.Int32,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_Step_m13C7CBC2947537F1E29E4E502EDE78B866200C29 (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, int32_t ___stepNumber1, RuntimeObject ** ___contextData2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteFunction::Final(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SqliteFunction_Final_m9E7BD07562840E6D4D41D3E66E4AA30FF555A6BF (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, RuntimeObject * ___contextData0, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunction::Compare(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteFunction_Compare_mFD4D84800C6E9C8F7C35D7BEB98B0C2436B9FFF0 (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, String_t* ___param10, String_t* ___param21, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Object[] Mono.Data.Sqlite.SqliteFunction::ConvertParams(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* SqliteFunction_ConvertParams_m919DBC8C690DBE96137AFDD78BC9248AB4674302 (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, int32_t ___nArgs0, intptr_t ___argsptr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_ConvertParams_m919DBC8C690DBE96137AFDD78BC9248AB4674302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	{
		int32_t L_0 = ___nArgs0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___nArgs0;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_3 = (IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)SZArrayNew(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		intptr_t L_4 = ___argsptr1;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_5 = V_1;
		int32_t L_6 = ___nArgs0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m1E0083CB21F1FE2109590AF0916893C349871CED((intptr_t)L_4, L_5, 0, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0114;
	}

IL_001e:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_7 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		intptr_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		int32_t L_12 = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(48 /* Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SQLiteBase::GetParamValueType(System.IntPtr) */, L_7, (intptr_t)L_11);
		V_3 = L_12;
		int32_t L_13 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_00a2;
			}
			case 3:
			{
				goto IL_00b5;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0110;
			}
			case 6:
			{
				goto IL_0110;
			}
			case 7:
			{
				goto IL_0110;
			}
			case 8:
			{
				goto IL_0110;
			}
			case 9:
			{
				goto IL_00ef;
			}
		}
	}
	{
		goto IL_0110;
	}

IL_0062:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = V_0;
		int32_t L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_16 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject *)L_16);
		goto IL_0110;
	}

IL_006f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_0;
		int32_t L_18 = V_2;
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_19 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		intptr_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		int64_t L_24 = VirtFuncInvoker1< int64_t, intptr_t >::Invoke(46 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetParamValueInt64(System.IntPtr) */, L_19, (intptr_t)L_23);
		int64_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_26);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (RuntimeObject *)L_26);
		goto IL_0110;
	}

IL_008a:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = V_0;
		int32_t L_28 = V_2;
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_29 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		intptr_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		double L_34 = VirtFuncInvoker1< double, intptr_t >::Invoke(45 /* System.Double Mono.Data.Sqlite.SQLiteBase::GetParamValueDouble(System.IntPtr) */, L_29, (intptr_t)L_33);
		double L_35 = L_34;
		RuntimeObject * L_36 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_36);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject *)L_36);
		goto IL_0110;
	}

IL_00a2:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = V_0;
		int32_t L_38 = V_2;
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_39 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_40 = V_1;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		intptr_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		String_t* L_44 = VirtFuncInvoker1< String_t*, intptr_t >::Invoke(47 /* System.String Mono.Data.Sqlite.SQLiteBase::GetParamValueText(System.IntPtr) */, L_39, (intptr_t)L_43);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_44);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (RuntimeObject *)L_44);
		goto IL_0110;
	}

IL_00b5:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_45 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_46 = V_1;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		intptr_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_45);
		int64_t L_50 = VirtFuncInvoker5< int64_t, intptr_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(44 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetParamValueBytes(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.Int32) */, L_45, (intptr_t)L_49, 0, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, 0, 0);
		V_4 = (((int32_t)((int32_t)L_50)));
		int32_t L_51 = V_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_52 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_51);
		V_5 = L_52;
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_53 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_54 = V_1;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		intptr_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_58 = V_5;
		int32_t L_59 = V_4;
		NullCheck(L_53);
		VirtFuncInvoker5< int64_t, intptr_t, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(44 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetParamValueBytes(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.Int32) */, L_53, (intptr_t)L_57, 0, L_58, 0, L_59);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_60 = V_0;
		int32_t L_61 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = V_5;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_62);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (RuntimeObject *)L_62);
		goto IL_0110;
	}

IL_00ef:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_63 = V_0;
		int32_t L_64 = V_2;
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_65 = __this->get__base_0();
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_66 = __this->get__base_0();
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		intptr_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_66);
		String_t* L_71 = VirtFuncInvoker1< String_t*, intptr_t >::Invoke(47 /* System.String Mono.Data.Sqlite.SQLiteBase::GetParamValueText(System.IntPtr) */, L_66, (intptr_t)L_70);
		NullCheck(L_65);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_72 = SqliteConvert_ToDateTime_mA0FB5F04DBA84394B9DC7ADB142CF67A90D6DE2B(L_65, L_71, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_73 = L_72;
		RuntimeObject * L_74 = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &L_73);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_74);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (RuntimeObject *)L_74);
	}

IL_0110:
	{
		int32_t L_75 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_0114:
	{
		int32_t L_76 = V_2;
		int32_t L_77 = ___nArgs0;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_78 = V_0;
		return L_78;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::SetReturnValue(System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_SetReturnValue_m9AE556DD446025687C2BE8FAD86E4486BD7FEBCD (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, intptr_t ___context0, RuntimeObject * ___returnValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_SetReturnValue_m9AE556DD446025687C2BE8FAD86E4486BD7FEBCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Exception_t * V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___returnValue1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___returnValue1;
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_2 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 *)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000b:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_3 = __this->get__base_0();
		intptr_t L_4 = ___context0;
		NullCheck(L_3);
		VirtActionInvoker1< intptr_t >::Invoke(53 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnNull(System.IntPtr) */, L_3, (intptr_t)L_4);
		return;
	}

IL_0018:
	{
		RuntimeObject * L_5 = ___returnValue1;
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Type_t * L_7 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		bool L_10 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_11 = __this->get__base_0();
		intptr_t L_12 = ___context0;
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_13 = __this->get__base_0();
		RuntimeObject * L_14 = ___returnValue1;
		NullCheck(L_13);
		String_t* L_15 = SqliteConvert_ToString_m42FDCFEDE02C2C4DCF1C44D722340BB21C40825E(L_13, ((*(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)UnBox(L_14, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker2< intptr_t, String_t* >::Invoke(54 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnText(System.IntPtr,System.String) */, L_11, (intptr_t)L_12, L_15);
		return;
	}

IL_004f:
	{
		RuntimeObject * L_16 = ___returnValue1;
		V_1 = ((Exception_t *)IsInstClass((RuntimeObject*)L_16, Exception_t_il2cpp_TypeInfo_var));
		Exception_t * L_17 = V_1;
		if (!L_17)
		{
			goto IL_006c;
		}
	}
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_18 = __this->get__base_0();
		intptr_t L_19 = ___context0;
		Exception_t * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_20);
		NullCheck(L_18);
		VirtActionInvoker2< intptr_t, String_t* >::Invoke(51 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnError(System.IntPtr,System.String) */, L_18, (intptr_t)L_19, L_21);
		return;
	}

IL_006c:
	{
		Type_t * L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_il2cpp_TypeInfo_var);
		int32_t L_23 = SqliteConvert_TypeToAffinity_mEDBB652545E859771B09537E60B1C9DAEB4C6357(L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		int32_t L_24 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)))
		{
			case 0:
			{
				goto IL_009d;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_00cd;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0090;
			}
		}
	}
	{
		return;
	}

IL_0090:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_25 = __this->get__base_0();
		intptr_t L_26 = ___context0;
		NullCheck(L_25);
		VirtActionInvoker1< intptr_t >::Invoke(53 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnNull(System.IntPtr) */, L_25, (intptr_t)L_26);
		return;
	}

IL_009d:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_27 = __this->get__base_0();
		intptr_t L_28 = ___context0;
		RuntimeObject * L_29 = ___returnValue1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_30 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_31 = Convert_ToInt64_m8964FDE5D82FEC54106DBF35E1F67D70F6E73E29(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< intptr_t, int64_t >::Invoke(52 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnInt64(System.IntPtr,System.Int64) */, L_27, (intptr_t)L_28, L_31);
		return;
	}

IL_00b5:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_32 = __this->get__base_0();
		intptr_t L_33 = ___context0;
		RuntimeObject * L_34 = ___returnValue1;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_35 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_36 = Convert_ToDouble_m053A47D87C59CA7A87D4E67E5E06368D775D7651(L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker2< intptr_t, double >::Invoke(50 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnDouble(System.IntPtr,System.Double) */, L_32, (intptr_t)L_33, L_36);
		return;
	}

IL_00cd:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_37 = __this->get__base_0();
		intptr_t L_38 = ___context0;
		RuntimeObject * L_39 = ___returnValue1;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		NullCheck(L_37);
		VirtActionInvoker2< intptr_t, String_t* >::Invoke(54 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnText(System.IntPtr,System.String) */, L_37, (intptr_t)L_38, L_40);
		return;
	}

IL_00e0:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_41 = __this->get__base_0();
		intptr_t L_42 = ___context0;
		RuntimeObject * L_43 = ___returnValue1;
		NullCheck(L_41);
		VirtActionInvoker2< intptr_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(49 /* System.Void Mono.Data.Sqlite.SQLiteBase::ReturnBlob(System.IntPtr,System.Byte[]) */, L_41, (intptr_t)L_42, ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_43, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::ScalarCallback(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_ScalarCallback_m0A2E7C47B3481E9F7510E4007B0D241ECC834271 (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___context0;
		__this->set__context_7((intptr_t)L_0);
		intptr_t L_1 = ___context0;
		int32_t L_2 = ___nArgs1;
		intptr_t L_3 = ___argsptr2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = SqliteFunction_ConvertParams_m919DBC8C690DBE96137AFDD78BC9248AB4674302(__this, L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Object Mono.Data.Sqlite.SqliteFunction::Invoke(System.Object[]) */, __this, L_4);
		SqliteFunction_SetReturnValue_m9AE556DD446025687C2BE8FAD86E4486BD7FEBCD(__this, (intptr_t)L_1, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunction::CompareCallback(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteFunction_CompareCallback_mF78A67F91A7431BB2A8B35FBB61E20586E0438E9 (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, intptr_t ___ptr0, int32_t ___len11, intptr_t ___ptr12, int32_t ___len23, intptr_t ___ptr24, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_CompareCallback_mF78A67F91A7431BB2A8B35FBB61E20586E0438E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr12;
		int32_t L_1 = ___len11;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_il2cpp_TypeInfo_var);
		String_t* L_2 = SqliteConvert_UTF8ToString_m3ADBD367FE3E40C49AD05F6231675D3702951BE2((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		intptr_t L_3 = ___ptr24;
		int32_t L_4 = ___len23;
		String_t* L_5 = SqliteConvert_UTF8ToString_m3ADBD367FE3E40C49AD05F6231675D3702951BE2((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		int32_t L_6 = VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(7 /* System.Int32 Mono.Data.Sqlite.SqliteFunction::Compare(System.String,System.String) */, __this, L_2, L_5);
		return L_6;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunction::CompareCallback16(System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteFunction_CompareCallback16_mCB2BC4C159CCFBC8F5CE6B1BE45859CF2BCB022F (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, intptr_t ___ptr0, int32_t ___len11, intptr_t ___ptr12, int32_t ___len23, intptr_t ___ptr24, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___ptr12;
		int32_t L_1 = ___len11;
		String_t* L_2 = SQLite3_UTF16_UTF16ToString_m9FB0D04CAA07FE529840E227209446D22FA09926((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		intptr_t L_3 = ___ptr24;
		int32_t L_4 = ___len23;
		String_t* L_5 = SQLite3_UTF16_UTF16ToString_m9FB0D04CAA07FE529840E227209446D22FA09926((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		int32_t L_6 = VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(7 /* System.Int32 Mono.Data.Sqlite.SqliteFunction::Compare(System.String,System.String) */, __this, L_2, L_5);
		return L_6;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::StepCallback(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_StepCallback_m1C0CF2F896F3863C25B9E9F5AF2D764371D9E354 (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, intptr_t ___context0, int32_t ___nArgs1, intptr_t ___argsptr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_StepCallback_m1C0CF2F896F3863C25B9E9F5AF2D764371D9E354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_0 = __this->get__base_0();
		intptr_t L_1 = ___context0;
		NullCheck(L_0);
		intptr_t L_2 = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(43 /* System.IntPtr Mono.Data.Sqlite.SQLiteBase::AggregateContext(System.IntPtr) */, L_0, (intptr_t)L_1);
		int64_t L_3 = IntPtr_op_Explicit_m254924E8680FCCF870F18064DC0B114445B09172((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * L_4 = __this->get__contextDataList_1();
		int64_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_TryGetValue_m05610D3516B06774B9B1169A4189C9A76C74B566(L_4, L_5, (AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m05610D3516B06774B9B1169A4189C9A76C74B566_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * L_7 = (AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 *)il2cpp_codegen_object_new(AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8_il2cpp_TypeInfo_var);
		AggregateData__ctor_m8E3585E6A527DCB2AFB2246835E4C9F811C107E3(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * L_8 = __this->get__contextDataList_1();
		int64_t L_9 = V_0;
		AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * L_10 = V_1;
		NullCheck(L_8);
		Dictionary_2_set_Item_mB9AE9B8E7AD20F656F84FE963E45CA627D7E4F13(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_mB9AE9B8E7AD20F656F84FE963E45CA627D7E4F13_RuntimeMethod_var);
	}

IL_0035:
	{
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		intptr_t L_11 = ___context0;
		__this->set__context_7((intptr_t)L_11);
		int32_t L_12 = ___nArgs1;
		intptr_t L_13 = ___argsptr2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = SqliteFunction_ConvertParams_m919DBC8C690DBE96137AFDD78BC9248AB4674302(__this, L_12, (intptr_t)L_13, /*hidden argument*/NULL);
		AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->get__count_0();
		AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * L_17 = V_1;
		NullCheck(L_17);
		RuntimeObject ** L_18 = L_17->get_address_of__data_1();
		VirtActionInvoker3< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, RuntimeObject ** >::Invoke(5 /* System.Void Mono.Data.Sqlite.SqliteFunction::Step(System.Object[],System.Int32,System.Object&) */, __this, L_14, L_16, (RuntimeObject **)L_18);
		IL2CPP_LEAVE(0x68, FINALLY_0059);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * L_19 = V_1;
		AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->get__count_0();
		NullCheck(L_20);
		L_20->set__count_0(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		IL2CPP_END_FINALLY(89)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::FinalCallback(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction_FinalCallback_mC3E2D0B6906A582DA67FC0B2F2A1540C46AD1D21 (SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * __this, intptr_t ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_FinalCallback_mC3E2D0B6906A582DA67FC0B2F2A1540C46AD1D21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_0 = __this->get__base_0();
		intptr_t L_1 = ___context0;
		NullCheck(L_0);
		intptr_t L_2 = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(43 /* System.IntPtr Mono.Data.Sqlite.SQLiteBase::AggregateContext(System.IntPtr) */, L_0, (intptr_t)L_1);
		int64_t L_3 = IntPtr_op_Explicit_m254924E8680FCCF870F18064DC0B114445B09172((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = NULL;
		Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * L_4 = __this->get__contextDataList_1();
		int64_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_ContainsKey_mAEA8CB378DE45C02BE02FC919DE4DF3AFEFBABEA(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_mAEA8CB378DE45C02BE02FC919DE4DF3AFEFBABEA_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * L_7 = __this->get__contextDataList_1();
		int64_t L_8 = V_0;
		NullCheck(L_7);
		AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * L_9 = Dictionary_2_get_Item_mA92E46D6CC469985E57848D95079F58E82A5FA90(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_mA92E46D6CC469985E57848D95079F58E82A5FA90_RuntimeMethod_var);
		NullCheck(L_9);
		RuntimeObject * L_10 = L_9->get__data_1();
		V_1 = L_10;
		Dictionary_2_t0C4B28810E74FB80708A34298540E1CDFED0A703 * L_11 = __this->get__contextDataList_1();
		int64_t L_12 = V_0;
		NullCheck(L_11);
		Dictionary_2_Remove_m1A760F2A72D99B9A0ECAA0A3BEDEB767D141A1ED(L_11, L_12, /*hidden argument*/Dictionary_2_Remove_m1A760F2A72D99B9A0ECAA0A3BEDEB767D141A1ED_RuntimeMethod_var);
	}

IL_0041:
	{
		intptr_t L_13 = ___context0;
		__this->set__context_7((intptr_t)L_13);
		intptr_t L_14 = ___context0;
		RuntimeObject * L_15 = V_1;
		RuntimeObject * L_16 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Object Mono.Data.Sqlite.SqliteFunction::Final(System.Object) */, __this, L_15);
		SqliteFunction_SetReturnValue_m9AE556DD446025687C2BE8FAD86E4486BD7FEBCD(__this, (intptr_t)L_14, L_16, /*hidden argument*/NULL);
		RuntimeObject * L_17 = V_1;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
		RuntimeObject* L_18 = V_2;
		if (!L_18)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_19 = V_2;
		NullCheck(L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_19);
	}

IL_0066:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteFunction::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteFunction__cctor_mA167C878D96A7F7E37AB93565194DFA23085CE6C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction__cctor_mA167C878D96A7F7E37AB93565194DFA23085CE6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * V_0 = NULL;
	AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* V_1 = NULL;
	int32_t V_2 = 0;
	AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * V_3 = NULL;
	int32_t V_4 = 0;
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* V_5 = NULL;
	bool V_6 = false;
	AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * L_0 = (List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF *)il2cpp_codegen_object_new(List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF_il2cpp_TypeInfo_var);
		List_1__ctor_m9A195A72E70D58E5EFCA3C0A18BD3D29181124F4(L_0, /*hidden argument*/List_1__ctor_m9A195A72E70D58E5EFCA3C0A18BD3D29181124F4_RuntimeMethod_var);
		((SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_il2cpp_TypeInfo_var))->set__registeredFunctions_8(L_0);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * L_1 = AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0(/*hidden argument*/NULL);
			NullCheck(L_1);
			AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_2 = AppDomain_GetAssemblies_mF1A63ADFC80562168DF846017BB72CAB09298A23(L_1, /*hidden argument*/NULL);
			V_1 = L_2;
			AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_3 = V_1;
			NullCheck(L_3);
			V_2 = (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
			Assembly_t * L_4 = Assembly_GetCallingAssembly_m0DB9F5D2B9770113FF2E239A9EB0DB0EC3A6E384(/*hidden argument*/NULL);
			NullCheck(L_4);
			AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * L_5 = VirtFuncInvoker0< AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * >::Invoke(22 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_4);
			V_3 = L_5;
			V_4 = 0;
			goto IL_0108;
		}

IL_002c:
		{
			V_6 = (bool)0;
		}

IL_002f:
		try
		{ // begin try (depth: 2)
			{
				AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_6 = V_1;
				int32_t L_7 = V_4;
				NullCheck(L_6);
				int32_t L_8 = L_7;
				Assembly_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
				NullCheck(L_9);
				AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B* L_10 = VirtFuncInvoker0< AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B* >::Invoke(30 /* System.Reflection.AssemblyName[] System.Reflection.Assembly::GetReferencedAssemblies() */, L_9);
				V_7 = L_10;
				AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B* L_11 = V_7;
				NullCheck(L_11);
				V_9 = (((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
				V_10 = 0;
				goto IL_0067;
			}

IL_0045:
			{
				AssemblyNameU5BU5D_tE1C9584468498B9897F558EE8EF4872260CEB34B* L_12 = V_7;
				int32_t L_13 = V_10;
				NullCheck(L_12);
				int32_t L_14 = L_13;
				AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
				NullCheck(L_15);
				String_t* L_16 = AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B_inline(L_15, /*hidden argument*/NULL);
				AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * L_17 = V_3;
				NullCheck(L_17);
				String_t* L_18 = AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B_inline(L_17, /*hidden argument*/NULL);
				bool L_19 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_16, L_18, /*hidden argument*/NULL);
				if (!L_19)
				{
					goto IL_0061;
				}
			}

IL_005c:
			{
				V_6 = (bool)1;
				goto IL_006d;
			}

IL_0061:
			{
				int32_t L_20 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
			}

IL_0067:
			{
				int32_t L_21 = V_10;
				int32_t L_22 = V_9;
				if ((((int32_t)L_21) < ((int32_t)L_22)))
				{
					goto IL_0045;
				}
			}

IL_006d:
			{
				bool L_23 = V_6;
				if (L_23)
				{
					goto IL_0076;
				}
			}

IL_0071:
			{
				goto IL_0102;
			}

IL_0076:
			{
				AssemblyU5BU5D_t90BF014AA048450526A42C74F9583341A138DE58* L_24 = V_1;
				int32_t L_25 = V_4;
				NullCheck(L_24);
				int32_t L_26 = L_25;
				Assembly_t * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
				NullCheck(L_27);
				TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_28 = VirtFuncInvoker0< TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* >::Invoke(18 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_27);
				V_5 = L_28;
				goto IL_008c;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0083;
			throw e;
		}

CATCH_0083:
		{ // begin catch(System.Reflection.ReflectionTypeLoadException)
			NullCheck(((ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115 *)__exception_local));
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_29 = ReflectionTypeLoadException_get_Types_mF7DBBFDB3486667189D72A2A0B95DF42D463E3DE_inline(((ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115 *)__exception_local), /*hidden argument*/NULL);
			V_5 = L_29;
			goto IL_008c;
		} // end catch (depth: 2)

IL_008c:
		{
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_30 = V_5;
			NullCheck(L_30);
			V_8 = (((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))));
			V_11 = 0;
			goto IL_00fc;
		}

IL_0097:
		{
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_31 = V_5;
			int32_t L_32 = V_11;
			NullCheck(L_31);
			int32_t L_33 = L_32;
			Type_t * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_35 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_34, (Type_t *)NULL, /*hidden argument*/NULL);
			if (L_35)
			{
				goto IL_00f6;
			}
		}

IL_00a4:
		{
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_36 = V_5;
			int32_t L_37 = V_11;
			NullCheck(L_36);
			int32_t L_38 = L_37;
			Type_t * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_40 = { reinterpret_cast<intptr_t> (SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_41 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_40, /*hidden argument*/NULL);
			NullCheck(L_39);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = VirtFuncInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_39, L_41, (bool)0);
			V_12 = L_42;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = V_12;
			NullCheck(L_43);
			V_13 = (((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))));
			V_14 = 0;
			goto IL_00f0;
		}

IL_00c6:
		{
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_44 = V_12;
			int32_t L_45 = V_14;
			NullCheck(L_44);
			int32_t L_46 = L_45;
			RuntimeObject * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
			V_0 = ((SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 *)IsInstSealed((RuntimeObject*)L_47, SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4_il2cpp_TypeInfo_var));
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_48 = V_0;
			if (!L_48)
			{
				goto IL_00ea;
			}
		}

IL_00d4:
		{
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_49 = V_0;
			TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_50 = V_5;
			int32_t L_51 = V_11;
			NullCheck(L_50);
			int32_t L_52 = L_51;
			Type_t * L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
			NullCheck(L_49);
			L_49->set__instanceType_3(L_53);
			List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * L_54 = ((SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_il2cpp_TypeInfo_var))->get__registeredFunctions_8();
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_55 = V_0;
			NullCheck(L_54);
			List_1_Add_m62B3202FFB4276C1DFAADF0390DC20EA1FAE24EE(L_54, L_55, /*hidden argument*/List_1_Add_m62B3202FFB4276C1DFAADF0390DC20EA1FAE24EE_RuntimeMethod_var);
		}

IL_00ea:
		{
			int32_t L_56 = V_14;
			V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		}

IL_00f0:
		{
			int32_t L_57 = V_14;
			int32_t L_58 = V_13;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00c6;
			}
		}

IL_00f6:
		{
			int32_t L_59 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		}

IL_00fc:
		{
			int32_t L_60 = V_11;
			int32_t L_61 = V_8;
			if ((((int32_t)L_60) < ((int32_t)L_61)))
			{
				goto IL_0097;
			}
		}

IL_0102:
		{
			int32_t L_62 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		}

IL_0108:
		{
			int32_t L_63 = V_4;
			int32_t L_64 = V_2;
			if ((((int32_t)L_63) < ((int32_t)L_64)))
			{
				goto IL_002c;
			}
		}

IL_0110:
		{
			goto IL_0115;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0112;
		throw e;
	}

CATCH_0112:
	{ // begin catch(System.Object)
		goto IL_0115;
	} // end catch (depth: 1)

IL_0115:
	{
		return;
	}
}
// Mono.Data.Sqlite.SqliteFunction[] Mono.Data.Sqlite.SqliteFunction::BindFunctions(Mono.Data.Sqlite.SQLiteBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* SqliteFunction_BindFunctions_m1A6158D062BBC35D0C77E5FDE67E87413C4C3CD0 (SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * ___sqlbase0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteFunction_BindFunctions_m1A6158D062BBC35D0C77E5FDE67E87413C4C3CD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * V_0 = NULL;
	List_1_tAD7E3A3044B6732D931945E268FE5829A633497A * V_1 = NULL;
	SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* V_2 = NULL;
	Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050  V_3;
	memset((&V_3), 0, sizeof(V_3));
	SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B4_0 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B3_0 = NULL;
	SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * G_B5_0 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B5_1 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B7_0 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B6_0 = NULL;
	SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * G_B8_0 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B8_1 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B10_0 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B9_0 = NULL;
	SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 * G_B11_0 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B11_1 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B13_0 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B12_0 = NULL;
	SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * G_B14_0 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B14_1 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B16_0 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B15_0 = NULL;
	SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * G_B17_0 = NULL;
	SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * G_B17_1 = NULL;
	{
		List_1_tAD7E3A3044B6732D931945E268FE5829A633497A * L_0 = (List_1_tAD7E3A3044B6732D931945E268FE5829A633497A *)il2cpp_codegen_object_new(List_1_tAD7E3A3044B6732D931945E268FE5829A633497A_il2cpp_TypeInfo_var);
		List_1__ctor_mA8F8D9D038083E6E29B326BE0EB1D2045F69DD68(L_0, /*hidden argument*/List_1__ctor_mA8F8D9D038083E6E29B326BE0EB1D2045F69DD68_RuntimeMethod_var);
		V_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_il2cpp_TypeInfo_var);
		List_1_t1A8FD39A9ABCCF157BCBC22B732052321B3201EF * L_1 = ((SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_StaticFields*)il2cpp_codegen_static_fields_for(SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_il2cpp_TypeInfo_var))->get__registeredFunctions_8();
		NullCheck(L_1);
		Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050  L_2 = List_1_GetEnumerator_mF4E3E31F7753761DF52180726B7FB52F164EADFE(L_1, /*hidden argument*/List_1_GetEnumerator_mF4E3E31F7753761DF52180726B7FB52F164EADFE_RuntimeMethod_var);
		V_3 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0132;
		}

IL_0016:
		{
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_3 = Enumerator_get_Current_m8BCBD806970FD0577EA043FD96E8E7C68B782981_inline((Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m8BCBD806970FD0577EA043FD96E8E7C68B782981_RuntimeMethod_var);
			V_4 = L_3;
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_4 = V_4;
			NullCheck(L_4);
			Type_t * L_5 = L_4->get__instanceType_3();
			RuntimeObject * L_6 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_5, /*hidden argument*/NULL);
			V_0 = ((SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB *)CastclassClass((RuntimeObject*)L_6, SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB_il2cpp_TypeInfo_var));
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_7 = V_0;
			SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_8 = ___sqlbase0;
			NullCheck(L_7);
			L_7->set__base_0(L_8);
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_9 = V_0;
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_10 = V_4;
			NullCheck(L_10);
			int32_t L_11 = SqliteFunctionAttribute_get_FuncType_mCDAF2AB4D025ED5188F572AB49A712A7B3EDF2D7_inline(L_10, /*hidden argument*/NULL);
			G_B3_0 = L_9;
			if (!L_11)
			{
				G_B4_0 = L_9;
				goto IL_0045;
			}
		}

IL_0042:
		{
			G_B5_0 = ((SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 *)(NULL));
			G_B5_1 = G_B3_0;
			goto IL_0051;
		}

IL_0045:
		{
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_12 = V_0;
			SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * L_13 = (SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 *)il2cpp_codegen_object_new(SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7_il2cpp_TypeInfo_var);
			SQLiteCallback__ctor_m00EA9333C13CFCCB5E57947BF50E65DB445584C6(L_13, L_12, (intptr_t)((intptr_t)SqliteFunction_ScalarCallback_m0A2E7C47B3481E9F7510E4007B0D241ECC834271_RuntimeMethod_var), /*hidden argument*/NULL);
			G_B5_0 = L_13;
			G_B5_1 = G_B4_0;
		}

IL_0051:
		{
			NullCheck(G_B5_1);
			G_B5_1->set__InvokeFunc_2(G_B5_0);
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_14 = V_0;
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_15 = V_4;
			NullCheck(L_15);
			int32_t L_16 = SqliteFunctionAttribute_get_FuncType_mCDAF2AB4D025ED5188F572AB49A712A7B3EDF2D7_inline(L_15, /*hidden argument*/NULL);
			G_B6_0 = L_14;
			if ((((int32_t)L_16) == ((int32_t)1)))
			{
				G_B7_0 = L_14;
				goto IL_0064;
			}
		}

IL_0061:
		{
			G_B8_0 = ((SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 *)(NULL));
			G_B8_1 = G_B6_0;
			goto IL_0070;
		}

IL_0064:
		{
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_17 = V_0;
			SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * L_18 = (SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 *)il2cpp_codegen_object_new(SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7_il2cpp_TypeInfo_var);
			SQLiteCallback__ctor_m00EA9333C13CFCCB5E57947BF50E65DB445584C6(L_18, L_17, (intptr_t)((intptr_t)SqliteFunction_StepCallback_m1C0CF2F896F3863C25B9E9F5AF2D764371D9E354_RuntimeMethod_var), /*hidden argument*/NULL);
			G_B8_0 = L_18;
			G_B8_1 = G_B7_0;
		}

IL_0070:
		{
			NullCheck(G_B8_1);
			G_B8_1->set__StepFunc_3(G_B8_0);
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_19 = V_0;
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_20 = V_4;
			NullCheck(L_20);
			int32_t L_21 = SqliteFunctionAttribute_get_FuncType_mCDAF2AB4D025ED5188F572AB49A712A7B3EDF2D7_inline(L_20, /*hidden argument*/NULL);
			G_B9_0 = L_19;
			if ((((int32_t)L_21) == ((int32_t)1)))
			{
				G_B10_0 = L_19;
				goto IL_0083;
			}
		}

IL_0080:
		{
			G_B11_0 = ((SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 *)(NULL));
			G_B11_1 = G_B9_0;
			goto IL_008f;
		}

IL_0083:
		{
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_22 = V_0;
			SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 * L_23 = (SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 *)il2cpp_codegen_object_new(SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8_il2cpp_TypeInfo_var);
			SQLiteFinalCallback__ctor_mE944146B4AAE084D5C2E210E6DFB06BF32FC6350(L_23, L_22, (intptr_t)((intptr_t)SqliteFunction_FinalCallback_mC3E2D0B6906A582DA67FC0B2F2A1540C46AD1D21_RuntimeMethod_var), /*hidden argument*/NULL);
			G_B11_0 = L_23;
			G_B11_1 = G_B10_0;
		}

IL_008f:
		{
			NullCheck(G_B11_1);
			G_B11_1->set__FinalFunc_4(G_B11_0);
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_24 = V_0;
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_25 = V_4;
			NullCheck(L_25);
			int32_t L_26 = SqliteFunctionAttribute_get_FuncType_mCDAF2AB4D025ED5188F572AB49A712A7B3EDF2D7_inline(L_25, /*hidden argument*/NULL);
			G_B12_0 = L_24;
			if ((((int32_t)L_26) == ((int32_t)2)))
			{
				G_B13_0 = L_24;
				goto IL_00a2;
			}
		}

IL_009f:
		{
			G_B14_0 = ((SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 *)(NULL));
			G_B14_1 = G_B12_0;
			goto IL_00ae;
		}

IL_00a2:
		{
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_27 = V_0;
			SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * L_28 = (SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 *)il2cpp_codegen_object_new(SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901_il2cpp_TypeInfo_var);
			SQLiteCollation__ctor_m366A5662B192906A27642EFFB381EE39F74D3A85(L_28, L_27, (intptr_t)((intptr_t)SqliteFunction_CompareCallback_mF78A67F91A7431BB2A8B35FBB61E20586E0438E9_RuntimeMethod_var), /*hidden argument*/NULL);
			G_B14_0 = L_28;
			G_B14_1 = G_B13_0;
		}

IL_00ae:
		{
			NullCheck(G_B14_1);
			G_B14_1->set__CompareFunc_5(G_B14_0);
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_29 = V_0;
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_30 = V_4;
			NullCheck(L_30);
			int32_t L_31 = SqliteFunctionAttribute_get_FuncType_mCDAF2AB4D025ED5188F572AB49A712A7B3EDF2D7_inline(L_30, /*hidden argument*/NULL);
			G_B15_0 = L_29;
			if ((((int32_t)L_31) == ((int32_t)2)))
			{
				G_B16_0 = L_29;
				goto IL_00c1;
			}
		}

IL_00be:
		{
			G_B17_0 = ((SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 *)(NULL));
			G_B17_1 = G_B15_0;
			goto IL_00cd;
		}

IL_00c1:
		{
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_32 = V_0;
			SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * L_33 = (SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 *)il2cpp_codegen_object_new(SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901_il2cpp_TypeInfo_var);
			SQLiteCollation__ctor_m366A5662B192906A27642EFFB381EE39F74D3A85(L_33, L_32, (intptr_t)((intptr_t)SqliteFunction_CompareCallback16_mCB2BC4C159CCFBC8F5CE6B1BE45859CF2BCB022F_RuntimeMethod_var), /*hidden argument*/NULL);
			G_B17_0 = L_33;
			G_B17_1 = G_B16_0;
		}

IL_00cd:
		{
			NullCheck(G_B17_1);
			G_B17_1->set__CompareFunc16_6(G_B17_0);
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_34 = V_4;
			NullCheck(L_34);
			int32_t L_35 = SqliteFunctionAttribute_get_FuncType_mCDAF2AB4D025ED5188F572AB49A712A7B3EDF2D7_inline(L_34, /*hidden argument*/NULL);
			if ((((int32_t)L_35) == ((int32_t)2)))
			{
				goto IL_010d;
			}
		}

IL_00dc:
		{
			SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_36 = ___sqlbase0;
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_37 = V_4;
			NullCheck(L_37);
			String_t* L_38 = SqliteFunctionAttribute_get_Name_m13200595DC91239E3741CD8B1E80A503782294AF_inline(L_37, /*hidden argument*/NULL);
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_39 = V_4;
			NullCheck(L_39);
			int32_t L_40 = SqliteFunctionAttribute_get_Arguments_m9BB52E199ABD250949CC9D17643058F2191A2F93_inline(L_39, /*hidden argument*/NULL);
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_41 = V_0;
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_42 = V_0;
			NullCheck(L_42);
			SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * L_43 = L_42->get__InvokeFunc_2();
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_44 = V_0;
			NullCheck(L_44);
			SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * L_45 = L_44->get__StepFunc_3();
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_46 = V_0;
			NullCheck(L_46);
			SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 * L_47 = L_46->get__FinalFunc_4();
			NullCheck(L_36);
			VirtActionInvoker6< String_t*, int32_t, bool, SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 *, SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 *, SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 * >::Invoke(42 /* System.Void Mono.Data.Sqlite.SQLiteBase::CreateFunction(System.String,System.Int32,System.Boolean,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteFinalCallback) */, L_36, L_38, L_40, (bool)((!(((RuntimeObject*)(SqliteFunctionEx_tC3D68AFE7A958C0DE3167D08B2AE365AB84AB164 *)((SqliteFunctionEx_tC3D68AFE7A958C0DE3167D08B2AE365AB84AB164 *)IsInstClass((RuntimeObject*)L_41, SqliteFunctionEx_tC3D68AFE7A958C0DE3167D08B2AE365AB84AB164_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), L_43, L_45, L_47);
			goto IL_012b;
		}

IL_010d:
		{
			SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_48 = ___sqlbase0;
			SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * L_49 = V_4;
			NullCheck(L_49);
			String_t* L_50 = SqliteFunctionAttribute_get_Name_m13200595DC91239E3741CD8B1E80A503782294AF_inline(L_49, /*hidden argument*/NULL);
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_51 = V_0;
			NullCheck(L_51);
			SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * L_52 = L_51->get__CompareFunc_5();
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_53 = V_0;
			NullCheck(L_53);
			SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * L_54 = L_53->get__CompareFunc16_6();
			NullCheck(L_48);
			VirtActionInvoker4< String_t*, SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 *, SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 *, intptr_t >::Invoke(41 /* System.Void Mono.Data.Sqlite.SQLiteBase::CreateCollation(System.String,Mono.Data.Sqlite.SQLiteCollation,Mono.Data.Sqlite.SQLiteCollation,System.IntPtr) */, L_48, L_50, L_52, L_54, (intptr_t)(0));
		}

IL_012b:
		{
			List_1_tAD7E3A3044B6732D931945E268FE5829A633497A * L_55 = V_1;
			SqliteFunction_t260D4CA6F5F88AFE6F6F848AA959AE003EF3B0DB * L_56 = V_0;
			NullCheck(L_55);
			List_1_Add_mE745EE2CC57B607435CC396916EE4B9F90BF2126(L_55, L_56, /*hidden argument*/List_1_Add_mE745EE2CC57B607435CC396916EE4B9F90BF2126_RuntimeMethod_var);
		}

IL_0132:
		{
			bool L_57 = Enumerator_MoveNext_m60C19A4EF271FD373AED9B332B993C34CEE4777E((Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m60C19A4EF271FD373AED9B332B993C34CEE4777E_RuntimeMethod_var);
			if (L_57)
			{
				goto IL_0016;
			}
		}

IL_013e:
		{
			IL2CPP_LEAVE(0x14E, FINALLY_0140);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0140;
	}

FINALLY_0140:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA9F49DB526C7AA569AFF16681D566400C740AD51((Enumerator_tC3237C8D8586BE645AB8F709F7B9DCCBBF366050 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mA9F49DB526C7AA569AFF16681D566400C740AD51_RuntimeMethod_var);
		IL2CPP_END_FINALLY(320)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(320)
	{
		IL2CPP_JUMP_TBL(0x14E, IL_014e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014e:
	{
		List_1_tAD7E3A3044B6732D931945E268FE5829A633497A * L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = List_1_get_Count_m35A363B2C951173832B69EA3CC50DF4C5C735C9D_inline(L_58, /*hidden argument*/List_1_get_Count_m35A363B2C951173832B69EA3CC50DF4C5C735C9D_RuntimeMethod_var);
		SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* L_60 = (SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6*)(SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6*)SZArrayNew(SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6_il2cpp_TypeInfo_var, (uint32_t)L_59);
		V_2 = L_60;
		List_1_tAD7E3A3044B6732D931945E268FE5829A633497A * L_61 = V_1;
		SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* L_62 = V_2;
		NullCheck(L_61);
		List_1_CopyTo_mE7D57EB1C1BD956B331BE1F706D455B519093D34(L_61, L_62, 0, /*hidden argument*/List_1_CopyTo_mE7D57EB1C1BD956B331BE1F706D455B519093D34_RuntimeMethod_var);
		SqliteFunctionU5BU5D_t482AA5DEBB00494C7092FC8BA5220272D9ABBEC6* L_63 = V_2;
		return L_63;
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
// System.Void Mono.Data.Sqlite.SqliteFunction_AggregateData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateData__ctor_m8E3585E6A527DCB2AFB2246835E4C9F811C107E3 (AggregateData_tF75AB4904B3071F1EB6B88C8A780735BCA0893A8 * __this, const RuntimeMethod* method)
{
	{
		__this->set__count_0(1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.String Mono.Data.Sqlite.SqliteFunctionAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteFunctionAttribute_get_Name_m13200595DC91239E3741CD8B1E80A503782294AF (SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_0();
		return L_0;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteFunctionAttribute::get_Arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteFunctionAttribute_get_Arguments_m9BB52E199ABD250949CC9D17643058F2191A2F93 (SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__arguments_1();
		return L_0;
	}
}
// Mono.Data.Sqlite.FunctionType Mono.Data.Sqlite.SqliteFunctionAttribute::get_FuncType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteFunctionAttribute_get_FuncType_mCDAF2AB4D025ED5188F572AB49A712A7B3EDF2D7 (SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__functionType_2();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.SqliteKeyReader::.ctor(Mono.Data.Sqlite.SqliteConnection,Mono.Data.Sqlite.SqliteDataReader,Mono.Data.Sqlite.SqliteStatement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader__ctor_mA7F6040E66EBDCFDCB1CEA8348179FDEFA68AF1E (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * ___cnn0, SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * ___reader1, SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * ___stmt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader__ctor_mA7F6040E66EBDCFDCB1CEA8348179FDEFA68AF1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * V_0 = NULL;
	Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * V_1 = NULL;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_2 = NULL;
	List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * V_3 = NULL;
	DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * V_8 = NULL;
	DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * V_9 = NULL;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87  V_12;
	memset((&V_12), 0, sizeof(V_12));
	KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	String_t* V_15 = NULL;
	DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * V_16 = NULL;
	DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * V_17 = NULL;
	int32_t V_18 = 0;
	DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * V_19 = NULL;
	DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * V_20 = NULL;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * V_24 = NULL;
	KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * V_25 = NULL;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_26 = NULL;
	int32_t V_27 = 0;
	bool V_28 = false;
	DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * V_29 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_30 = NULL;
	int32_t V_31 = 0;
	String_t* V_32 = NULL;
	KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D  V_33;
	memset((&V_33), 0, sizeof(V_33));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 10);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * L_0 = (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *)il2cpp_codegen_object_new(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62(L_0, /*hidden argument*/Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * L_1 = (Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 *)il2cpp_codegen_object_new(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA3F2ED0F81D513F866594E0DED7106B05985FA30(L_1, /*hidden argument*/Dictionary_2__ctor_mA3F2ED0F81D513F866594E0DED7106B05985FA30_RuntimeMethod_var);
		V_1 = L_1;
		List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * L_2 = (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 *)il2cpp_codegen_object_new(List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16_il2cpp_TypeInfo_var);
		List_1__ctor_mCBE457D94EF9F24E38A4094A576F1CFEDC521ABE(L_2, /*hidden argument*/List_1__ctor_mCBE457D94EF9F24E38A4094A576F1CFEDC521ABE_RuntimeMethod_var);
		V_3 = L_2;
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_3 = ___stmt2;
		__this->set__stmt_1(L_3);
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_4 = ___cnn0;
		NullCheck(L_4);
		DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_5 = VirtFuncInvoker1< DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 *, String_t* >::Invoke(26 /* System.Data.DataTable System.Data.Common.DbConnection::GetSchema(System.String) */, L_4, _stringLiteralD99C226D02CB06DF9C4F96D0E0140B91C9B8F41F);
		V_4 = L_5;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_6 = V_4;
			NullCheck(L_6);
			DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_7 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			RuntimeObject* L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_7);
			V_5 = L_8;
		}

IL_003a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0072;
			}

IL_003c:
			{
				RuntimeObject* L_9 = V_5;
				NullCheck(L_9);
				RuntimeObject * L_10 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_9);
				V_6 = ((DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B *)CastclassClass((RuntimeObject*)L_10, DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B_il2cpp_TypeInfo_var));
				Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * L_11 = V_0;
				DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_12 = V_6;
				NullCheck(L_12);
				RuntimeObject * L_13 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_12, _stringLiteral58F69C9012CFB997F9D3FFE4F607D66F6E932A1F, /*hidden argument*/NULL);
				DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_14 = V_6;
				NullCheck(L_14);
				RuntimeObject * L_15 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_14, _stringLiteral89F89C02CF47E091E726A4E07B88AF0966806897, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
				int32_t L_16 = Convert_ToInt32_mCF1152AF4138C1DD7A16643B22EE69A38373EF86(L_15, /*hidden argument*/NULL);
				NullCheck(L_11);
				Dictionary_2_Add_m5453726952CE3720733822DBF38A0091037F0F76(L_11, ((String_t*)CastclassSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)), L_16, /*hidden argument*/Dictionary_2_Add_m5453726952CE3720733822DBF38A0091037F0F76_RuntimeMethod_var);
			}

IL_0072:
			{
				RuntimeObject* L_17 = V_5;
				NullCheck(L_17);
				bool L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_003c;
				}
			}

IL_007b:
			{
				IL2CPP_LEAVE(0x9E, FINALLY_007d);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007d;
		}

FINALLY_007d:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_19 = V_5;
				V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
				RuntimeObject* L_20 = V_7;
				if (!L_20)
				{
					goto IL_0091;
				}
			}

IL_008a:
			{
				RuntimeObject* L_21 = V_7;
				NullCheck(L_21);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_21);
			}

IL_0091:
			{
				IL2CPP_END_FINALLY(125)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(125)
		{
			IL2CPP_END_CLEANUP(0x9E, FINALLY_0092);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0092;
	}

FINALLY_0092:
	{ // begin finally (depth: 1)
		{
			DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_22 = V_4;
			if (!L_22)
			{
				goto IL_009d;
			}
		}

IL_0096:
		{
			DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_23 = V_4;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_23);
		}

IL_009d:
		{
			IL2CPP_END_FINALLY(146)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_JUMP_TBL(0x9E, IL_009e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009e:
	{
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_24 = ___reader1;
		NullCheck(L_24);
		DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_25 = SqliteDataReader_GetSchemaTable_mF7F1F6E17B3131396CFD99B6F38507B75710030E(L_24, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_8 = L_25;
	}

IL_00a8:
	try
	{ // begin try (depth: 1)
		{
			DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_26 = V_8;
			NullCheck(L_26);
			DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_27 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_26, /*hidden argument*/NULL);
			NullCheck(L_27);
			RuntimeObject* L_28 = VirtFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_27);
			V_5 = L_28;
		}

IL_00b6:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0135;
			}

IL_00b8:
			{
				RuntimeObject* L_29 = V_5;
				NullCheck(L_29);
				RuntimeObject * L_30 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_29);
				V_9 = ((DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B *)CastclassClass((RuntimeObject*)L_30, DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B_il2cpp_TypeInfo_var));
				DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_31 = V_9;
				IL2CPP_RUNTIME_CLASS_INIT(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var);
				String_t* L_32 = ((SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var))->get_BaseCatalogName_6();
				NullCheck(L_31);
				RuntimeObject * L_33 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_31, L_32, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
				DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_34 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
				if ((((RuntimeObject*)(RuntimeObject *)L_33) == ((RuntimeObject*)(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 *)L_34)))
				{
					goto IL_0135;
				}
			}

IL_00d9:
			{
				DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_35 = V_9;
				IL2CPP_RUNTIME_CLASS_INIT(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var);
				String_t* L_36 = ((SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var))->get_BaseCatalogName_6();
				NullCheck(L_35);
				RuntimeObject * L_37 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_35, L_36, /*hidden argument*/NULL);
				V_10 = ((String_t*)CastclassSealed((RuntimeObject*)L_37, String_t_il2cpp_TypeInfo_var));
				DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_38 = V_9;
				IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var);
				String_t* L_39 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_BaseTableName_15();
				NullCheck(L_38);
				RuntimeObject * L_40 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_38, L_39, /*hidden argument*/NULL);
				V_11 = ((String_t*)CastclassSealed((RuntimeObject*)L_40, String_t_il2cpp_TypeInfo_var));
				Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * L_41 = V_1;
				String_t* L_42 = V_10;
				NullCheck(L_41);
				bool L_43 = Dictionary_2_ContainsKey_mD56CE1C90741C181D0119F225F9F94610EF672D9(L_41, L_42, /*hidden argument*/Dictionary_2_ContainsKey_mD56CE1C90741C181D0119F225F9F94610EF672D9_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_011a;
				}
			}

IL_0109:
			{
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_44 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
				List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_44, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
				V_2 = L_44;
				Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * L_45 = V_1;
				String_t* L_46 = V_10;
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_47 = V_2;
				NullCheck(L_45);
				Dictionary_2_Add_m5B95C1D0D8DF469906AE411C3774C9D88F7AAB66(L_45, L_46, L_47, /*hidden argument*/Dictionary_2_Add_m5B95C1D0D8DF469906AE411C3774C9D88F7AAB66_RuntimeMethod_var);
				goto IL_0123;
			}

IL_011a:
			{
				Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * L_48 = V_1;
				String_t* L_49 = V_10;
				NullCheck(L_48);
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_50 = Dictionary_2_get_Item_mC57580CB610EF86CE23A34BBBDA471DB2E55AC56(L_48, L_49, /*hidden argument*/Dictionary_2_get_Item_mC57580CB610EF86CE23A34BBBDA471DB2E55AC56_RuntimeMethod_var);
				V_2 = L_50;
			}

IL_0123:
			{
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_51 = V_2;
				String_t* L_52 = V_11;
				NullCheck(L_51);
				bool L_53 = List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B(L_51, L_52, /*hidden argument*/List_1_Contains_mC1D01A0D94C03E4225EEF9D6506D7D91C6976B7B_RuntimeMethod_var);
				if (L_53)
				{
					goto IL_0135;
				}
			}

IL_012d:
			{
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_54 = V_2;
				String_t* L_55 = V_11;
				NullCheck(L_54);
				List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_54, L_55, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
			}

IL_0135:
			{
				RuntimeObject* L_56 = V_5;
				NullCheck(L_56);
				bool L_57 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_56);
				if (L_57)
				{
					goto IL_00b8;
				}
			}

IL_0141:
			{
				IL2CPP_LEAVE(0x158, FINALLY_0143);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0143;
		}

FINALLY_0143:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_58 = V_5;
				V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_58, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
				RuntimeObject* L_59 = V_7;
				if (!L_59)
				{
					goto IL_0157;
				}
			}

IL_0150:
			{
				RuntimeObject* L_60 = V_7;
				NullCheck(L_60);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_60);
			}

IL_0157:
			{
				IL2CPP_END_FINALLY(323)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(323)
		{
			IL2CPP_JUMP_TBL(0x158, IL_0158)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0158:
		{
			Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * L_61 = V_1;
			NullCheck(L_61);
			Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87  L_62 = Dictionary_2_GetEnumerator_m5330001CB129799E88B8F362732D472B5FE2E30D(L_61, /*hidden argument*/Dictionary_2_GetEnumerator_m5330001CB129799E88B8F362732D472B5FE2E30D_RuntimeMethod_var);
			V_12 = L_62;
		}

IL_0160:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0555;
			}

IL_0165:
			{
				KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751  L_63 = Enumerator_get_Current_m85D3AB75DB2B470E4205D37539278CBB8B1235D8_inline((Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *)(&V_12), /*hidden argument*/Enumerator_get_Current_m85D3AB75DB2B470E4205D37539278CBB8B1235D8_RuntimeMethod_var);
				V_13 = L_63;
				V_14 = 0;
				goto IL_0542;
			}

IL_0176:
			{
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_64 = KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_inline((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_13), /*hidden argument*/KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_RuntimeMethod_var);
				int32_t L_65 = V_14;
				NullCheck(L_64);
				String_t* L_66 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline(L_64, L_65, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
				V_15 = L_66;
				V_16 = (DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B *)NULL;
				SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_67 = ___cnn0;
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_68 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_69 = L_68;
				String_t* L_70 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_inline((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_13), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
				NullCheck(L_69);
				ArrayElementTypeCheck (L_69, L_70);
				(L_69)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_70);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_71 = L_69;
				String_t* L_72 = V_15;
				NullCheck(L_71);
				ArrayElementTypeCheck (L_71, L_72);
				(L_71)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_72);
				NullCheck(L_67);
				DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_73 = VirtFuncInvoker2< DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 *, String_t*, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(27 /* System.Data.DataTable System.Data.Common.DbConnection::GetSchema(System.String,System.String[]) */, L_67, _stringLiteralF642EE196088372EA886186C6C617515599AFD3F, L_71);
				V_17 = L_73;
			}

IL_01ab:
			try
			{ // begin try (depth: 3)
				{
					V_18 = 0;
					goto IL_022f;
				}

IL_01b0:
				{
					DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_74 = V_17;
					NullCheck(L_74);
					DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_75 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_74, /*hidden argument*/NULL);
					NullCheck(L_75);
					RuntimeObject* L_76 = VirtFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_75);
					V_5 = L_76;
				}

IL_01be:
				try
				{ // begin try (depth: 4)
					{
						goto IL_0209;
					}

IL_01c0:
					{
						RuntimeObject* L_77 = V_5;
						NullCheck(L_77);
						RuntimeObject * L_78 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_77);
						V_19 = ((DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B *)CastclassClass((RuntimeObject*)L_78, DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B_il2cpp_TypeInfo_var));
						int32_t L_79 = V_18;
						if (L_79)
						{
							goto IL_01eb;
						}
					}

IL_01d2:
					{
						DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_80 = V_19;
						NullCheck(L_80);
						RuntimeObject * L_81 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_80, _stringLiteral2301A3AED57BDF6FA84FA74B2553B52161EE1A1B, /*hidden argument*/NULL);
						if (!((*(bool*)((bool*)UnBox(L_81, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))))
						{
							goto IL_01eb;
						}
					}

IL_01e5:
					{
						DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_82 = V_19;
						V_16 = L_82;
						IL2CPP_LEAVE(0x229, FINALLY_0214);
					}

IL_01eb:
					{
						int32_t L_83 = V_18;
						if ((!(((uint32_t)L_83) == ((uint32_t)1))))
						{
							goto IL_0209;
						}
					}

IL_01f0:
					{
						DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_84 = V_19;
						NullCheck(L_84);
						RuntimeObject * L_85 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_84, _stringLiteralC9E6A29D14F3F27CD2EE75B65407552AD50A3078, /*hidden argument*/NULL);
						if (!((*(bool*)((bool*)UnBox(L_85, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))))
						{
							goto IL_0209;
						}
					}

IL_0203:
					{
						DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_86 = V_19;
						V_16 = L_86;
						IL2CPP_LEAVE(0x229, FINALLY_0214);
					}

IL_0209:
					{
						RuntimeObject* L_87 = V_5;
						NullCheck(L_87);
						bool L_88 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_87);
						if (L_88)
						{
							goto IL_01c0;
						}
					}

IL_0212:
					{
						IL2CPP_LEAVE(0x229, FINALLY_0214);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_0214;
				}

FINALLY_0214:
				{ // begin finally (depth: 4)
					{
						RuntimeObject* L_89 = V_5;
						V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_89, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
						RuntimeObject* L_90 = V_7;
						if (!L_90)
						{
							goto IL_0228;
						}
					}

IL_0221:
					{
						RuntimeObject* L_91 = V_7;
						NullCheck(L_91);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_91);
					}

IL_0228:
					{
						IL2CPP_END_FINALLY(532)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(532)
				{
					IL2CPP_JUMP_TBL(0x229, IL_0229)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_0229:
				{
					int32_t L_92 = V_18;
					V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
				}

IL_022f:
				{
					int32_t L_93 = V_18;
					if ((((int32_t)L_93) >= ((int32_t)2)))
					{
						goto IL_023b;
					}
				}

IL_0234:
				{
					DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_94 = V_16;
					if (!L_94)
					{
						goto IL_01b0;
					}
				}

IL_023b:
				{
					DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_95 = V_16;
					if (L_95)
					{
						goto IL_0258;
					}
				}

IL_023f:
				{
					List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_96 = KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_inline((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_13), /*hidden argument*/KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_RuntimeMethod_var);
					int32_t L_97 = V_14;
					NullCheck(L_96);
					List_1_RemoveAt_mD17877118EA5CCF90E0D36CF420287270492A0F2(L_96, L_97, /*hidden argument*/List_1_RemoveAt_mD17877118EA5CCF90E0D36CF420287270492A0F2_RuntimeMethod_var);
					int32_t L_98 = V_14;
					V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1));
					IL2CPP_LEAVE(0x53C, FINALLY_0530);
				}

IL_0258:
				{
					SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_99 = ___cnn0;
					StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_100 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
					StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_101 = L_100;
					String_t* L_102 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_inline((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_13), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
					NullCheck(L_101);
					ArrayElementTypeCheck (L_101, L_102);
					(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_102);
					StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_103 = L_101;
					String_t* L_104 = V_15;
					NullCheck(L_103);
					ArrayElementTypeCheck (L_103, L_104);
					(L_103)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_104);
					NullCheck(L_99);
					DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_105 = VirtFuncInvoker2< DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 *, String_t*, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(27 /* System.Data.DataTable System.Data.Common.DbConnection::GetSchema(System.String,System.String[]) */, L_99, _stringLiteral193DAF137ED8B89DE36D47C3DF5FD8F66C0E1D14, L_103);
					V_20 = L_105;
				}

IL_027a:
				try
				{ // begin try (depth: 4)
					{
						Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * L_106 = V_0;
						String_t* L_107 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_inline((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_13), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
						NullCheck(L_106);
						int32_t L_108 = Dictionary_2_get_Item_m8B16E8CBD6B9EE71984601DB60ADB40673ADD5CC(L_106, L_107, /*hidden argument*/Dictionary_2_get_Item_m8B16E8CBD6B9EE71984601DB60ADB40673ADD5CC_RuntimeMethod_var);
						V_21 = L_108;
						DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_109 = V_20;
						NullCheck(L_109);
						DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_110 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_109, /*hidden argument*/NULL);
						NullCheck(L_110);
						DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_111 = DataRowCollection_get_Item_mDF585AB070DEE6DB7B63881536E7072B0C87834F(L_110, 0, /*hidden argument*/NULL);
						NullCheck(L_111);
						RuntimeObject * L_112 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_111, _stringLiteralBB4B470AC8E8BC7DB9A08102DEBACDD14B1D6379, /*hidden argument*/NULL);
						IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
						int32_t L_113 = Convert_ToInt32_mCF1152AF4138C1DD7A16643B22EE69A38373EF86(L_112, /*hidden argument*/NULL);
						V_22 = L_113;
						SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_114 = ___stmt2;
						NullCheck(L_114);
						SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_115 = L_114->get__sql_0();
						SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_116 = ___stmt2;
						int32_t L_117 = V_21;
						int32_t L_118 = V_22;
						NullCheck(L_115);
						int32_t L_119 = VirtFuncInvoker3< int32_t, SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t, int32_t >::Invoke(59 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::GetCursorForTable(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int32) */, L_115, L_116, L_117, L_118);
						V_23 = L_119;
						SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_120 = ___cnn0;
						StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_121 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
						StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_122 = L_121;
						String_t* L_123 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_inline((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_13), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
						NullCheck(L_122);
						ArrayElementTypeCheck (L_122, L_123);
						(L_122)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_123);
						StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_124 = L_122;
						String_t* L_125 = V_15;
						NullCheck(L_124);
						ArrayElementTypeCheck (L_124, L_125);
						(L_124)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_125);
						StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_126 = L_124;
						DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_127 = V_16;
						NullCheck(L_127);
						RuntimeObject * L_128 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_127, _stringLiteral654053DB7D1826E8BC0FB8C5C17C5E62B7C9C87C, /*hidden argument*/NULL);
						NullCheck(L_126);
						ArrayElementTypeCheck (L_126, ((String_t*)CastclassSealed((RuntimeObject*)L_128, String_t_il2cpp_TypeInfo_var)));
						(L_126)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)((String_t*)CastclassSealed((RuntimeObject*)L_128, String_t_il2cpp_TypeInfo_var)));
						NullCheck(L_120);
						DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_129 = VirtFuncInvoker2< DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 *, String_t*, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(27 /* System.Data.DataTable System.Data.Common.DbConnection::GetSchema(System.String,System.String[]) */, L_120, _stringLiteralD1D50AF319576CA6C6CBA296631E193D490A5370, L_126);
						V_24 = L_129;
					}

IL_02ef:
					try
					{ // begin try (depth: 5)
						{
							V_25 = (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 *)NULL;
							List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_130 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
							List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_130, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
							V_26 = L_130;
							V_27 = 0;
							goto IL_040e;
						}

IL_0301:
						{
							V_28 = (bool)1;
							DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_131 = V_8;
							NullCheck(L_131);
							DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_132 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_131, /*hidden argument*/NULL);
							NullCheck(L_132);
							RuntimeObject* L_133 = VirtFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_132);
							V_5 = L_133;
						}

IL_0312:
						try
						{ // begin try (depth: 6)
							{
								goto IL_03bd;
							}

IL_0317:
							{
								RuntimeObject* L_134 = V_5;
								NullCheck(L_134);
								RuntimeObject * L_135 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_134);
								V_29 = ((DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B *)CastclassClass((RuntimeObject*)L_135, DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B_il2cpp_TypeInfo_var));
								DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_136 = V_29;
								IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var);
								String_t* L_137 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_BaseColumnName_16();
								NullCheck(L_136);
								bool L_138 = DataRow_IsNull_mCF24987852F1AC348E419E59F28F1A84F90AF1D0(L_136, L_137, /*hidden argument*/NULL);
								if (L_138)
								{
									goto IL_03bd;
								}
							}

IL_0336:
							{
								DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_139 = V_29;
								IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var);
								String_t* L_140 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_BaseColumnName_16();
								NullCheck(L_139);
								RuntimeObject * L_141 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_139, L_140, /*hidden argument*/NULL);
								DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_142 = V_24;
								NullCheck(L_142);
								DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_143 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_142, /*hidden argument*/NULL);
								int32_t L_144 = V_27;
								NullCheck(L_143);
								DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_145 = DataRowCollection_get_Item_mDF585AB070DEE6DB7B63881536E7072B0C87834F(L_143, L_144, /*hidden argument*/NULL);
								NullCheck(L_145);
								RuntimeObject * L_146 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_145, _stringLiteral62F94C337A62422091EEC8AF220557BC9D2A0F7D, /*hidden argument*/NULL);
								bool L_147 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(((String_t*)CastclassSealed((RuntimeObject*)L_141, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed((RuntimeObject*)L_146, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
								if (!L_147)
								{
									goto IL_03bd;
								}
							}

IL_036b:
							{
								DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_148 = V_29;
								IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var);
								String_t* L_149 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_BaseTableName_15();
								NullCheck(L_148);
								RuntimeObject * L_150 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_148, L_149, /*hidden argument*/NULL);
								String_t* L_151 = V_15;
								bool L_152 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(((String_t*)CastclassSealed((RuntimeObject*)L_150, String_t_il2cpp_TypeInfo_var)), L_151, /*hidden argument*/NULL);
								if (!L_152)
								{
									goto IL_03bd;
								}
							}

IL_0385:
							{
								DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_153 = V_29;
								IL2CPP_RUNTIME_CLASS_INIT(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var);
								String_t* L_154 = ((SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var))->get_BaseCatalogName_6();
								NullCheck(L_153);
								RuntimeObject * L_155 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_153, L_154, /*hidden argument*/NULL);
								String_t* L_156 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_inline((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_13), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
								bool L_157 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(((String_t*)CastclassSealed((RuntimeObject*)L_155, String_t_il2cpp_TypeInfo_var)), L_156, /*hidden argument*/NULL);
								if (!L_157)
								{
									goto IL_03bd;
								}
							}

IL_03a4:
							{
								DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_158 = V_24;
								NullCheck(L_158);
								DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_159 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_158, /*hidden argument*/NULL);
								int32_t L_160 = V_27;
								NullCheck(L_159);
								DataRowCollection_RemoveAt_mC10D9EEAF5FD8346FA1CB1575543488540B93D08(L_159, L_160, /*hidden argument*/NULL);
								int32_t L_161 = V_27;
								V_27 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_161, (int32_t)1));
								V_28 = (bool)0;
								IL2CPP_LEAVE(0x3E0, FINALLY_03cb);
							}

IL_03bd:
							{
								RuntimeObject* L_162 = V_5;
								NullCheck(L_162);
								bool L_163 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_162);
								if (L_163)
								{
									goto IL_0317;
								}
							}

IL_03c9:
							{
								IL2CPP_LEAVE(0x3E0, FINALLY_03cb);
							}
						} // end try (depth: 6)
						catch(Il2CppExceptionWrapper& e)
						{
							__last_unhandled_exception = (Exception_t *)e.ex;
							goto FINALLY_03cb;
						}

FINALLY_03cb:
						{ // begin finally (depth: 6)
							{
								RuntimeObject* L_164 = V_5;
								V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_164, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
								RuntimeObject* L_165 = V_7;
								if (!L_165)
								{
									goto IL_03df;
								}
							}

IL_03d8:
							{
								RuntimeObject* L_166 = V_7;
								NullCheck(L_166);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_166);
							}

IL_03df:
							{
								IL2CPP_END_FINALLY(971)
							}
						} // end finally (depth: 6)
						IL2CPP_CLEANUP(971)
						{
							IL2CPP_JUMP_TBL(0x3E0, IL_03e0)
							IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
						}

IL_03e0:
						{
							bool L_167 = V_28;
							if (!L_167)
							{
								goto IL_0408;
							}
						}

IL_03e4:
						{
							List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_168 = V_26;
							DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_169 = V_24;
							NullCheck(L_169);
							DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_170 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_169, /*hidden argument*/NULL);
							int32_t L_171 = V_27;
							NullCheck(L_170);
							DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_172 = DataRowCollection_get_Item_mDF585AB070DEE6DB7B63881536E7072B0C87834F(L_170, L_171, /*hidden argument*/NULL);
							NullCheck(L_172);
							RuntimeObject * L_173 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_172, _stringLiteral62F94C337A62422091EEC8AF220557BC9D2A0F7D, /*hidden argument*/NULL);
							NullCheck(L_168);
							List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_168, ((String_t*)CastclassSealed((RuntimeObject*)L_173, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
						}

IL_0408:
						{
							int32_t L_174 = V_27;
							V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
						}

IL_040e:
						{
							int32_t L_175 = V_27;
							DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_176 = V_24;
							NullCheck(L_176);
							DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_177 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_176, /*hidden argument*/NULL);
							NullCheck(L_177);
							int32_t L_178 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_177);
							if ((((int32_t)L_175) < ((int32_t)L_178)))
							{
								goto IL_0301;
							}
						}

IL_0421:
						{
							DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_179 = V_16;
							NullCheck(L_179);
							RuntimeObject * L_180 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_179, _stringLiteral654053DB7D1826E8BC0FB8C5C17C5E62B7C9C87C, /*hidden argument*/NULL);
							String_t* L_181 = V_15;
							String_t* L_182 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral96B270E30E3C5C4FDE9E03F6B30D4F2F1657F16C, L_181, /*hidden argument*/NULL);
							bool L_183 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(((String_t*)CastclassSealed((RuntimeObject*)L_180, String_t_il2cpp_TypeInfo_var)), L_182, /*hidden argument*/NULL);
							if (!L_183)
							{
								goto IL_0479;
							}
						}

IL_0445:
						{
							List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_184 = V_26;
							NullCheck(L_184);
							int32_t L_185 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_184, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
							if ((((int32_t)L_185) <= ((int32_t)0)))
							{
								goto IL_0479;
							}
						}

IL_044f:
						{
							List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_186 = V_26;
							NullCheck(L_186);
							int32_t L_187 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_186, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
							StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_188 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_187);
							V_30 = L_188;
							List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_189 = V_26;
							StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_190 = V_30;
							NullCheck(L_189);
							List_1_CopyTo_m085C23E93F3D97F191B8A5862C0023CBA31779A0(L_189, L_190, /*hidden argument*/List_1_CopyTo_m085C23E93F3D97F191B8A5862C0023CBA31779A0_RuntimeMethod_var);
							SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_191 = ___cnn0;
							String_t* L_192 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_inline((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_13), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
							String_t* L_193 = V_15;
							StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_194 = V_30;
							KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_195 = (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 *)il2cpp_codegen_object_new(KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051_il2cpp_TypeInfo_var);
							KeyQuery__ctor_m22449788AF65C3ABA3E3AFFD7EF344606B4A3C77(L_195, L_191, L_192, L_193, L_194, /*hidden argument*/NULL);
							V_25 = L_195;
						}

IL_0479:
						{
							V_31 = 0;
							goto IL_0503;
						}

IL_0481:
						{
							DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_196 = V_24;
							NullCheck(L_196);
							DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_197 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_196, /*hidden argument*/NULL);
							int32_t L_198 = V_31;
							NullCheck(L_197);
							DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_199 = DataRowCollection_get_Item_mDF585AB070DEE6DB7B63881536E7072B0C87834F(L_197, L_198, /*hidden argument*/NULL);
							NullCheck(L_199);
							RuntimeObject * L_200 = DataRow_get_Item_mECAC0A4B3584FB64E6A6AE1E6EAE91B7E9B11C89(L_199, _stringLiteral62F94C337A62422091EEC8AF220557BC9D2A0F7D, /*hidden argument*/NULL);
							V_32 = ((String_t*)CastclassSealed((RuntimeObject*)L_200, String_t_il2cpp_TypeInfo_var));
							il2cpp_codegen_initobj((&V_33), sizeof(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D ));
							int32_t L_201 = V_22;
							(&V_33)->set_rootPage_4(L_201);
							int32_t L_202 = V_23;
							(&V_33)->set_cursor_5(L_202);
							int32_t L_203 = V_21;
							(&V_33)->set_database_3(L_203);
							String_t* L_204 = KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_inline((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_13), /*hidden argument*/KeyValuePair_2_get_Key_mEA05C20AD1DE7CCEFFF9712615977793F77CB5A6_RuntimeMethod_var);
							(&V_33)->set_databaseName_0(L_204);
							String_t* L_205 = V_15;
							(&V_33)->set_tableName_1(L_205);
							String_t* L_206 = V_32;
							(&V_33)->set_columnName_2(L_206);
							KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_207 = V_25;
							(&V_33)->set_query_6(L_207);
							int32_t L_208 = V_31;
							(&V_33)->set_column_7(L_208);
							List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * L_209 = V_3;
							KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D  L_210 = V_33;
							NullCheck(L_209);
							List_1_Add_mDC0BE52A08145926A3037CE04FC07B7F07C3E06E(L_209, L_210, /*hidden argument*/List_1_Add_mDC0BE52A08145926A3037CE04FC07B7F07C3E06E_RuntimeMethod_var);
							int32_t L_211 = V_31;
							V_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_211, (int32_t)1));
						}

IL_0503:
						{
							int32_t L_212 = V_31;
							DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_213 = V_24;
							NullCheck(L_213);
							DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_214 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_213, /*hidden argument*/NULL);
							NullCheck(L_214);
							int32_t L_215 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_214);
							if ((((int32_t)L_212) < ((int32_t)L_215)))
							{
								goto IL_0481;
							}
						}

IL_0516:
						{
							IL2CPP_LEAVE(0x53C, FINALLY_0518);
						}
					} // end try (depth: 5)
					catch(Il2CppExceptionWrapper& e)
					{
						__last_unhandled_exception = (Exception_t *)e.ex;
						goto FINALLY_0518;
					}

FINALLY_0518:
					{ // begin finally (depth: 5)
						{
							DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_216 = V_24;
							if (!L_216)
							{
								goto IL_0523;
							}
						}

IL_051c:
						{
							DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_217 = V_24;
							NullCheck(L_217);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_217);
						}

IL_0523:
						{
							IL2CPP_END_FINALLY(1304)
						}
					} // end finally (depth: 5)
					IL2CPP_CLEANUP(1304)
					{
						IL2CPP_END_CLEANUP(0x53C, FINALLY_0524);
						IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_0524;
				}

FINALLY_0524:
				{ // begin finally (depth: 4)
					{
						DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_218 = V_20;
						if (!L_218)
						{
							goto IL_052f;
						}
					}

IL_0528:
					{
						DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_219 = V_20;
						NullCheck(L_219);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_219);
					}

IL_052f:
					{
						IL2CPP_END_FINALLY(1316)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(1316)
				{
					IL2CPP_END_CLEANUP(0x53C, FINALLY_0530);
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0530;
			}

FINALLY_0530:
			{ // begin finally (depth: 3)
				{
					DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_220 = V_17;
					if (!L_220)
					{
						goto IL_053b;
					}
				}

IL_0534:
				{
					DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_221 = V_17;
					NullCheck(L_221);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_221);
				}

IL_053b:
				{
					IL2CPP_END_FINALLY(1328)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1328)
			{
				IL2CPP_JUMP_TBL(0x53C, IL_053c)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_053c:
			{
				int32_t L_222 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)1));
			}

IL_0542:
			{
				int32_t L_223 = V_14;
				List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_224 = KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_inline((KeyValuePair_2_tA83092D80FEE400876EC29D0A8958810BDF87751 *)(&V_13), /*hidden argument*/KeyValuePair_2_get_Value_mE2B1F0FE4C82AF90B46624082A0D343B3A821B7E_RuntimeMethod_var);
				NullCheck(L_224);
				int32_t L_225 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_224, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
				if ((((int32_t)L_223) < ((int32_t)L_225)))
				{
					goto IL_0176;
				}
			}

IL_0555:
			{
				bool L_226 = Enumerator_MoveNext_m185DCFF47AE91F647CD1E459520807C87651A7DE((Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *)(&V_12), /*hidden argument*/Enumerator_MoveNext_m185DCFF47AE91F647CD1E459520807C87651A7DE_RuntimeMethod_var);
				if (L_226)
				{
					goto IL_0165;
				}
			}

IL_0561:
			{
				IL2CPP_LEAVE(0x57D, FINALLY_0563);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0563;
		}

FINALLY_0563:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m4E6587A2AC3C47D1B1835490F4D4FE3319B080C0((Enumerator_t9E7DE4CE09C1B5EBE85CCE48FEC2F5CD42E44E87 *)(&V_12), /*hidden argument*/Enumerator_Dispose_m4E6587A2AC3C47D1B1835490F4D4FE3319B080C0_RuntimeMethod_var);
			IL2CPP_END_FINALLY(1379)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(1379)
		{
			IL2CPP_END_CLEANUP(0x57D, FINALLY_0571);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0571;
	}

FINALLY_0571:
	{ // begin finally (depth: 1)
		{
			DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_227 = V_8;
			if (!L_227)
			{
				goto IL_057c;
			}
		}

IL_0575:
		{
			DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_228 = V_8;
			NullCheck(L_228);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_228);
		}

IL_057c:
		{
			IL2CPP_END_FINALLY(1393)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1393)
	{
		IL2CPP_JUMP_TBL(0x57D, IL_057d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_057d:
	{
		List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * L_229 = V_3;
		NullCheck(L_229);
		int32_t L_230 = List_1_get_Count_m76195183806581950B0EFE1852C8255E6EDA2337_inline(L_229, /*hidden argument*/List_1_get_Count_m76195183806581950B0EFE1852C8255E6EDA2337_RuntimeMethod_var);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_231 = (KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B*)(KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B*)SZArrayNew(KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B_il2cpp_TypeInfo_var, (uint32_t)L_230);
		__this->set__keyInfo_0(L_231);
		List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * L_232 = V_3;
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_233 = __this->get__keyInfo_0();
		NullCheck(L_232);
		List_1_CopyTo_m1D1DCE16256250FF5D49BBC5B2170B8469A0550B(L_232, L_233, /*hidden argument*/List_1_CopyTo_m1D1DCE16256250FF5D49BBC5B2170B8469A0550B_RuntimeMethod_var);
		return;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteKeyReader_get_Count_m957DE921FC7C295BC0CABD4AB2E08DDC61C20AE9 (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, const RuntimeMethod* method)
{
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_0 = __this->get__keyInfo_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_1 = __this->get__keyInfo_0();
		NullCheck(L_1);
		return (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
	}

IL_0011:
	{
		return 0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteKeyReader_Sync_mF95BC00BBA792D80BEE20FB2006BE1CA18972657(__this, /*hidden argument*/NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_cursor_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0020;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_3 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA_RuntimeMethod_var);
	}

IL_0020:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Sync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Sync_mF95BC00BBA792D80BEE20FB2006BE1CA18972657 (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, const RuntimeMethod* method)
{
	KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get__isValid_2();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_0 = (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 *)NULL;
		V_1 = 0;
		goto IL_007c;
	}

IL_000f:
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_7 = V_0;
		if ((((RuntimeObject*)(KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 *)L_6) == ((RuntimeObject*)(KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 *)L_7)))
		{
			goto IL_0078;
		}
	}

IL_0036:
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_query_6();
		V_0 = L_10;
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_12 = V_0;
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_13 = __this->get__stmt_1();
		NullCheck(L_13);
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_14 = L_13->get__sql_0();
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_15 = __this->get__stmt_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_16 = __this->get__keyInfo_0();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_cursor_5();
		NullCheck(L_14);
		int64_t L_19 = VirtFuncInvoker2< int64_t, SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t >::Invoke(60 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_14, L_15, L_18);
		NullCheck(L_12);
		KeyQuery_Sync_mB6A4987196C5C4EC8445DAF57F6CE74401B9A40A(L_12, L_19, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007c:
	{
		int32_t L_21 = V_1;
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_22 = __this->get__keyInfo_0();
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_000f;
		}
	}
	{
		__this->set__isValid_2((bool)1);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Reset_m72D63FA2FB1A04B69B1F3B011E9F88F64D82F6BB (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		__this->set__isValid_2((bool)0);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_0 = __this->get__keyInfo_0();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_0014:
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		KeyQuery_set_IsValid_m04575B63742D87C840E5F78A24AA8023861386CE(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_8 = V_0;
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_9 = __this->get__keyInfo_0();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_Dispose_m991DB597FD6B2C49F0B11C28E4560857C8890A66 (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		__this->set__stmt_1((SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *)NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_0 = __this->get__keyInfo_0();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0014:
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		KeyQuery_Dispose_m4462EF3644051D288FBABE7BF137781BBC3D5485(L_6, /*hidden argument*/NULL);
	}

IL_003d:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_8 = V_0;
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_9 = __this->get__keyInfo_0();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		__this->set__keyInfo_0((KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B*)NULL);
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetDataTypeName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetDataTypeName_mDA1CBF596DA05B2D17D522BCBE7DA9FE05D8ACEE (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetDataTypeName_mDA1CBF596DA05B2D17D522BCBE7DA9FE05D8ACEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteKeyReader_Sync_mF95BC00BBA792D80BEE20FB2006BE1CA18972657(__this, /*hidden argument*/NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_query_6();
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_3 = __this->get__keyInfo_0();
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_query_6();
		NullCheck(L_5);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_6 = L_5->get__reader_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_7 = __this->get__keyInfo_0();
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_column_7();
		NullCheck(L_6);
		String_t* L_10 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(28 /* System.String System.Data.Common.DbDataReader::GetDataTypeName(System.Int32) */, L_6, L_9);
		return L_10;
	}

IL_0046:
	{
		return _stringLiteral1178CAFBD64BBBFA77F5AC0A9D5032ED88162781;
	}
}
// System.Type Mono.Data.Sqlite.SqliteKeyReader::GetFieldType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * SqliteKeyReader_GetFieldType_m6FDEFF33561C9DE5588D25723C227B87FA9F6989 (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetFieldType_m6FDEFF33561C9DE5588D25723C227B87FA9F6989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteKeyReader_Sync_mF95BC00BBA792D80BEE20FB2006BE1CA18972657(__this, /*hidden argument*/NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_query_6();
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_3 = __this->get__keyInfo_0();
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_query_6();
		NullCheck(L_5);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_6 = L_5->get__reader_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_7 = __this->get__keyInfo_0();
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_column_7();
		NullCheck(L_6);
		Type_t * L_10 = VirtFuncInvoker1< Type_t *, int32_t >::Invoke(30 /* System.Type System.Data.Common.DbDataReader::GetFieldType(System.Int32) */, L_6, L_9);
		return L_10;
	}

IL_0046:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetName_mAC89CE2BCED8633C5C3287B89FAB1EE7AAC6AA91 (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		String_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_columnName_2();
		return L_2;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::GetOrdinal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteKeyReader_GetOrdinal_m973F59D094B57722E9F36626712C1C04876E1975 (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_0004:
	{
		String_t* L_0 = ___name0;
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		String_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_columnName_2();
		int32_t L_4 = String_Compare_m5BD1EF8904C9B13BEDB7A876B122F117B317B442(L_0, L_3, 5, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_7 = V_0;
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_8 = __this->get__keyInfo_0();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::GetBoolean(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteKeyReader_GetBoolean_m48043D3935B41A96E9FBE5FA6895360CDAE998C8 (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetBoolean_m48043D3935B41A96E9FBE5FA6895360CDAE998C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA(__this, L_0, /*hidden argument*/NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_7 = L_6->get__reader_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_column_7();
		NullCheck(L_7);
		bool L_11 = VirtFuncInvoker1< bool, int32_t >::Invoke(34 /* System.Boolean System.Data.Common.DbDataReader::GetBoolean(System.Int32) */, L_7, L_10);
		return L_11;
	}

IL_0047:
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_12 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, SqliteKeyReader_GetBoolean_m48043D3935B41A96E9FBE5FA6895360CDAE998C8_RuntimeMethod_var);
	}
}
// System.DateTime Mono.Data.Sqlite.SqliteKeyReader::GetDateTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  SqliteKeyReader_GetDateTime_mEC1CE94A64358FFBC0DE34DE3DF0FE3A3E291F12 (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetDateTime_mEC1CE94A64358FFBC0DE34DE3DF0FE3A3E291F12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA(__this, L_0, /*hidden argument*/NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_7 = L_6->get__reader_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_column_7();
		NullCheck(L_7);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_11 = VirtFuncInvoker1< DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , int32_t >::Invoke(35 /* System.DateTime System.Data.Common.DbDataReader::GetDateTime(System.Int32) */, L_7, L_10);
		return L_11;
	}

IL_0047:
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_12 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, SqliteKeyReader_GetDateTime_mEC1CE94A64358FFBC0DE34DE3DF0FE3A3E291F12_RuntimeMethod_var);
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteKeyReader::GetInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteKeyReader_GetInt32_m9E673772C3B115BF9DE1340F1D5E0CD08FB360BA (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetInt32_m9E673772C3B115BF9DE1340F1D5E0CD08FB360BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t G_B4_0 = 0;
	int64_t G_B3_0 = 0;
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA(__this, L_0, /*hidden argument*/NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_7 = L_6->get__reader_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_column_7();
		NullCheck(L_7);
		int32_t L_11 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(36 /* System.Int32 System.Data.Common.DbDataReader::GetInt32(System.Int32) */, L_7, L_10);
		return L_11;
	}

IL_0047:
	{
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_12 = __this->get__stmt_1();
		NullCheck(L_12);
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_13 = L_12->get__sql_0();
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_14 = __this->get__stmt_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_15 = __this->get__keyInfo_0();
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_cursor_5();
		NullCheck(L_13);
		int64_t L_18 = VirtFuncInvoker2< int64_t, SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t >::Invoke(60 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_13, L_14, L_17);
		int64_t L_19 = L_18;
		G_B3_0 = L_19;
		if (L_19)
		{
			G_B4_0 = L_19;
			goto IL_0077;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_20 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, SqliteKeyReader_GetInt32_m9E673772C3B115BF9DE1340F1D5E0CD08FB360BA_RuntimeMethod_var);
	}

IL_0077:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_21 = Convert_ToInt32_m5CE30569A0A5B70CBD85954BEEF436F57D6FAE6B(G_B4_0, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Int64 Mono.Data.Sqlite.SqliteKeyReader::GetInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SqliteKeyReader_GetInt64_m8393B7DF4B7EAA2BCE677E0D5FF84F2C885146BC (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetInt64_m8393B7DF4B7EAA2BCE677E0D5FF84F2C885146BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t G_B4_0 = 0;
	int64_t G_B3_0 = 0;
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA(__this, L_0, /*hidden argument*/NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_7 = L_6->get__reader_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_column_7();
		NullCheck(L_7);
		int64_t L_11 = VirtFuncInvoker1< int64_t, int32_t >::Invoke(37 /* System.Int64 System.Data.Common.DbDataReader::GetInt64(System.Int32) */, L_7, L_10);
		return L_11;
	}

IL_0047:
	{
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_12 = __this->get__stmt_1();
		NullCheck(L_12);
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_13 = L_12->get__sql_0();
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_14 = __this->get__stmt_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_15 = __this->get__keyInfo_0();
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_cursor_5();
		NullCheck(L_13);
		int64_t L_18 = VirtFuncInvoker2< int64_t, SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t >::Invoke(60 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_13, L_14, L_17);
		int64_t L_19 = L_18;
		G_B3_0 = L_19;
		if (L_19)
		{
			G_B4_0 = L_19;
			goto IL_0077;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_20 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, SqliteKeyReader_GetInt64_m8393B7DF4B7EAA2BCE677E0D5FF84F2C885146BC_RuntimeMethod_var);
	}

IL_0077:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_21 = Convert_ToInt64_mA01BFA4EFA523B93F48D03811D44AE225059E0AD(G_B4_0, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String Mono.Data.Sqlite.SqliteKeyReader::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteKeyReader_GetString_mA6F5C53838A266C7B0A74704282439AA12401FDB (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetString_mA6F5C53838A266C7B0A74704282439AA12401FDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA(__this, L_0, /*hidden argument*/NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_1 = __this->get__keyInfo_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_query_6();
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		NullCheck(L_6);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_7 = L_6->get__reader_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_column_7();
		NullCheck(L_7);
		String_t* L_11 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(40 /* System.String System.Data.Common.DbDataReader::GetString(System.Int32) */, L_7, L_10);
		return L_11;
	}

IL_0047:
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_12 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_mB14CE363FB346D9BC0C0763CAF0B67AF90902144(L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, SqliteKeyReader_GetString_mA6F5C53838A266C7B0A74704282439AA12401FDB_RuntimeMethod_var);
	}
}
// System.Object Mono.Data.Sqlite.SqliteKeyReader::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SqliteKeyReader_GetValue_m5C70699FC326649431FA6FBEBE356C82CD277604 (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_GetValue_m5C70699FC326649431FA6FBEBE356C82CD277604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_cursor_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_3 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		return L_3;
	}

IL_001a:
	{
		int32_t L_4 = ___i0;
		SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA(__this, L_4, /*hidden argument*/NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_5 = __this->get__keyInfo_0();
		int32_t L_6 = ___i0;
		NullCheck(L_5);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_query_6();
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_8 = __this->get__keyInfo_0();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_query_6();
		NullCheck(L_10);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_11 = L_10->get__reader_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_12 = __this->get__keyInfo_0();
		int32_t L_13 = ___i0;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_column_7();
		NullCheck(L_11);
		RuntimeObject * L_15 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(41 /* System.Object System.Data.Common.DbDataReader::GetValue(System.Int32) */, L_11, L_14);
		return L_15;
	}

IL_0061:
	{
		int32_t L_16 = ___i0;
		bool L_17 = SqliteKeyReader_IsDBNull_mA8F844DAB1708D254FF6D4C2EC0C6342741927DE(__this, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_18 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		return L_18;
	}

IL_0070:
	{
		int32_t L_19 = ___i0;
		int64_t L_20 = SqliteKeyReader_GetInt64_m8393B7DF4B7EAA2BCE677E0D5FF84F2C885146BC(__this, L_19, /*hidden argument*/NULL);
		int64_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteKeyReader::IsDBNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteKeyReader_IsDBNull_mA8F844DAB1708D254FF6D4C2EC0C6342741927DE (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_cursor_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0016:
	{
		int32_t L_3 = ___i0;
		SqliteKeyReader_Sync_mFECC18E7E3546457E0B80FFC3E3A54430491F5AA(__this, L_3, /*hidden argument*/NULL);
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_4 = __this->get__keyInfo_0();
		int32_t L_5 = ___i0;
		NullCheck(L_4);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->get_query_6();
		if (!L_6)
		{
			goto IL_005d;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_7 = __this->get__keyInfo_0();
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_query_6();
		NullCheck(L_9);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_10 = L_9->get__reader_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_11 = __this->get__keyInfo_0();
		int32_t L_12 = ___i0;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_column_7();
		NullCheck(L_10);
		bool L_14 = VirtFuncInvoker1< bool, int32_t >::Invoke(43 /* System.Boolean System.Data.Common.DbDataReader::IsDBNull(System.Int32) */, L_10, L_13);
		return L_14;
	}

IL_005d:
	{
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_15 = __this->get__stmt_1();
		NullCheck(L_15);
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_16 = L_15->get__sql_0();
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_17 = __this->get__stmt_1();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_18 = __this->get__keyInfo_0();
		int32_t L_19 = ___i0;
		NullCheck(L_18);
		int32_t L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_cursor_5();
		NullCheck(L_16);
		int64_t L_21 = VirtFuncInvoker2< int64_t, SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t >::Invoke(60 /* System.Int64 Mono.Data.Sqlite.SQLiteBase::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_16, L_17, L_20);
		return (bool)((((int64_t)L_21) == ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader::AppendSchemaTable(System.Data.DataTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteKeyReader_AppendSchemaTable_mD5A482CC15D52E9B725793C96FF9CCA147BB015D (SqliteKeyReader_tF2205BAD6156315BE6213D64BA9BA0152C6774D5 * __this, DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * ___tbl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteKeyReader_AppendSchemaTable_mD5A482CC15D52E9B725793C96FF9CCA147BB015D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * V_0 = NULL;
	int32_t V_1 = 0;
	DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * V_2 = NULL;
	DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 *)NULL;
		V_1 = 0;
		goto IL_02a8;
	}

IL_0009:
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_0 = __this->get__keyInfo_0();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_query_6();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_3 = __this->get__keyInfo_0();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->get_query_6();
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_6 = V_0;
		if ((((RuntimeObject*)(KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 *)L_5) == ((RuntimeObject*)(KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 *)L_6)))
		{
			goto IL_02a4;
		}
	}

IL_0033:
	{
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_7 = __this->get__keyInfo_0();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_query_6();
		V_0 = L_9;
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_10 = V_0;
		if (L_10)
		{
			goto IL_020a;
		}
	}
	{
		DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_11 = ___tbl0;
		NullCheck(L_11);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_12 = DataTable_NewRow_m74E2026105B65A19E657631DDAC31916F004CBF1(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var);
		String_t* L_14 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_ColumnName_0();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_15 = __this->get__keyInfo_0();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		String_t* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_columnName_2();
		NullCheck(L_13);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_13, L_14, L_17, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_18 = V_2;
		String_t* L_19 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_ColumnOrdinal_1();
		DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_20 = ___tbl0;
		NullCheck(L_20);
		DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_21 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_21);
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_18);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_18, L_19, L_24, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_25 = V_2;
		String_t* L_26 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_ColumnSize_2();
		int32_t L_27 = 8;
		RuntimeObject * L_28 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_25, L_26, L_28, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_29 = V_2;
		String_t* L_30 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_NumericPrecision_3();
		int32_t L_31 = ((int32_t)255);
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_29, L_30, L_32, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_33 = V_2;
		String_t* L_34 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_NumericScale_4();
		int32_t L_35 = ((int32_t)255);
		RuntimeObject * L_36 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_33, L_34, L_36, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_37 = V_2;
		String_t* L_38 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_ProviderType_6();
		int32_t L_39 = ((int32_t)((int32_t)12));
		RuntimeObject * L_40 = Box(DbType_t46DC393C53E0CB52DF1792FD357A7E596C5F432E_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_37, L_38, L_40, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_41 = V_2;
		String_t* L_42 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_IsLong_8();
		bool L_43 = ((bool)0);
		RuntimeObject * L_44 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_41, L_42, L_44, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_45 = V_2;
		String_t* L_46 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_AllowDBNull_9();
		bool L_47 = ((bool)0);
		RuntimeObject * L_48 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_45, L_46, L_48, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var);
		String_t* L_50 = ((SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var))->get_IsReadOnly_3();
		bool L_51 = ((bool)0);
		RuntimeObject * L_52 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_51);
		NullCheck(L_49);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_49, L_50, L_52, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_53 = V_2;
		String_t* L_54 = ((SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var))->get_IsRowVersion_4();
		bool L_55 = ((bool)0);
		RuntimeObject * L_56 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_53);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_53, L_54, L_56, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_57 = V_2;
		String_t* L_58 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_IsUnique_13();
		bool L_59 = ((bool)0);
		RuntimeObject * L_60 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_57, L_58, L_60, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_61 = V_2;
		String_t* L_62 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_IsKey_12();
		bool L_63 = ((bool)1);
		RuntimeObject * L_64 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_61, L_62, L_64, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_65 = V_2;
		String_t* L_66 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_DataType_5();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_67 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_68 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_65, L_66, L_68, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_69 = V_2;
		String_t* L_70 = ((SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var))->get_IsHidden_2();
		bool L_71 = ((bool)1);
		RuntimeObject * L_72 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_69);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_69, L_70, L_72, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_73 = V_2;
		String_t* L_74 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_BaseColumnName_16();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_75 = __this->get__keyInfo_0();
		int32_t L_76 = V_1;
		NullCheck(L_75);
		String_t* L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->get_columnName_2();
		NullCheck(L_73);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_73, L_74, L_77, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_78 = V_2;
		String_t* L_79 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_IsExpression_11();
		bool L_80 = ((bool)0);
		RuntimeObject * L_81 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_78);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_78, L_79, L_81, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_82 = V_2;
		String_t* L_83 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_IsAliased_10();
		bool L_84 = ((bool)0);
		RuntimeObject * L_85 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_84);
		NullCheck(L_82);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_82, L_83, L_85, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_86 = V_2;
		String_t* L_87 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_BaseTableName_15();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_88 = __this->get__keyInfo_0();
		int32_t L_89 = V_1;
		NullCheck(L_88);
		String_t* L_90 = ((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->get_tableName_1();
		NullCheck(L_86);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_86, L_87, L_90, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_91 = V_2;
		String_t* L_92 = ((SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var))->get_BaseCatalogName_6();
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_93 = __this->get__keyInfo_0();
		int32_t L_94 = V_1;
		NullCheck(L_93);
		String_t* L_95 = ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)))->get_databaseName_0();
		NullCheck(L_91);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_91, L_92, L_95, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_96 = V_2;
		String_t* L_97 = ((SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var))->get_IsAutoIncrement_1();
		bool L_98 = ((bool)1);
		RuntimeObject * L_99 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_98);
		NullCheck(L_96);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_96, L_97, L_99, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_100 = V_2;
		NullCheck(L_100);
		DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_100, _stringLiteral66D2C601FBFA7B406B77381952D6A78FC0BD2564, _stringLiteral1178CAFBD64BBBFA77F5AC0A9D5032ED88162781, /*hidden argument*/NULL);
		DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_101 = ___tbl0;
		NullCheck(L_101);
		DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_102 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_101, /*hidden argument*/NULL);
		DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_103 = V_2;
		NullCheck(L_102);
		DataRowCollection_Add_mD58F34C8E5D4FD55D6CEFA56F121935E467C11F6(L_102, L_103, /*hidden argument*/NULL);
		goto IL_02a4;
	}

IL_020a:
	{
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_104 = V_0;
		NullCheck(L_104);
		KeyQuery_Sync_mB6A4987196C5C4EC8445DAF57F6CE74401B9A40A(L_104, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * L_105 = V_0;
		NullCheck(L_105);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_106 = L_105->get__reader_1();
		NullCheck(L_106);
		DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_107 = VirtFuncInvoker0< DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * >::Invoke(33 /* System.Data.DataTable System.Data.Common.DbDataReader::GetSchemaTable() */, L_106);
		V_3 = L_107;
	}

IL_021e:
	try
	{ // begin try (depth: 1)
		{
			DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_108 = V_3;
			NullCheck(L_108);
			DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_109 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_108, /*hidden argument*/NULL);
			NullCheck(L_109);
			RuntimeObject* L_110 = VirtFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Collections.IEnumerator System.Data.InternalDataCollectionBase::GetEnumerator() */, L_109);
			V_4 = L_110;
		}

IL_022b:
		try
		{ // begin try (depth: 2)
			{
				goto IL_027a;
			}

IL_022d:
			{
				RuntimeObject* L_111 = V_4;
				NullCheck(L_111);
				RuntimeObject * L_112 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_111);
				NullCheck(((DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B *)CastclassClass((RuntimeObject*)L_112, DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B_il2cpp_TypeInfo_var)));
				ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_113 = DataRow_get_ItemArray_mABB1F804FE8BDE1C715C2609EBE1DC7E9668C2E7(((DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B *)CastclassClass((RuntimeObject*)L_112, DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				V_5 = L_113;
				DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_114 = ___tbl0;
				NullCheck(L_114);
				DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_115 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_114, /*hidden argument*/NULL);
				ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_116 = V_5;
				NullCheck(L_115);
				DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_117 = DataRowCollection_Add_mE9B4B34E992D02D8E1A859F2EB1FD2706B801983(L_115, L_116, /*hidden argument*/NULL);
				DataRow_tA8B1DC99E8A5582204ADB7122DD4C63A0CAF8D2B * L_118 = L_117;
				IL2CPP_RUNTIME_CLASS_INIT(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var);
				String_t* L_119 = ((SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableOptionalColumn_tBC4CD61B4F81E81AD54682A2A4A196ADD3720F93_il2cpp_TypeInfo_var))->get_IsHidden_2();
				bool L_120 = ((bool)1);
				RuntimeObject * L_121 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_120);
				NullCheck(L_118);
				DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_118, L_119, L_121, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var);
				String_t* L_122 = ((SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_StaticFields*)il2cpp_codegen_static_fields_for(SchemaTableColumn_tBA9D4897119292BC737B937B41186DBFE71FFCCD_il2cpp_TypeInfo_var))->get_ColumnOrdinal_1();
				DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_123 = ___tbl0;
				NullCheck(L_123);
				DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_124 = DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline(L_123, /*hidden argument*/NULL);
				NullCheck(L_124);
				int32_t L_125 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Data.InternalDataCollectionBase::get_Count() */, L_124);
				int32_t L_126 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_125, (int32_t)1));
				RuntimeObject * L_127 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_126);
				NullCheck(L_118);
				DataRow_set_Item_m4AA7DFBB5987AECF475E177F56FFBA95CF6CFFA2(L_118, L_122, L_127, /*hidden argument*/NULL);
			}

IL_027a:
			{
				RuntimeObject* L_128 = V_4;
				NullCheck(L_128);
				bool L_129 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_128);
				if (L_129)
				{
					goto IL_022d;
				}
			}

IL_0283:
			{
				IL2CPP_LEAVE(0x2A4, FINALLY_0285);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0285;
		}

FINALLY_0285:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_130 = V_4;
				V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_130, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
				RuntimeObject* L_131 = V_6;
				if (!L_131)
				{
					goto IL_0299;
				}
			}

IL_0292:
			{
				RuntimeObject* L_132 = V_6;
				NullCheck(L_132);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_132);
			}

IL_0299:
			{
				IL2CPP_END_FINALLY(645)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(645)
		{
			IL2CPP_END_CLEANUP(0x2A4, FINALLY_029a);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_029a;
	}

FINALLY_029a:
	{ // begin finally (depth: 1)
		{
			DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_133 = V_3;
			if (!L_133)
			{
				goto IL_02a3;
			}
		}

IL_029d:
		{
			DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * L_134 = V_3;
			NullCheck(L_134);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_134);
		}

IL_02a3:
		{
			IL2CPP_END_FINALLY(666)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(666)
	{
		IL2CPP_JUMP_TBL(0x2A4, IL_02a4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02a4:
	{
		int32_t L_135 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1));
	}

IL_02a8:
	{
		int32_t L_136 = V_1;
		KeyInfoU5BU5D_tCF28956B1086B8868E6AC7691240DD2F507F423B* L_137 = __this->get__keyInfo_0();
		NullCheck(L_137);
		if ((((int32_t)L_136) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_137)->max_length)))))))
		{
			goto IL_0009;
		}
	}
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
// Conversion methods for marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
IL2CPP_EXTERN_C void KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshal_pinvoke(const KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D& unmarshaled, KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL);
}
IL2CPP_EXTERN_C void KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshal_pinvoke_back(const KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshaled_pinvoke& marshaled, KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D& unmarshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
IL2CPP_EXTERN_C void KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshal_pinvoke_cleanup(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
IL2CPP_EXTERN_C void KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshal_com(const KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D& unmarshaled, KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshaled_com& marshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL);
}
IL2CPP_EXTERN_C void KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshal_com_back(const KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshaled_com& marshaled, KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D& unmarshaled)
{
	Exception_t* ___query_6Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'query' of type 'KeyInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___query_6Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mono.Data.Sqlite.SqliteKeyReader/KeyInfo
IL2CPP_EXTERN_C void KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshal_com_cleanup(KeyInfo_tB56E33E4A959496F780F88F0733AD56E2EE1020D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.SqliteKeyReader_KeyQuery::.ctor(Mono.Data.Sqlite.SqliteConnection,System.String,System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery__ctor_m22449788AF65C3ABA3E3AFFD7EF344606B4A3C77 (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * __this, SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * ___cnn0, String_t* ___database1, String_t* ___table2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___columns3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyQuery__ctor_m22449788AF65C3ABA3E3AFFD7EF344606B4A3C77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439 * L_0 = (SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439 *)il2cpp_codegen_object_new(SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439_il2cpp_TypeInfo_var);
		SqliteCommandBuilder__ctor_m97ECB392EE85A86F10C6E643EDA38A28BF115C7E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_1 = ___cnn0;
			NullCheck(L_1);
			SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_2 = SqliteConnection_CreateCommand_mD5C1C6500EB461245BA81A02EAB7D8ACA28D2771(L_1, /*hidden argument*/NULL);
			__this->set__command_0(L_2);
			V_1 = 0;
			goto IL_002e;
		}

IL_001c:
		{
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___columns3;
			int32_t L_4 = V_1;
			SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439 * L_5 = V_0;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___columns3;
			int32_t L_7 = V_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			NullCheck(L_5);
			String_t* L_10 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(22 /* System.String System.Data.Common.DbCommandBuilder::QuoteIdentifier(System.String) */, L_5, L_9);
			NullCheck(L_3);
			ArrayElementTypeCheck (L_3, L_10);
			(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (String_t*)L_10);
			int32_t L_11 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		}

IL_002e:
		{
			int32_t L_12 = V_1;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = ___columns3;
			NullCheck(L_13);
			if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
			{
				goto IL_001c;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		{
			SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439 * L_14 = V_0;
			if (!L_14)
			{
				goto IL_0040;
			}
		}

IL_003a:
		{
			SqliteCommandBuilder_t66143ABAD4DA05AE69437362B8B864E2099A9439 * L_15 = V_0;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_15);
		}

IL_0040:
		{
			IL2CPP_END_FINALLY(55)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_16 = __this->get__command_0();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = ___columns3;
		String_t* L_18 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, L_17, /*hidden argument*/NULL);
		String_t* L_19 = ___database1;
		String_t* L_20 = ___table2;
		String_t* L_21 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralDD64AB817AB410403092565BB65F18EDEE243B7F, L_18, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_16, L_21);
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_22 = __this->get__command_0();
		NullCheck(L_22);
		SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * L_23 = SqliteCommand_get_Parameters_mB71352C6F2201A184CDE252A0BDECE961A0F1034_inline(L_22, /*hidden argument*/NULL);
		int64_t L_24 = (((int64_t)((int64_t)0)));
		RuntimeObject * L_25 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		SqliteParameterCollection_AddWithValue_m97C980AD107D4CCB1CD2BA377DE2C3C0A06971D9(L_23, (String_t*)NULL, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader_KeyQuery::set_IsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_set_IsValid_m04575B63742D87C840E5F78A24AA8023861386CE (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyQuery_set_IsValid_m04575B63742D87C840E5F78A24AA8023861386CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m77591C20EDA3ADEE2FAF1987321D686E249326C5(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, KeyQuery_set_IsValid_m04575B63742D87C840E5F78A24AA8023861386CE_RuntimeMethod_var);
	}

IL_0009:
	{
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_2 = __this->get__reader_1();
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_3 = __this->get__reader_1();
		NullCheck(L_3);
		DbDataReader_Dispose_mD3B8FDCD448F9FFB52287C8D4D95710EAA646B72(L_3, /*hidden argument*/NULL);
		__this->set__reader_1((SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB *)NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader_KeyQuery::Sync(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_Sync_mB6A4987196C5C4EC8445DAF57F6CE74401B9A40A (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * __this, int64_t ___rowid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyQuery_Sync_mB6A4987196C5C4EC8445DAF57F6CE74401B9A40A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyQuery_set_IsValid_m04575B63742D87C840E5F78A24AA8023861386CE(__this, (bool)0, /*hidden argument*/NULL);
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_0 = __this->get__command_0();
		NullCheck(L_0);
		SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * L_1 = SqliteCommand_get_Parameters_mB71352C6F2201A184CDE252A0BDECE961A0F1034_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_2 = SqliteParameterCollection_get_Item_mB143F08024B5011763E114BE87F511BB2A8CBD86(L_1, 0, /*hidden argument*/NULL);
		int64_t L_3 = ___rowid0;
		int64_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(21 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, L_2, L_5);
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_6 = __this->get__command_0();
		NullCheck(L_6);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_7 = SqliteCommand_ExecuteReader_mC8FA5C8396CD03E5B515AD99FCC274705268E4A3(L_6, /*hidden argument*/NULL);
		__this->set__reader_1(L_7);
		SqliteDataReader_t53D94CF06AE0FEBB27EEEC17A6C786D6E1CD5BEB * L_8 = __this->get__reader_1();
		NullCheck(L_8);
		VirtFuncInvoker0< bool >::Invoke(45 /* System.Boolean System.Data.Common.DbDataReader::Read() */, L_8);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteKeyReader_KeyQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyQuery_Dispose_m4462EF3644051D288FBABE7BF137781BBC3D5485 (KeyQuery_tF4C988ECC144A4081EC2113294B820726FAD5051 * __this, const RuntimeMethod* method)
{
	{
		KeyQuery_set_IsValid_m04575B63742D87C840E5F78A24AA8023861386CE(__this, (bool)0, /*hidden argument*/NULL);
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_0 = __this->get__command_0();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_1 = __this->get__command_0();
		NullCheck(L_1);
		Component_Dispose_m823396D3128BA14DDC7522A760EEEEAC30518E98(L_1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		__this->set__command_0((SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA *)NULL);
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
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m016651AD9244FFC7DED89986B8E436085E87A642 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, const RuntimeMethod* method)
{
	{
		SqliteParameter__ctor_m3D85651E2B5D0E4E443F30504BBAB145E5393ADD(__this, (String_t*)NULL, (-1), 0, (String_t*)NULL, ((int32_t)512), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_mBC9628DF3C388388D3C656750799750462E0F01C (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___parameterName0;
		SqliteParameter__ctor_m3D85651E2B5D0E4E443F30504BBAB145E5393ADD(__this, L_0, (-1), 0, (String_t*)NULL, ((int32_t)512), /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value1;
		VirtActionInvoker1< RuntimeObject * >::Invoke(21 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, __this, L_1);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.String,System.Data.DataRowVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m3D85651E2B5D0E4E443F30504BBAB145E5393ADD (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, String_t* ___sourceColumn3, int32_t ___rowVersion4, const RuntimeMethod* method)
{
	{
		DbParameter__ctor_mBC6F98079269BE4009ED11B5581B93D7550921FF(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___parameterName0;
		__this->set__parameterName_5(L_0);
		int32_t L_1 = ___parameterType1;
		__this->set__dbType_1(L_1);
		String_t* L_2 = ___sourceColumn3;
		__this->set__sourceColumn_4(L_2);
		int32_t L_3 = ___rowVersion4;
		__this->set__rowVersion_2(L_3);
		__this->set__objValue_3(NULL);
		int32_t L_4 = ___parameterSize2;
		__this->set__dataSize_6(L_4);
		__this->set__nullMapping_8((bool)0);
		__this->set__nullable_7((bool)1);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m1F1A168B4A71DF0CCB46FE708B81716D08A05DB8 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___source0, const RuntimeMethod* method)
{
	{
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_0 = ___source0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Data.Common.DbParameter::get_ParameterName() */, L_0);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_2 = ___source0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__dbType_1();
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_4 = ___source0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Data.ParameterDirection System.Data.Common.DbParameter::get_Direction() */, L_4);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_6 = ___source0;
		NullCheck(L_6);
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Data.Common.DbParameter::get_IsNullable() */, L_6);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_8 = ___source0;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Data.Common.DbParameter::get_SourceColumn() */, L_8);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_10 = ___source0;
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Data.DataRowVersion System.Data.Common.DbParameter::get_SourceVersion() */, L_10);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_12 = ___source0;
		NullCheck(L_12);
		RuntimeObject * L_13 = VirtFuncInvoker0< RuntimeObject * >::Invoke(20 /* System.Object System.Data.Common.DbParameter::get_Value() */, L_12);
		SqliteParameter__ctor_m168BB032DBCEFE987EB44B27151991ABD587C705(__this, L_1, L_3, 0, L_5, L_7, (uint8_t)0, (uint8_t)0, L_9, L_11, L_13, /*hidden argument*/NULL);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_14 = ___source0;
		NullCheck(L_14);
		bool L_15 = L_14->get__nullMapping_8();
		__this->set__nullMapping_8(L_15);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.Data.ParameterDirection,System.Boolean,System.Byte,System.Byte,System.String,System.Data.DataRowVersion,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter__ctor_m168BB032DBCEFE987EB44B27151991ABD587C705 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, String_t* ___parameterName0, int32_t ___parameterType1, int32_t ___parameterSize2, int32_t ___direction3, bool ___isNullable4, uint8_t ___precision5, uint8_t ___scale6, String_t* ___sourceColumn7, int32_t ___rowVersion8, RuntimeObject * ___value9, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___parameterName0;
		int32_t L_1 = ___parameterType1;
		int32_t L_2 = ___parameterSize2;
		String_t* L_3 = ___sourceColumn7;
		int32_t L_4 = ___rowVersion8;
		SqliteParameter__ctor_m3D85651E2B5D0E4E443F30504BBAB145E5393ADD(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = ___direction3;
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void System.Data.Common.DbParameter::set_Direction(System.Data.ParameterDirection) */, __this, L_5);
		bool L_6 = ___isNullable4;
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void System.Data.Common.DbParameter::set_IsNullable(System.Boolean) */, __this, L_6);
		RuntimeObject * L_7 = ___value9;
		VirtActionInvoker1< RuntimeObject * >::Invoke(21 /* System.Void System.Data.Common.DbParameter::set_Value(System.Object) */, __this, L_7);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameter::get_IsNullable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteParameter_get_IsNullable_mC6F5845576BB4C4B5A846D285F5B2C9664565054 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__nullable_7();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_IsNullable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_IsNullable_mC4726892C72BF1801E10D6F013E09F2C0FD33961 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__nullable_7(L_0);
		return;
	}
}
// System.Data.DbType Mono.Data.Sqlite.SqliteParameter::get_DbType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_DbType_mA8E59EC51C78A991AC03563AF968986C17FB8C5C (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_get_DbType_mA8E59EC51C78A991AC03563AF968986C17FB8C5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__dbType_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__objValue_3();
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_2 = __this->get__objValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_3 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		if ((((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 *)L_3)))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_4 = __this->get__objValue_3();
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_il2cpp_TypeInfo_var);
		int32_t L_6 = SqliteConvert_TypeToDbType_mFEE3BBE06FB578BF29C9FD1578EF4D4A59163275(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_002f:
	{
		return (int32_t)(((int32_t)16));
	}

IL_0032:
	{
		int32_t L_7 = __this->get__dbType_1();
		return (int32_t)(L_7);
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_DbType(System.Data.DbType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_DbType_m1595FC194D09B4CACF064AF0A948E10848A633B7 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__dbType_1(L_0);
		return;
	}
}
// System.Data.ParameterDirection Mono.Data.Sqlite.SqliteParameter::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_Direction_mB3B2AD55FB9A5AE30347046FED1581AD6EB56736 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Direction(System.Data.ParameterDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_Direction_m834F8F4C2E593C35DA0F4167BB6544F54D863A1D (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_set_Direction_m834F8F4C2E593C35DA0F4167BB6544F54D863A1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_1 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, SqliteParameter_set_Direction_m834F8F4C2E593C35DA0F4167BB6544F54D863A1D_RuntimeMethod_var);
	}

IL_000a:
	{
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteParameter::get_ParameterName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_ParameterName_mCB5B7B4B7D68BA51116A235C11BCC98309BD9EC6 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__parameterName_5();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_ParameterName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_ParameterName_m03A25F38E66154C00345E05E106878A57CAE2092 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__parameterName_5(L_0);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Size(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_Size_m3398188360116F0282036FF089D414EE5F667769 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__dataSize_6(L_0);
		return;
	}
}
// System.String Mono.Data.Sqlite.SqliteParameter::get_SourceColumn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqliteParameter_get_SourceColumn_mE1028570B8DB608099D64D11929FF4A9076F17C0 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__sourceColumn_4();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceColumn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceColumn_m676000FE49E5CB9BE53B41FDB9F628FF3B4FE4E3 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__sourceColumn_4(L_0);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceColumnNullMapping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceColumnNullMapping_mA7E926E96211532213A10A0F19042B5F0514038A (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__nullMapping_8(L_0);
		return;
	}
}
// System.Data.DataRowVersion Mono.Data.Sqlite.SqliteParameter::get_SourceVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameter_get_SourceVersion_m0943F7BB8321D7C89D8333975AD00C28E99CEEC3 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__rowVersion_2();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceVersion(System.Data.DataRowVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_SourceVersion_mBB5B85DC0D00BF5BD7696908DBBE899CD0808BF4 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__rowVersion_2(L_0);
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameter::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameter_get_Value_mAC163158B2D846D1420E3748DABAD812854CFF21 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__objValue_3();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameter_set_Value_m87E20591316C4B22439B5D6C3BFF9554F30831CF (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_set_Value_m87E20591316C4B22439B5D6C3BFF9554F30831CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		__this->set__objValue_3(L_0);
		int32_t L_1 = __this->get__dbType_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_2 = __this->get__objValue_3();
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__objValue_3();
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var);
		DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 * L_4 = ((DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_il2cpp_TypeInfo_var))->get_Value_0();
		if ((((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(DBNull_t7400E04939C2C29699B389B106997892BF53A8E5 *)L_4)))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = __this->get__objValue_3();
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_il2cpp_TypeInfo_var);
		int32_t L_7 = SqliteConvert_TypeToDbType_mFEE3BBE06FB578BF29C9FD1578EF4D4A59163275(L_6, /*hidden argument*/NULL);
		__this->set__dbType_1(L_7);
	}

IL_003b:
	{
		return;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameter::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameter_Clone_m21B83DB2ACD7EE995C900F7D5342743EDB5F5558 (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameter_Clone_m21B83DB2ACD7EE995C900F7D5342743EDB5F5558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_0 = (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)il2cpp_codegen_object_new(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A_il2cpp_TypeInfo_var);
		SqliteParameter__ctor_m1F1A168B4A71DF0CCB46FE708B81716D08A05DB8(L_0, __this, /*hidden argument*/NULL);
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
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::.ctor(Mono.Data.Sqlite.SqliteCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection__ctor_m289CFE5E4BFA0BB60172BE14F5DD7F8A564C73A2 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * ___cmd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection__ctor_m289CFE5E4BFA0BB60172BE14F5DD7F8A564C73A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DbParameterCollection__ctor_m1170B63FB42DB24CF67CDD28B2F1152DC0CDB6B2(__this, /*hidden argument*/NULL);
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_0 = ___cmd0;
		__this->set__command_1(L_0);
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_1 = (List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 *)il2cpp_codegen_object_new(List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930_il2cpp_TypeInfo_var);
		List_1__ctor_m50BF7B9AB3445C4EC9E8F10EC20ECFAF8B7458DF(L_1, /*hidden argument*/List_1__ctor_m50BF7B9AB3445C4EC9E8F10EC20ECFAF8B7458DF_RuntimeMethod_var);
		__this->set__parameterList_2(L_1);
		__this->set__unboundFlag_3((bool)1);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteParameterCollection_get_IsFixedSize_m11D3BC2F46B50C417FC30BE0B86C58F54CC0A3E6 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteParameterCollection_get_IsReadOnly_m4E88FD965A39DBCC9086EE18D1EE77BBC7205EA3 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Object Mono.Data.Sqlite.SqliteParameterCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SqliteParameterCollection_get_SyncRoot_m4CF68234AC08FCF6469DC6421AE76691EA975F9D (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, const RuntimeMethod* method)
{
	{
		return NULL;
	}
}
// System.Collections.IEnumerator Mono.Data.Sqlite.SqliteParameterCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqliteParameterCollection_GetEnumerator_m69FAC35711842655B2E278567F44912977B46E4E (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_GetEnumerator_m69FAC35711842655B2E278567F44912977B46E4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9  L_1 = List_1_GetEnumerator_m4FB9C8F0BBC4821205AFB89A9D2D7C01E04ACA40(L_0, /*hidden argument*/List_1_GetEnumerator_m4FB9C8F0BBC4821205AFB89A9D2D7C01E04ACA40_RuntimeMethod_var);
		Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9  L_2 = L_1;
		RuntimeObject * L_3 = Box(Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_mC80811CB2BF2117A72B037472821DDE4C0F92CC0 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Add_mC80811CB2BF2117A72B037472821DDE4C0F92CC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_0 = ___parameter0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Data.Common.DbParameter::get_ParameterName() */, L_0);
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_3 = ___parameter0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Data.Common.DbParameter::get_ParameterName() */, L_3);
		int32_t L_5 = VirtFuncInvoker1< int32_t, String_t* >::Invoke(32 /* System.Int32 System.Data.Common.DbParameterCollection::IndexOf(System.String) */, __this, L_4);
		V_0 = L_5;
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_7 = __this->get__parameterList_2();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m18B6F2D3ACC8EAC194AB57D5325DD32BB5802AA8_inline(L_7, /*hidden argument*/List_1_get_Count_m18B6F2D3ACC8EAC194AB57D5325DD32BB5802AA8_RuntimeMethod_var);
		V_0 = L_8;
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_9 = __this->get__parameterList_2();
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_10 = ___parameter0;
		NullCheck(L_9);
		List_1_Add_m5C78F8E2E70517CE23882FE76E912B19A6DF0D05(L_9, L_10, /*hidden argument*/List_1_Add_m5C78F8E2E70517CE23882FE76E912B19A6DF0D05_RuntimeMethod_var);
	}

IL_0038:
	{
		int32_t L_11 = V_0;
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_12 = ___parameter0;
		VirtActionInvoker2< int32_t, DbParameter_tEE5AEAD8B429B8EF8994063C151A25A76B94B76F * >::Invoke(36 /* System.Void System.Data.Common.DbParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter) */, __this, L_11, L_12);
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_Add_m0FC27E00530EE3C96AFCFC994D0FB5731053E2EF (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Add_m0FC27E00530EE3C96AFCFC994D0FB5731053E2EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1 = SqliteParameterCollection_Add_mC80811CB2BF2117A72B037472821DDE4C0F92CC0(__this, ((SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)CastclassSealed((RuntimeObject*)L_0, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::AddWithValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * SqliteParameterCollection_AddWithValue_m97C980AD107D4CCB1CD2BA377DE2C3C0A06971D9 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, String_t* ___parameterName0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_AddWithValue_m97C980AD107D4CCB1CD2BA377DE2C3C0A06971D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * V_0 = NULL;
	{
		String_t* L_0 = ___parameterName0;
		RuntimeObject * L_1 = ___value1;
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_2 = (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)il2cpp_codegen_object_new(SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A_il2cpp_TypeInfo_var);
		SqliteParameter__ctor_mBC9628DF3C388388D3C656750799750462E0F01C(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_3 = V_0;
		SqliteParameterCollection_Add_mC80811CB2BF2117A72B037472821DDE4C0F92CC0(__this, L_3, /*hidden argument*/NULL);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_4 = V_0;
		return L_4;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_Clear_mA6EC383EFF6923E41591AFF7CFE5A0C1C79C7F89 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Clear_mA6EC383EFF6923E41591AFF7CFE5A0C1C79C7F89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		List_1_Clear_mEE04B19B8737B430DF2A0BF0E36BF703AF5DCE5E(L_0, /*hidden argument*/List_1_Clear_mEE04B19B8737B430DF2A0BF0E36BF703AF5DCE5E_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteParameterCollection_Contains_m839CF97D62730EDEFA81BB7DC1A761ADFA2B50B8 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Contains_m839CF97D62730EDEFA81BB7DC1A761ADFA2B50B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m3DAADD39ED6686DE079F5056901F3260E09179A8(L_0, ((SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Contains_m3DAADD39ED6686DE079F5056901F3260E09179A8_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_CopyTo_m3D99299076E2DE0DD92FEF8C748940A02E1FCC8A (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_CopyTo_m3D99299076E2DE0DD92FEF8C748940A02E1FCC8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, SqliteParameterCollection_CopyTo_m3D99299076E2DE0DD92FEF8C748940A02E1FCC8A_RuntimeMethod_var);
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_get_Count_mB12197C044F13A0BE61FB55E0C514B7957E7BAEB (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_get_Count_mB12197C044F13A0BE61FB55E0C514B7957E7BAEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m18B6F2D3ACC8EAC194AB57D5325DD32BB5802AA8_inline(L_0, /*hidden argument*/List_1_get_Count_m18B6F2D3ACC8EAC194AB57D5325DD32BB5802AA8_RuntimeMethod_var);
		return L_1;
	}
}
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * SqliteParameterCollection_get_Item_mB143F08024B5011763E114BE87F511BB2A8CBD86 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_get_Item_mB143F08024B5011763E114BE87F511BB2A8CBD86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		DbParameter_tEE5AEAD8B429B8EF8994063C151A25A76B94B76F * L_1 = VirtFuncInvoker1< DbParameter_tEE5AEAD8B429B8EF8994063C151A25A76B94B76F *, int32_t >::Invoke(30 /* System.Data.Common.DbParameter System.Data.Common.DbParameterCollection::GetParameter(System.Int32) */, __this, L_0);
		return ((SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A_il2cpp_TypeInfo_var));
	}
}
// System.Data.Common.DbParameter Mono.Data.Sqlite.SqliteParameterCollection::GetParameter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbParameter_tEE5AEAD8B429B8EF8994063C151A25A76B94B76F * SqliteParameterCollection_GetParameter_m5737F8626A08122C062C4C1B862235A0006EF1B7 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_GetParameter_m5737F8626A08122C062C4C1B862235A0006EF1B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_2 = List_1_get_Item_m0FED0390D45670958CA29E86C5D58839251075D0_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m0FED0390D45670958CA29E86C5D58839251075D0_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_m450F61FF740CB5038E6D9DC85FE32F9073D809C8 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, String_t* ___parameterName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_IndexOf_m450F61FF740CB5038E6D9DC85FE32F9073D809C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m18B6F2D3ACC8EAC194AB57D5325DD32BB5802AA8_inline(L_0, /*hidden argument*/List_1_get_Count_m18B6F2D3ACC8EAC194AB57D5325DD32BB5802AA8_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_0010:
	{
		String_t* L_2 = ___parameterName0;
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_3 = __this->get__parameterList_2();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_5 = List_1_get_Item_m0FED0390D45670958CA29E86C5D58839251075D0_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m0FED0390D45670958CA29E86C5D58839251075D0_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Data.Common.DbParameter::get_ParameterName() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_7 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		int32_t L_8 = String_Compare_mA1D43767F882FE677F238637A8785FCCEE7173D9(L_2, L_6, (bool)1, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_9 = V_1;
		return L_9;
	}

IL_0031:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0010;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqliteParameterCollection_IndexOf_m99779C46C388DBB144BE88E31343332401FBBAA7 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_IndexOf_m99779C46C388DBB144BE88E31343332401FBBAA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2 = List_1_IndexOf_m9C78D06C8B9D4B0F998320C74B8B4A888DB898A0(L_0, ((SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_IndexOf_m9C78D06C8B9D4B0F998320C74B8B4A888DB898A0_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_Insert_mF771D89C5478F0D1EA89C8DEEB8827F7403274D2 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Insert_mF771D89C5478F0D1EA89C8DEEB8827F7403274D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		List_1_Insert_m2E51CE65637809D7D93C062529E5A7D30E24E133(L_0, L_1, ((SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)CastclassSealed((RuntimeObject*)L_2, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Insert_m2E51CE65637809D7D93C062529E5A7D30E24E133_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_Remove_mC7FD06913C68E795A229DFA628DC152B753AC27E (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_Remove_mC7FD06913C68E795A229DFA628DC152B753AC27E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		List_1_Remove_mA7075CC228A8B426BEF45ED0A100608D0D0AECCD(L_0, ((SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)CastclassSealed((RuntimeObject*)L_1, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Remove_mA7075CC228A8B426BEF45ED0A100608D0D0AECCD_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_RemoveAt_mC170B0F20676CEF6CE18161983976280251CBF15 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_RemoveAt_mC170B0F20676CEF6CE18161983976280251CBF15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_RemoveAt_mB2016428E769441E9C87E656660ABA58BAE6FA9C(L_0, L_1, /*hidden argument*/List_1_RemoveAt_mB2016428E769441E9C87E656660ABA58BAE6FA9C_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_SetParameter_m4629EFE7A727916A7BA3A533820DB5BF9E6476B3 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, int32_t ___index0, DbParameter_tEE5AEAD8B429B8EF8994063C151A25A76B94B76F * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_SetParameter_m4629EFE7A727916A7BA3A533820DB5BF9E6476B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__unboundFlag_3((bool)1);
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_0 = __this->get__parameterList_2();
		int32_t L_1 = ___index0;
		DbParameter_tEE5AEAD8B429B8EF8994063C151A25A76B94B76F * L_2 = ___value1;
		NullCheck(L_0);
		List_1_set_Item_m339B7FAFE361D88FEB5F47A169B5A37969D71764(L_0, L_1, ((SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)CastclassSealed((RuntimeObject*)L_2, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_set_Item_m339B7FAFE361D88FEB5F47A169B5A37969D71764_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Unbind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_Unbind_m7761A3F056C9F62AFFB139279396357C7591C07B (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, const RuntimeMethod* method)
{
	{
		__this->set__unboundFlag_3((bool)1);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::MapParameters(Mono.Data.Sqlite.SqliteStatement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteParameterCollection_MapParameters_m1E0737759D666193B226FD46F4841264016B2E90 (SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * __this, SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * ___activeStatement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteParameterCollection_MapParameters_m1E0737759D666193B226FD46F4841264016B2E90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * V_4 = NULL;
	Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = __this->get__unboundFlag_3();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_1 = __this->get__parameterList_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m18B6F2D3ACC8EAC194AB57D5325DD32BB5802AA8_inline(L_1, /*hidden argument*/List_1_get_Count_m18B6F2D3ACC8EAC194AB57D5325DD32BB5802AA8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_3 = __this->get__command_1();
		NullCheck(L_3);
		List_1_t4D51535875D05BE2D5B9E04831852C86794124DF * L_4 = L_3->get__statementList_12();
		if (L_4)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		return;
	}

IL_0023:
	{
		V_0 = 0;
		V_3 = (-1);
		List_1_t7FBE1F05FEF322DB115F92671B5499AF047F4930 * L_5 = __this->get__parameterList_2();
		NullCheck(L_5);
		Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9  L_6 = List_1_GetEnumerator_m4FB9C8F0BBC4821205AFB89A9D2D7C01E04ACA40(L_5, /*hidden argument*/List_1_GetEnumerator_m4FB9C8F0BBC4821205AFB89A9D2D7C01E04ACA40_RuntimeMethod_var);
		V_5 = L_6;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0129;
		}

IL_0039:
		{
			SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_7 = Enumerator_get_Current_m1B357C74BA17105E21969DF5288A73E1873549F2_inline((Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m1B357C74BA17105E21969DF5288A73E1873549F2_RuntimeMethod_var);
			V_6 = L_7;
			int32_t L_8 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_9 = V_6;
			NullCheck(L_9);
			String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Data.Common.DbParameter::get_ParameterName() */, L_9);
			V_1 = L_10;
			String_t* L_11 = V_1;
			if (L_11)
			{
				goto IL_006b;
			}
		}

IL_0051:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
			CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_12 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
			int32_t L_13 = V_0;
			int32_t L_14 = L_13;
			RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
			String_t* L_16 = String_Format_m30892041DA5F50D7B8CFD82FFC0F55B5B97A2B7F(L_12, _stringLiteralF6ECAD2FBBDD77D9B35BA368C2417FA482DD0A58, L_15, /*hidden argument*/NULL);
			V_1 = L_16;
			int32_t L_17 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		}

IL_006b:
		{
			V_8 = (bool)0;
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_18 = ___activeStatement0;
			if (L_18)
			{
				goto IL_0085;
			}
		}

IL_0071:
		{
			SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_19 = __this->get__command_1();
			NullCheck(L_19);
			List_1_t4D51535875D05BE2D5B9E04831852C86794124DF * L_20 = L_19->get__statementList_12();
			NullCheck(L_20);
			int32_t L_21 = List_1_get_Count_m5213820495B0EBCF3981324C3E9BD78BAE50715F_inline(L_20, /*hidden argument*/List_1_get_Count_m5213820495B0EBCF3981324C3E9BD78BAE50715F_RuntimeMethod_var);
			V_7 = L_21;
			goto IL_0088;
		}

IL_0085:
		{
			V_7 = 1;
		}

IL_0088:
		{
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_22 = ___activeStatement0;
			V_4 = L_22;
			V_2 = 0;
			goto IL_00c8;
		}

IL_008f:
		{
			V_8 = (bool)0;
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_23 = V_4;
			if (L_23)
			{
				goto IL_00a9;
			}
		}

IL_0096:
		{
			SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_24 = __this->get__command_1();
			NullCheck(L_24);
			List_1_t4D51535875D05BE2D5B9E04831852C86794124DF * L_25 = L_24->get__statementList_12();
			int32_t L_26 = V_2;
			NullCheck(L_25);
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_27 = List_1_get_Item_mA7650FA6BC6222743B22C6252E8B6477292F5AE2_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_mA7650FA6BC6222743B22C6252E8B6477292F5AE2_RuntimeMethod_var);
			V_4 = L_27;
		}

IL_00a9:
		{
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_28 = V_4;
			NullCheck(L_28);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = L_28->get__paramNames_4();
			if (!L_29)
			{
				goto IL_00c1;
			}
		}

IL_00b2:
		{
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_30 = V_4;
			String_t* L_31 = V_1;
			SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_32 = V_6;
			NullCheck(L_30);
			bool L_33 = SqliteStatement_MapParameter_mB771EFEBC2D26A8B4AC4E12D5F16961473093748(L_30, L_31, L_32, /*hidden argument*/NULL);
			if (!L_33)
			{
				goto IL_00c1;
			}
		}

IL_00be:
		{
			V_8 = (bool)1;
		}

IL_00c1:
		{
			V_4 = (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *)NULL;
			int32_t L_34 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		}

IL_00c8:
		{
			int32_t L_35 = V_2;
			int32_t L_36 = V_7;
			if ((((int32_t)L_35) < ((int32_t)L_36)))
			{
				goto IL_008f;
			}
		}

IL_00cd:
		{
			bool L_37 = V_8;
			if (L_37)
			{
				goto IL_0129;
			}
		}

IL_00d1:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
			CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_38 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
			int32_t L_39 = V_3;
			int32_t L_40 = L_39;
			RuntimeObject * L_41 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_40);
			String_t* L_42 = String_Format_m30892041DA5F50D7B8CFD82FFC0F55B5B97A2B7F(L_38, _stringLiteralF6ECAD2FBBDD77D9B35BA368C2417FA482DD0A58, L_41, /*hidden argument*/NULL);
			V_1 = L_42;
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_43 = ___activeStatement0;
			V_4 = L_43;
			V_2 = 0;
			goto IL_0124;
		}

IL_00ee:
		{
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_44 = V_4;
			if (L_44)
			{
				goto IL_0105;
			}
		}

IL_00f2:
		{
			SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_45 = __this->get__command_1();
			NullCheck(L_45);
			List_1_t4D51535875D05BE2D5B9E04831852C86794124DF * L_46 = L_45->get__statementList_12();
			int32_t L_47 = V_2;
			NullCheck(L_46);
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_48 = List_1_get_Item_mA7650FA6BC6222743B22C6252E8B6477292F5AE2_inline(L_46, L_47, /*hidden argument*/List_1_get_Item_mA7650FA6BC6222743B22C6252E8B6477292F5AE2_RuntimeMethod_var);
			V_4 = L_48;
		}

IL_0105:
		{
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_49 = V_4;
			NullCheck(L_49);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_50 = L_49->get__paramNames_4();
			if (!L_50)
			{
				goto IL_011d;
			}
		}

IL_010e:
		{
			SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_51 = V_4;
			String_t* L_52 = V_1;
			SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_53 = V_6;
			NullCheck(L_51);
			bool L_54 = SqliteStatement_MapParameter_mB771EFEBC2D26A8B4AC4E12D5F16961473093748(L_51, L_52, L_53, /*hidden argument*/NULL);
			if (!L_54)
			{
				goto IL_011d;
			}
		}

IL_011a:
		{
			V_8 = (bool)1;
		}

IL_011d:
		{
			V_4 = (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *)NULL;
			int32_t L_55 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		}

IL_0124:
		{
			int32_t L_56 = V_2;
			int32_t L_57 = V_7;
			if ((((int32_t)L_56) < ((int32_t)L_57)))
			{
				goto IL_00ee;
			}
		}

IL_0129:
		{
			bool L_58 = Enumerator_MoveNext_mCF50FAAD565B13E2355E10FCCD8CBED148992C3E((Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mCF50FAAD565B13E2355E10FCCD8CBED148992C3E_RuntimeMethod_var);
			if (L_58)
			{
				goto IL_0039;
			}
		}

IL_0135:
		{
			IL2CPP_LEAVE(0x145, FINALLY_0137);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0137;
	}

FINALLY_0137:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m61C4DD31E4F8ACDAE2E2EA613259AE49871FC4D2((Enumerator_tCF8E776BC18353EA194612347E5F5FC3F45D46E9 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m61C4DD31E4F8ACDAE2E2EA613259AE49871FC4D2_RuntimeMethod_var);
		IL2CPP_END_FINALLY(311)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(311)
	{
		IL2CPP_JUMP_TBL(0x145, IL_0145)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0145:
	{
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_59 = ___activeStatement0;
		if (L_59)
		{
			goto IL_014f;
		}
	}
	{
		__this->set__unboundFlag_3((bool)0);
	}

IL_014f:
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
// System.Void Mono.Data.Sqlite.SqliteStatement::.ctor(Mono.Data.Sqlite.SQLiteBase,Mono.Data.Sqlite.SqliteStatementHandle,System.String,Mono.Data.Sqlite.SqliteStatement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement__ctor_m4633CD23B90A35EF77F0B526A3719E1680A7AE51 (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * __this, SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * ___sqlbase0, SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * ___stmt1, String_t* ___strCommand2, SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * ___previous3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement__ctor_m4633CD23B90A35EF77F0B526A3719E1680A7AE51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_0 = ___sqlbase0;
		__this->set__sql_0(L_0);
		SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * L_1 = ___stmt1;
		__this->set__sqlite_stmt_2(L_1);
		String_t* L_2 = ___strCommand2;
		__this->set__sqlStatement_1(L_2);
		V_0 = 0;
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_3 = __this->get__sql_0();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker1< int32_t, SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * >::Invoke(22 /* System.Int32 Mono.Data.Sqlite.SQLiteBase::Bind_ParamCount(Mono.Data.Sqlite.SqliteStatement) */, L_3, __this);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_6 = ___previous3;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * L_7 = ___previous3;
		NullCheck(L_7);
		int32_t L_8 = L_7->get__unnamedParameters_3();
		V_0 = L_8;
	}

IL_003d:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->set__paramNames_4(L_10);
		int32_t L_11 = V_1;
		SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* L_12 = (SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251*)(SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251*)SZArrayNew(SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->set__paramValues_5(L_12);
		V_2 = 0;
		goto IL_00af;
	}

IL_0059:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_13 = __this->get__sql_0();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15 = VirtFuncInvoker2< String_t*, SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t >::Invoke(23 /* System.String Mono.Data.Sqlite.SQLiteBase::Bind_ParamName(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_13, __this, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		V_3 = L_15;
		String_t* L_16 = V_3;
		bool L_17 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0099;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_18 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = String_Format_m30892041DA5F50D7B8CFD82FFC0F55B5B97A2B7F(L_18, _stringLiteralF6ECAD2FBBDD77D9B35BA368C2417FA482DD0A58, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		int32_t L_24 = __this->get__unnamedParameters_3();
		__this->set__unnamedParameters_3(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_0099:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = __this->get__paramNames_4();
		int32_t L_26 = V_2;
		String_t* L_27 = V_3;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (String_t*)L_27);
		SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* L_28 = __this->get__paramValues_5();
		int32_t L_29 = V_2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, NULL);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)NULL);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00af:
	{
		int32_t L_31 = V_2;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0059;
		}
	}

IL_00b3:
	{
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatement::MapParameter(System.String,Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteStatement_MapParameter_mB771EFEBC2D26A8B4AC4E12D5F16961473093748 (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * __this, String_t* ___s0, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___p1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement_MapParameter_mB771EFEBC2D26A8B4AC4E12D5F16961473093748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get__paramNames_4();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		V_0 = 0;
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = ___s0;
		NullCheck(L_3);
		Il2CppChar L_4 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_3, 0, /*hidden argument*/NULL);
		NullCheck(_stringLiteral4152C03A902AA9F8A5A2B4A510C2AB07BF79F058);
		int32_t L_5 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(_stringLiteral4152C03A902AA9F8A5A2B4A510C2AB07BF79F058, L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = 1;
	}

IL_002b:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = __this->get__paramNames_4();
		NullCheck(L_6);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		V_2 = 0;
		goto IL_0079;
	}

IL_0038:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = __this->get__paramNames_4();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = V_0;
		String_t* L_12 = ___s0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = __this->get__paramNames_4();
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_16, /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		String_t* L_19 = ___s0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_21 = Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)), L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_22 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		int32_t L_23 = String_Compare_m759578081B55965D2CE733DF538FA20554F2F874(L_10, L_11, L_12, 0, L_21, (bool)1, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0075;
		}
	}
	{
		SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* L_24 = __this->get__paramValues_5();
		int32_t L_25 = V_2;
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_26 = ___p1;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A *)L_26);
		return (bool)1;
	}

IL_0075:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_0079:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement_Dispose_mCAE5A846825CFBC0646A294D2DDA575EF8737A82 (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * __this, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * L_0 = __this->get__sqlite_stmt_2();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * L_1 = __this->get__sqlite_stmt_2();
		NullCheck(L_1);
		CriticalHandle_Dispose_mDBA1677ABB0EE5E4AB408B301A6FC58E2E75EBBF(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		__this->set__sqlite_stmt_2((SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB *)NULL);
		__this->set__paramNames_4((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL);
		__this->set__paramValues_5((SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251*)NULL);
		__this->set__sql_0((SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB *)NULL);
		__this->set__sqlStatement_1((String_t*)NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement_BindParameters_mAA93C62EE01D86FB9096ED6735967EFE9B1F9324 (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get__paramNames_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = __this->get__paramNames_4();
		NullCheck(L_1);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		V_1 = 0;
		goto IL_002b;
	}

IL_0016:
	{
		int32_t L_2 = V_1;
		SqliteParameterU5BU5D_t258833AF5A3A8AEC76FFF02AE27C963606FAB251* L_3 = __this->get__paramValues_5();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		SqliteStatement_BindParameter_m4F5DB47C7652CF87B979FEB4710D77A8C07BC165(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::BindParameter(System.Int32,Mono.Data.Sqlite.SqliteParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement_BindParameter_m4F5DB47C7652CF87B979FEB4710D77A8C07BC165 (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * __this, int32_t ___index0, SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * ___param1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement_BindParameter_m4F5DB47C7652CF87B979FEB4710D77A8C07BC165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	Guid_t  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_0 = ___param1;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF * L_1 = (SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF *)il2cpp_codegen_object_new(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var);
		SqliteException__ctor_m595860D2E2C4B4E75E31A0D8F336F108AA592F8F(L_1, 1, _stringLiteral2ADF0A0954741E1AF5766479C5643CD51B0B69B5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, SqliteStatement_BindParameter_m4F5DB47C7652CF87B979FEB4710D77A8C07BC165_RuntimeMethod_var);
	}

IL_000f:
	{
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_2 = ___param1;
		NullCheck(L_2);
		RuntimeObject * L_3 = VirtFuncInvoker0< RuntimeObject * >::Invoke(20 /* System.Object System.Data.Common.DbParameter::get_Value() */, L_2);
		V_0 = L_3;
		SqliteParameter_tAAC7C89143EF4682E2E0CA56661D1710B103519A * L_4 = ___param1;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Data.DbType System.Data.Common.DbParameter::get_DbType() */, L_4);
		V_1 = L_5;
		RuntimeObject * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		bool L_7 = Convert_IsDBNull_m5523BC521CD361615CE6846388C7BD5BA1EDDCE5(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_8 = V_0;
		if (L_8)
		{
			goto IL_0036;
		}
	}

IL_0028:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_9 = __this->get__sql_0();
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		VirtActionInvoker2< SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t >::Invoke(21 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Null(Mono.Data.Sqlite.SqliteStatement,System.Int32) */, L_9, __this, L_10);
		return;
	}

IL_0036:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject * L_12 = V_0;
		NullCheck(L_12);
		Type_t * L_13 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SqliteConvert_t98C28645EEA441E377AD33AFD9DADA8205597343_il2cpp_TypeInfo_var);
		int32_t L_14 = SqliteConvert_TypeToDbType_mFEE3BBE06FB578BF29C9FD1578EF4D4A59163275(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_0047:
	{
		int32_t L_15 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0108;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_00d6;
			}
			case 3:
			{
				goto IL_00ef;
			}
			case 4:
			{
				goto IL_00a4;
			}
			case 5:
			{
				goto IL_00a4;
			}
			case 6:
			{
				goto IL_015e;
			}
			case 7:
			{
				goto IL_00ef;
			}
			case 8:
			{
				goto IL_011c;
			}
			case 9:
			{
				goto IL_00d6;
			}
			case 10:
			{
				goto IL_00d6;
			}
			case 11:
			{
				goto IL_00bd;
			}
			case 12:
			{
				goto IL_0184;
			}
			case 13:
			{
				goto IL_00d6;
			}
			case 14:
			{
				goto IL_00ef;
			}
			case 15:
			{
				goto IL_0184;
			}
			case 16:
			{
				goto IL_00a4;
			}
			case 17:
			{
				goto IL_00d6;
			}
			case 18:
			{
				goto IL_00bd;
			}
			case 19:
			{
				goto IL_00bd;
			}
		}
	}
	{
		goto IL_0184;
	}

IL_00a4:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_16 = __this->get__sql_0();
		int32_t L_17 = ___index0;
		RuntimeObject * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_19 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_20 = Convert_ToDateTime_m246003CF3103F7DF9D6E817DCEFAE2CF8068862D(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker3< SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(20 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_DateTime(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.DateTime) */, L_16, __this, L_17, L_20);
		return;
	}

IL_00bd:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_21 = __this->get__sql_0();
		int32_t L_22 = ___index0;
		RuntimeObject * L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_24 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_25 = Convert_ToInt64_m8964FDE5D82FEC54106DBF35E1F67D70F6E73E29(L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker3< SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t, int64_t >::Invoke(17 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Int64(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int64) */, L_21, __this, L_22, L_25);
		return;
	}

IL_00d6:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_26 = __this->get__sql_0();
		int32_t L_27 = ___index0;
		RuntimeObject * L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_29 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_30 = Convert_ToInt32_m5D40340597602FB6C20BAB933E8B29617232757A(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker3< SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t, int32_t >::Invoke(16 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Int32(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int32) */, L_26, __this, L_27, L_30);
		return;
	}

IL_00ef:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_31 = __this->get__sql_0();
		int32_t L_32 = ___index0;
		RuntimeObject * L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_34 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_35 = Convert_ToDouble_m053A47D87C59CA7A87D4E67E5E06368D775D7651(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker3< SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t, double >::Invoke(15 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Double(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Double) */, L_31, __this, L_32, L_35);
		return;
	}

IL_0108:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_36 = __this->get__sql_0();
		int32_t L_37 = ___index0;
		RuntimeObject * L_38 = V_0;
		NullCheck(L_36);
		VirtActionInvoker3< SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(19 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Blob(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Byte[]) */, L_36, __this, L_37, ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_38, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var)));
		return;
	}

IL_011c:
	{
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_39 = __this->get__command_6();
		NullCheck(L_39);
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_40 = SqliteCommand_get_Connection_mE3EDCFB30073F79B4BA70951014260D05D634F6F_inline(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		bool L_41 = L_40->get__binaryGuid_15();
		if (!L_41)
		{
			goto IL_014a;
		}
	}
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_42 = __this->get__sql_0();
		int32_t L_43 = ___index0;
		RuntimeObject * L_44 = V_0;
		V_2 = ((*(Guid_t *)((Guid_t *)UnBox(L_44, Guid_t_il2cpp_TypeInfo_var))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_45 = Guid_ToByteArray_m5E99B09A26EA3A1943CC8FE697E247DAC5465223((Guid_t *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_42);
		VirtActionInvoker3< SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(19 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Blob(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Byte[]) */, L_42, __this, L_43, L_45);
		return;
	}

IL_014a:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_46 = __this->get__sql_0();
		int32_t L_47 = ___index0;
		RuntimeObject * L_48 = V_0;
		NullCheck(L_48);
		String_t* L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		NullCheck(L_46);
		VirtActionInvoker3< SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_46, __this, L_47, L_49);
		return;
	}

IL_015e:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_50 = __this->get__sql_0();
		int32_t L_51 = ___index0;
		RuntimeObject * L_52 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_53 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_54 = Convert_ToDecimal_mD8F65E8B251DBE61789CAD032172D089375D1E5B(L_52, L_53, /*hidden argument*/NULL);
		V_3 = L_54;
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_55 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_56 = Decimal_ToString_mC257A35A991F88D3CFE6F29F619F8EC9D1D5ADFB((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)(&V_3), L_55, /*hidden argument*/NULL);
		NullCheck(L_50);
		VirtActionInvoker3< SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_50, __this, L_51, L_56);
		return;
	}

IL_0184:
	{
		SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB * L_57 = __this->get__sql_0();
		int32_t L_58 = ___index0;
		RuntimeObject * L_59 = V_0;
		NullCheck(L_59);
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_59);
		NullCheck(L_57);
		VirtActionInvoker3< SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 *, int32_t, String_t* >::Invoke(18 /* System.Void Mono.Data.Sqlite.SQLiteBase::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String) */, L_57, __this, L_58, L_60);
		return;
	}
}
// System.String[] Mono.Data.Sqlite.SqliteStatement::get_TypeDefinitions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* SqliteStatement_get_TypeDefinitions_m10D2A6C3724C8BAC26E8068984280398C6F5C7D7 (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = __this->get__types_7();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatement::SetTypes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatement_SetTypes_m589EFA32D447E2515B6C2FD4219FCC86CBBC33AC (SqliteStatement_tBDF95F5A82839EC3597D4B0C3C6079ED8D5CF969 * __this, String_t* ___typedefs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatement_SetTypes_m589EFA32D447E2515B6C2FD4219FCC86CBBC33AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___typedefs0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2B8FDE7216A37799B7B3A093EDDF1A820AAF4D01(L_0, _stringLiteral40EA9041285003E004A8F6FE2DD14EBB07961AF2, 0, 5, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, SqliteStatement_SetTypes_m589EFA32D447E2515B6C2FD4219FCC86CBBC33AC_RuntimeMethod_var);
	}

IL_0018:
	{
		String_t* L_4 = ___typedefs0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)6)), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_6, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_7, _stringLiteral2D14AB97CC3DC294C51C0D6814F4EA45F4B4E312, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_8, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_9, _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_10, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_11, _stringLiteral7E15BB5C01E7DD56499E37C634CF791D3A519AEE, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_13 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_14 = L_13;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1D50DE06C0851DADFB9EE493AAE1FD7F9F818318____A5F5D64EF7BB696455C9841B907D2E09986EA902_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_12, L_14, /*hidden argument*/NULL);
		V_1 = L_16;
		V_2 = 0;
		goto IL_00a8;
	}

IL_0096:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		String_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		bool L_21 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00a4;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, NULL);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (String_t*)NULL);
	}

IL_00a4:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00a8:
	{
		int32_t L_25 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = V_1;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_0096;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = V_1;
		__this->set__types_7(L_27);
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
// System.IntPtr Mono.Data.Sqlite.SqliteStatementHandle::op_Implicit(Mono.Data.Sqlite.SqliteStatementHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SqliteStatementHandle_op_Implicit_mCD886B6937F9E4B9CE60E9B1B294363224FC4A24 (SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * ___stmt0, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * L_0 = ___stmt0;
		NullCheck(L_0);
		intptr_t L_1 = ((CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 *)L_0)->get_handle_0();
		return (intptr_t)L_1;
	}
}
// Mono.Data.Sqlite.SqliteStatementHandle Mono.Data.Sqlite.SqliteStatementHandle::op_Implicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * SqliteStatementHandle_op_Implicit_mD6450F31B1D437F9C755CFB513EB035CB8D836F3 (intptr_t ___stmt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle_op_Implicit_mD6450F31B1D437F9C755CFB513EB035CB8D836F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___stmt0;
		SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * L_1 = (SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB *)il2cpp_codegen_object_new(SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB_il2cpp_TypeInfo_var);
		SqliteStatementHandle__ctor_m03BB3CE8DC5152855096BD796BEA8311CD7F6287(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m03BB3CE8DC5152855096BD796BEA8311CD7F6287 (SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * __this, intptr_t ___stmt0, const RuntimeMethod* method)
{
	{
		SqliteStatementHandle__ctor_m673603194B1DE0388222BBF3E873662F06E5F6F6(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___stmt0;
		CriticalHandle_SetHandle_m4EE9D69A73EF79440558738F688DA93682B8A955_inline(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteStatementHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteStatementHandle__ctor_m673603194B1DE0388222BBF3E873662F06E5F6F6 (SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle__ctor_m673603194B1DE0388222BBF3E873662F06E5F6F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CriticalHandle__ctor_m63298C852798FD29EC96265E0D6F5B3E72398349(__this, (intptr_t)(0), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatementHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteStatementHandle_ReleaseHandle_m95939B3B0697A005A1E22E61C902148B4C27F524 (SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle_ReleaseHandle_m95939B3B0697A005A1E22E61C902148B4C27F524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
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
		IL2CPP_RUNTIME_CLASS_INIT(SQLiteBase_t724E54C056FEB1B337BFA0C24A1C5EF95D96E7EB_il2cpp_TypeInfo_var);
		SQLiteBase_FinalizeStatement_m75714619EE123FB9487D94769D8FDFECAE1D2119(__this, /*hidden argument*/NULL);
		goto IL_000b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0008;
		throw e;
	}

CATCH_0008:
	{ // begin catch(Mono.Data.Sqlite.SqliteException)
		goto IL_000b;
	} // end catch (depth: 1)

IL_000b:
	{
		return (bool)1;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteStatementHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteStatementHandle_get_IsInvalid_m837218B1AE04403F3D6560E1F8CC41546717AC82 (SqliteStatementHandle_t7D1190E910F4D3CD043C9704FE9B26124EA0F2CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteStatementHandle_get_IsInvalid_m837218B1AE04403F3D6560E1F8CC41546717AC82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
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
// System.Void Mono.Data.Sqlite.SqliteTransaction::.ctor(Mono.Data.Sqlite.SqliteConnection,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction__ctor_m1A752E72A7B8361248FD62BD2DC1B7E5F2E8F2A3 (SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * __this, SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * ___connection0, bool ___deferredLock1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction__ctor_m1A752E72A7B8361248FD62BD2DC1B7E5F2E8F2A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * G_B2_0 = NULL;
	SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * G_B3_1 = NULL;
	{
		DbTransaction__ctor_mEB19A16BE9BED0A70FDCC7E5EC8134E85EEA327B(__this, /*hidden argument*/NULL);
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_0 = ___connection0;
		__this->set__cnn_1(L_0);
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_1 = __this->get__cnn_1();
		NullCheck(L_1);
		int64_t L_2 = L_1->get__version_16();
		__this->set__version_2(L_2);
		bool L_3 = ___deferredLock1;
		G_B1_0 = __this;
		if (L_3)
		{
			G_B2_0 = __this;
			goto IL_0029;
		}
	}
	{
		G_B3_0 = ((int32_t)1048576);
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_0029:
	{
		G_B3_0 = ((int32_t)4096);
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__level_3(G_B3_0);
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_4 = __this->get__cnn_1();
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->get__transactionLevel_8();
		V_0 = L_6;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		L_5->set__transactionLevel_8(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_00a4;
		}
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_9 = __this->get__cnn_1();
			NullCheck(L_9);
			SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_10 = SqliteConnection_CreateCommand_mD5C1C6500EB461245BA81A02EAB7D8ACA28D2771(L_9, /*hidden argument*/NULL);
			V_1 = L_10;
		}

IL_0057:
		try
		{ // begin try (depth: 2)
			{
				bool L_11 = ___deferredLock1;
				if (L_11)
				{
					goto IL_0067;
				}
			}

IL_005a:
			{
				SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_12 = V_1;
				NullCheck(L_12);
				VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_12, _stringLiteral4821EDEB87E72FFADC6BC2DD7758D1AF495E515F);
				goto IL_0072;
			}

IL_0067:
			{
				SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_13 = V_1;
				NullCheck(L_13);
				VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_13, _stringLiteral3598517C826F1480A241800CE73F781AE2B1CD6A);
			}

IL_0072:
			{
				SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_14 = V_1;
				NullCheck(L_14);
				VirtFuncInvoker0< int32_t >::Invoke(35 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_14);
				IL2CPP_LEAVE(0x85, FINALLY_007b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007b;
		}

FINALLY_007b:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_15 = V_1;
				if (!L_15)
				{
					goto IL_0084;
				}
			}

IL_007e:
			{
				SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_16 = V_1;
				NullCheck(L_16);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_16);
			}

IL_0084:
			{
				IL2CPP_END_FINALLY(123)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(123)
		{
			IL2CPP_JUMP_TBL(0x85, IL_0085)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0085:
		{
			goto IL_00a4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0087;
		throw e;
	}

CATCH_0087:
	{ // begin catch(Mono.Data.Sqlite.SqliteException)
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_17 = __this->get__cnn_1();
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = L_18->get__transactionLevel_8();
		NullCheck(L_18);
		L_18->set__transactionLevel_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		__this->set__cnn_1((SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C *)NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, SqliteTransaction__ctor_m1A752E72A7B8361248FD62BD2DC1B7E5F2E8F2A3_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00a4:
	{
		return;
	}
}
// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteTransaction::get_Connection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * SqliteTransaction_get_Connection_m07F1F256C4BA7B6959CE5290DA6F5C7EDB3652DD (SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * __this, const RuntimeMethod* method)
{
	{
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_0 = __this->get__cnn_1();
		return L_0;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction_Dispose_mCC0D09CACFC0C5C090CFBC11D4A52A8C18BE05E2 (SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * __this, bool ___disposing0, const RuntimeMethod* method)
{
	SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			bool L_2 = SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569(__this, (bool)0, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			VirtActionInvoker0::Invoke(8 /* System.Void System.Data.Common.DbTransaction::Rollback() */, __this);
		}

IL_001e:
		{
			__this->set__cnn_1((SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C *)NULL);
			IL2CPP_LEAVE(0x31, FINALLY_0027);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * L_4 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x31, IL_0031)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0031:
	{
		bool L_5 = ___disposing0;
		DbTransaction_Dispose_m1D66CE2B68FF0CAAEE9B9110D58087350BBBDB6A(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::Rollback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction_Rollback_m91AE3F370FE76A8D76BAC1E29E50773CFD7ECC07 (SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * __this, const RuntimeMethod* method)
{
	{
		SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569(__this, (bool)1, /*hidden argument*/NULL);
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_0 = __this->get__cnn_1();
		SqliteTransaction_IssueRollback_m09587571EAC81A3BB360B27EA5FBE2BB3C8E937F(L_0, /*hidden argument*/NULL);
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_1 = __this->get__cnn_1();
		NullCheck(L_1);
		L_1->set__transactionLevel_8(0);
		__this->set__cnn_1((SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C *)NULL);
		return;
	}
}
// System.Void Mono.Data.Sqlite.SqliteTransaction::IssueRollback(Mono.Data.Sqlite.SqliteConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteTransaction_IssueRollback_m09587571EAC81A3BB360B27EA5FBE2BB3C8E937F (SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * ___cnn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction_IssueRollback_m09587571EAC81A3BB360B27EA5FBE2BB3C8E937F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_0 = ___cnn0;
		NullCheck(L_0);
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_1 = SqliteConnection_CreateCommand_mD5C1C6500EB461245BA81A02EAB7D8ACA28D2771(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_2, _stringLiteral2CE42E824F2163751D62C49D3226C338EFA1179D);
		SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_3 = V_0;
		NullCheck(L_3);
		VirtFuncInvoker0< int32_t >::Invoke(35 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_3);
		IL2CPP_LEAVE(0x25, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		{
			SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(27)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		return;
	}
}
// System.Boolean Mono.Data.Sqlite.SqliteTransaction::IsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569 (SqliteTransaction_tAFCF3BDD942F9F50B718F90FF79C348F8341C05C * __this, bool ___throwError0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_0 = __this->get__cnn_1();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = ___throwError0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteralFF736B7140FADCCC4ABF6A7A3CAA5B49362CE730, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569_RuntimeMethod_var);
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_3 = __this->get__cnn_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get__transactionLevel_8();
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		bool L_5 = ___throwError0;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF * L_6 = (SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF *)il2cpp_codegen_object_new(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var);
		SqliteException__ctor_m595860D2E2C4B4E75E31A0D8F336F108AA592F8F(L_6, ((int32_t)21), _stringLiteral9BF86E4634BA8C788A847BD10019CC0D59BCC00C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569_RuntimeMethod_var);
	}

IL_0035:
	{
		return (bool)0;
	}

IL_0037:
	{
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_7 = __this->get__cnn_1();
		NullCheck(L_7);
		int64_t L_8 = L_7->get__version_16();
		int64_t L_9 = __this->get__version_2();
		if ((((int64_t)L_8) == ((int64_t)L_9)))
		{
			goto IL_005c;
		}
	}
	{
		bool L_10 = ___throwError0;
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF * L_11 = (SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF *)il2cpp_codegen_object_new(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var);
		SqliteException__ctor_m595860D2E2C4B4E75E31A0D8F336F108AA592F8F(L_11, ((int32_t)21), _stringLiteral7F97480B11C2DFEFA56814087360C69E4B05A84D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569_RuntimeMethod_var);
	}

IL_005a:
	{
		return (bool)0;
	}

IL_005c:
	{
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_12 = __this->get__cnn_1();
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Data.ConnectionState System.Data.Common.DbConnection::get_State() */, L_12);
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_007c;
		}
	}
	{
		bool L_14 = ___throwError0;
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF * L_15 = (SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF *)il2cpp_codegen_object_new(SqliteException_tC7D50FF1200A930E0952833DA28C1032E2BA65DF_il2cpp_TypeInfo_var);
		SqliteException__ctor_m595860D2E2C4B4E75E31A0D8F336F108AA592F8F(L_15, ((int32_t)21), _stringLiteral660C1D424389A5FB82204BA7BB89B07419AAC1C0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, SqliteTransaction_IsValid_m155A302D3D2905E9FC357069D84EAB0247EF8569_RuntimeMethod_var);
	}

IL_007a:
	{
		return (bool)0;
	}

IL_007c:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods__cctor_mE99975B2EFE4CD56565B7E95F6C60C752D207308 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnsafeNativeMethods__cctor_mE99975B2EFE4CD56565B7E95F6C60C752D207308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = UnsafeNativeMethods_sqlite3_libversion_number_m45BC577ED5BC138A7841076C6BDB59F707868BA8(/*hidden argument*/NULL);
		int32_t L_1 = L_0;
		V_0 = ((int32_t)((int32_t)L_1%(int32_t)((int32_t)1000)));
		int32_t L_2 = L_1;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_2/(int32_t)((int32_t)1000)))%(int32_t)((int32_t)1000)));
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_5 = (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)il2cpp_codegen_object_new(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355(L_5, ((int32_t)((int32_t)L_2/(int32_t)((int32_t)1000000))), L_3, L_4, /*hidden argument*/NULL);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_6 = L_5;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_7 = (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)il2cpp_codegen_object_new(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355(L_7, 3, 5, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		bool L_8 = Version_op_GreaterThanOrEqual_m1F4E6E2B52256D92AE8B2A07DBCFF1F325634612(L_6, L_7, /*hidden argument*/NULL);
		((UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_StaticFields*)il2cpp_codegen_static_fields_for(UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_il2cpp_TypeInfo_var))->set_use_sqlite3_open_v2_1(L_8);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_9 = L_6;
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_10 = (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)il2cpp_codegen_object_new(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355(L_10, 3, 7, ((int32_t)14), /*hidden argument*/NULL);
		bool L_11 = Version_op_GreaterThanOrEqual_m1F4E6E2B52256D92AE8B2A07DBCFF1F325634612(L_9, L_10, /*hidden argument*/NULL);
		((UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_StaticFields*)il2cpp_codegen_static_fields_for(UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_il2cpp_TypeInfo_var))->set_use_sqlite3_close_v2_0(L_11);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_12 = (Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD *)il2cpp_codegen_object_new(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_il2cpp_TypeInfo_var);
		Version__ctor_m9C92EDA3468ABD28779990D02C7F59A1693E2355(L_12, 3, 7, 3, /*hidden argument*/NULL);
		bool L_13 = Version_op_GreaterThanOrEqual_m1F4E6E2B52256D92AE8B2A07DBCFF1F325634612(L_9, L_12, /*hidden argument*/NULL);
		((UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_StaticFields*)il2cpp_codegen_static_fields_for(UnsafeNativeMethods_t7056751428267DD401B8B32B240420CB522A830A_il2cpp_TypeInfo_var))->set_use_sqlite3_create_function_v2_2(L_13);
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_close(intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_close(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_close_mBFFAD584161EF6086FF2D6856AF75A178142EBB2 (intptr_t ___db0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_close", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_close)(___db0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_close_v2(intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_close_v2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_close_v2_mFE2833981B74A98D4ABE3373B564C8786528D9DB (intptr_t ___db0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_close_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_close_v2)(___db0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_create_function(intptr_t, uint8_t*, int32_t, int32_t, intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_function(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteFinalCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_create_function_mE28FDB0E6113C80402F73E21EC97120281FAA95F (intptr_t ___db0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___strName1, int32_t ___nArgs2, int32_t ___nType3, intptr_t ___pvUser4, SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * ___func5, SQLiteCallback_t9E872F51B7862F18464545893C88408C93034DF7 * ___fstep6, SQLiteFinalCallback_t0F31D8958994F85D77DF383096984F10502B49C8 * ___ffinal7, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, int32_t, intptr_t, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_create_function", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strName1' to native representation
	uint8_t* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = reinterpret_cast<uint8_t*>((___strName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___func5' to native representation
	Il2CppMethodPointer ____func5_marshaled = NULL;
	____func5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func5));

	// Marshaling of parameter '___fstep6' to native representation
	Il2CppMethodPointer ____fstep6_marshaled = NULL;
	____fstep6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___fstep6));

	// Marshaling of parameter '___ffinal7' to native representation
	Il2CppMethodPointer ____ffinal7_marshaled = NULL;
	____ffinal7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ffinal7));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_create_function)(___db0, ____strName1_marshaled, ___nArgs2, ___nType3, ___pvUser4, ____func5_marshaled, ____fstep6_marshaled, ____ffinal7_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strName1_marshaled, ___nArgs2, ___nType3, ___pvUser4, ____func5_marshaled, ____fstep6_marshaled, ____ffinal7_marshaled);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_finalize(intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_finalize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_finalize_m1C55893E9AA29EA9368D290E88F6101731C8A01A (intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_finalize", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_finalize)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open_v2(uint8_t*, intptr_t*, int32_t, intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open_v2(System.Byte[],System.IntPtr&,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open_v2_mA36F566F539D64C7DEAFE824B3F5A802F8F7493B (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___utf8Filename0, intptr_t* ___db1, int32_t ___flags2, intptr_t ___vfs3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open_v2", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___utf8Filename0' to native representation
	uint8_t* ____utf8Filename0_marshaled = NULL;
	if (___utf8Filename0 != NULL)
	{
		____utf8Filename0_marshaled = reinterpret_cast<uint8_t*>((___utf8Filename0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open_v2)(____utf8Filename0_marshaled, ___db1, ___flags2, ___vfs3);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____utf8Filename0_marshaled, ___db1, ___flags2, ___vfs3);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open(uint8_t*, intptr_t*);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open(System.Byte[],System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open_m5A617CAB56D57A7EA28E9F5FF4A3294B681CC04D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___utf8Filename0, intptr_t* ___db1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (uint8_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___utf8Filename0' to native representation
	uint8_t* ____utf8Filename0_marshaled = NULL;
	if (___utf8Filename0 != NULL)
	{
		____utf8Filename0_marshaled = reinterpret_cast<uint8_t*>((___utf8Filename0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open)(____utf8Filename0_marshaled, ___db1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____utf8Filename0_marshaled, ___db1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_open16(Il2CppChar*, intptr_t*);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open16(System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_open16_mB430BF2BB0B1F970379A09A8BD35826DC4C8BD05 (String_t* ___fileName0, intptr_t* ___db1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (Il2CppChar*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_open16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fileName0' to native representation
	Il2CppChar* ____fileName0_marshaled = NULL;
	if (___fileName0 != NULL)
	{
		____fileName0_marshaled = ___fileName0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_open16)(____fileName0_marshaled, ___db1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, ___db1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_reset(intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_reset(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_reset_m91672E225C5637F7B22AE2C12B8F6D420322C058 (intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_reset", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_reset)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_bind_parameter_name(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_name(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_bind_parameter_name_m7A39FE3D910821B4E37FF64A54EEF4515324C3B8 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_parameter_name)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_database_name(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_database_name_m8BCD695C6FA45F04BC2575B88F77A887089DCCB2 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_database_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_database_name)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_database_name16(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_database_name16_m7CB0B6C14FD83F75C842E2CDB63C41253496B0B5 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_database_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_database_name16)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_decltype(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_decltype(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_decltype_m2E7DD98AB6154113D47DF6C77C31ECBC72D8F74B (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_decltype", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_decltype)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_name(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_name_mE932377363C785C9F48F58C00ADC1E479D8F1E20 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_name)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_name16(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_name16_m9501602D3AB5F75C078437E23ED48628DFEC5956 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_name16)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_origin_name(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_origin_name_m97CFDFFFB15D125E013CD7C56927AA380FC5272F (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_origin_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_origin_name)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_origin_name16(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_origin_name16_mA4C94D2CDD9FF63458BF352FD8507F0EEB840C44 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_origin_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_origin_name16)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_table_name(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_table_name_mA16C62A3C06F79C1E3B37C99FFB57BF94AE8471E (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_table_name", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_table_name)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_table_name16(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_table_name16_mC93223ACC896CE5A2A33BEFB99CD89476E5EA1EB (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_table_name16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_table_name16)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_text(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_text_mB334F68AB987673FC41394C3E8D64836457FCCBB (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_text)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_text16(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text16(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_text16_m89A4BCD54AA618FB226BAB7CF36F6AAF773092C6 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_text16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_text16)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_errmsg(intptr_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_errmsg(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_errmsg_m039ED5A9CADC5A1112086DC067F1CC823F9DE570 (intptr_t ___db0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_errmsg", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_errmsg)(___db0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___db0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_prepare(intptr_t, intptr_t, int32_t, intptr_t*, intptr_t*);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_prepare(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_prepare_mFEC22CCD21BE2450E07F2DC5454E0FE31EC03B19 (intptr_t ___db0, intptr_t ___pSql1, int32_t ___nBytes2, intptr_t* ___stmt3, intptr_t* ___ptrRemain4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(intptr_t*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_prepare", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_prepare)(___db0, ___pSql1, ___nBytes2, ___stmt3, ___ptrRemain4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___pSql1, ___nBytes2, ___stmt3, ___ptrRemain4);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_table_column_metadata(intptr_t, uint8_t*, uint8_t*, uint8_t*, intptr_t*, intptr_t*, int32_t*, int32_t*, int32_t*);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_table_column_metadata(System.IntPtr,System.Byte[],System.Byte[],System.Byte[],System.IntPtr&,System.IntPtr&,System.Int32&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_table_column_metadata_m50D5F74B207DDB352644487D75CCBA080E9542BB (intptr_t ___db0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dbName1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___tblName2, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___colName3, intptr_t* ___ptrDataType4, intptr_t* ___ptrCollSeq5, int32_t* ___notNull6, int32_t* ___primaryKey7, int32_t* ___autoInc8, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, uint8_t*, uint8_t*, intptr_t*, intptr_t*, int32_t*, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(intptr_t*) + sizeof(intptr_t*) + sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_table_column_metadata", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___dbName1' to native representation
	uint8_t* ____dbName1_marshaled = NULL;
	if (___dbName1 != NULL)
	{
		____dbName1_marshaled = reinterpret_cast<uint8_t*>((___dbName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___tblName2' to native representation
	uint8_t* ____tblName2_marshaled = NULL;
	if (___tblName2 != NULL)
	{
		____tblName2_marshaled = reinterpret_cast<uint8_t*>((___tblName2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___colName3' to native representation
	uint8_t* ____colName3_marshaled = NULL;
	if (___colName3 != NULL)
	{
		____colName3_marshaled = reinterpret_cast<uint8_t*>((___colName3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_table_column_metadata)(___db0, ____dbName1_marshaled, ____tblName2_marshaled, ____colName3_marshaled, ___ptrDataType4, ___ptrCollSeq5, ___notNull6, ___primaryKey7, ___autoInc8);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____dbName1_marshaled, ____tblName2_marshaled, ____colName3_marshaled, ___ptrDataType4, ___ptrCollSeq5, ___notNull6, ___primaryKey7, ___autoInc8);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_value_text(intptr_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_text_m6A28B6971ADE92E7BD068BC4C50D73576DC00D35 (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_text)(___p0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_value_text16(intptr_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text16(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_text16_mFDDEDC80F0E34387BE4E8A0AF33E78C3F052B75D (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_text16", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_text16)(___p0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_libversion();
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_libversion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_libversion_m35AA7E2A32C1DA78EC5D91B8241BBE5F3FC257D5 (const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_libversion", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_libversion)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_changes(intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_changes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_changes_m981388E7CB7C5AB59475ADEE2C96857060BB6859 (intptr_t ___db0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_changes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_changes)(___db0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_busy_timeout(intptr_t, int32_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_busy_timeout(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_busy_timeout_mFE244E519FA5B324C2E8C748EF48EB0E045F65AF (intptr_t ___db0, int32_t ___ms1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_busy_timeout", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_busy_timeout)(___db0, ___ms1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ___ms1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_blob(intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_blob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_blob_m649C03F0644A73001F66B3B158908D1F8720E8A7 (intptr_t ___stmt0, int32_t ___index1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value2, int32_t ___nSize3, intptr_t ___nTransient4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value2' to native representation
	uint8_t* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = reinterpret_cast<uint8_t*>((___value2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_blob)(___stmt0, ___index1, ____value2_marshaled, ___nSize3, ___nTransient4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nSize3, ___nTransient4);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_double(intptr_t, int32_t, double);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_double(System.IntPtr,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_double_m5DAFE13A14F0DEFEA488FB910C3598CC65463F5F (intptr_t ___stmt0, int32_t ___index1, double ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, double);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_double)(___stmt0, ___index1, ___value2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_int(intptr_t, int32_t, int32_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_int_m65FAF080161174E59A41EE2EDA667368C773E563 (intptr_t ___stmt0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_int)(___stmt0, ___index1, ___value2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_int64(intptr_t, int32_t, int64_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int64(System.IntPtr,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_int64_m57B195975E2FE8F027A999DBD58B0238897610CF (intptr_t ___stmt0, int32_t ___index1, int64_t ___value2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_int64)(___stmt0, ___index1, ___value2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ___value2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_null(intptr_t, int32_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_null(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_null_mC2E3808B7C62B273104964107F10BF792077BED7 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_null)(___stmt0, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_text(intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_text_mE25A33EB6B23A3BDCA57A4DB7A72A787A70E7066 (intptr_t ___stmt0, int32_t ___index1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value2' to native representation
	uint8_t* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = reinterpret_cast<uint8_t*>((___value2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_text)(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_parameter_count(intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_count(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_parameter_count_m32E06DCD0C623E708DADA779E9DA26B739898152 (intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_parameter_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_parameter_count)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_count(intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_count(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_count_m421059D741B9082DF83D27D802D6BDB89E1516AC (intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_count", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_count)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_step(intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_step(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_step_mE99D2426ADA666CE047EC290236AC19CBDCC44B3 (intptr_t ___stmt0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_step", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_step)(___stmt0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C double CDECL sqlite3_column_double(intptr_t, int32_t);
#endif
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_double(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnsafeNativeMethods_sqlite3_column_double_m68EC184831861D53B7560F1A0F584B57EB9DBDF6 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_double)(___stmt0, ___index1);
	#else
	double returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_int(intptr_t, int32_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_int_m91721F41501A331A3B7E314EDC8075343C1DF568 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_int)(___stmt0, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_column_int64(intptr_t, int32_t);
#endif
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int64(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeNativeMethods_sqlite3_column_int64_mEEAA188119635006C969B170567028B4C4ABF770 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_int64)(___stmt0, ___index1);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_column_blob(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_blob(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_column_blob_mD5D4E4BBBB9B417B420B7E31A5950200A8087B82 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_blob)(___stmt0, ___index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_bytes(intptr_t, int32_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_bytes(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_bytes_m8058627FBC4179615AEDBE5446C60EDE18ABB4FA (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_bytes)(___stmt0, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_column_type(intptr_t, int32_t);
#endif
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_type(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_column_type_m460100928F4B00BD9147D5A02EF830F2E36A94B4 (intptr_t ___stmt0, int32_t ___index1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_column_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_column_type)(___stmt0, ___index1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_create_collation(intptr_t, uint8_t*, int32_t, intptr_t, Il2CppMethodPointer);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_collation(System.IntPtr,System.Byte[],System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCollation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_create_collation_m876D06C3310C6488ED55D4713A8E202F2BA68FD9 (intptr_t ___db0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___strName1, int32_t ___nType2, intptr_t ___pvUser3, SQLiteCollation_tB3D3ECA09E7B92A808A29FCF3476FF537C8C2901 * ___func4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_create_collation", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strName1' to native representation
	uint8_t* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = reinterpret_cast<uint8_t*>((___strName1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___func4' to native representation
	Il2CppMethodPointer ____func4_marshaled = NULL;
	____func4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func4));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_create_collation)(___db0, ____strName1_marshaled, ___nType2, ___pvUser3, ____func4_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strName1_marshaled, ___nType2, ___pvUser3, ____func4_marshaled);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_value_blob(intptr_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_blob(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_value_blob_m50D28D247FEF09AE399AB8CD70BDAF778A3A7118 (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_blob)(___p0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_value_bytes(intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_bytes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_value_bytes_mA4D1E25E05834E7451CAA594F98096A9B516CA93 (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_bytes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_bytes)(___p0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C double CDECL sqlite3_value_double(intptr_t);
#endif
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_double(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnsafeNativeMethods_sqlite3_value_double_mF37024AF099B2C2CD3A4D875636DC15ED6F8E784 (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef double (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	double returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_double)(___p0);
	#else
	double returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int64_t CDECL sqlite3_value_int64(intptr_t);
#endif
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_int64(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeNativeMethods_sqlite3_value_int64_mADBF379E15F444F97B2C52B10E3295FD058ADA1F (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int64_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_int64)(___p0);
	#else
	int64_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_value_type(intptr_t);
#endif
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_type(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_value_type_mBB6F31F682FAEF3FB5C0B08CE75D914DCCA0FAE4 (intptr_t ___p0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_value_type", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_value_type)(___p0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___p0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_blob(intptr_t, uint8_t*, int32_t, intptr_t);
#endif
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_blob(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_blob_m331D58F2EA41F1553D6A7DCDC9BCB10491AF013A (intptr_t ___context0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value1, int32_t ___nSize2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_blob", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value1' to native representation
	uint8_t* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = reinterpret_cast<uint8_t*>((___value1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_blob)(___context0, ____value1_marshaled, ___nSize2, ___pvReserved3);
	#else
	il2cppPInvokeFunc(___context0, ____value1_marshaled, ___nSize2, ___pvReserved3);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_double(intptr_t, double);
#endif
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_double(System.IntPtr,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_double_mDF5F0E88D0B1A2CFBB7753A151E274396361EA1D (intptr_t ___context0, double ___value1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, double);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(double);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_double", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_double)(___context0, ___value1);
	#else
	il2cppPInvokeFunc(___context0, ___value1);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_error(intptr_t, uint8_t*, int32_t);
#endif
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_error_mCE582BF5310AD60F600FB7E83C4DD4E1A9A4B40E (intptr_t ___context0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___strErr1, int32_t ___nLen2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_error", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strErr1' to native representation
	uint8_t* ____strErr1_marshaled = NULL;
	if (___strErr1 != NULL)
	{
		____strErr1_marshaled = reinterpret_cast<uint8_t*>((___strErr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_error)(___context0, ____strErr1_marshaled, ___nLen2);
	#else
	il2cppPInvokeFunc(___context0, ____strErr1_marshaled, ___nLen2);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_int64(intptr_t, int64_t);
#endif
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_int64(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_int64_mFCE1E5E8A4464F2EE8C0EC93485D92D8FF01549C (intptr_t ___context0, int64_t ___value1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_int64", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_int64)(___context0, ___value1);
	#else
	il2cppPInvokeFunc(___context0, ___value1);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_null(intptr_t);
#endif
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_null(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_null_mA4C7885A7DD76F8606338315C5E474DCEEEB6480 (intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_null", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_null)(___context0);
	#else
	il2cppPInvokeFunc(___context0);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_text(intptr_t, uint8_t*, int32_t, intptr_t);
#endif
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_text_mB4DE465F3EBF0AA2D3C8B6F92A7C1070CB8AD147 (intptr_t ___context0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_text", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value1' to native representation
	uint8_t* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = reinterpret_cast<uint8_t*>((___value1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_text)(___context0, ____value1_marshaled, ___nLen2, ___pvReserved3);
	#else
	il2cppPInvokeFunc(___context0, ____value1_marshaled, ___nLen2, ___pvReserved3);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_aggregate_context(intptr_t, int32_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_aggregate_context(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_aggregate_context_mBB2480454A2C2BA6F4E470049D967F9CB490ECB8 (intptr_t ___context0, int32_t ___nBytes1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_aggregate_context", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_aggregate_context)(___context0, ___nBytes1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___context0, ___nBytes1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_bind_text16(intptr_t, int32_t, Il2CppChar*, int32_t, intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text16(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_bind_text16_m552AED151A937A3EE13FBA65F123BC05F67FC6DF (intptr_t ___stmt0, int32_t ___index1, String_t* ___value2, int32_t ___nlen3, intptr_t ___pvReserved4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, Il2CppChar*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_bind_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___value2' to native representation
	Il2CppChar* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = ___value2->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_bind_text16)(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___stmt0, ___index1, ____value2_marshaled, ___nlen3, ___pvReserved4);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_error16(intptr_t, Il2CppChar*, int32_t);
#endif
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error16(System.IntPtr,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_error16_m90FC3856459CDBDADEA9051E788FE70CF9740EAD (intptr_t ___context0, String_t* ___strName1, int32_t ___nLen2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_error16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strName1' to native representation
	Il2CppChar* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = ___strName1->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_error16)(___context0, ____strName1_marshaled, ___nLen2);
	#else
	il2cppPInvokeFunc(___context0, ____strName1_marshaled, ___nLen2);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL sqlite3_result_text16(intptr_t, Il2CppChar*, int32_t, intptr_t);
#endif
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text16(System.IntPtr,System.String,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeNativeMethods_sqlite3_result_text16_m2D20F63B04046894D3E7E249AC0834E7BA23B5FD (intptr_t ___context0, String_t* ___strName1, int32_t ___nLen2, intptr_t ___pvReserved3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppChar*, int32_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_result_text16", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strName1' to native representation
	Il2CppChar* ____strName1_marshaled = NULL;
	if (___strName1 != NULL)
	{
		____strName1_marshaled = ___strName1->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(sqlite3_result_text16)(___context0, ____strName1_marshaled, ___nLen2, ___pvReserved3);
	#else
	il2cppPInvokeFunc(___context0, ____strName1_marshaled, ___nLen2, ___pvReserved3);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_key(intptr_t, uint8_t*, int32_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_key(System.IntPtr,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_key_m3DD0D7064A3D71E2D6A474FFD1E2A0ED42A09558 (intptr_t ___db0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___key1, int32_t ___keylen2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_key", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___key1' to native representation
	uint8_t* ____key1_marshaled = NULL;
	if (___key1 != NULL)
	{
		____key1_marshaled = reinterpret_cast<uint8_t*>((___key1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_key)(___db0, ____key1_marshaled, ___keylen2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____key1_marshaled, ___keylen2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_update_hook(intptr_t, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_update_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteUpdateCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_update_hook_mDB00C59B7B15A2CFF538DCFF306FB7B2009F5D56 (intptr_t ___db0, SQLiteUpdateCallback_tB88EE36DAC2DEA9DE2F2B413BBF91A81FB0D480F * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_update_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_update_hook)(___db0, ____func1_marshaled, ___pvUser2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_commit_hook(intptr_t, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_commit_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteCommitCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_commit_hook_mBCF80F2DFEC04904BAB74FB16B44152C4BC61521 (intptr_t ___db0, SQLiteCommitCallback_t23469643A857ABBFBDE727511CD648AC1A1FC611 * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_commit_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_commit_hook)(___db0, ____func1_marshaled, ___pvUser2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_rollback_hook(intptr_t, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_rollback_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteRollbackCallback,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_rollback_hook_m5F686FDD02A1C382DF56A2C32228C35DE16743AD (intptr_t ___db0, SQLiteRollbackCallback_t33DC59BE1404B8BE92AF830966FF0110918D0F6D * ___func1, intptr_t ___pvUser2, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_rollback_hook", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___func1' to native representation
	Il2CppMethodPointer ____func1_marshaled = NULL;
	____func1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___func1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_rollback_hook)(___db0, ____func1_marshaled, ___pvUser2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ____func1_marshaled, ___pvUser2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL sqlite3_next_stmt(intptr_t, intptr_t);
#endif
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_next_stmt(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeNativeMethods_sqlite3_next_stmt_m6D5E244F5CD3B23FDE49836B3F0EACFABAB71A90 (intptr_t ___db0, intptr_t ___stmt1, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_next_stmt", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_next_stmt)(___db0, ___stmt1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___db0, ___stmt1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_exec(intptr_t, uint8_t*, intptr_t, intptr_t, intptr_t*);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_exec(System.IntPtr,System.Byte[],System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_exec_mA2D486B39B4AC82B3CEE5249F1C54FCF84E8DB06 (intptr_t ___db0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___strSql1, intptr_t ___pvCallback2, intptr_t ___pvParam3, intptr_t* ___errMsg4, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, uint8_t*, intptr_t, intptr_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t) + sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_exec", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___strSql1' to native representation
	uint8_t* ____strSql1_marshaled = NULL;
	if (___strSql1 != NULL)
	{
		____strSql1_marshaled = reinterpret_cast<uint8_t*>((___strSql1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_exec)(___db0, ____strSql1_marshaled, ___pvCallback2, ___pvParam3, ___errMsg4);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___db0, ____strSql1_marshaled, ___pvCallback2, ___pvParam3, ___errMsg4);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_free(intptr_t);
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_free(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_free_mA5F994F625808D3C49DED1C7070A87C71B52DBE2 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_free", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_free)(___ptr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sqlite3_libversion_number();
#endif
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_libversion_number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeNativeMethods_sqlite3_libversion_number_m45BC577ED5BC138A7841076C6BDB59F707868BA8 (const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("sqlite3"), "sqlite3_libversion_number", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sqlite3_libversion_number)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m6EA5C18D2FF050D3AF58D4A21ED39D161DFF218B_inline (AssemblyName_t6F3EC58113268060348EE894DCB46F6EF6BBBB82 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ReflectionTypeLoadException_get_Types_mF7DBBFDB3486667189D72A2A0B95DF42D463E3DE_inline (ReflectionTypeLoadException_t1306B3A246E2959E8F23575AAAB9D59945314115 * __this, const RuntimeMethod* method)
{
	{
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_0 = __this->get__classes_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SqliteFunctionAttribute_get_FuncType_mCDAF2AB4D025ED5188F572AB49A712A7B3EDF2D7_inline (SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__functionType_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SqliteFunctionAttribute_get_Name_m13200595DC91239E3741CD8B1E80A503782294AF_inline (SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SqliteFunctionAttribute_get_Arguments_m9BB52E199ABD250949CC9D17643058F2191A2F93_inline (SqliteFunctionAttribute_t058CA6CC2112EA1639D758E8C2BE0AAFE50108F4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__arguments_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * DataTable_get_Rows_m905B0636C268095F62E08B89B97A034E6BC483D3_inline (DataTable_t44D8846CCB9E2EAE485EB76A1194CF55EC3ED863 * __this, const RuntimeMethod* method)
{
	{
		DataRowCollection_t45B9FDFC3667C7FA9C0F7F14787B5ED70DC673E0 * L_0 = __this->get__rowCollection_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * SqliteCommand_get_Parameters_mB71352C6F2201A184CDE252A0BDECE961A0F1034_inline (SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * __this, const RuntimeMethod* method)
{
	{
		SqliteParameterCollection_tCDF84FF4619CF57B996E6FDC131ED814F7A0513E * L_0 = __this->get__parameterCollection_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * SqliteCommand_get_Connection_mE3EDCFB30073F79B4BA70951014260D05D634F6F_inline (SqliteCommand_t05EC1072EEADD576A043A275757D1BDEE0EA06DA * __this, const RuntimeMethod* method)
{
	{
		SqliteConnection_t5F342BB620637E2461D888B5F6923730CB51134C * L_0 = __this->get__cnn_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CriticalHandle_SetHandle_m4EE9D69A73EF79440558738F688DA93682B8A955_inline (CriticalHandle_tDF3AA1D1AA9E07599C316DB1C5449D3FB7BFD4C9 * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___handle0;
		__this->set_handle_0((intptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_0 = (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m76195183806581950B0EFE1852C8255E6EDA2337_gshared_inline (List_1_tF7837CC6717C6A1DF49C9BACD9C0EC22517D3B16 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}

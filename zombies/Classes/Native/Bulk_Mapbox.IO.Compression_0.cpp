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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Mapbox.IO.Compression.CopyEncoder
struct CopyEncoder_t1719707359;
// Mapbox.IO.Compression.DeflateInput
struct DeflateInput_t3892891873;
// Mapbox.IO.Compression.OutputBuffer
struct OutputBuffer_t1331609326;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.String
struct String_t;
// Mapbox.IO.Compression.DeflaterManaged
struct DeflaterManaged_t1452220717;
// Mapbox.IO.Compression.FastEncoder
struct FastEncoder_t887805019;
// Mapbox.IO.Compression.DeflateStream
struct DeflateStream_t2796728099;
// System.IO.Stream
struct Stream_t1273022909;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentException
struct ArgumentException_t132251570;
// Mapbox.IO.Compression.Inflater
struct Inflater_t10910524;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Mapbox.IO.Compression.IDeflater
struct IDeflater_t2072509016;
// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate
struct AsyncWriteDelegate_t47908213;
// System.SystemException
struct SystemException_t176217640;
// Mapbox.IO.Compression.IFileFormatReader
struct IFileFormatReader_t1171368011;
// Mapbox.IO.Compression.IFileFormatWriter
struct IFileFormatWriter_t4031231164;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.ObjectDisposedException
struct ObjectDisposedException_t21392786;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// Mapbox.IO.Compression.DeflateStreamAsyncResult
struct DeflateStreamAsyncResult_t1893920535;
// System.Threading.WaitHandle
struct WaitHandle_t1743403487;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// Mapbox.IO.Compression.FastEncoderWindow
struct FastEncoderWindow_t57591660;
// Mapbox.IO.Compression.Match
struct Match_t352475233;
// Mapbox.IO.Compression.GZipDecoder
struct GZipDecoder_t3447631347;
// Mapbox.IO.Compression.InputBuffer
struct InputBuffer_t333709416;
// Mapbox.IO.Compression.InvalidDataException
struct InvalidDataException_t4045251031;
// Mapbox.IO.Compression.GZipFormatter
struct GZipFormatter_t4203637370;
// Mapbox.IO.Compression.GZipStream
struct GZipStream_t1509501570;
// Mapbox.IO.Compression.HuffmanTree
struct HuffmanTree_t857975559;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// Mapbox.IO.Compression.OutputWindow
struct OutputWindow_t1296654655;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Void
struct Void_t1185182177;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Int32[]
struct Int32U5BU5D_t385246372;

extern RuntimeClass* Crc32Helper_t2911080199_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2532743677;
extern const uint32_t Crc32Helper_UpdateCrc32_m3273398049_MetadataUsageId;
extern RuntimeClass* UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var;
extern const uint32_t Crc32Helper__cctor_m2625072928_MetadataUsageId;
extern String_t* _stringLiteral3819470012;
extern String_t* _stringLiteral1443743991;
extern const uint32_t DeflateInput_ConsumeBytes_m1068564016_MetadataUsageId;
extern RuntimeClass* FastEncoder_t887805019_il2cpp_TypeInfo_var;
extern RuntimeClass* CopyEncoder_t1719707359_il2cpp_TypeInfo_var;
extern RuntimeClass* DeflateInput_t3892891873_il2cpp_TypeInfo_var;
extern RuntimeClass* OutputBuffer_t1331609326_il2cpp_TypeInfo_var;
extern const uint32_t DeflaterManaged__ctor_m2617121756_MetadataUsageId;
extern RuntimeClass* IDeflater_t2072509016_il2cpp_TypeInfo_var;
extern const uint32_t DeflaterManaged_NeedsInput_m4287467524_MetadataUsageId;
extern String_t* _stringLiteral1196994202;
extern const uint32_t DeflaterManaged_Mapbox_IO_Compression_IDeflater_SetInput_m2878951457_MetadataUsageId;
extern String_t* _stringLiteral3720061582;
extern String_t* _stringLiteral3841270639;
extern String_t* _stringLiteral2480550363;
extern const uint32_t DeflaterManaged_Mapbox_IO_Compression_IDeflater_GetDeflateOutput_m3672472158_MetadataUsageId;
extern RuntimeClass* DeflaterState_t438385491_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3847688446;
extern const uint32_t DeflaterManaged_Mapbox_IO_Compression_IDeflater_Finish_m1383555807_MetadataUsageId;
extern RuntimeClass* Stream_t1273022909_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* Inflater_t10910524_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncCallback_t3962456242_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncWriteDelegate_t47908213_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DeflateStream_ReadCallback_m1332467311_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_InternalWrite_m3851430298_RuntimeMethod_var;
extern const RuntimeMethod* DeflateStream_WriteCallback_m3951505245_RuntimeMethod_var;
extern String_t* _stringLiteral3236680756;
extern String_t* _stringLiteral1463720672;
extern String_t* _stringLiteral1985170617;
extern String_t* _stringLiteral2764959823;
extern String_t* _stringLiteral1242941808;
extern const uint32_t DeflateStream__ctor_m3247756683_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m349471792_RuntimeMethod_var;
extern const uint32_t DeflateStream__ctor_m819287622_MetadataUsageId;
extern RuntimeClass* DeflaterManaged_t1452220717_il2cpp_TypeInfo_var;
extern RuntimeClass* SystemException_t176217640_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3440455852;
extern const uint32_t DeflateStream_CreateDeflater_m3178245127_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1060443247;
extern const uint32_t DeflateStream_get_Length_m2702535552_MetadataUsageId;
extern const uint32_t DeflateStream_get_Position_m3177456892_MetadataUsageId;
extern const uint32_t DeflateStream_set_Position_m303765702_MetadataUsageId;
extern const uint32_t DeflateStream_Seek_m15876477_MetadataUsageId;
extern const uint32_t DeflateStream_SetLength_m2330444734_MetadataUsageId;
extern String_t* _stringLiteral3623385350;
extern String_t* _stringLiteral2998580661;
extern const uint32_t DeflateStream_Read_m1952322750_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4007973390;
extern String_t* _stringLiteral1082126080;
extern String_t* _stringLiteral2002595880;
extern String_t* _stringLiteral3360441599;
extern const uint32_t DeflateStream_ValidateParameters_m3403660080_MetadataUsageId;
extern RuntimeClass* ObjectDisposedException_t21392786_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4085905002;
extern const uint32_t DeflateStream_EnsureNotDisposed_m432649309_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral86810068;
extern const uint32_t DeflateStream_EnsureDecompressionMode_m1738476851_MetadataUsageId;
extern String_t* _stringLiteral2815240392;
extern const uint32_t DeflateStream_EnsureCompressionMode_m2807519719_MetadataUsageId;
extern RuntimeClass* DeflateStreamAsyncResult_t1893920535_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4056782387;
extern const uint32_t DeflateStream_BeginRead_m866602532_MetadataUsageId;
extern RuntimeClass* IAsyncResult_t767004451_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const uint32_t DeflateStream_ReadCallback_m1332467311_MetadataUsageId;
extern const uint32_t DeflateStream_EndRead_m1954304421_MetadataUsageId;
extern const uint32_t DeflateStream_InternalWrite_m3851430298_MetadataUsageId;
extern const uint32_t DeflateStream_WriteDeflaterOutput_m411712746_MetadataUsageId;
extern RuntimeClass* IFileFormatWriter_t4031231164_il2cpp_TypeInfo_var;
extern const uint32_t DeflateStream_DoMaintenance_m273657713_MetadataUsageId;
extern const uint32_t DeflateStream_PurgeBuffers_m855131095_MetadataUsageId;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t DeflateStream_Dispose_m4230687389_MetadataUsageId;
extern const uint32_t DeflateStream_BeginWrite_m2554098708_MetadataUsageId;
extern const uint32_t DeflateStream_WriteCallback_m3951505245_MetadataUsageId;
extern const uint32_t DeflateStream_EndWrite_m3819178005_MetadataUsageId;
extern String_t* _stringLiteral1512102152;
extern String_t* _stringLiteral844061258;
extern const uint32_t DeflateStream_CheckEndXxxxLegalStateAndParams_m1101183822_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t AsyncWriteDelegate_BeginInvoke_m1977843846_MetadataUsageId;
extern RuntimeClass* ManualResetEvent_t451242010_il2cpp_TypeInfo_var;
extern const uint32_t DeflateStreamAsyncResult_get_AsyncWaitHandle_m3302963922_MetadataUsageId;
extern const uint32_t DeflateStreamAsyncResult_Close_m100442919_MetadataUsageId;
extern const uint32_t DeflateStreamAsyncResult_Complete_m815863199_MetadataUsageId;
extern RuntimeClass* FastEncoderWindow_t57591660_il2cpp_TypeInfo_var;
extern RuntimeClass* Match_t352475233_il2cpp_TypeInfo_var;
extern const uint32_t FastEncoder__ctor_m3370242298_MetadataUsageId;
extern String_t* _stringLiteral1197627929;
extern const uint32_t FastEncoder_GetBlock_m2615023471_MetadataUsageId;
extern RuntimeClass* FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var;
extern const uint32_t FastEncoder_WriteEndOfBlock_m1363013709_MetadataUsageId;
extern String_t* _stringLiteral3499559529;
extern String_t* _stringLiteral924363382;
extern const uint32_t FastEncoder_WriteMatch_m2384169271_MetadataUsageId;
extern const uint32_t FastEncoder_WriteChar_m2865419403_MetadataUsageId;
extern const uint32_t FastEncoder_WriteDeflatePreamble_m2514809501_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____2492606636F4A4666E0D617B51116A5A68539881_0_FieldInfo_var;
extern const uint32_t FastEncoderStatics__cctor_m3772919552_MetadataUsageId;
extern const uint32_t FastEncoderStatics_GetSlot_m3628578944_MetadataUsageId;
extern String_t* _stringLiteral3062525967;
extern const uint32_t FastEncoderStatics_BitReverse_m4129531689_MetadataUsageId;
extern String_t* _stringLiteral1566591766;
extern const uint32_t FastEncoderWindow_get_BytesAvailable_m1185252922_MetadataUsageId;
extern const uint32_t FastEncoderWindow_get_UnprocessedInput_m1674119125_MetadataUsageId;
extern RuntimeClass* UInt16U5BU5D_t3326319531_il2cpp_TypeInfo_var;
extern const uint32_t FastEncoderWindow_ResetWindow_m3039115004_MetadataUsageId;
extern String_t* _stringLiteral4069598580;
extern const uint32_t FastEncoderWindow_MoveWindows_m194098449_MetadataUsageId;
extern String_t* _stringLiteral3337446052;
extern const uint32_t FastEncoderWindow_InsertStrings_m1285311058_MetadataUsageId;
extern String_t* _stringLiteral860162242;
extern const uint32_t FastEncoderWindow_GetNextSymbolOrMatch_m2835047593_MetadataUsageId;
extern String_t* _stringLiteral1101334722;
extern String_t* _stringLiteral3424990266;
extern String_t* _stringLiteral2906733707;
extern String_t* _stringLiteral3379915481;
extern String_t* _stringLiteral2339251013;
extern String_t* _stringLiteral2675743109;
extern const uint32_t FastEncoderWindow_FindMatch_m1610996658_MetadataUsageId;
extern String_t* _stringLiteral1625256389;
extern String_t* _stringLiteral4250947240;
extern const uint32_t FastEncoderWindow_VerifyHashes_m2706053389_MetadataUsageId;
extern RuntimeClass* InvalidDataException_t4045251031_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral178773768;
extern String_t* _stringLiteral3160259006;
extern String_t* _stringLiteral3592674616;
extern String_t* _stringLiteral2974181263;
extern const uint32_t GZipDecoder_ReadHeader_m2430614649_MetadataUsageId;
extern const uint32_t GZipDecoder_UpdateWithBytesRead_m3091634456_MetadataUsageId;
extern String_t* _stringLiteral1587601205;
extern String_t* _stringLiteral3680897169;
extern const uint32_t GZipDecoder_Validate_m4289889972_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____C31FD54E9E8CFB2BC8835475B92A0D179827B581_10_FieldInfo_var;
extern const uint32_t GZipFormatter__ctor_m2553017424_MetadataUsageId;
extern const uint32_t GZipFormatter_UpdateWithBytesRead_m3308253620_MetadataUsageId;
extern const uint32_t GZipFormatter_GetFooter_m2690444950_MetadataUsageId;
extern RuntimeClass* DeflateStream_t2796728099_il2cpp_TypeInfo_var;
extern const uint32_t GZipStream__ctor_m2813672799_MetadataUsageId;
extern const uint32_t GZipStream__ctor_m329980630_MetadataUsageId;
extern RuntimeClass* GZipFormatter_t4203637370_il2cpp_TypeInfo_var;
extern RuntimeClass* GZipDecoder_t3447631347_il2cpp_TypeInfo_var;
extern const uint32_t GZipStream_SetDeflateStreamFileFormatter_m3709514482_MetadataUsageId;
extern const uint32_t GZipStream_get_Length_m3049713947_MetadataUsageId;
extern const uint32_t GZipStream_get_Position_m4069547057_MetadataUsageId;
extern const uint32_t GZipStream_set_Position_m3928954563_MetadataUsageId;
extern const uint32_t GZipStream_Flush_m619962778_MetadataUsageId;
extern const uint32_t GZipStream_Seek_m3908112443_MetadataUsageId;
extern const uint32_t GZipStream_SetLength_m1773441765_MetadataUsageId;
extern const uint32_t GZipStream_BeginRead_m2827025962_MetadataUsageId;
extern const uint32_t GZipStream_EndRead_m2787627340_MetadataUsageId;
extern const uint32_t GZipStream_BeginWrite_m464065299_MetadataUsageId;
extern const uint32_t GZipStream_EndWrite_m3857919008_MetadataUsageId;
extern const uint32_t GZipStream_Read_m2777190171_MetadataUsageId;
extern const uint32_t GZipStream_Write_m4235844697_MetadataUsageId;
extern RuntimeClass* HuffmanTree_t857975559_il2cpp_TypeInfo_var;
extern const uint32_t HuffmanTree__cctor_m3416801982_MetadataUsageId;
extern const uint32_t HuffmanTree_get_StaticLiteralLengthTree_m3124791014_MetadataUsageId;
extern const uint32_t HuffmanTree_get_StaticDistanceTree_m3178788661_MetadataUsageId;
extern String_t* _stringLiteral719884611;
extern const uint32_t HuffmanTree__ctor_m1239190810_MetadataUsageId;
extern const uint32_t HuffmanTree_GetStaticLiteralTreeLength_m3370042063_MetadataUsageId;
extern const uint32_t HuffmanTree_GetStaticDistanceTreeLength_m1284918502_MetadataUsageId;
extern const uint32_t HuffmanTree_CalculateHuffmanCode_m3025073388_MetadataUsageId;
extern RuntimeClass* Int16U5BU5D_t3686840178_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1399030644;
extern String_t* _stringLiteral1456394998;
extern const uint32_t HuffmanTree_CreateTable_m2141668710_MetadataUsageId;
extern const uint32_t HuffmanTree_GetNextSymbol_m2267284928_MetadataUsageId;
extern RuntimeClass* OutputWindow_t1296654655_il2cpp_TypeInfo_var;
extern RuntimeClass* InputBuffer_t333709416_il2cpp_TypeInfo_var;
extern const uint32_t Inflater__ctor_m1495841814_MetadataUsageId;
extern RuntimeClass* IFileFormatReader_t1171368011_il2cpp_TypeInfo_var;
extern const uint32_t Inflater_Inflate_m3538837957_MetadataUsageId;
extern String_t* _stringLiteral2188930209;
extern const uint32_t Inflater_Decode_m267901025_MetadataUsageId;
extern String_t* _stringLiteral3295002465;
extern String_t* _stringLiteral2265238322;
extern const uint32_t Inflater_DecodeUncompressedBlock_m1436780137_MetadataUsageId;
extern String_t* _stringLiteral1783318469;
extern String_t* _stringLiteral2413066215;
extern String_t* _stringLiteral78954813;
extern const uint32_t Inflater_DecodeBlock_m3298394737_MetadataUsageId;
extern const uint32_t Inflater_DecodeDynamicBlockHeader_m3821747797_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6_FieldInfo_var;
extern const uint32_t Inflater__cctor_m3585428057_MetadataUsageId;
extern String_t* _stringLiteral2867231120;
extern const uint32_t InputBuffer_EnsureBitsAvailable_m1253303813_MetadataUsageId;
extern const uint32_t InputBuffer_GetBits_m521756373_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern const uint32_t InputBuffer_CopyTo_m1507984879_MetadataUsageId;
extern const uint32_t InputBuffer_SetInput_m2532930549_MetadataUsageId;
extern String_t* _stringLiteral3305376611;
extern const uint32_t InputBuffer_SkipBits_m2751677346_MetadataUsageId;
extern const uint32_t InvalidDataException__ctor_m3515379960_MetadataUsageId;
extern String_t* _stringLiteral750194001;
extern const uint32_t OutputBuffer_WriteUInt16_m967747097_MetadataUsageId;
extern String_t* _stringLiteral3718438015;
extern const uint32_t OutputBuffer_WriteBits_m1241582760_MetadataUsageId;
extern String_t* _stringLiteral1410917147;
extern const uint32_t OutputBuffer_WriteBytes_m2091034451_MetadataUsageId;
extern String_t* _stringLiteral4250229837;
extern const uint32_t OutputWindow_Write_m4205025380_MetadataUsageId;
extern String_t* _stringLiteral1448386625;
extern const uint32_t OutputWindow_WriteLengthDistance_m98394582_MetadataUsageId;
extern String_t* _stringLiteral2684151561;
extern const uint32_t OutputWindow_CopyTo_m2475356236_MetadataUsageId;
extern const uint32_t OutputWindow__ctor_m4028030521_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct UInt32U5BU5D_t2770800703;
struct UInt16U5BU5D_t3326319531;
struct Int16U5BU5D_t3686840178;
struct Int32U5BU5D_t385246372;


#ifndef U3CMODULEU3E_T692745555_H
#define U3CMODULEU3E_T692745555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745555 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745555_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef FASTENCODER_T887805019_H
#define FASTENCODER_T887805019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.FastEncoder
struct  FastEncoder_t887805019  : public RuntimeObject
{
public:
	// Mapbox.IO.Compression.FastEncoderWindow Mapbox.IO.Compression.FastEncoder::inputWindow
	FastEncoderWindow_t57591660 * ___inputWindow_0;
	// Mapbox.IO.Compression.Match Mapbox.IO.Compression.FastEncoder::currentMatch
	Match_t352475233 * ___currentMatch_1;
	// System.Double Mapbox.IO.Compression.FastEncoder::lastCompressionRatio
	double ___lastCompressionRatio_2;

public:
	inline static int32_t get_offset_of_inputWindow_0() { return static_cast<int32_t>(offsetof(FastEncoder_t887805019, ___inputWindow_0)); }
	inline FastEncoderWindow_t57591660 * get_inputWindow_0() const { return ___inputWindow_0; }
	inline FastEncoderWindow_t57591660 ** get_address_of_inputWindow_0() { return &___inputWindow_0; }
	inline void set_inputWindow_0(FastEncoderWindow_t57591660 * value)
	{
		___inputWindow_0 = value;
		Il2CppCodeGenWriteBarrier((&___inputWindow_0), value);
	}

	inline static int32_t get_offset_of_currentMatch_1() { return static_cast<int32_t>(offsetof(FastEncoder_t887805019, ___currentMatch_1)); }
	inline Match_t352475233 * get_currentMatch_1() const { return ___currentMatch_1; }
	inline Match_t352475233 ** get_address_of_currentMatch_1() { return &___currentMatch_1; }
	inline void set_currentMatch_1(Match_t352475233 * value)
	{
		___currentMatch_1 = value;
		Il2CppCodeGenWriteBarrier((&___currentMatch_1), value);
	}

	inline static int32_t get_offset_of_lastCompressionRatio_2() { return static_cast<int32_t>(offsetof(FastEncoder_t887805019, ___lastCompressionRatio_2)); }
	inline double get_lastCompressionRatio_2() const { return ___lastCompressionRatio_2; }
	inline double* get_address_of_lastCompressionRatio_2() { return &___lastCompressionRatio_2; }
	inline void set_lastCompressionRatio_2(double value)
	{
		___lastCompressionRatio_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FASTENCODER_T887805019_H
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1853889766 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2718874744 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___serialized_0)); }
	inline Hashtable_t1853889766 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1853889766 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1853889766 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___values_1)); }
	inline ArrayList_t2718874744 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2718874744 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2718874744 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
#ifndef SR_T2098860177_H
#define SR_T2098860177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.SR
struct  SR_t2098860177  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SR_T2098860177_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CRC32HELPER_T2911080199_H
#define CRC32HELPER_T2911080199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.Crc32Helper
struct  Crc32Helper_t2911080199  : public RuntimeObject
{
public:

public:
};

struct Crc32Helper_t2911080199_StaticFields
{
public:
	// System.UInt32[] Mapbox.IO.Compression.Crc32Helper::crcTable
	UInt32U5BU5D_t2770800703* ___crcTable_0;

public:
	inline static int32_t get_offset_of_crcTable_0() { return static_cast<int32_t>(offsetof(Crc32Helper_t2911080199_StaticFields, ___crcTable_0)); }
	inline UInt32U5BU5D_t2770800703* get_crcTable_0() const { return ___crcTable_0; }
	inline UInt32U5BU5D_t2770800703** get_address_of_crcTable_0() { return &___crcTable_0; }
	inline void set_crcTable_0(UInt32U5BU5D_t2770800703* value)
	{
		___crcTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___crcTable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRC32HELPER_T2911080199_H
#ifndef OUTPUTBUFFER_T1331609326_H
#define OUTPUTBUFFER_T1331609326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.OutputBuffer
struct  OutputBuffer_t1331609326  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.OutputBuffer::byteBuffer
	ByteU5BU5D_t4116647657* ___byteBuffer_0;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer::pos
	int32_t ___pos_1;
	// System.UInt32 Mapbox.IO.Compression.OutputBuffer::bitBuf
	uint32_t ___bitBuf_2;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer::bitCount
	int32_t ___bitCount_3;

public:
	inline static int32_t get_offset_of_byteBuffer_0() { return static_cast<int32_t>(offsetof(OutputBuffer_t1331609326, ___byteBuffer_0)); }
	inline ByteU5BU5D_t4116647657* get_byteBuffer_0() const { return ___byteBuffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_byteBuffer_0() { return &___byteBuffer_0; }
	inline void set_byteBuffer_0(ByteU5BU5D_t4116647657* value)
	{
		___byteBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuffer_0), value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(OutputBuffer_t1331609326, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_bitBuf_2() { return static_cast<int32_t>(offsetof(OutputBuffer_t1331609326, ___bitBuf_2)); }
	inline uint32_t get_bitBuf_2() const { return ___bitBuf_2; }
	inline uint32_t* get_address_of_bitBuf_2() { return &___bitBuf_2; }
	inline void set_bitBuf_2(uint32_t value)
	{
		___bitBuf_2 = value;
	}

	inline static int32_t get_offset_of_bitCount_3() { return static_cast<int32_t>(offsetof(OutputBuffer_t1331609326, ___bitCount_3)); }
	inline int32_t get_bitCount_3() const { return ___bitCount_3; }
	inline int32_t* get_address_of_bitCount_3() { return &___bitCount_3; }
	inline void set_bitCount_3(int32_t value)
	{
		___bitCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTPUTBUFFER_T1331609326_H
#ifndef OUTPUTWINDOW_T1296654655_H
#define OUTPUTWINDOW_T1296654655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.OutputWindow
struct  OutputWindow_t1296654655  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.OutputWindow::window
	ByteU5BU5D_t4116647657* ___window_0;
	// System.Int32 Mapbox.IO.Compression.OutputWindow::end
	int32_t ___end_1;
	// System.Int32 Mapbox.IO.Compression.OutputWindow::bytesUsed
	int32_t ___bytesUsed_2;

public:
	inline static int32_t get_offset_of_window_0() { return static_cast<int32_t>(offsetof(OutputWindow_t1296654655, ___window_0)); }
	inline ByteU5BU5D_t4116647657* get_window_0() const { return ___window_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_window_0() { return &___window_0; }
	inline void set_window_0(ByteU5BU5D_t4116647657* value)
	{
		___window_0 = value;
		Il2CppCodeGenWriteBarrier((&___window_0), value);
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(OutputWindow_t1296654655, ___end_1)); }
	inline int32_t get_end_1() const { return ___end_1; }
	inline int32_t* get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(int32_t value)
	{
		___end_1 = value;
	}

	inline static int32_t get_offset_of_bytesUsed_2() { return static_cast<int32_t>(offsetof(OutputWindow_t1296654655, ___bytesUsed_2)); }
	inline int32_t get_bytesUsed_2() const { return ___bytesUsed_2; }
	inline int32_t* get_address_of_bytesUsed_2() { return &___bytesUsed_2; }
	inline void set_bytesUsed_2(int32_t value)
	{
		___bytesUsed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTPUTWINDOW_T1296654655_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef FASTENCODERWINDOW_T57591660_H
#define FASTENCODERWINDOW_T57591660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.FastEncoderWindow
struct  FastEncoderWindow_t57591660  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.FastEncoderWindow::window
	ByteU5BU5D_t4116647657* ___window_0;
	// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::bufPos
	int32_t ___bufPos_1;
	// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::bufEnd
	int32_t ___bufEnd_2;
	// System.UInt16[] Mapbox.IO.Compression.FastEncoderWindow::prev
	UInt16U5BU5D_t3326319531* ___prev_3;
	// System.UInt16[] Mapbox.IO.Compression.FastEncoderWindow::lookup
	UInt16U5BU5D_t3326319531* ___lookup_4;

public:
	inline static int32_t get_offset_of_window_0() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t57591660, ___window_0)); }
	inline ByteU5BU5D_t4116647657* get_window_0() const { return ___window_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_window_0() { return &___window_0; }
	inline void set_window_0(ByteU5BU5D_t4116647657* value)
	{
		___window_0 = value;
		Il2CppCodeGenWriteBarrier((&___window_0), value);
	}

	inline static int32_t get_offset_of_bufPos_1() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t57591660, ___bufPos_1)); }
	inline int32_t get_bufPos_1() const { return ___bufPos_1; }
	inline int32_t* get_address_of_bufPos_1() { return &___bufPos_1; }
	inline void set_bufPos_1(int32_t value)
	{
		___bufPos_1 = value;
	}

	inline static int32_t get_offset_of_bufEnd_2() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t57591660, ___bufEnd_2)); }
	inline int32_t get_bufEnd_2() const { return ___bufEnd_2; }
	inline int32_t* get_address_of_bufEnd_2() { return &___bufEnd_2; }
	inline void set_bufEnd_2(int32_t value)
	{
		___bufEnd_2 = value;
	}

	inline static int32_t get_offset_of_prev_3() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t57591660, ___prev_3)); }
	inline UInt16U5BU5D_t3326319531* get_prev_3() const { return ___prev_3; }
	inline UInt16U5BU5D_t3326319531** get_address_of_prev_3() { return &___prev_3; }
	inline void set_prev_3(UInt16U5BU5D_t3326319531* value)
	{
		___prev_3 = value;
		Il2CppCodeGenWriteBarrier((&___prev_3), value);
	}

	inline static int32_t get_offset_of_lookup_4() { return static_cast<int32_t>(offsetof(FastEncoderWindow_t57591660, ___lookup_4)); }
	inline UInt16U5BU5D_t3326319531* get_lookup_4() const { return ___lookup_4; }
	inline UInt16U5BU5D_t3326319531** get_address_of_lookup_4() { return &___lookup_4; }
	inline void set_lookup_4(UInt16U5BU5D_t3326319531* value)
	{
		___lookup_4 = value;
		Il2CppCodeGenWriteBarrier((&___lookup_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FASTENCODERWINDOW_T57591660_H
#ifndef FASTENCODERSTATICS_T1128548993_H
#define FASTENCODERSTATICS_T1128548993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.FastEncoderStatics
struct  FastEncoderStatics_t1128548993  : public RuntimeObject
{
public:

public:
};

struct FastEncoderStatics_t1128548993_StaticFields
{
public:
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::FastEncoderTreeStructureData
	ByteU5BU5D_t4116647657* ___FastEncoderTreeStructureData_0;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::BFinalFastEncoderTreeStructureData
	ByteU5BU5D_t4116647657* ___BFinalFastEncoderTreeStructureData_1;
	// System.UInt32[] Mapbox.IO.Compression.FastEncoderStatics::FastEncoderLiteralCodeInfo
	UInt32U5BU5D_t2770800703* ___FastEncoderLiteralCodeInfo_2;
	// System.UInt32[] Mapbox.IO.Compression.FastEncoderStatics::FastEncoderDistanceCodeInfo
	UInt32U5BU5D_t2770800703* ___FastEncoderDistanceCodeInfo_3;
	// System.UInt32[] Mapbox.IO.Compression.FastEncoderStatics::BitMask
	UInt32U5BU5D_t2770800703* ___BitMask_4;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::ExtraLengthBits
	ByteU5BU5D_t4116647657* ___ExtraLengthBits_5;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::ExtraDistanceBits
	ByteU5BU5D_t4116647657* ___ExtraDistanceBits_6;
	// System.Byte[] Mapbox.IO.Compression.FastEncoderStatics::distLookup
	ByteU5BU5D_t4116647657* ___distLookup_7;

public:
	inline static int32_t get_offset_of_FastEncoderTreeStructureData_0() { return static_cast<int32_t>(offsetof(FastEncoderStatics_t1128548993_StaticFields, ___FastEncoderTreeStructureData_0)); }
	inline ByteU5BU5D_t4116647657* get_FastEncoderTreeStructureData_0() const { return ___FastEncoderTreeStructureData_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_FastEncoderTreeStructureData_0() { return &___FastEncoderTreeStructureData_0; }
	inline void set_FastEncoderTreeStructureData_0(ByteU5BU5D_t4116647657* value)
	{
		___FastEncoderTreeStructureData_0 = value;
		Il2CppCodeGenWriteBarrier((&___FastEncoderTreeStructureData_0), value);
	}

	inline static int32_t get_offset_of_BFinalFastEncoderTreeStructureData_1() { return static_cast<int32_t>(offsetof(FastEncoderStatics_t1128548993_StaticFields, ___BFinalFastEncoderTreeStructureData_1)); }
	inline ByteU5BU5D_t4116647657* get_BFinalFastEncoderTreeStructureData_1() const { return ___BFinalFastEncoderTreeStructureData_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_BFinalFastEncoderTreeStructureData_1() { return &___BFinalFastEncoderTreeStructureData_1; }
	inline void set_BFinalFastEncoderTreeStructureData_1(ByteU5BU5D_t4116647657* value)
	{
		___BFinalFastEncoderTreeStructureData_1 = value;
		Il2CppCodeGenWriteBarrier((&___BFinalFastEncoderTreeStructureData_1), value);
	}

	inline static int32_t get_offset_of_FastEncoderLiteralCodeInfo_2() { return static_cast<int32_t>(offsetof(FastEncoderStatics_t1128548993_StaticFields, ___FastEncoderLiteralCodeInfo_2)); }
	inline UInt32U5BU5D_t2770800703* get_FastEncoderLiteralCodeInfo_2() const { return ___FastEncoderLiteralCodeInfo_2; }
	inline UInt32U5BU5D_t2770800703** get_address_of_FastEncoderLiteralCodeInfo_2() { return &___FastEncoderLiteralCodeInfo_2; }
	inline void set_FastEncoderLiteralCodeInfo_2(UInt32U5BU5D_t2770800703* value)
	{
		___FastEncoderLiteralCodeInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___FastEncoderLiteralCodeInfo_2), value);
	}

	inline static int32_t get_offset_of_FastEncoderDistanceCodeInfo_3() { return static_cast<int32_t>(offsetof(FastEncoderStatics_t1128548993_StaticFields, ___FastEncoderDistanceCodeInfo_3)); }
	inline UInt32U5BU5D_t2770800703* get_FastEncoderDistanceCodeInfo_3() const { return ___FastEncoderDistanceCodeInfo_3; }
	inline UInt32U5BU5D_t2770800703** get_address_of_FastEncoderDistanceCodeInfo_3() { return &___FastEncoderDistanceCodeInfo_3; }
	inline void set_FastEncoderDistanceCodeInfo_3(UInt32U5BU5D_t2770800703* value)
	{
		___FastEncoderDistanceCodeInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___FastEncoderDistanceCodeInfo_3), value);
	}

	inline static int32_t get_offset_of_BitMask_4() { return static_cast<int32_t>(offsetof(FastEncoderStatics_t1128548993_StaticFields, ___BitMask_4)); }
	inline UInt32U5BU5D_t2770800703* get_BitMask_4() const { return ___BitMask_4; }
	inline UInt32U5BU5D_t2770800703** get_address_of_BitMask_4() { return &___BitMask_4; }
	inline void set_BitMask_4(UInt32U5BU5D_t2770800703* value)
	{
		___BitMask_4 = value;
		Il2CppCodeGenWriteBarrier((&___BitMask_4), value);
	}

	inline static int32_t get_offset_of_ExtraLengthBits_5() { return static_cast<int32_t>(offsetof(FastEncoderStatics_t1128548993_StaticFields, ___ExtraLengthBits_5)); }
	inline ByteU5BU5D_t4116647657* get_ExtraLengthBits_5() const { return ___ExtraLengthBits_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_ExtraLengthBits_5() { return &___ExtraLengthBits_5; }
	inline void set_ExtraLengthBits_5(ByteU5BU5D_t4116647657* value)
	{
		___ExtraLengthBits_5 = value;
		Il2CppCodeGenWriteBarrier((&___ExtraLengthBits_5), value);
	}

	inline static int32_t get_offset_of_ExtraDistanceBits_6() { return static_cast<int32_t>(offsetof(FastEncoderStatics_t1128548993_StaticFields, ___ExtraDistanceBits_6)); }
	inline ByteU5BU5D_t4116647657* get_ExtraDistanceBits_6() const { return ___ExtraDistanceBits_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_ExtraDistanceBits_6() { return &___ExtraDistanceBits_6; }
	inline void set_ExtraDistanceBits_6(ByteU5BU5D_t4116647657* value)
	{
		___ExtraDistanceBits_6 = value;
		Il2CppCodeGenWriteBarrier((&___ExtraDistanceBits_6), value);
	}

	inline static int32_t get_offset_of_distLookup_7() { return static_cast<int32_t>(offsetof(FastEncoderStatics_t1128548993_StaticFields, ___distLookup_7)); }
	inline ByteU5BU5D_t4116647657* get_distLookup_7() const { return ___distLookup_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_distLookup_7() { return &___distLookup_7; }
	inline void set_distLookup_7(ByteU5BU5D_t4116647657* value)
	{
		___distLookup_7 = value;
		Il2CppCodeGenWriteBarrier((&___distLookup_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FASTENCODERSTATICS_T1128548993_H
#ifndef INPUTBUFFER_T333709416_H
#define INPUTBUFFER_T333709416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.InputBuffer
struct  InputBuffer_t333709416  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.InputBuffer::buffer
	ByteU5BU5D_t4116647657* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::start
	int32_t ___start_1;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::end
	int32_t ___end_2;
	// System.UInt32 Mapbox.IO.Compression.InputBuffer::bitBuffer
	uint32_t ___bitBuffer_3;
	// System.Int32 Mapbox.IO.Compression.InputBuffer::bitsInBuffer
	int32_t ___bitsInBuffer_4;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(InputBuffer_t333709416, ___buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_0), value);
	}

	inline static int32_t get_offset_of_start_1() { return static_cast<int32_t>(offsetof(InputBuffer_t333709416, ___start_1)); }
	inline int32_t get_start_1() const { return ___start_1; }
	inline int32_t* get_address_of_start_1() { return &___start_1; }
	inline void set_start_1(int32_t value)
	{
		___start_1 = value;
	}

	inline static int32_t get_offset_of_end_2() { return static_cast<int32_t>(offsetof(InputBuffer_t333709416, ___end_2)); }
	inline int32_t get_end_2() const { return ___end_2; }
	inline int32_t* get_address_of_end_2() { return &___end_2; }
	inline void set_end_2(int32_t value)
	{
		___end_2 = value;
	}

	inline static int32_t get_offset_of_bitBuffer_3() { return static_cast<int32_t>(offsetof(InputBuffer_t333709416, ___bitBuffer_3)); }
	inline uint32_t get_bitBuffer_3() const { return ___bitBuffer_3; }
	inline uint32_t* get_address_of_bitBuffer_3() { return &___bitBuffer_3; }
	inline void set_bitBuffer_3(uint32_t value)
	{
		___bitBuffer_3 = value;
	}

	inline static int32_t get_offset_of_bitsInBuffer_4() { return static_cast<int32_t>(offsetof(InputBuffer_t333709416, ___bitsInBuffer_4)); }
	inline int32_t get_bitsInBuffer_4() const { return ___bitsInBuffer_4; }
	inline int32_t* get_address_of_bitsInBuffer_4() { return &___bitsInBuffer_4; }
	inline void set_bitsInBuffer_4(int32_t value)
	{
		___bitsInBuffer_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBUFFER_T333709416_H
#ifndef GZIPFORMATTER_T4203637370_H
#define GZIPFORMATTER_T4203637370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.GZipFormatter
struct  GZipFormatter_t4203637370  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.GZipFormatter::headerBytes
	ByteU5BU5D_t4116647657* ___headerBytes_0;
	// System.UInt32 Mapbox.IO.Compression.GZipFormatter::_crc32
	uint32_t ____crc32_1;
	// System.Int64 Mapbox.IO.Compression.GZipFormatter::_inputStreamSizeModulo
	int64_t ____inputStreamSizeModulo_2;

public:
	inline static int32_t get_offset_of_headerBytes_0() { return static_cast<int32_t>(offsetof(GZipFormatter_t4203637370, ___headerBytes_0)); }
	inline ByteU5BU5D_t4116647657* get_headerBytes_0() const { return ___headerBytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_headerBytes_0() { return &___headerBytes_0; }
	inline void set_headerBytes_0(ByteU5BU5D_t4116647657* value)
	{
		___headerBytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___headerBytes_0), value);
	}

	inline static int32_t get_offset_of__crc32_1() { return static_cast<int32_t>(offsetof(GZipFormatter_t4203637370, ____crc32_1)); }
	inline uint32_t get__crc32_1() const { return ____crc32_1; }
	inline uint32_t* get_address_of__crc32_1() { return &____crc32_1; }
	inline void set__crc32_1(uint32_t value)
	{
		____crc32_1 = value;
	}

	inline static int32_t get_offset_of__inputStreamSizeModulo_2() { return static_cast<int32_t>(offsetof(GZipFormatter_t4203637370, ____inputStreamSizeModulo_2)); }
	inline int64_t get__inputStreamSizeModulo_2() const { return ____inputStreamSizeModulo_2; }
	inline int64_t* get_address_of__inputStreamSizeModulo_2() { return &____inputStreamSizeModulo_2; }
	inline void set__inputStreamSizeModulo_2(int64_t value)
	{
		____inputStreamSizeModulo_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GZIPFORMATTER_T4203637370_H
#ifndef HUFFMANTREE_T857975559_H
#define HUFFMANTREE_T857975559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.HuffmanTree
struct  HuffmanTree_t857975559  : public RuntimeObject
{
public:
	// System.Int32 Mapbox.IO.Compression.HuffmanTree::tableBits
	int32_t ___tableBits_0;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::table
	Int16U5BU5D_t3686840178* ___table_1;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::left
	Int16U5BU5D_t3686840178* ___left_2;
	// System.Int16[] Mapbox.IO.Compression.HuffmanTree::right
	Int16U5BU5D_t3686840178* ___right_3;
	// System.Byte[] Mapbox.IO.Compression.HuffmanTree::codeLengthArray
	ByteU5BU5D_t4116647657* ___codeLengthArray_4;
	// System.UInt32[] Mapbox.IO.Compression.HuffmanTree::codeArrayDebug
	UInt32U5BU5D_t2770800703* ___codeArrayDebug_5;
	// System.Int32 Mapbox.IO.Compression.HuffmanTree::tableMask
	int32_t ___tableMask_6;

public:
	inline static int32_t get_offset_of_tableBits_0() { return static_cast<int32_t>(offsetof(HuffmanTree_t857975559, ___tableBits_0)); }
	inline int32_t get_tableBits_0() const { return ___tableBits_0; }
	inline int32_t* get_address_of_tableBits_0() { return &___tableBits_0; }
	inline void set_tableBits_0(int32_t value)
	{
		___tableBits_0 = value;
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(HuffmanTree_t857975559, ___table_1)); }
	inline Int16U5BU5D_t3686840178* get_table_1() const { return ___table_1; }
	inline Int16U5BU5D_t3686840178** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Int16U5BU5D_t3686840178* value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(HuffmanTree_t857975559, ___left_2)); }
	inline Int16U5BU5D_t3686840178* get_left_2() const { return ___left_2; }
	inline Int16U5BU5D_t3686840178** get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(Int16U5BU5D_t3686840178* value)
	{
		___left_2 = value;
		Il2CppCodeGenWriteBarrier((&___left_2), value);
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(HuffmanTree_t857975559, ___right_3)); }
	inline Int16U5BU5D_t3686840178* get_right_3() const { return ___right_3; }
	inline Int16U5BU5D_t3686840178** get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(Int16U5BU5D_t3686840178* value)
	{
		___right_3 = value;
		Il2CppCodeGenWriteBarrier((&___right_3), value);
	}

	inline static int32_t get_offset_of_codeLengthArray_4() { return static_cast<int32_t>(offsetof(HuffmanTree_t857975559, ___codeLengthArray_4)); }
	inline ByteU5BU5D_t4116647657* get_codeLengthArray_4() const { return ___codeLengthArray_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_codeLengthArray_4() { return &___codeLengthArray_4; }
	inline void set_codeLengthArray_4(ByteU5BU5D_t4116647657* value)
	{
		___codeLengthArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___codeLengthArray_4), value);
	}

	inline static int32_t get_offset_of_codeArrayDebug_5() { return static_cast<int32_t>(offsetof(HuffmanTree_t857975559, ___codeArrayDebug_5)); }
	inline UInt32U5BU5D_t2770800703* get_codeArrayDebug_5() const { return ___codeArrayDebug_5; }
	inline UInt32U5BU5D_t2770800703** get_address_of_codeArrayDebug_5() { return &___codeArrayDebug_5; }
	inline void set_codeArrayDebug_5(UInt32U5BU5D_t2770800703* value)
	{
		___codeArrayDebug_5 = value;
		Il2CppCodeGenWriteBarrier((&___codeArrayDebug_5), value);
	}

	inline static int32_t get_offset_of_tableMask_6() { return static_cast<int32_t>(offsetof(HuffmanTree_t857975559, ___tableMask_6)); }
	inline int32_t get_tableMask_6() const { return ___tableMask_6; }
	inline int32_t* get_address_of_tableMask_6() { return &___tableMask_6; }
	inline void set_tableMask_6(int32_t value)
	{
		___tableMask_6 = value;
	}
};

struct HuffmanTree_t857975559_StaticFields
{
public:
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::staticLiteralLengthTree
	HuffmanTree_t857975559 * ___staticLiteralLengthTree_7;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::staticDistanceTree
	HuffmanTree_t857975559 * ___staticDistanceTree_8;

public:
	inline static int32_t get_offset_of_staticLiteralLengthTree_7() { return static_cast<int32_t>(offsetof(HuffmanTree_t857975559_StaticFields, ___staticLiteralLengthTree_7)); }
	inline HuffmanTree_t857975559 * get_staticLiteralLengthTree_7() const { return ___staticLiteralLengthTree_7; }
	inline HuffmanTree_t857975559 ** get_address_of_staticLiteralLengthTree_7() { return &___staticLiteralLengthTree_7; }
	inline void set_staticLiteralLengthTree_7(HuffmanTree_t857975559 * value)
	{
		___staticLiteralLengthTree_7 = value;
		Il2CppCodeGenWriteBarrier((&___staticLiteralLengthTree_7), value);
	}

	inline static int32_t get_offset_of_staticDistanceTree_8() { return static_cast<int32_t>(offsetof(HuffmanTree_t857975559_StaticFields, ___staticDistanceTree_8)); }
	inline HuffmanTree_t857975559 * get_staticDistanceTree_8() const { return ___staticDistanceTree_8; }
	inline HuffmanTree_t857975559 ** get_address_of_staticDistanceTree_8() { return &___staticDistanceTree_8; }
	inline void set_staticDistanceTree_8(HuffmanTree_t857975559 * value)
	{
		___staticDistanceTree_8 = value;
		Il2CppCodeGenWriteBarrier((&___staticDistanceTree_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUFFMANTREE_T857975559_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef DEFLATEINPUT_T3892891873_H
#define DEFLATEINPUT_T3892891873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflateInput
struct  DeflateInput_t3892891873  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.DeflateInput::buffer
	ByteU5BU5D_t4116647657* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.DeflateInput::count
	int32_t ___count_1;
	// System.Int32 Mapbox.IO.Compression.DeflateInput::startIndex
	int32_t ___startIndex_2;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(DeflateInput_t3892891873, ___buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(DeflateInput_t3892891873, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_startIndex_2() { return static_cast<int32_t>(offsetof(DeflateInput_t3892891873, ___startIndex_2)); }
	inline int32_t get_startIndex_2() const { return ___startIndex_2; }
	inline int32_t* get_address_of_startIndex_2() { return &___startIndex_2; }
	inline void set_startIndex_2(int32_t value)
	{
		___startIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATEINPUT_T3892891873_H
#ifndef DEFLATESTREAMASYNCRESULT_T1893920535_H
#define DEFLATESTREAMASYNCRESULT_T1893920535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflateStreamAsyncResult
struct  DeflateStreamAsyncResult_t1893920535  : public RuntimeObject
{
public:
	// System.Byte[] Mapbox.IO.Compression.DeflateStreamAsyncResult::buffer
	ByteU5BU5D_t4116647657* ___buffer_0;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::offset
	int32_t ___offset_1;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::count
	int32_t ___count_2;
	// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::isWrite
	bool ___isWrite_3;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncObject
	RuntimeObject * ___m_AsyncObject_4;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncState
	RuntimeObject * ___m_AsyncState_5;
	// System.AsyncCallback Mapbox.IO.Compression.DeflateStreamAsyncResult::m_AsyncCallback
	AsyncCallback_t3962456242 * ___m_AsyncCallback_6;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Result
	RuntimeObject * ___m_Result_7;
	// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::m_CompletedSynchronously
	bool ___m_CompletedSynchronously_8;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::m_InvokedCallback
	int32_t ___m_InvokedCallback_9;
	// System.Int32 Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Completed
	int32_t ___m_Completed_10;
	// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::m_Event
	RuntimeObject * ___m_Event_11;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___buffer_0)); }
	inline ByteU5BU5D_t4116647657* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t4116647657* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_0), value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_isWrite_3() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___isWrite_3)); }
	inline bool get_isWrite_3() const { return ___isWrite_3; }
	inline bool* get_address_of_isWrite_3() { return &___isWrite_3; }
	inline void set_isWrite_3(bool value)
	{
		___isWrite_3 = value;
	}

	inline static int32_t get_offset_of_m_AsyncObject_4() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___m_AsyncObject_4)); }
	inline RuntimeObject * get_m_AsyncObject_4() const { return ___m_AsyncObject_4; }
	inline RuntimeObject ** get_address_of_m_AsyncObject_4() { return &___m_AsyncObject_4; }
	inline void set_m_AsyncObject_4(RuntimeObject * value)
	{
		___m_AsyncObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncObject_4), value);
	}

	inline static int32_t get_offset_of_m_AsyncState_5() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___m_AsyncState_5)); }
	inline RuntimeObject * get_m_AsyncState_5() const { return ___m_AsyncState_5; }
	inline RuntimeObject ** get_address_of_m_AsyncState_5() { return &___m_AsyncState_5; }
	inline void set_m_AsyncState_5(RuntimeObject * value)
	{
		___m_AsyncState_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncState_5), value);
	}

	inline static int32_t get_offset_of_m_AsyncCallback_6() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___m_AsyncCallback_6)); }
	inline AsyncCallback_t3962456242 * get_m_AsyncCallback_6() const { return ___m_AsyncCallback_6; }
	inline AsyncCallback_t3962456242 ** get_address_of_m_AsyncCallback_6() { return &___m_AsyncCallback_6; }
	inline void set_m_AsyncCallback_6(AsyncCallback_t3962456242 * value)
	{
		___m_AsyncCallback_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncCallback_6), value);
	}

	inline static int32_t get_offset_of_m_Result_7() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___m_Result_7)); }
	inline RuntimeObject * get_m_Result_7() const { return ___m_Result_7; }
	inline RuntimeObject ** get_address_of_m_Result_7() { return &___m_Result_7; }
	inline void set_m_Result_7(RuntimeObject * value)
	{
		___m_Result_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Result_7), value);
	}

	inline static int32_t get_offset_of_m_CompletedSynchronously_8() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___m_CompletedSynchronously_8)); }
	inline bool get_m_CompletedSynchronously_8() const { return ___m_CompletedSynchronously_8; }
	inline bool* get_address_of_m_CompletedSynchronously_8() { return &___m_CompletedSynchronously_8; }
	inline void set_m_CompletedSynchronously_8(bool value)
	{
		___m_CompletedSynchronously_8 = value;
	}

	inline static int32_t get_offset_of_m_InvokedCallback_9() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___m_InvokedCallback_9)); }
	inline int32_t get_m_InvokedCallback_9() const { return ___m_InvokedCallback_9; }
	inline int32_t* get_address_of_m_InvokedCallback_9() { return &___m_InvokedCallback_9; }
	inline void set_m_InvokedCallback_9(int32_t value)
	{
		___m_InvokedCallback_9 = value;
	}

	inline static int32_t get_offset_of_m_Completed_10() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___m_Completed_10)); }
	inline int32_t get_m_Completed_10() const { return ___m_Completed_10; }
	inline int32_t* get_address_of_m_Completed_10() { return &___m_Completed_10; }
	inline void set_m_Completed_10(int32_t value)
	{
		___m_Completed_10 = value;
	}

	inline static int32_t get_offset_of_m_Event_11() { return static_cast<int32_t>(offsetof(DeflateStreamAsyncResult_t1893920535, ___m_Event_11)); }
	inline RuntimeObject * get_m_Event_11() const { return ___m_Event_11; }
	inline RuntimeObject ** get_address_of_m_Event_11() { return &___m_Event_11; }
	inline void set_m_Event_11(RuntimeObject * value)
	{
		___m_Event_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Event_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATESTREAMASYNCRESULT_T1893920535_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef COPYENCODER_T1719707359_H
#define COPYENCODER_T1719707359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.CopyEncoder
struct  CopyEncoder_t1719707359  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COPYENCODER_T1719707359_H
#ifndef __STATICARRAYINITTYPESIZEU3D29_T3470705812_H
#define __STATICARRAYINITTYPESIZEU3D29_T3470705812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=29
struct  __StaticArrayInitTypeSizeU3D29_t3470705812 
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
		uint8_t __StaticArrayInitTypeSizeU3D29_t3470705812__padding[29];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D29_T3470705812_H
#ifndef __STATICARRAYINITTYPESIZEU3D2052_T3409083794_H
#define __STATICARRAYINITTYPESIZEU3D2052_T3409083794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2052
struct  __StaticArrayInitTypeSizeU3D2052_t3409083794 
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
		uint8_t __StaticArrayInitTypeSizeU3D2052_t3409083794__padding[2052];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2052_T3409083794_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_2)); }
	inline int16_t get_m_value_2() const { return ___m_value_2; }
	inline int16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef __STATICARRAYINITTYPESIZEU3D19_T3470509204_H
#define __STATICARRAYINITTYPESIZEU3D19_T3470509204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19
struct  __StaticArrayInitTypeSizeU3D19_t3470509204 
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
		uint8_t __StaticArrayInitTypeSizeU3D19_t3470509204__padding[19];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D19_T3470509204_H
#ifndef GZIPSTREAM_T1509501570_H
#define GZIPSTREAM_T1509501570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.GZipStream
struct  GZipStream_t1509501570  : public Stream_t1273022909
{
public:
	// Mapbox.IO.Compression.DeflateStream Mapbox.IO.Compression.GZipStream::deflateStream
	DeflateStream_t2796728099 * ___deflateStream_1;

public:
	inline static int32_t get_offset_of_deflateStream_1() { return static_cast<int32_t>(offsetof(GZipStream_t1509501570, ___deflateStream_1)); }
	inline DeflateStream_t2796728099 * get_deflateStream_1() const { return ___deflateStream_1; }
	inline DeflateStream_t2796728099 ** get_address_of_deflateStream_1() { return &___deflateStream_1; }
	inline void set_deflateStream_1(DeflateStream_t2796728099 * value)
	{
		___deflateStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___deflateStream_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GZIPSTREAM_T1509501570_H
#ifndef __STATICARRAYINITTYPESIZEU3D10_T1548194903_H
#define __STATICARRAYINITTYPESIZEU3D10_T1548194903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct  __StaticArrayInitTypeSizeU3D10_t1548194903 
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
		uint8_t __StaticArrayInitTypeSizeU3D10_t1548194903__padding[10];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D10_T1548194903_H
#ifndef __STATICARRAYINITTYPESIZEU3D1024_T4211899788_H
#define __STATICARRAYINITTYPESIZEU3D1024_T4211899788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct  __StaticArrayInitTypeSizeU3D1024_t4211899788 
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
		uint8_t __StaticArrayInitTypeSizeU3D1024_t4211899788__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1024_T4211899788_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef __STATICARRAYINITTYPESIZEU3D116_T4082769852_H
#define __STATICARRAYINITTYPESIZEU3D116_T4082769852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116
struct  __StaticArrayInitTypeSizeU3D116_t4082769852 
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
		uint8_t __StaticArrayInitTypeSizeU3D116_t4082769852__padding[116];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D116_T4082769852_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#define __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t531529101 
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
		uint8_t __StaticArrayInitTypeSizeU3D128_t531529101__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef BUFFERSTATE_T2134702710_H
#define BUFFERSTATE_T2134702710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.OutputBuffer/BufferState
struct  BufferState_t2134702710 
{
public:
	// System.Int32 Mapbox.IO.Compression.OutputBuffer/BufferState::pos
	int32_t ___pos_0;
	// System.UInt32 Mapbox.IO.Compression.OutputBuffer/BufferState::bitBuf
	uint32_t ___bitBuf_1;
	// System.Int32 Mapbox.IO.Compression.OutputBuffer/BufferState::bitCount
	int32_t ___bitCount_2;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(BufferState_t2134702710, ___pos_0)); }
	inline int32_t get_pos_0() const { return ___pos_0; }
	inline int32_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(int32_t value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_bitBuf_1() { return static_cast<int32_t>(offsetof(BufferState_t2134702710, ___bitBuf_1)); }
	inline uint32_t get_bitBuf_1() const { return ___bitBuf_1; }
	inline uint32_t* get_address_of_bitBuf_1() { return &___bitBuf_1; }
	inline void set_bitBuf_1(uint32_t value)
	{
		___bitBuf_1 = value;
	}

	inline static int32_t get_offset_of_bitCount_2() { return static_cast<int32_t>(offsetof(BufferState_t2134702710, ___bitCount_2)); }
	inline int32_t get_bitCount_2() const { return ___bitCount_2; }
	inline int32_t* get_address_of_bitCount_2() { return &___bitCount_2; }
	inline void set_bitCount_2(int32_t value)
	{
		___bitCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERSTATE_T2134702710_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125389_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125389 
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
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125389__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125389_H
#ifndef __STATICARRAYINITTYPESIZEU3D64_T3517497835_H
#define __STATICARRAYINITTYPESIZEU3D64_T3517497835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct  __StaticArrayInitTypeSizeU3D64_t3517497835 
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
		uint8_t __StaticArrayInitTypeSizeU3D64_t3517497835__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D64_T3517497835_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef INPUTSTATE_T2211247823_H
#define INPUTSTATE_T2211247823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflateInput/InputState
struct  InputState_t2211247823 
{
public:
	// System.Int32 Mapbox.IO.Compression.DeflateInput/InputState::count
	int32_t ___count_0;
	// System.Int32 Mapbox.IO.Compression.DeflateInput/InputState::startIndex
	int32_t ___startIndex_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(InputState_t2211247823, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_startIndex_1() { return static_cast<int32_t>(offsetof(InputState_t2211247823, ___startIndex_1)); }
	inline int32_t get_startIndex_1() const { return ___startIndex_1; }
	inline int32_t* get_address_of_startIndex_1() { return &___startIndex_1; }
	inline void set_startIndex_1(int32_t value)
	{
		___startIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSTATE_T2211247823_H
#ifndef __STATICARRAYINITTYPESIZEU3D98_T1904949551_H
#define __STATICARRAYINITTYPESIZEU3D98_T1904949551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98
struct  __StaticArrayInitTypeSizeU3D98_t1904949551 
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
		uint8_t __StaticArrayInitTypeSizeU3D98_t1904949551__padding[98];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D98_T1904949551_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef GZIPHEADERSTATE_T2287451846_H
#define GZIPHEADERSTATE_T2287451846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.GZipDecoder/GzipHeaderState
struct  GzipHeaderState_t2287451846 
{
public:
	// System.Int32 Mapbox.IO.Compression.GZipDecoder/GzipHeaderState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GzipHeaderState_t2287451846, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GZIPHEADERSTATE_T2287451846_H
#ifndef INFLATERSTATE_T2157501130_H
#define INFLATERSTATE_T2157501130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.InflaterState
struct  InflaterState_t2157501130 
{
public:
	// System.Int32 Mapbox.IO.Compression.InflaterState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InflaterState_t2157501130, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFLATERSTATE_T2157501130_H
#ifndef INVALIDDATAEXCEPTION_T4045251031_H
#define INVALIDDATAEXCEPTION_T4045251031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.InvalidDataException
struct  InvalidDataException_t4045251031  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDDATAEXCEPTION_T4045251031_H
#ifndef MATCHSTATE_T635901724_H
#define MATCHSTATE_T635901724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchState
struct  MatchState_t635901724 
{
public:
	// System.Int32 MatchState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MatchState_t635901724, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHSTATE_T635901724_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef WORKERTYPE_T976665898_H
#define WORKERTYPE_T976665898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflateStream/WorkerType
struct  WorkerType_t976665898 
{
public:
	// System.Byte Mapbox.IO.Compression.DeflateStream/WorkerType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorkerType_t976665898, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORKERTYPE_T976665898_H
#ifndef DEFLATERSTATE_T438385491_H
#define DEFLATERSTATE_T438385491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflaterManaged/DeflaterState
struct  DeflaterState_t438385491 
{
public:
	// System.Int32 Mapbox.IO.Compression.DeflaterManaged/DeflaterState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DeflaterState_t438385491, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATERSTATE_T438385491_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef SEEKORIGIN_T1441174344_H
#define SEEKORIGIN_T1441174344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SeekOrigin
struct  SeekOrigin_t1441174344 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeekOrigin_t1441174344, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEEKORIGIN_T1441174344_H
#ifndef COMPRESSIONMODE_T2055613304_H
#define COMPRESSIONMODE_T2055613304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.CompressionMode
struct  CompressionMode_t2055613304 
{
public:
	// System.Int32 Mapbox.IO.Compression.CompressionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionMode_t2055613304, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONMODE_T2055613304_H
#ifndef COMPRESSIONLEVEL_T3212615018_H
#define COMPRESSIONLEVEL_T3212615018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.CompressionLevel
struct  CompressionLevel_t3212615018 
{
public:
	// System.Int32 Mapbox.IO.Compression.CompressionLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompressionLevel_t3212615018, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSIONLEVEL_T3212615018_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255368  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2492606636F4A4666E0D617B51116A5A68539881
	__StaticArrayInitTypeSizeU3D32_t2711125389  ___2492606636F4A4666E0D617B51116A5A68539881_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=29 <PrivateImplementationDetails>::2DAF59AD82CBE58E893B0C025E68180B6C4037B4
	__StaticArrayInitTypeSizeU3D29_t3470705812  ___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98 <PrivateImplementationDetails>::345AD00C4B31ADE2765BCF63BC137F7F7E6819B8
	__StaticArrayInitTypeSizeU3D98_t1904949551  ___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::373B494F210C656134C5728D551D4C97B013EB33
	__StaticArrayInitTypeSizeU3D1024_t4211899788  ___373B494F210C656134C5728D551D4C97B013EB33_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=98 <PrivateImplementationDetails>::5001D1286D6CE39FFA3E67C66D5D68A487F49D0D
	__StaticArrayInitTypeSizeU3D98_t1904949551  ___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::6A94F0C3DCA389344CEDB99F171FA1E092E842E6
	__StaticArrayInitTypeSizeU3D128_t531529101  ___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6
	__StaticArrayInitTypeSizeU3D32_t2711125389  ___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::8ED4E99B936B26A09EDFAB9E336CF75F4913B454
	__StaticArrayInitTypeSizeU3D64_t3517497835  ___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19 <PrivateImplementationDetails>::9F8365E9D6C62D3B47026EC465B05A7B5526B5CD
	__StaticArrayInitTypeSizeU3D19_t3470509204  ___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2052 <PrivateImplementationDetails>::C0C10EC6AF4A4101F894B153E1CD493ADC01A67F
	__StaticArrayInitTypeSizeU3D2052_t3409083794  ___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::C31FD54E9E8CFB2BC8835475B92A0D179827B581
	__StaticArrayInitTypeSizeU3D10_t1548194903  ___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF
	__StaticArrayInitTypeSizeU3D116_t4082769852  ___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::FD5BE77C4372533D7C16BF67D58A3ABBE604ED81
	__StaticArrayInitTypeSizeU3D128_t531529101  ___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12;

public:
	inline static int32_t get_offset_of_U32492606636F4A4666E0D617B51116A5A68539881_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___2492606636F4A4666E0D617B51116A5A68539881_0)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125389  get_U32492606636F4A4666E0D617B51116A5A68539881_0() const { return ___2492606636F4A4666E0D617B51116A5A68539881_0; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125389 * get_address_of_U32492606636F4A4666E0D617B51116A5A68539881_0() { return &___2492606636F4A4666E0D617B51116A5A68539881_0; }
	inline void set_U32492606636F4A4666E0D617B51116A5A68539881_0(__StaticArrayInitTypeSizeU3D32_t2711125389  value)
	{
		___2492606636F4A4666E0D617B51116A5A68539881_0 = value;
	}

	inline static int32_t get_offset_of_U32DAF59AD82CBE58E893B0C025E68180B6C4037B4_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1)); }
	inline __StaticArrayInitTypeSizeU3D29_t3470705812  get_U32DAF59AD82CBE58E893B0C025E68180B6C4037B4_1() const { return ___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1; }
	inline __StaticArrayInitTypeSizeU3D29_t3470705812 * get_address_of_U32DAF59AD82CBE58E893B0C025E68180B6C4037B4_1() { return &___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1; }
	inline void set_U32DAF59AD82CBE58E893B0C025E68180B6C4037B4_1(__StaticArrayInitTypeSizeU3D29_t3470705812  value)
	{
		___2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1 = value;
	}

	inline static int32_t get_offset_of_U3345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2)); }
	inline __StaticArrayInitTypeSizeU3D98_t1904949551  get_U3345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2() const { return ___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2; }
	inline __StaticArrayInitTypeSizeU3D98_t1904949551 * get_address_of_U3345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2() { return &___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2; }
	inline void set_U3345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2(__StaticArrayInitTypeSizeU3D98_t1904949551  value)
	{
		___345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2 = value;
	}

	inline static int32_t get_offset_of_U3373B494F210C656134C5728D551D4C97B013EB33_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___373B494F210C656134C5728D551D4C97B013EB33_3)); }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899788  get_U3373B494F210C656134C5728D551D4C97B013EB33_3() const { return ___373B494F210C656134C5728D551D4C97B013EB33_3; }
	inline __StaticArrayInitTypeSizeU3D1024_t4211899788 * get_address_of_U3373B494F210C656134C5728D551D4C97B013EB33_3() { return &___373B494F210C656134C5728D551D4C97B013EB33_3; }
	inline void set_U3373B494F210C656134C5728D551D4C97B013EB33_3(__StaticArrayInitTypeSizeU3D1024_t4211899788  value)
	{
		___373B494F210C656134C5728D551D4C97B013EB33_3 = value;
	}

	inline static int32_t get_offset_of_U35001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4)); }
	inline __StaticArrayInitTypeSizeU3D98_t1904949551  get_U35001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4() const { return ___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4; }
	inline __StaticArrayInitTypeSizeU3D98_t1904949551 * get_address_of_U35001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4() { return &___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4; }
	inline void set_U35001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4(__StaticArrayInitTypeSizeU3D98_t1904949551  value)
	{
		___5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4 = value;
	}

	inline static int32_t get_offset_of_U36A94F0C3DCA389344CEDB99F171FA1E092E842E6_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529101  get_U36A94F0C3DCA389344CEDB99F171FA1E092E842E6_5() const { return ___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5; }
	inline __StaticArrayInitTypeSizeU3D128_t531529101 * get_address_of_U36A94F0C3DCA389344CEDB99F171FA1E092E842E6_5() { return &___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5; }
	inline void set_U36A94F0C3DCA389344CEDB99F171FA1E092E842E6_5(__StaticArrayInitTypeSizeU3D128_t531529101  value)
	{
		___6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5 = value;
	}

	inline static int32_t get_offset_of_U3794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125389  get_U3794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6() const { return ___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125389 * get_address_of_U3794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6() { return &___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6; }
	inline void set_U3794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6(__StaticArrayInitTypeSizeU3D32_t2711125389  value)
	{
		___794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6 = value;
	}

	inline static int32_t get_offset_of_U38ED4E99B936B26A09EDFAB9E336CF75F4913B454_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7)); }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835  get_U38ED4E99B936B26A09EDFAB9E336CF75F4913B454_7() const { return ___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7; }
	inline __StaticArrayInitTypeSizeU3D64_t3517497835 * get_address_of_U38ED4E99B936B26A09EDFAB9E336CF75F4913B454_7() { return &___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7; }
	inline void set_U38ED4E99B936B26A09EDFAB9E336CF75F4913B454_7(__StaticArrayInitTypeSizeU3D64_t3517497835  value)
	{
		___8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7 = value;
	}

	inline static int32_t get_offset_of_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8)); }
	inline __StaticArrayInitTypeSizeU3D19_t3470509204  get_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8() const { return ___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8; }
	inline __StaticArrayInitTypeSizeU3D19_t3470509204 * get_address_of_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8() { return &___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8; }
	inline void set_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8(__StaticArrayInitTypeSizeU3D19_t3470509204  value)
	{
		___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8 = value;
	}

	inline static int32_t get_offset_of_C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9)); }
	inline __StaticArrayInitTypeSizeU3D2052_t3409083794  get_C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9() const { return ___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9; }
	inline __StaticArrayInitTypeSizeU3D2052_t3409083794 * get_address_of_C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9() { return &___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9; }
	inline void set_C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9(__StaticArrayInitTypeSizeU3D2052_t3409083794  value)
	{
		___C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9 = value;
	}

	inline static int32_t get_offset_of_C31FD54E9E8CFB2BC8835475B92A0D179827B581_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10)); }
	inline __StaticArrayInitTypeSizeU3D10_t1548194903  get_C31FD54E9E8CFB2BC8835475B92A0D179827B581_10() const { return ___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10; }
	inline __StaticArrayInitTypeSizeU3D10_t1548194903 * get_address_of_C31FD54E9E8CFB2BC8835475B92A0D179827B581_10() { return &___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10; }
	inline void set_C31FD54E9E8CFB2BC8835475B92A0D179827B581_10(__StaticArrayInitTypeSizeU3D10_t1548194903  value)
	{
		___C31FD54E9E8CFB2BC8835475B92A0D179827B581_10 = value;
	}

	inline static int32_t get_offset_of_D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11)); }
	inline __StaticArrayInitTypeSizeU3D116_t4082769852  get_D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11() const { return ___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11; }
	inline __StaticArrayInitTypeSizeU3D116_t4082769852 * get_address_of_D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11() { return &___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11; }
	inline void set_D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11(__StaticArrayInitTypeSizeU3D116_t4082769852  value)
	{
		___D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11 = value;
	}

	inline static int32_t get_offset_of_FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529101  get_FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12() const { return ___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12; }
	inline __StaticArrayInitTypeSizeU3D128_t531529101 * get_address_of_FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12() { return &___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12; }
	inline void set_FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12(__StaticArrayInitTypeSizeU3D128_t531529101  value)
	{
		___FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#ifndef BLOCKTYPE_T3928626740_H
#define BLOCKTYPE_T3928626740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.BlockType
struct  BlockType_t3928626740 
{
public:
	// System.Int32 Mapbox.IO.Compression.BlockType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BlockType_t3928626740, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKTYPE_T3928626740_H
#ifndef DEFLATERMANAGED_T1452220717_H
#define DEFLATERMANAGED_T1452220717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflaterManaged
struct  DeflaterManaged_t1452220717  : public RuntimeObject
{
public:
	// Mapbox.IO.Compression.FastEncoder Mapbox.IO.Compression.DeflaterManaged::deflateEncoder
	FastEncoder_t887805019 * ___deflateEncoder_0;
	// Mapbox.IO.Compression.CopyEncoder Mapbox.IO.Compression.DeflaterManaged::copyEncoder
	CopyEncoder_t1719707359 * ___copyEncoder_1;
	// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.DeflaterManaged::input
	DeflateInput_t3892891873 * ___input_2;
	// Mapbox.IO.Compression.OutputBuffer Mapbox.IO.Compression.DeflaterManaged::output
	OutputBuffer_t1331609326 * ___output_3;
	// Mapbox.IO.Compression.DeflaterManaged/DeflaterState Mapbox.IO.Compression.DeflaterManaged::processingState
	int32_t ___processingState_4;
	// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.DeflaterManaged::inputFromHistory
	DeflateInput_t3892891873 * ___inputFromHistory_5;

public:
	inline static int32_t get_offset_of_deflateEncoder_0() { return static_cast<int32_t>(offsetof(DeflaterManaged_t1452220717, ___deflateEncoder_0)); }
	inline FastEncoder_t887805019 * get_deflateEncoder_0() const { return ___deflateEncoder_0; }
	inline FastEncoder_t887805019 ** get_address_of_deflateEncoder_0() { return &___deflateEncoder_0; }
	inline void set_deflateEncoder_0(FastEncoder_t887805019 * value)
	{
		___deflateEncoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___deflateEncoder_0), value);
	}

	inline static int32_t get_offset_of_copyEncoder_1() { return static_cast<int32_t>(offsetof(DeflaterManaged_t1452220717, ___copyEncoder_1)); }
	inline CopyEncoder_t1719707359 * get_copyEncoder_1() const { return ___copyEncoder_1; }
	inline CopyEncoder_t1719707359 ** get_address_of_copyEncoder_1() { return &___copyEncoder_1; }
	inline void set_copyEncoder_1(CopyEncoder_t1719707359 * value)
	{
		___copyEncoder_1 = value;
		Il2CppCodeGenWriteBarrier((&___copyEncoder_1), value);
	}

	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(DeflaterManaged_t1452220717, ___input_2)); }
	inline DeflateInput_t3892891873 * get_input_2() const { return ___input_2; }
	inline DeflateInput_t3892891873 ** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(DeflateInput_t3892891873 * value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier((&___input_2), value);
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(DeflaterManaged_t1452220717, ___output_3)); }
	inline OutputBuffer_t1331609326 * get_output_3() const { return ___output_3; }
	inline OutputBuffer_t1331609326 ** get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(OutputBuffer_t1331609326 * value)
	{
		___output_3 = value;
		Il2CppCodeGenWriteBarrier((&___output_3), value);
	}

	inline static int32_t get_offset_of_processingState_4() { return static_cast<int32_t>(offsetof(DeflaterManaged_t1452220717, ___processingState_4)); }
	inline int32_t get_processingState_4() const { return ___processingState_4; }
	inline int32_t* get_address_of_processingState_4() { return &___processingState_4; }
	inline void set_processingState_4(int32_t value)
	{
		___processingState_4 = value;
	}

	inline static int32_t get_offset_of_inputFromHistory_5() { return static_cast<int32_t>(offsetof(DeflaterManaged_t1452220717, ___inputFromHistory_5)); }
	inline DeflateInput_t3892891873 * get_inputFromHistory_5() const { return ___inputFromHistory_5; }
	inline DeflateInput_t3892891873 ** get_address_of_inputFromHistory_5() { return &___inputFromHistory_5; }
	inline void set_inputFromHistory_5(DeflateInput_t3892891873 * value)
	{
		___inputFromHistory_5 = value;
		Il2CppCodeGenWriteBarrier((&___inputFromHistory_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATERMANAGED_T1452220717_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef DEFLATESTREAM_T2796728099_H
#define DEFLATESTREAM_T2796728099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflateStream
struct  DeflateStream_t2796728099  : public Stream_t1273022909
{
public:
	// System.IO.Stream Mapbox.IO.Compression.DeflateStream::_stream
	Stream_t1273022909 * ____stream_1;
	// Mapbox.IO.Compression.CompressionMode Mapbox.IO.Compression.DeflateStream::_mode
	int32_t ____mode_2;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::_leaveOpen
	bool ____leaveOpen_3;
	// Mapbox.IO.Compression.Inflater Mapbox.IO.Compression.DeflateStream::inflater
	Inflater_t10910524 * ___inflater_4;
	// Mapbox.IO.Compression.IDeflater Mapbox.IO.Compression.DeflateStream::deflater
	RuntimeObject* ___deflater_5;
	// System.Byte[] Mapbox.IO.Compression.DeflateStream::buffer
	ByteU5BU5D_t4116647657* ___buffer_6;
	// System.Int32 Mapbox.IO.Compression.DeflateStream::asyncOperations
	int32_t ___asyncOperations_7;
	// System.AsyncCallback Mapbox.IO.Compression.DeflateStream::m_CallBack
	AsyncCallback_t3962456242 * ___m_CallBack_8;
	// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate Mapbox.IO.Compression.DeflateStream::m_AsyncWriterDelegate
	AsyncWriteDelegate_t47908213 * ___m_AsyncWriterDelegate_9;
	// Mapbox.IO.Compression.IFileFormatWriter Mapbox.IO.Compression.DeflateStream::formatWriter
	RuntimeObject* ___formatWriter_10;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::wroteHeader
	bool ___wroteHeader_11;
	// System.Boolean Mapbox.IO.Compression.DeflateStream::wroteBytes
	bool ___wroteBytes_12;

public:
	inline static int32_t get_offset_of__stream_1() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ____stream_1)); }
	inline Stream_t1273022909 * get__stream_1() const { return ____stream_1; }
	inline Stream_t1273022909 ** get_address_of__stream_1() { return &____stream_1; }
	inline void set__stream_1(Stream_t1273022909 * value)
	{
		____stream_1 = value;
		Il2CppCodeGenWriteBarrier((&____stream_1), value);
	}

	inline static int32_t get_offset_of__mode_2() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ____mode_2)); }
	inline int32_t get__mode_2() const { return ____mode_2; }
	inline int32_t* get_address_of__mode_2() { return &____mode_2; }
	inline void set__mode_2(int32_t value)
	{
		____mode_2 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_3() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ____leaveOpen_3)); }
	inline bool get__leaveOpen_3() const { return ____leaveOpen_3; }
	inline bool* get_address_of__leaveOpen_3() { return &____leaveOpen_3; }
	inline void set__leaveOpen_3(bool value)
	{
		____leaveOpen_3 = value;
	}

	inline static int32_t get_offset_of_inflater_4() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ___inflater_4)); }
	inline Inflater_t10910524 * get_inflater_4() const { return ___inflater_4; }
	inline Inflater_t10910524 ** get_address_of_inflater_4() { return &___inflater_4; }
	inline void set_inflater_4(Inflater_t10910524 * value)
	{
		___inflater_4 = value;
		Il2CppCodeGenWriteBarrier((&___inflater_4), value);
	}

	inline static int32_t get_offset_of_deflater_5() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ___deflater_5)); }
	inline RuntimeObject* get_deflater_5() const { return ___deflater_5; }
	inline RuntimeObject** get_address_of_deflater_5() { return &___deflater_5; }
	inline void set_deflater_5(RuntimeObject* value)
	{
		___deflater_5 = value;
		Il2CppCodeGenWriteBarrier((&___deflater_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ___buffer_6)); }
	inline ByteU5BU5D_t4116647657* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t4116647657* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_asyncOperations_7() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ___asyncOperations_7)); }
	inline int32_t get_asyncOperations_7() const { return ___asyncOperations_7; }
	inline int32_t* get_address_of_asyncOperations_7() { return &___asyncOperations_7; }
	inline void set_asyncOperations_7(int32_t value)
	{
		___asyncOperations_7 = value;
	}

	inline static int32_t get_offset_of_m_CallBack_8() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ___m_CallBack_8)); }
	inline AsyncCallback_t3962456242 * get_m_CallBack_8() const { return ___m_CallBack_8; }
	inline AsyncCallback_t3962456242 ** get_address_of_m_CallBack_8() { return &___m_CallBack_8; }
	inline void set_m_CallBack_8(AsyncCallback_t3962456242 * value)
	{
		___m_CallBack_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CallBack_8), value);
	}

	inline static int32_t get_offset_of_m_AsyncWriterDelegate_9() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ___m_AsyncWriterDelegate_9)); }
	inline AsyncWriteDelegate_t47908213 * get_m_AsyncWriterDelegate_9() const { return ___m_AsyncWriterDelegate_9; }
	inline AsyncWriteDelegate_t47908213 ** get_address_of_m_AsyncWriterDelegate_9() { return &___m_AsyncWriterDelegate_9; }
	inline void set_m_AsyncWriterDelegate_9(AsyncWriteDelegate_t47908213 * value)
	{
		___m_AsyncWriterDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWriterDelegate_9), value);
	}

	inline static int32_t get_offset_of_formatWriter_10() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ___formatWriter_10)); }
	inline RuntimeObject* get_formatWriter_10() const { return ___formatWriter_10; }
	inline RuntimeObject** get_address_of_formatWriter_10() { return &___formatWriter_10; }
	inline void set_formatWriter_10(RuntimeObject* value)
	{
		___formatWriter_10 = value;
		Il2CppCodeGenWriteBarrier((&___formatWriter_10), value);
	}

	inline static int32_t get_offset_of_wroteHeader_11() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ___wroteHeader_11)); }
	inline bool get_wroteHeader_11() const { return ___wroteHeader_11; }
	inline bool* get_address_of_wroteHeader_11() { return &___wroteHeader_11; }
	inline void set_wroteHeader_11(bool value)
	{
		___wroteHeader_11 = value;
	}

	inline static int32_t get_offset_of_wroteBytes_12() { return static_cast<int32_t>(offsetof(DeflateStream_t2796728099, ___wroteBytes_12)); }
	inline bool get_wroteBytes_12() const { return ___wroteBytes_12; }
	inline bool* get_address_of_wroteBytes_12() { return &___wroteBytes_12; }
	inline void set_wroteBytes_12(bool value)
	{
		___wroteBytes_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATESTREAM_T2796728099_H
#ifndef OBJECTDISPOSEDEXCEPTION_T21392786_H
#define OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t21392786  : public InvalidOperationException_t56020091
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef MATCH_T352475233_H
#define MATCH_T352475233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.Match
struct  Match_t352475233  : public RuntimeObject
{
public:
	// MatchState Mapbox.IO.Compression.Match::state
	int32_t ___state_0;
	// System.Int32 Mapbox.IO.Compression.Match::pos
	int32_t ___pos_1;
	// System.Int32 Mapbox.IO.Compression.Match::len
	int32_t ___len_2;
	// System.Byte Mapbox.IO.Compression.Match::symbol
	uint8_t ___symbol_3;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(Match_t352475233, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(Match_t352475233, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(Match_t352475233, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_symbol_3() { return static_cast<int32_t>(offsetof(Match_t352475233, ___symbol_3)); }
	inline uint8_t get_symbol_3() const { return ___symbol_3; }
	inline uint8_t* get_address_of_symbol_3() { return &___symbol_3; }
	inline void set_symbol_3(uint8_t value)
	{
		___symbol_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T352475233_H
#ifndef GZIPDECODER_T3447631347_H
#define GZIPDECODER_T3447631347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.GZipDecoder
struct  GZipDecoder_t3447631347  : public RuntimeObject
{
public:
	// Mapbox.IO.Compression.GZipDecoder/GzipHeaderState Mapbox.IO.Compression.GZipDecoder::gzipHeaderSubstate
	int32_t ___gzipHeaderSubstate_0;
	// Mapbox.IO.Compression.GZipDecoder/GzipHeaderState Mapbox.IO.Compression.GZipDecoder::gzipFooterSubstate
	int32_t ___gzipFooterSubstate_1;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::gzip_header_flag
	int32_t ___gzip_header_flag_2;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::gzip_header_xlen
	int32_t ___gzip_header_xlen_3;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::expectedCrc32
	uint32_t ___expectedCrc32_4;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::expectedOutputStreamSizeModulo
	uint32_t ___expectedOutputStreamSizeModulo_5;
	// System.Int32 Mapbox.IO.Compression.GZipDecoder::loopCounter
	int32_t ___loopCounter_6;
	// System.UInt32 Mapbox.IO.Compression.GZipDecoder::actualCrc32
	uint32_t ___actualCrc32_7;
	// System.Int64 Mapbox.IO.Compression.GZipDecoder::actualStreamSizeModulo
	int64_t ___actualStreamSizeModulo_8;

public:
	inline static int32_t get_offset_of_gzipHeaderSubstate_0() { return static_cast<int32_t>(offsetof(GZipDecoder_t3447631347, ___gzipHeaderSubstate_0)); }
	inline int32_t get_gzipHeaderSubstate_0() const { return ___gzipHeaderSubstate_0; }
	inline int32_t* get_address_of_gzipHeaderSubstate_0() { return &___gzipHeaderSubstate_0; }
	inline void set_gzipHeaderSubstate_0(int32_t value)
	{
		___gzipHeaderSubstate_0 = value;
	}

	inline static int32_t get_offset_of_gzipFooterSubstate_1() { return static_cast<int32_t>(offsetof(GZipDecoder_t3447631347, ___gzipFooterSubstate_1)); }
	inline int32_t get_gzipFooterSubstate_1() const { return ___gzipFooterSubstate_1; }
	inline int32_t* get_address_of_gzipFooterSubstate_1() { return &___gzipFooterSubstate_1; }
	inline void set_gzipFooterSubstate_1(int32_t value)
	{
		___gzipFooterSubstate_1 = value;
	}

	inline static int32_t get_offset_of_gzip_header_flag_2() { return static_cast<int32_t>(offsetof(GZipDecoder_t3447631347, ___gzip_header_flag_2)); }
	inline int32_t get_gzip_header_flag_2() const { return ___gzip_header_flag_2; }
	inline int32_t* get_address_of_gzip_header_flag_2() { return &___gzip_header_flag_2; }
	inline void set_gzip_header_flag_2(int32_t value)
	{
		___gzip_header_flag_2 = value;
	}

	inline static int32_t get_offset_of_gzip_header_xlen_3() { return static_cast<int32_t>(offsetof(GZipDecoder_t3447631347, ___gzip_header_xlen_3)); }
	inline int32_t get_gzip_header_xlen_3() const { return ___gzip_header_xlen_3; }
	inline int32_t* get_address_of_gzip_header_xlen_3() { return &___gzip_header_xlen_3; }
	inline void set_gzip_header_xlen_3(int32_t value)
	{
		___gzip_header_xlen_3 = value;
	}

	inline static int32_t get_offset_of_expectedCrc32_4() { return static_cast<int32_t>(offsetof(GZipDecoder_t3447631347, ___expectedCrc32_4)); }
	inline uint32_t get_expectedCrc32_4() const { return ___expectedCrc32_4; }
	inline uint32_t* get_address_of_expectedCrc32_4() { return &___expectedCrc32_4; }
	inline void set_expectedCrc32_4(uint32_t value)
	{
		___expectedCrc32_4 = value;
	}

	inline static int32_t get_offset_of_expectedOutputStreamSizeModulo_5() { return static_cast<int32_t>(offsetof(GZipDecoder_t3447631347, ___expectedOutputStreamSizeModulo_5)); }
	inline uint32_t get_expectedOutputStreamSizeModulo_5() const { return ___expectedOutputStreamSizeModulo_5; }
	inline uint32_t* get_address_of_expectedOutputStreamSizeModulo_5() { return &___expectedOutputStreamSizeModulo_5; }
	inline void set_expectedOutputStreamSizeModulo_5(uint32_t value)
	{
		___expectedOutputStreamSizeModulo_5 = value;
	}

	inline static int32_t get_offset_of_loopCounter_6() { return static_cast<int32_t>(offsetof(GZipDecoder_t3447631347, ___loopCounter_6)); }
	inline int32_t get_loopCounter_6() const { return ___loopCounter_6; }
	inline int32_t* get_address_of_loopCounter_6() { return &___loopCounter_6; }
	inline void set_loopCounter_6(int32_t value)
	{
		___loopCounter_6 = value;
	}

	inline static int32_t get_offset_of_actualCrc32_7() { return static_cast<int32_t>(offsetof(GZipDecoder_t3447631347, ___actualCrc32_7)); }
	inline uint32_t get_actualCrc32_7() const { return ___actualCrc32_7; }
	inline uint32_t* get_address_of_actualCrc32_7() { return &___actualCrc32_7; }
	inline void set_actualCrc32_7(uint32_t value)
	{
		___actualCrc32_7 = value;
	}

	inline static int32_t get_offset_of_actualStreamSizeModulo_8() { return static_cast<int32_t>(offsetof(GZipDecoder_t3447631347, ___actualStreamSizeModulo_8)); }
	inline int64_t get_actualStreamSizeModulo_8() const { return ___actualStreamSizeModulo_8; }
	inline int64_t* get_address_of_actualStreamSizeModulo_8() { return &___actualStreamSizeModulo_8; }
	inline void set_actualStreamSizeModulo_8(int64_t value)
	{
		___actualStreamSizeModulo_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GZIPDECODER_T3447631347_H
#ifndef INFLATER_T10910524_H
#define INFLATER_T10910524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.Inflater
struct  Inflater_t10910524  : public RuntimeObject
{
public:
	// Mapbox.IO.Compression.OutputWindow Mapbox.IO.Compression.Inflater::output
	OutputWindow_t1296654655 * ___output_5;
	// Mapbox.IO.Compression.InputBuffer Mapbox.IO.Compression.Inflater::input
	InputBuffer_t333709416 * ___input_6;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::literalLengthTree
	HuffmanTree_t857975559 * ___literalLengthTree_7;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::distanceTree
	HuffmanTree_t857975559 * ___distanceTree_8;
	// Mapbox.IO.Compression.InflaterState Mapbox.IO.Compression.Inflater::state
	int32_t ___state_9;
	// System.Boolean Mapbox.IO.Compression.Inflater::hasFormatReader
	bool ___hasFormatReader_10;
	// System.Int32 Mapbox.IO.Compression.Inflater::bfinal
	int32_t ___bfinal_11;
	// Mapbox.IO.Compression.BlockType Mapbox.IO.Compression.Inflater::blockType
	int32_t ___blockType_12;
	// System.Byte[] Mapbox.IO.Compression.Inflater::blockLengthBuffer
	ByteU5BU5D_t4116647657* ___blockLengthBuffer_13;
	// System.Int32 Mapbox.IO.Compression.Inflater::blockLength
	int32_t ___blockLength_14;
	// System.Int32 Mapbox.IO.Compression.Inflater::length
	int32_t ___length_15;
	// System.Int32 Mapbox.IO.Compression.Inflater::distanceCode
	int32_t ___distanceCode_16;
	// System.Int32 Mapbox.IO.Compression.Inflater::extraBits
	int32_t ___extraBits_17;
	// System.Int32 Mapbox.IO.Compression.Inflater::loopCounter
	int32_t ___loopCounter_18;
	// System.Int32 Mapbox.IO.Compression.Inflater::literalLengthCodeCount
	int32_t ___literalLengthCodeCount_19;
	// System.Int32 Mapbox.IO.Compression.Inflater::distanceCodeCount
	int32_t ___distanceCodeCount_20;
	// System.Int32 Mapbox.IO.Compression.Inflater::codeLengthCodeCount
	int32_t ___codeLengthCodeCount_21;
	// System.Int32 Mapbox.IO.Compression.Inflater::codeArraySize
	int32_t ___codeArraySize_22;
	// System.Int32 Mapbox.IO.Compression.Inflater::lengthCode
	int32_t ___lengthCode_23;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeList
	ByteU5BU5D_t4116647657* ___codeList_24;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeLengthTreeCodeLength
	ByteU5BU5D_t4116647657* ___codeLengthTreeCodeLength_25;
	// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.Inflater::codeLengthTree
	HuffmanTree_t857975559 * ___codeLengthTree_26;
	// Mapbox.IO.Compression.IFileFormatReader Mapbox.IO.Compression.Inflater::formatReader
	RuntimeObject* ___formatReader_27;

public:
	inline static int32_t get_offset_of_output_5() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___output_5)); }
	inline OutputWindow_t1296654655 * get_output_5() const { return ___output_5; }
	inline OutputWindow_t1296654655 ** get_address_of_output_5() { return &___output_5; }
	inline void set_output_5(OutputWindow_t1296654655 * value)
	{
		___output_5 = value;
		Il2CppCodeGenWriteBarrier((&___output_5), value);
	}

	inline static int32_t get_offset_of_input_6() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___input_6)); }
	inline InputBuffer_t333709416 * get_input_6() const { return ___input_6; }
	inline InputBuffer_t333709416 ** get_address_of_input_6() { return &___input_6; }
	inline void set_input_6(InputBuffer_t333709416 * value)
	{
		___input_6 = value;
		Il2CppCodeGenWriteBarrier((&___input_6), value);
	}

	inline static int32_t get_offset_of_literalLengthTree_7() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___literalLengthTree_7)); }
	inline HuffmanTree_t857975559 * get_literalLengthTree_7() const { return ___literalLengthTree_7; }
	inline HuffmanTree_t857975559 ** get_address_of_literalLengthTree_7() { return &___literalLengthTree_7; }
	inline void set_literalLengthTree_7(HuffmanTree_t857975559 * value)
	{
		___literalLengthTree_7 = value;
		Il2CppCodeGenWriteBarrier((&___literalLengthTree_7), value);
	}

	inline static int32_t get_offset_of_distanceTree_8() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___distanceTree_8)); }
	inline HuffmanTree_t857975559 * get_distanceTree_8() const { return ___distanceTree_8; }
	inline HuffmanTree_t857975559 ** get_address_of_distanceTree_8() { return &___distanceTree_8; }
	inline void set_distanceTree_8(HuffmanTree_t857975559 * value)
	{
		___distanceTree_8 = value;
		Il2CppCodeGenWriteBarrier((&___distanceTree_8), value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_hasFormatReader_10() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___hasFormatReader_10)); }
	inline bool get_hasFormatReader_10() const { return ___hasFormatReader_10; }
	inline bool* get_address_of_hasFormatReader_10() { return &___hasFormatReader_10; }
	inline void set_hasFormatReader_10(bool value)
	{
		___hasFormatReader_10 = value;
	}

	inline static int32_t get_offset_of_bfinal_11() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___bfinal_11)); }
	inline int32_t get_bfinal_11() const { return ___bfinal_11; }
	inline int32_t* get_address_of_bfinal_11() { return &___bfinal_11; }
	inline void set_bfinal_11(int32_t value)
	{
		___bfinal_11 = value;
	}

	inline static int32_t get_offset_of_blockType_12() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___blockType_12)); }
	inline int32_t get_blockType_12() const { return ___blockType_12; }
	inline int32_t* get_address_of_blockType_12() { return &___blockType_12; }
	inline void set_blockType_12(int32_t value)
	{
		___blockType_12 = value;
	}

	inline static int32_t get_offset_of_blockLengthBuffer_13() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___blockLengthBuffer_13)); }
	inline ByteU5BU5D_t4116647657* get_blockLengthBuffer_13() const { return ___blockLengthBuffer_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_blockLengthBuffer_13() { return &___blockLengthBuffer_13; }
	inline void set_blockLengthBuffer_13(ByteU5BU5D_t4116647657* value)
	{
		___blockLengthBuffer_13 = value;
		Il2CppCodeGenWriteBarrier((&___blockLengthBuffer_13), value);
	}

	inline static int32_t get_offset_of_blockLength_14() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___blockLength_14)); }
	inline int32_t get_blockLength_14() const { return ___blockLength_14; }
	inline int32_t* get_address_of_blockLength_14() { return &___blockLength_14; }
	inline void set_blockLength_14(int32_t value)
	{
		___blockLength_14 = value;
	}

	inline static int32_t get_offset_of_length_15() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___length_15)); }
	inline int32_t get_length_15() const { return ___length_15; }
	inline int32_t* get_address_of_length_15() { return &___length_15; }
	inline void set_length_15(int32_t value)
	{
		___length_15 = value;
	}

	inline static int32_t get_offset_of_distanceCode_16() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___distanceCode_16)); }
	inline int32_t get_distanceCode_16() const { return ___distanceCode_16; }
	inline int32_t* get_address_of_distanceCode_16() { return &___distanceCode_16; }
	inline void set_distanceCode_16(int32_t value)
	{
		___distanceCode_16 = value;
	}

	inline static int32_t get_offset_of_extraBits_17() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___extraBits_17)); }
	inline int32_t get_extraBits_17() const { return ___extraBits_17; }
	inline int32_t* get_address_of_extraBits_17() { return &___extraBits_17; }
	inline void set_extraBits_17(int32_t value)
	{
		___extraBits_17 = value;
	}

	inline static int32_t get_offset_of_loopCounter_18() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___loopCounter_18)); }
	inline int32_t get_loopCounter_18() const { return ___loopCounter_18; }
	inline int32_t* get_address_of_loopCounter_18() { return &___loopCounter_18; }
	inline void set_loopCounter_18(int32_t value)
	{
		___loopCounter_18 = value;
	}

	inline static int32_t get_offset_of_literalLengthCodeCount_19() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___literalLengthCodeCount_19)); }
	inline int32_t get_literalLengthCodeCount_19() const { return ___literalLengthCodeCount_19; }
	inline int32_t* get_address_of_literalLengthCodeCount_19() { return &___literalLengthCodeCount_19; }
	inline void set_literalLengthCodeCount_19(int32_t value)
	{
		___literalLengthCodeCount_19 = value;
	}

	inline static int32_t get_offset_of_distanceCodeCount_20() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___distanceCodeCount_20)); }
	inline int32_t get_distanceCodeCount_20() const { return ___distanceCodeCount_20; }
	inline int32_t* get_address_of_distanceCodeCount_20() { return &___distanceCodeCount_20; }
	inline void set_distanceCodeCount_20(int32_t value)
	{
		___distanceCodeCount_20 = value;
	}

	inline static int32_t get_offset_of_codeLengthCodeCount_21() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___codeLengthCodeCount_21)); }
	inline int32_t get_codeLengthCodeCount_21() const { return ___codeLengthCodeCount_21; }
	inline int32_t* get_address_of_codeLengthCodeCount_21() { return &___codeLengthCodeCount_21; }
	inline void set_codeLengthCodeCount_21(int32_t value)
	{
		___codeLengthCodeCount_21 = value;
	}

	inline static int32_t get_offset_of_codeArraySize_22() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___codeArraySize_22)); }
	inline int32_t get_codeArraySize_22() const { return ___codeArraySize_22; }
	inline int32_t* get_address_of_codeArraySize_22() { return &___codeArraySize_22; }
	inline void set_codeArraySize_22(int32_t value)
	{
		___codeArraySize_22 = value;
	}

	inline static int32_t get_offset_of_lengthCode_23() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___lengthCode_23)); }
	inline int32_t get_lengthCode_23() const { return ___lengthCode_23; }
	inline int32_t* get_address_of_lengthCode_23() { return &___lengthCode_23; }
	inline void set_lengthCode_23(int32_t value)
	{
		___lengthCode_23 = value;
	}

	inline static int32_t get_offset_of_codeList_24() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___codeList_24)); }
	inline ByteU5BU5D_t4116647657* get_codeList_24() const { return ___codeList_24; }
	inline ByteU5BU5D_t4116647657** get_address_of_codeList_24() { return &___codeList_24; }
	inline void set_codeList_24(ByteU5BU5D_t4116647657* value)
	{
		___codeList_24 = value;
		Il2CppCodeGenWriteBarrier((&___codeList_24), value);
	}

	inline static int32_t get_offset_of_codeLengthTreeCodeLength_25() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___codeLengthTreeCodeLength_25)); }
	inline ByteU5BU5D_t4116647657* get_codeLengthTreeCodeLength_25() const { return ___codeLengthTreeCodeLength_25; }
	inline ByteU5BU5D_t4116647657** get_address_of_codeLengthTreeCodeLength_25() { return &___codeLengthTreeCodeLength_25; }
	inline void set_codeLengthTreeCodeLength_25(ByteU5BU5D_t4116647657* value)
	{
		___codeLengthTreeCodeLength_25 = value;
		Il2CppCodeGenWriteBarrier((&___codeLengthTreeCodeLength_25), value);
	}

	inline static int32_t get_offset_of_codeLengthTree_26() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___codeLengthTree_26)); }
	inline HuffmanTree_t857975559 * get_codeLengthTree_26() const { return ___codeLengthTree_26; }
	inline HuffmanTree_t857975559 ** get_address_of_codeLengthTree_26() { return &___codeLengthTree_26; }
	inline void set_codeLengthTree_26(HuffmanTree_t857975559 * value)
	{
		___codeLengthTree_26 = value;
		Il2CppCodeGenWriteBarrier((&___codeLengthTree_26), value);
	}

	inline static int32_t get_offset_of_formatReader_27() { return static_cast<int32_t>(offsetof(Inflater_t10910524, ___formatReader_27)); }
	inline RuntimeObject* get_formatReader_27() const { return ___formatReader_27; }
	inline RuntimeObject** get_address_of_formatReader_27() { return &___formatReader_27; }
	inline void set_formatReader_27(RuntimeObject* value)
	{
		___formatReader_27 = value;
		Il2CppCodeGenWriteBarrier((&___formatReader_27), value);
	}
};

struct Inflater_t10910524_StaticFields
{
public:
	// System.Byte[] Mapbox.IO.Compression.Inflater::extraLengthBits
	ByteU5BU5D_t4116647657* ___extraLengthBits_0;
	// System.Int32[] Mapbox.IO.Compression.Inflater::lengthBase
	Int32U5BU5D_t385246372* ___lengthBase_1;
	// System.Int32[] Mapbox.IO.Compression.Inflater::distanceBasePosition
	Int32U5BU5D_t385246372* ___distanceBasePosition_2;
	// System.Byte[] Mapbox.IO.Compression.Inflater::codeOrder
	ByteU5BU5D_t4116647657* ___codeOrder_3;
	// System.Byte[] Mapbox.IO.Compression.Inflater::staticDistanceTreeTable
	ByteU5BU5D_t4116647657* ___staticDistanceTreeTable_4;

public:
	inline static int32_t get_offset_of_extraLengthBits_0() { return static_cast<int32_t>(offsetof(Inflater_t10910524_StaticFields, ___extraLengthBits_0)); }
	inline ByteU5BU5D_t4116647657* get_extraLengthBits_0() const { return ___extraLengthBits_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_extraLengthBits_0() { return &___extraLengthBits_0; }
	inline void set_extraLengthBits_0(ByteU5BU5D_t4116647657* value)
	{
		___extraLengthBits_0 = value;
		Il2CppCodeGenWriteBarrier((&___extraLengthBits_0), value);
	}

	inline static int32_t get_offset_of_lengthBase_1() { return static_cast<int32_t>(offsetof(Inflater_t10910524_StaticFields, ___lengthBase_1)); }
	inline Int32U5BU5D_t385246372* get_lengthBase_1() const { return ___lengthBase_1; }
	inline Int32U5BU5D_t385246372** get_address_of_lengthBase_1() { return &___lengthBase_1; }
	inline void set_lengthBase_1(Int32U5BU5D_t385246372* value)
	{
		___lengthBase_1 = value;
		Il2CppCodeGenWriteBarrier((&___lengthBase_1), value);
	}

	inline static int32_t get_offset_of_distanceBasePosition_2() { return static_cast<int32_t>(offsetof(Inflater_t10910524_StaticFields, ___distanceBasePosition_2)); }
	inline Int32U5BU5D_t385246372* get_distanceBasePosition_2() const { return ___distanceBasePosition_2; }
	inline Int32U5BU5D_t385246372** get_address_of_distanceBasePosition_2() { return &___distanceBasePosition_2; }
	inline void set_distanceBasePosition_2(Int32U5BU5D_t385246372* value)
	{
		___distanceBasePosition_2 = value;
		Il2CppCodeGenWriteBarrier((&___distanceBasePosition_2), value);
	}

	inline static int32_t get_offset_of_codeOrder_3() { return static_cast<int32_t>(offsetof(Inflater_t10910524_StaticFields, ___codeOrder_3)); }
	inline ByteU5BU5D_t4116647657* get_codeOrder_3() const { return ___codeOrder_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_codeOrder_3() { return &___codeOrder_3; }
	inline void set_codeOrder_3(ByteU5BU5D_t4116647657* value)
	{
		___codeOrder_3 = value;
		Il2CppCodeGenWriteBarrier((&___codeOrder_3), value);
	}

	inline static int32_t get_offset_of_staticDistanceTreeTable_4() { return static_cast<int32_t>(offsetof(Inflater_t10910524_StaticFields, ___staticDistanceTreeTable_4)); }
	inline ByteU5BU5D_t4116647657* get_staticDistanceTreeTable_4() const { return ___staticDistanceTreeTable_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_staticDistanceTreeTable_4() { return &___staticDistanceTreeTable_4; }
	inline void set_staticDistanceTreeTable_4(ByteU5BU5D_t4116647657* value)
	{
		___staticDistanceTreeTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___staticDistanceTreeTable_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFLATER_T10910524_H
#ifndef NULLABLE_1_T640209804_H
#define NULLABLE_1_T640209804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>
struct  Nullable_1_t640209804 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t640209804, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t640209804, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T640209804_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ASYNCWRITEDELEGATE_T47908213_H
#define ASYNCWRITEDELEGATE_T47908213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate
struct  AsyncWriteDelegate_t47908213  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCWRITEDELEGATE_T47908213_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t3326319531  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t3686840178  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
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


// System.Void System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m349471792_gshared (Nullable_1_t640209804 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void System.Diagnostics.Debug::Assert(System.Boolean)
extern "C"  void Debug_Assert_m3785750761 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_FreeBytes()
extern "C"  int32_t OutputBuffer_get_FreeBytes_m679034642 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_Count()
extern "C"  int32_t DeflateInput_get_Count_m4083463914 (DeflateInput_t3892891873 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BitsInBuffer()
extern "C"  int32_t OutputBuffer_get_BitsInBuffer_m926119116 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C"  int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBits(System.Int32,System.UInt32)
extern "C"  void OutputBuffer_WriteBits_m1241582760 (OutputBuffer_t1331609326 * __this, int32_t ___n0, uint32_t ___bits1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputBuffer::FlushBits()
extern "C"  void OutputBuffer_FlushBits_m960086120 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.CopyEncoder::WriteLenNLen(System.UInt16,Mapbox.IO.Compression.OutputBuffer)
extern "C"  void CopyEncoder_WriteLenNLen_m2521824987 (CopyEncoder_t1719707359 * __this, uint16_t ___len0, OutputBuffer_t1331609326 * ___output1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mapbox.IO.Compression.DeflateInput::get_Buffer()
extern "C"  ByteU5BU5D_t4116647657* DeflateInput_get_Buffer_m1426431299 (DeflateInput_t3892891873 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_StartIndex()
extern "C"  int32_t DeflateInput_get_StartIndex_m1892746742 (DeflateInput_t3892891873 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void OutputBuffer_WriteBytes_m2091034451 (OutputBuffer_t1331609326 * __this, ByteU5BU5D_t4116647657* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateInput::ConsumeBytes(System.Int32)
extern "C"  void DeflateInput_ConsumeBytes_m1068564016 (DeflateInput_t3892891873 * __this, int32_t ___n0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteUInt16(System.UInt16)
extern "C"  void OutputBuffer_WriteUInt16_m967747097 (OutputBuffer_t1331609326 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debug::Assert(System.Boolean,System.String)
extern "C"  void Debug_Assert_m2013276412 (RuntimeObject * __this /* static, unused */, bool p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::.ctor()
extern "C"  void FastEncoder__ctor_m3370242298 (FastEncoder_t887805019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.CopyEncoder::.ctor()
extern "C"  void CopyEncoder__ctor_m3616196794 (CopyEncoder_t1719707359 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateInput::.ctor()
extern "C"  void DeflateInput__ctor_m1146015750 (DeflateInput_t3892891873 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputBuffer::.ctor()
extern "C"  void OutputBuffer__ctor_m1098497119 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.FastEncoder::get_BytesInHistory()
extern "C"  int32_t FastEncoder_get_BytesInHistory_m1388724732 (FastEncoder_t887805019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateInput::set_Buffer(System.Byte[])
extern "C"  void DeflateInput_set_Buffer_m1391783707 (DeflateInput_t3892891873 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateInput::set_Count(System.Int32)
extern "C"  void DeflateInput_set_Count_m1828264908 (DeflateInput_t3892891873 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateInput::set_StartIndex(System.Int32)
extern "C"  void DeflateInput_set_StartIndex_m2705214531 (DeflateInput_t3892891873 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::NeedsInput()
extern "C"  bool DeflaterManaged_NeedsInput_m4287467524 (DeflaterManaged_t1452220717 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputBuffer::UpdateBuffer(System.Byte[])
extern "C"  void OutputBuffer_UpdateBuffer_m543847246 (OutputBuffer_t1331609326 * __this, ByteU5BU5D_t4116647657* ___output0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mapbox.IO.Compression.DeflateInput/InputState Mapbox.IO.Compression.DeflateInput::DumpState()
extern "C"  InputState_t2211247823  DeflateInput_DumpState_m2539109590 (DeflateInput_t3892891873 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mapbox.IO.Compression.OutputBuffer/BufferState Mapbox.IO.Compression.OutputBuffer::DumpState()
extern "C"  BufferState_t2134702710  OutputBuffer_DumpState_m1895132228 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockHeader(Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetBlockHeader_m3141324007 (FastEncoder_t887805019 * __this, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedData(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetCompressedData_m4034807821 (FastEncoder_t887805019 * __this, DeflateInput_t3892891873 * ___input0, OutputBuffer_t1331609326 * ___output1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double Mapbox.IO.Compression.FastEncoder::get_LastCompressionRatio()
extern "C"  double FastEncoder_get_LastCompressionRatio_m2098221370 (FastEncoder_t887805019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::UseCompressed(System.Double)
extern "C"  bool DeflaterManaged_UseCompressed_m3795656069 (DeflaterManaged_t1452220717 * __this, double ___ratio0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateInput::RestoreState(Mapbox.IO.Compression.DeflateInput/InputState)
extern "C"  void DeflateInput_RestoreState_m2187935213 (DeflateInput_t3892891873 * __this, InputState_t2211247823  ___state0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputBuffer::RestoreState(Mapbox.IO.Compression.OutputBuffer/BufferState)
extern "C"  void OutputBuffer_RestoreState_m1323056036 (OutputBuffer_t1331609326 * __this, BufferState_t2134702710  ___state0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.CopyEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Boolean)
extern "C"  void CopyEncoder_GetBlock_m2425766590 (CopyEncoder_t1719707359 * __this, DeflateInput_t3892891873 * ___input0, OutputBuffer_t1331609326 * ___output1, bool ___isFinal2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflaterManaged::FlushInputWindows()
extern "C"  void DeflaterManaged_FlushInputWindows_m2906194308 (DeflaterManaged_t1452220717 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoder::get_UnprocessedInput()
extern "C"  DeflateInput_t3892891873 * FastEncoder_get_UnprocessedInput_m2042899902 (FastEncoder_t887805019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockFooter(Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetBlockFooter_m31023344 (FastEncoder_t887805019 * __this, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::FlushInput()
extern "C"  void FastEncoder_FlushInput_m3321062779 (FastEncoder_t887805019 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
extern "C"  void FastEncoder_GetBlock_m2615023471 (FastEncoder_t887805019 * __this, DeflateInput_t3892891873 * ___input0, OutputBuffer_t1331609326 * ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BytesWritten()
extern "C"  int32_t OutputBuffer_get_BytesWritten_m2114384365 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflaterManaged::WriteFinal()
extern "C"  void DeflaterManaged_WriteFinal_m3524059434 (DeflaterManaged_t1452220717 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::.ctor()
extern "C"  void Stream__ctor_m3881936881 (Stream_t1273022909 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Mapbox.IO.Compression.SR::GetString(System.String)
extern "C"  String_t* SR_GetString_m916456937 (RuntimeObject * __this /* static, unused */, String_t* ___p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.Inflater::.ctor()
extern "C"  void Inflater__ctor_m1495841814 (Inflater_t10910524 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncCallback__ctor_m530647953 (AsyncCallback_t3962456242 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mapbox.IO.Compression.IDeflater Mapbox.IO.Compression.DeflateStream::CreateDeflater(System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>)
extern "C"  RuntimeObject* DeflateStream_CreateDeflater_m3178245127 (RuntimeObject * __this /* static, unused */, Nullable_1_t640209804  ___compressionLevel0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncWriteDelegate__ctor_m3015085141 (AsyncWriteDelegate_t47908213 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>::.ctor(!0)
#define Nullable_1__ctor_m349471792(__this, p0, method) ((  void (*) (Nullable_1_t640209804 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m349471792_gshared)(__this, p0, method)
// Mapbox.IO.Compression.DeflateStream/WorkerType Mapbox.IO.Compression.DeflateStream::GetDeflaterType()
extern "C"  uint8_t DeflateStream_GetDeflaterType_m4092552442 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflaterManaged::.ctor()
extern "C"  void DeflaterManaged__ctor_m2617121756 (DeflaterManaged_t1452220717 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String)
extern "C"  void SystemException__ctor_m3298527747 (SystemException_t176217640 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.Inflater::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
extern "C"  void Inflater_SetFileFormatReader_m1893636276 (Inflater_t10910524 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C"  void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureNotDisposed()
extern "C"  void DeflateStream_EnsureNotDisposed_m432649309 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureDecompressionMode()
extern "C"  void DeflateStream_EnsureDecompressionMode_m1738476851 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::ValidateParameters(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_ValidateParameters_m3403660080 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Inflater_Inflate_m3538837957 (Inflater_t10910524 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.Inflater::Finished()
extern "C"  bool Inflater_Finished_m3651521745 (Inflater_t10910524 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.Inflater::get_AvailableOutput()
extern "C"  int32_t Inflater_get_AvailableOutput_m3686135412 (Inflater_t10910524 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.Inflater::NeedsInput()
extern "C"  bool Inflater_NeedsInput_m1480127526 (Inflater_t10910524 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void Inflater_SetInput_m2072822639 (Inflater_t10910524 * __this, ByteU5BU5D_t4116647657* ___inputBytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
extern "C"  void ObjectDisposedException__ctor_m1034312941 (ObjectDisposedException_t21392786 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
extern "C"  int32_t Interlocked_Increment_m3548166048 (RuntimeObject * __this /* static, unused */, int32_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::.ctor(System.Object,System.Object,System.AsyncCallback,System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStreamAsyncResult__ctor_m3717146400 (DeflateStreamAsyncResult_t1893920535 * __this, RuntimeObject * ___asyncObject0, RuntimeObject * ___asyncState1, AsyncCallback_t3962456242 * ___asyncCallback2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___offset4, int32_t ___count5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Boolean,System.Object)
extern "C"  void DeflateStreamAsyncResult_InvokeCallback_m2215462768 (DeflateStreamAsyncResult_t1893920535 * __this, bool ___completedSynchronously0, RuntimeObject * ___result1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::get_IsCompleted()
extern "C"  bool DeflateStreamAsyncResult_get_IsCompleted_m3980363705 (DeflateStreamAsyncResult_t1893920535 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
extern "C"  int32_t Interlocked_Decrement_m899158053 (RuntimeObject * __this /* static, unused */, int32_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Object)
extern "C"  void DeflateStreamAsyncResult_InvokeCallback_m2685276557 (DeflateStreamAsyncResult_t1893920535 * __this, RuntimeObject * ___result0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::CheckEndXxxxLegalStateAndParams(System.IAsyncResult)
extern "C"  void DeflateStream_CheckEndXxxxLegalStateAndParams_m1101183822 (DeflateStream_t2796728099 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::AwaitAsyncResultCompletion(Mapbox.IO.Compression.DeflateStreamAsyncResult)
extern "C"  void DeflateStream_AwaitAsyncResultCompletion_m2751674591 (DeflateStream_t2796728099 * __this, DeflateStreamAsyncResult_t1893920535 * ___asyncResult0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::get_Result()
extern "C"  RuntimeObject * DeflateStreamAsyncResult_get_Result_m3399328877 (DeflateStreamAsyncResult_t1893920535 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureCompressionMode()
extern "C"  void DeflateStream_EnsureCompressionMode_m2807519719 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::InternalWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateStream_InternalWrite_m3851430298 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::DoMaintenance(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_DoMaintenance_m273657713 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::WriteDeflaterOutput(System.Boolean)
extern "C"  void DeflateStream_WriteDeflaterOutput_m411712746 (DeflateStream_t2796728099 * __this, bool ___isAsync0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::DoWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateStream_DoWrite_m465878848 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::PurgeBuffers(System.Boolean)
extern "C"  void DeflateStream_PurgeBuffers_m855131095 (DeflateStream_t2796728099 * __this, bool ___disposing0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C"  void Stream_Dispose_m874059170 (Stream_t1273022909 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* AsyncWriteDelegate_BeginInvoke_m1977843846 (AsyncWriteDelegate_t47908213 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncWriteDelegate_EndInvoke_m858931942 (AsyncWriteDelegate_t47908213 * __this, RuntimeObject* ___result0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mapbox.IO.Compression.DeflateStreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1743403487 * DeflateStreamAsyncResult_get_AsyncWaitHandle_m3302963922 (DeflateStreamAsyncResult_t1893920535 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Close()
extern "C"  void DeflateStreamAsyncResult_Close_m100442919 (DeflateStreamAsyncResult_t1893920535 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void AsyncWriteDelegate_Invoke_m4222946694 (AsyncWriteDelegate_t47908213 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
extern "C"  void ManualResetEvent__ctor_m4010886457 (ManualResetEvent_t451242010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
extern "C"  RuntimeObject * Interlocked_CompareExchange_m1590826108 (RuntimeObject * __this /* static, unused */, RuntimeObject ** p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C"  bool EventWaitHandle_Set_m2445193251 (EventWaitHandle_t777845177 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Boolean,System.Object)
extern "C"  void DeflateStreamAsyncResult_Complete_m1339308755 (DeflateStreamAsyncResult_t1893920535 * __this, bool ___completedSynchronously0, RuntimeObject * ___result1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Object)
extern "C"  void DeflateStreamAsyncResult_Complete_m815863199 (DeflateStreamAsyncResult_t1893920535 * __this, RuntimeObject * ___result0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
extern "C"  void AsyncCallback_Invoke_m3156993048 (AsyncCallback_t3962456242 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::.ctor()
extern "C"  void FastEncoderWindow__ctor_m1540513573 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.Match::.ctor()
extern "C"  void Match__ctor_m279832417 (Match_t352475233 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_BytesAvailable()
extern "C"  int32_t FastEncoderWindow_get_BytesAvailable_m1185252922 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoderWindow::get_UnprocessedInput()
extern "C"  DeflateInput_t3892891873 * FastEncoderWindow_get_UnprocessedInput_m1674119125 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::FlushWindow()
extern "C"  void FastEncoderWindow_FlushWindow_m782448992 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.FastEncoder::InputAvailable(Mapbox.IO.Compression.DeflateInput)
extern "C"  bool FastEncoder_InputAvailable_m3364481937 (FastEncoder_t887805019 * __this, DeflateInput_t3892891873 * ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::WriteDeflatePreamble(Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteDeflatePreamble_m2514809501 (RuntimeObject * __this /* static, unused */, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
extern "C"  void FastEncoder_GetCompressedOutput_m1574369706 (FastEncoder_t887805019 * __this, DeflateInput_t3892891873 * ___input0, OutputBuffer_t1331609326 * ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::WriteEndOfBlock(Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteEndOfBlock_m1363013709 (FastEncoder_t887805019 * __this, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_FreeWindowSpace()
extern "C"  int32_t FastEncoderWindow_get_FreeWindowSpace_m3065433127 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::CopyBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void FastEncoderWindow_CopyBytes_m3554926989 (FastEncoderWindow_t57591660 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetCompressedOutput_m3563384511 (FastEncoder_t887805019 * __this, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.FastEncoder::SafeToWriteTo(Mapbox.IO.Compression.OutputBuffer)
extern "C"  bool FastEncoder_SafeToWriteTo_m1936575802 (FastEncoder_t887805019 * __this, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.FastEncoderWindow::GetNextSymbolOrMatch(Mapbox.IO.Compression.Match)
extern "C"  bool FastEncoderWindow_GetNextSymbolOrMatch_m2835047593 (FastEncoderWindow_t57591660 * __this, Match_t352475233 * ___match0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// MatchState Mapbox.IO.Compression.Match::get_State()
extern "C"  int32_t Match_get_State_m3115604967 (Match_t352475233 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte Mapbox.IO.Compression.Match::get_Symbol()
extern "C"  uint8_t Match_get_Symbol_m266856729 (Match_t352475233 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::WriteChar(System.Byte,Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteChar_m2865419403 (RuntimeObject * __this /* static, unused */, uint8_t ___b0, OutputBuffer_t1331609326 * ___output1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.Match::get_Length()
extern "C"  int32_t Match_get_Length_m574477859 (Match_t352475233 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.Match::get_Position()
extern "C"  int32_t Match_get_Position_m750861285 (Match_t352475233 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoder::WriteMatch(System.Int32,System.Int32,Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteMatch_m2384169271 (RuntimeObject * __this /* static, unused */, int32_t ___matchLen0, int32_t ___matchPos1, OutputBuffer_t1331609326 * ___output2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.FastEncoderStatics::GetSlot(System.Int32)
extern "C"  int32_t FastEncoderStatics_GetSlot_m3628578944 (RuntimeObject * __this /* static, unused */, int32_t ___pos0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::ResetWindow()
extern "C"  void FastEncoderWindow_ResetWindow_m3039115004 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::VerifyHashes()
extern "C"  void FastEncoderWindow_VerifyHashes_m2706053389 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Clear_m2231608178 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::HashValue(System.UInt32,System.Byte)
extern "C"  uint32_t FastEncoderWindow_HashValue_m371185832 (FastEncoderWindow_t57591660 * __this, uint32_t ___hash0, uint8_t ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::InsertString(System.UInt32&)
extern "C"  uint32_t FastEncoderWindow_InsertString_m3040954916 (FastEncoderWindow_t57591660 * __this, uint32_t* ___hash0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::FindMatch(System.Int32,System.Int32&,System.Int32,System.Int32)
extern "C"  int32_t FastEncoderWindow_FindMatch_m1610996658 (FastEncoderWindow_t57591660 * __this, int32_t ___search0, int32_t* ___matchPos1, int32_t ___searchDepth2, int32_t ___niceLength3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.Match::set_State(MatchState)
extern "C"  void Match_set_State_m427330782 (Match_t352475233 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.Match::set_Symbol(System.Byte)
extern "C"  void Match_set_Symbol_m2642040290 (Match_t352475233 * __this, uint8_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.Match::set_Position(System.Int32)
extern "C"  void Match_set_Position_m2298100821 (Match_t352475233 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.Match::set_Length(System.Int32)
extern "C"  void Match_set_Length_m4038612315 (Match_t352475233 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::InsertStrings(System.UInt32&,System.Int32)
extern "C"  void FastEncoderWindow_InsertStrings_m1285311058 (FastEncoderWindow_t57591660 * __this, uint32_t* ___hash0, int32_t ___matchLen1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.FastEncoderWindow::MoveWindows()
extern "C"  void FastEncoderWindow_MoveWindows_m194098449 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::RecalculateHash(System.Int32)
extern "C"  uint32_t FastEncoderWindow_RecalculateHash_m1858464321 (FastEncoderWindow_t57591660 * __this, int32_t ___position0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.GZipDecoder::Reset()
extern "C"  void GZipDecoder_Reset_m2007478903 (GZipDecoder_t3447631347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.InputBuffer::GetBits(System.Int32)
extern "C"  int32_t InputBuffer_GetBits_m521756373 (InputBuffer_t333709416 * __this, int32_t ___count0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor(System.String)
extern "C"  void InvalidDataException__ctor_m1905262010 (InvalidDataException_t4045251031 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.InputBuffer::SkipToByteBoundary()
extern "C"  void InputBuffer_SkipToByteBoundary_m3485783867 (InputBuffer_t333709416 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mapbox.IO.Compression.Crc32Helper::UpdateCrc32(System.UInt32,System.Byte[],System.Int32,System.Int32)
extern "C"  uint32_t Crc32Helper_UpdateCrc32_m3273398049 (RuntimeObject * __this /* static, unused */, uint32_t ___crc320, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor(System.Int32)
extern "C"  void GZipFormatter__ctor_m2553017424 (GZipFormatter_t4203637370 * __this, int32_t ___compressionLevel0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.GZipFormatter::WriteUInt32(System.Byte[],System.UInt32,System.Int32)
extern "C"  void GZipFormatter_WriteUInt32_m1771264697 (GZipFormatter_t4203637370 * __this, ByteU5BU5D_t4116647657* ___b0, uint32_t ___value1, int32_t ___startIndex2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
extern "C"  void GZipStream__ctor_m2813672799 (GZipStream_t1509501570 * __this, Stream_t1273022909 * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
extern "C"  void DeflateStream__ctor_m3247756683 (DeflateStream_t2796728099 * __this, Stream_t1273022909 * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.GZipStream::SetDeflateStreamFileFormatter(Mapbox.IO.Compression.CompressionMode)
extern "C"  void GZipStream_SetDeflateStreamFileFormatter_m3709514482 (GZipStream_t1509501570 * __this, int32_t ___mode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
extern "C"  void GZipStream__ctor_m329980630 (GZipStream_t1509501570 * __this, Stream_t1273022909 * ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
extern "C"  void DeflateStream__ctor_m819287622 (DeflateStream_t2796728099 * __this, Stream_t1273022909 * ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor()
extern "C"  void GZipFormatter__ctor_m805197618 (GZipFormatter_t4203637370 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatWriter(Mapbox.IO.Compression.IFileFormatWriter)
extern "C"  void DeflateStream_SetFileFormatWriter_m3729627798 (DeflateStream_t2796728099 * __this, RuntimeObject* ___writer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.GZipDecoder::.ctor()
extern "C"  void GZipDecoder__ctor_m3364867135 (GZipDecoder_t3447631347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
extern "C"  void DeflateStream_SetFileFormatReader_m891083011 (DeflateStream_t2796728099 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticLiteralTreeLength()
extern "C"  ByteU5BU5D_t4116647657* HuffmanTree_GetStaticLiteralTreeLength_m3370042063 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.HuffmanTree::.ctor(System.Byte[])
extern "C"  void HuffmanTree__ctor_m1239190810 (HuffmanTree_t857975559 * __this, ByteU5BU5D_t4116647657* ___codeLengths0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticDistanceTreeLength()
extern "C"  ByteU5BU5D_t4116647657* HuffmanTree_GetStaticDistanceTreeLength_m1284918502 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.HuffmanTree::CreateTable()
extern "C"  void HuffmanTree_CreateTable_m2141668710 (HuffmanTree_t857975559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mapbox.IO.Compression.FastEncoderStatics::BitReverse(System.UInt32,System.Int32)
extern "C"  uint32_t FastEncoderStatics_BitReverse_m4129531689 (RuntimeObject * __this /* static, unused */, uint32_t ___code0, int32_t ___length1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Mapbox.IO.Compression.HuffmanTree::CalculateHuffmanCode()
extern "C"  UInt32U5BU5D_t2770800703* HuffmanTree_CalculateHuffmanCode_m3025073388 (HuffmanTree_t857975559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mapbox.IO.Compression.InputBuffer::TryLoad16Bits()
extern "C"  uint32_t InputBuffer_TryLoad16Bits_m2347747057 (InputBuffer_t333709416 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBits()
extern "C"  int32_t InputBuffer_get_AvailableBits_m3131842582 (InputBuffer_t333709416 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.InputBuffer::SkipBits(System.Int32)
extern "C"  void InputBuffer_SkipBits_m2751677346 (InputBuffer_t333709416 * __this, int32_t ___n0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputWindow::.ctor()
extern "C"  void OutputWindow__ctor_m4028030521 (OutputWindow_t1296654655 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.InputBuffer::.ctor()
extern "C"  void InputBuffer__ctor_m2565725442 (InputBuffer_t333709416 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.Inflater::Reset()
extern "C"  void Inflater_Reset_m1271875191 (Inflater_t10910524 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.InputBuffer::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void InputBuffer_SetInput_m2532930549 (InputBuffer_t333709416 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_AvailableBytes()
extern "C"  int32_t OutputWindow_get_AvailableBytes_m3359822819 (OutputWindow_t1296654655 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.InputBuffer::NeedsInput()
extern "C"  bool InputBuffer_NeedsInput_m1866310186 (InputBuffer_t333709416 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyTo(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t OutputWindow_CopyTo_m2475356236 (OutputWindow_t1296654655 * __this, ByteU5BU5D_t4116647657* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.Inflater::Decode()
extern "C"  bool Inflater_Decode_m267901025 (Inflater_t10910524 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.InputBuffer::EnsureBitsAvailable(System.Int32)
extern "C"  bool InputBuffer_EnsureBitsAvailable_m1253303813 (InputBuffer_t333709416 * __this, int32_t ___count0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticLiteralLengthTree()
extern "C"  HuffmanTree_t857975559 * HuffmanTree_get_StaticLiteralLengthTree_m3124791014 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticDistanceTree()
extern "C"  HuffmanTree_t857975559 * HuffmanTree_get_StaticDistanceTree_m3178788661 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeDynamicBlockHeader()
extern "C"  bool Inflater_DecodeDynamicBlockHeader_m3821747797 (Inflater_t10910524 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeBlock(System.Boolean&)
extern "C"  bool Inflater_DecodeBlock_m3298394737 (Inflater_t10910524 * __this, bool* ___end_of_block_code_seen0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeUncompressedBlock(System.Boolean&)
extern "C"  bool Inflater_DecodeUncompressedBlock_m1436780137 (Inflater_t10910524 * __this, bool* ___end_of_block0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyFrom(Mapbox.IO.Compression.InputBuffer,System.Int32)
extern "C"  int32_t OutputWindow_CopyFrom_m1927387289 (OutputWindow_t1296654655 * __this, InputBuffer_t333709416 * ___input0, int32_t ___length1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_FreeBytes()
extern "C"  int32_t OutputWindow_get_FreeBytes_m172522004 (OutputWindow_t1296654655 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.HuffmanTree::GetNextSymbol(Mapbox.IO.Compression.InputBuffer)
extern "C"  int32_t HuffmanTree_GetNextSymbol_m2267284928 (HuffmanTree_t857975559 * __this, InputBuffer_t333709416 * ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputWindow::Write(System.Byte)
extern "C"  void OutputWindow_Write_m4205025380 (OutputWindow_t1296654655 * __this, uint8_t ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputWindow::WriteLengthDistance(System.Int32,System.Int32)
extern "C"  void OutputWindow_WriteLengthDistance_m98394582 (OutputWindow_t1296654655 * __this, int32_t ___length0, int32_t ___distance1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor()
extern "C"  void InvalidDataException__ctor_m3515379960 (InvalidDataException_t4045251031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C"  void Array_Copy_m1988217701 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mapbox.IO.Compression.InputBuffer::GetBitMask(System.Int32)
extern "C"  uint32_t InputBuffer_GetBitMask_m3399342754 (InputBuffer_t333709416 * __this, int32_t ___count0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SystemException__ctor_m1515048899 (SystemException_t176217640 * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytesUnaligned(System.Byte[],System.Int32,System.Int32)
extern "C"  void OutputBuffer_WriteBytesUnaligned_m3829570848 (OutputBuffer_t1331609326 * __this, ByteU5BU5D_t4116647657* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteByteUnaligned(System.Byte)
extern "C"  void OutputBuffer_WriteByteUnaligned_m646836464 (OutputBuffer_t1331609326 * __this, uint8_t ___b0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBytes()
extern "C"  int32_t InputBuffer_get_AvailableBytes_m2405312377 (InputBuffer_t333709416 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mapbox.IO.Compression.InputBuffer::CopyTo(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t InputBuffer_CopyTo_m1507984879 (InputBuffer_t333709416 * __this, ByteU5BU5D_t4116647657* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void Mapbox.IO.Compression.CopyEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Boolean)
extern "C"  void CopyEncoder_GetBlock_m2425766590 (CopyEncoder_t1719707359 * __this, DeflateInput_t3892891873 * ___input0, OutputBuffer_t1331609326 * ___output1, bool ___isFinal2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	{
		OutputBuffer_t1331609326 * L_0 = ___output1;
		Debug_Assert_m3785750761(NULL /*static, unused*/, (bool)((!(((RuntimeObject*)(OutputBuffer_t1331609326 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_1 = ___output1;
		NullCheck(L_1);
		int32_t L_2 = OutputBuffer_get_FreeBytes_m679034642(L_1, /*hidden argument*/NULL);
		Debug_Assert_m3785750761(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		V_0 = 0;
		DeflateInput_t3892891873 * L_3 = ___input0;
		V_1 = (bool)((!(((RuntimeObject*)(DeflateInput_t3892891873 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		DeflateInput_t3892891873 * L_5 = ___input0;
		NullCheck(L_5);
		int32_t L_6 = DeflateInput_get_Count_m4083463914(L_5, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_7 = ___output1;
		NullCheck(L_7);
		int32_t L_8 = OutputBuffer_get_FreeBytes_m679034642(L_7, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_9 = ___output1;
		NullCheck(L_9);
		int32_t L_10 = OutputBuffer_get_BitsInBuffer_m926119116(L_9, /*hidden argument*/NULL);
		int32_t L_11 = Math_Min_m3468062251(NULL /*static, unused*/, L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)5)), (int32_t)L_10)), /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		V_2 = (bool)((((int32_t)L_12) > ((int32_t)((int32_t)65531)))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		V_0 = ((int32_t)65531);
	}

IL_0057:
	{
	}

IL_0058:
	{
		bool L_14 = ___isFinal2;
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		OutputBuffer_t1331609326 * L_16 = ___output1;
		NullCheck(L_16);
		OutputBuffer_WriteBits_m1241582760(L_16, 3, 1, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_006a:
	{
		OutputBuffer_t1331609326 * L_17 = ___output1;
		NullCheck(L_17);
		OutputBuffer_WriteBits_m1241582760(L_17, 3, 0, /*hidden argument*/NULL);
	}

IL_0075:
	{
		OutputBuffer_t1331609326 * L_18 = ___output1;
		NullCheck(L_18);
		OutputBuffer_FlushBits_m960086120(L_18, /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		OutputBuffer_t1331609326 * L_20 = ___output1;
		CopyEncoder_WriteLenNLen_m2521824987(__this, (uint16_t)(((int32_t)((uint16_t)L_19))), L_20, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_21 = ___input0;
		if (!L_21)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_22 = V_0;
		G_B10_0 = ((((int32_t)L_22) > ((int32_t)0))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B10_0 = 0;
	}

IL_0090:
	{
		V_4 = (bool)G_B10_0;
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00b4;
		}
	}
	{
		OutputBuffer_t1331609326 * L_24 = ___output1;
		DeflateInput_t3892891873 * L_25 = ___input0;
		NullCheck(L_25);
		ByteU5BU5D_t4116647657* L_26 = DeflateInput_get_Buffer_m1426431299(L_25, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_27 = ___input0;
		NullCheck(L_27);
		int32_t L_28 = DeflateInput_get_StartIndex_m1892746742(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		NullCheck(L_24);
		OutputBuffer_WriteBytes_m2091034451(L_24, L_26, L_28, L_29, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_30 = ___input0;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		DeflateInput_ConsumeBytes_m1068564016(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.CopyEncoder::WriteLenNLen(System.UInt16,Mapbox.IO.Compression.OutputBuffer)
extern "C"  void CopyEncoder_WriteLenNLen_m2521824987 (CopyEncoder_t1719707359 * __this, uint16_t ___len0, OutputBuffer_t1331609326 * ___output1, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		OutputBuffer_t1331609326 * L_0 = ___output1;
		uint16_t L_1 = ___len0;
		NullCheck(L_0);
		OutputBuffer_WriteUInt16_m967747097(L_0, L_1, /*hidden argument*/NULL);
		uint16_t L_2 = ___len0;
		V_0 = (uint16_t)(((int32_t)((uint16_t)((~L_2)))));
		OutputBuffer_t1331609326 * L_3 = ___output1;
		uint16_t L_4 = V_0;
		NullCheck(L_3);
		OutputBuffer_WriteUInt16_m967747097(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.CopyEncoder::.ctor()
extern "C"  void CopyEncoder__ctor_m3616196794 (CopyEncoder_t1719707359 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.UInt32 Mapbox.IO.Compression.Crc32Helper::UpdateCrc32(System.UInt32,System.Byte[],System.Int32,System.Int32)
extern "C"  uint32_t Crc32Helper_UpdateCrc32_m3273398049 (RuntimeObject * __this /* static, unused */, uint32_t ___crc320, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___offset2, int32_t ___length3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crc32Helper_UpdateCrc32_m3273398049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___offset2;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___length3;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___offset2;
		ByteU5BU5D_t4116647657* L_4 = ___buffer1;
		NullCheck(L_4);
		int32_t L_5 = ___length3;
		G_B5_0 = ((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), (int32_t)L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B5_0 = 0;
	}

IL_001a:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)G_B5_0, _stringLiteral2532743677, /*hidden argument*/NULL);
		uint32_t L_6 = ___crc320;
		___crc320 = ((int32_t)((int32_t)L_6^(int32_t)(-1)));
		goto IL_004a;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Crc32Helper_t2911080199_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_7 = ((Crc32Helper_t2911080199_StaticFields*)il2cpp_codegen_static_fields_for(Crc32Helper_t2911080199_il2cpp_TypeInfo_var))->get_crcTable_0();
		uint32_t L_8 = ___crc320;
		ByteU5BU5D_t4116647657* L_9 = ___buffer1;
		int32_t L_10 = ___offset2;
		int32_t L_11 = L_10;
		___offset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		int32_t L_14 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8^(int32_t)L_13))&(int32_t)((int32_t)255)));
		uint32_t L_15 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		uint32_t L_16 = ___crc320;
		___crc320 = ((int32_t)((int32_t)L_15^(int32_t)((int32_t)((uint32_t)L_16>>8))));
	}

IL_004a:
	{
		int32_t L_17 = ___length3;
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		___length3 = L_18;
		V_0 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_20 = ___crc320;
		___crc320 = ((int32_t)((int32_t)L_20^(int32_t)(-1)));
		uint32_t L_21 = ___crc320;
		V_1 = L_21;
		goto IL_0063;
	}

IL_0063:
	{
		uint32_t L_22 = V_1;
		return L_22;
	}
}
// System.Void Mapbox.IO.Compression.Crc32Helper::.cctor()
extern "C"  void Crc32Helper__cctor_m2625072928 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Crc32Helper__cctor_m2625072928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t2770800703* L_0 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____373B494F210C656134C5728D551D4C97B013EB33_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((Crc32Helper_t2911080199_StaticFields*)il2cpp_codegen_static_fields_for(Crc32Helper_t2911080199_il2cpp_TypeInfo_var))->set_crcTable_0(L_0);
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
// System.Byte[] Mapbox.IO.Compression.DeflateInput::get_Buffer()
extern "C"  ByteU5BU5D_t4116647657* DeflateInput_get_Buffer_m1426431299 (DeflateInput_t3892891873 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_buffer_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_t4116647657* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::set_Buffer(System.Byte[])
extern "C"  void DeflateInput_set_Buffer_m1391783707 (DeflateInput_t3892891873 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_buffer_0(L_0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_Count()
extern "C"  int32_t DeflateInput_get_Count_m4083463914 (DeflateInput_t3892891873 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_count_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::set_Count(System.Int32)
extern "C"  void DeflateInput_set_Count_m1828264908 (DeflateInput_t3892891873 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_count_1(L_0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateInput::get_StartIndex()
extern "C"  int32_t DeflateInput_get_StartIndex_m1892746742 (DeflateInput_t3892891873 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_startIndex_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::set_StartIndex(System.Int32)
extern "C"  void DeflateInput_set_StartIndex_m2705214531 (DeflateInput_t3892891873 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_startIndex_2(L_0);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::ConsumeBytes(System.Int32)
extern "C"  void DeflateInput_ConsumeBytes_m1068564016 (DeflateInput_t3892891873 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateInput_ConsumeBytes_m1068564016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___n0;
		int32_t L_1 = __this->get_count_1();
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral3819470012, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_startIndex_2();
		int32_t L_3 = ___n0;
		__this->set_startIndex_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		int32_t L_4 = __this->get_count_1();
		int32_t L_5 = ___n0;
		__this->set_count_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)));
		int32_t L_6 = __this->get_startIndex_2();
		int32_t L_7 = __this->get_count_1();
		ByteU5BU5D_t4116647657* L_8 = __this->get_buffer_0();
		NullCheck(L_8);
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7))) > ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral1443743991, /*hidden argument*/NULL);
		return;
	}
}
// Mapbox.IO.Compression.DeflateInput/InputState Mapbox.IO.Compression.DeflateInput::DumpState()
extern "C"  InputState_t2211247823  DeflateInput_DumpState_m2539109590 (DeflateInput_t3892891873 * __this, const RuntimeMethod* method)
{
	InputState_t2211247823  V_0;
	memset(&V_0, 0, sizeof(V_0));
	InputState_t2211247823  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_count_1();
		(&V_0)->set_count_0(L_0);
		int32_t L_1 = __this->get_startIndex_2();
		(&V_0)->set_startIndex_1(L_1);
		InputState_t2211247823  L_2 = V_0;
		V_1 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		InputState_t2211247823  L_3 = V_1;
		return L_3;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::RestoreState(Mapbox.IO.Compression.DeflateInput/InputState)
extern "C"  void DeflateInput_RestoreState_m2187935213 (DeflateInput_t3892891873 * __this, InputState_t2211247823  ___state0, const RuntimeMethod* method)
{
	{
		InputState_t2211247823  L_0 = ___state0;
		int32_t L_1 = L_0.get_count_0();
		__this->set_count_1(L_1);
		InputState_t2211247823  L_2 = ___state0;
		int32_t L_3 = L_2.get_startIndex_1();
		__this->set_startIndex_2(L_3);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateInput::.ctor()
extern "C"  void DeflateInput__ctor_m1146015750 (DeflateInput_t3892891873 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Mapbox.IO.Compression.DeflaterManaged::.ctor()
extern "C"  void DeflaterManaged__ctor_m2617121756 (DeflaterManaged_t1452220717 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflaterManaged__ctor_m2617121756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		FastEncoder_t887805019 * L_0 = (FastEncoder_t887805019 *)il2cpp_codegen_object_new(FastEncoder_t887805019_il2cpp_TypeInfo_var);
		FastEncoder__ctor_m3370242298(L_0, /*hidden argument*/NULL);
		__this->set_deflateEncoder_0(L_0);
		CopyEncoder_t1719707359 * L_1 = (CopyEncoder_t1719707359 *)il2cpp_codegen_object_new(CopyEncoder_t1719707359_il2cpp_TypeInfo_var);
		CopyEncoder__ctor_m3616196794(L_1, /*hidden argument*/NULL);
		__this->set_copyEncoder_1(L_1);
		DeflateInput_t3892891873 * L_2 = (DeflateInput_t3892891873 *)il2cpp_codegen_object_new(DeflateInput_t3892891873_il2cpp_TypeInfo_var);
		DeflateInput__ctor_m1146015750(L_2, /*hidden argument*/NULL);
		__this->set_input_2(L_2);
		OutputBuffer_t1331609326 * L_3 = (OutputBuffer_t1331609326 *)il2cpp_codegen_object_new(OutputBuffer_t1331609326_il2cpp_TypeInfo_var);
		OutputBuffer__ctor_m1098497119(L_3, /*hidden argument*/NULL);
		__this->set_output_3(L_3);
		__this->set_processingState_4(0);
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::NeedsInput()
extern "C"  bool DeflaterManaged_NeedsInput_m4287467524 (DeflaterManaged_t1452220717 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflaterManaged_NeedsInput_m4287467524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Mapbox.IO.Compression.IDeflater::NeedsInput() */, IDeflater_t2072509016_il2cpp_TypeInfo_var, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.NeedsInput()
extern "C"  bool DeflaterManaged_Mapbox_IO_Compression_IDeflater_NeedsInput_m2685113071 (DeflaterManaged_t1452220717 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		DeflateInput_t3892891873 * L_0 = __this->get_input_2();
		NullCheck(L_0);
		int32_t L_1 = DeflateInput_get_Count_m4083463914(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		FastEncoder_t887805019 * L_2 = __this->get_deflateEncoder_0();
		NullCheck(L_2);
		int32_t L_3 = FastEncoder_get_BytesInHistory_m1388724732(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.SetInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflaterManaged_Mapbox_IO_Compression_IDeflater_SetInput_m2878951457 (DeflaterManaged_t1452220717 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflaterManaged_Mapbox_IO_Compression_IDeflater_SetInput_m2878951457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		DeflateInput_t3892891873 * L_0 = __this->get_input_2();
		NullCheck(L_0);
		int32_t L_1 = DeflateInput_get_Count_m4083463914(L_0, /*hidden argument*/NULL);
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), _stringLiteral1196994202, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_2 = __this->get_input_2();
		ByteU5BU5D_t4116647657* L_3 = ___inputBuffer0;
		NullCheck(L_2);
		DeflateInput_set_Buffer_m1391783707(L_2, L_3, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_4 = __this->get_input_2();
		int32_t L_5 = ___count2;
		NullCheck(L_4);
		DeflateInput_set_Count_m1828264908(L_4, L_5, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_6 = __this->get_input_2();
		int32_t L_7 = ___startIndex1;
		NullCheck(L_6);
		DeflateInput_set_StartIndex_m2705214531(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___count2;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_9 = ___count2;
		G_B3_0 = ((((int32_t)L_9) < ((int32_t)((int32_t)256)))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B3_0 = 0;
	}

IL_0050:
	{
		V_0 = (bool)G_B3_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_11 = __this->get_processingState_4();
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_0061;
	}

IL_0061:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_0076;
		}
	}
	{
		goto IL_0067;
	}

IL_0067:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)5)))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_007f;
	}

IL_006d:
	{
		__this->set_processingState_4(3);
		goto IL_007f;
	}

IL_0076:
	{
		__this->set_processingState_4(6);
		goto IL_007f;
	}

IL_007f:
	{
	}

IL_0080:
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.GetDeflateOutput(System.Byte[])
extern "C"  int32_t DeflaterManaged_Mapbox_IO_Compression_IDeflater_GetDeflateOutput_m3672472158 (DeflaterManaged_t1452220717 * __this, ByteU5BU5D_t4116647657* ___outputBuffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflaterManaged_Mapbox_IO_Compression_IDeflater_GetDeflateOutput_m3672472158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputState_t2211247823  V_1;
	memset(&V_1, 0, sizeof(V_1));
	BufferState_t2134702710  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	InputState_t2211247823  V_7;
	memset(&V_7, 0, sizeof(V_7));
	BufferState_t2134702710  V_8;
	memset(&V_8, 0, sizeof(V_8));
	bool V_9 = false;
	int32_t V_10 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___outputBuffer0;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((!(((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), _stringLiteral3720061582, /*hidden argument*/NULL);
		bool L_1 = DeflaterManaged_NeedsInput_m4287467524(__this, /*hidden argument*/NULL);
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), _stringLiteral3841270639, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_2 = __this->get_output_3();
		ByteU5BU5D_t4116647657* L_3 = ___outputBuffer0;
		NullCheck(L_2);
		OutputBuffer_UpdateBuffer_m543847246(L_2, L_3, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_processingState_4();
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_005f;
			}
			case 1:
			{
				goto IL_0178;
			}
			case 2:
			{
				goto IL_0194;
			}
			case 3:
			{
				goto IL_029d;
			}
			case 4:
			{
				goto IL_0126;
			}
			case 5:
			{
				goto IL_01f2;
			}
			case 6:
			{
				goto IL_02b9;
			}
		}
	}
	{
		goto IL_02d4;
	}

IL_005f:
	{
		FastEncoder_t887805019 * L_6 = __this->get_deflateEncoder_0();
		NullCheck(L_6);
		int32_t L_7 = FastEncoder_get_BytesInHistory_m1388724732(L_6, /*hidden argument*/NULL);
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), _stringLiteral2480550363, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_8 = __this->get_input_2();
		NullCheck(L_8);
		InputState_t2211247823  L_9 = DeflateInput_DumpState_m2539109590(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		OutputBuffer_t1331609326 * L_10 = __this->get_output_3();
		NullCheck(L_10);
		BufferState_t2134702710  L_11 = OutputBuffer_DumpState_m1895132228(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		FastEncoder_t887805019 * L_12 = __this->get_deflateEncoder_0();
		OutputBuffer_t1331609326 * L_13 = __this->get_output_3();
		NullCheck(L_12);
		FastEncoder_GetBlockHeader_m3141324007(L_12, L_13, /*hidden argument*/NULL);
		FastEncoder_t887805019 * L_14 = __this->get_deflateEncoder_0();
		DeflateInput_t3892891873 * L_15 = __this->get_input_2();
		OutputBuffer_t1331609326 * L_16 = __this->get_output_3();
		NullCheck(L_14);
		FastEncoder_GetCompressedData_m4034807821(L_14, L_15, L_16, /*hidden argument*/NULL);
		FastEncoder_t887805019 * L_17 = __this->get_deflateEncoder_0();
		NullCheck(L_17);
		double L_18 = FastEncoder_get_LastCompressionRatio_m2098221370(L_17, /*hidden argument*/NULL);
		bool L_19 = DeflaterManaged_UseCompressed_m3795656069(__this, L_18, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_0118;
		}
	}
	{
		DeflateInput_t3892891873 * L_21 = __this->get_input_2();
		InputState_t2211247823  L_22 = V_1;
		NullCheck(L_21);
		DeflateInput_RestoreState_m2187935213(L_21, L_22, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_23 = __this->get_output_3();
		BufferState_t2134702710  L_24 = V_2;
		NullCheck(L_23);
		OutputBuffer_RestoreState_m1323056036(L_23, L_24, /*hidden argument*/NULL);
		CopyEncoder_t1719707359 * L_25 = __this->get_copyEncoder_1();
		DeflateInput_t3892891873 * L_26 = __this->get_input_2();
		OutputBuffer_t1331609326 * L_27 = __this->get_output_3();
		NullCheck(L_25);
		CopyEncoder_GetBlock_m2425766590(L_25, L_26, L_27, (bool)0, /*hidden argument*/NULL);
		DeflaterManaged_FlushInputWindows_m2906194308(__this, /*hidden argument*/NULL);
		__this->set_processingState_4(5);
		goto IL_0121;
	}

IL_0118:
	{
		__this->set_processingState_4(4);
	}

IL_0121:
	{
		goto IL_02d4;
	}

IL_0126:
	{
		FastEncoder_t887805019 * L_28 = __this->get_deflateEncoder_0();
		DeflateInput_t3892891873 * L_29 = __this->get_input_2();
		OutputBuffer_t1331609326 * L_30 = __this->get_output_3();
		NullCheck(L_28);
		FastEncoder_GetCompressedData_m4034807821(L_28, L_29, L_30, /*hidden argument*/NULL);
		FastEncoder_t887805019 * L_31 = __this->get_deflateEncoder_0();
		NullCheck(L_31);
		double L_32 = FastEncoder_get_LastCompressionRatio_m2098221370(L_31, /*hidden argument*/NULL);
		bool L_33 = DeflaterManaged_UseCompressed_m3795656069(__this, L_32, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_0173;
		}
	}
	{
		__this->set_processingState_4(1);
		FastEncoder_t887805019 * L_35 = __this->get_deflateEncoder_0();
		NullCheck(L_35);
		DeflateInput_t3892891873 * L_36 = FastEncoder_get_UnprocessedInput_m2042899902(L_35, /*hidden argument*/NULL);
		__this->set_inputFromHistory_5(L_36);
	}

IL_0173:
	{
		goto IL_02d4;
	}

IL_0178:
	{
		FastEncoder_t887805019 * L_37 = __this->get_deflateEncoder_0();
		OutputBuffer_t1331609326 * L_38 = __this->get_output_3();
		NullCheck(L_37);
		FastEncoder_GetBlockFooter_m31023344(L_37, L_38, /*hidden argument*/NULL);
		__this->set_processingState_4(2);
		goto IL_0194;
	}

IL_0194:
	{
		DeflateInput_t3892891873 * L_39 = __this->get_inputFromHistory_5();
		NullCheck(L_39);
		int32_t L_40 = DeflateInput_get_Count_m4083463914(L_39, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_40) > ((int32_t)0))? 1 : 0);
		bool L_41 = V_5;
		if (!L_41)
		{
			goto IL_01c4;
		}
	}
	{
		CopyEncoder_t1719707359 * L_42 = __this->get_copyEncoder_1();
		DeflateInput_t3892891873 * L_43 = __this->get_inputFromHistory_5();
		OutputBuffer_t1331609326 * L_44 = __this->get_output_3();
		NullCheck(L_42);
		CopyEncoder_GetBlock_m2425766590(L_42, L_43, L_44, (bool)0, /*hidden argument*/NULL);
	}

IL_01c4:
	{
		DeflateInput_t3892891873 * L_45 = __this->get_inputFromHistory_5();
		NullCheck(L_45);
		int32_t L_46 = DeflateInput_get_Count_m4083463914(L_45, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_6;
		if (!L_47)
		{
			goto IL_01ed;
		}
	}
	{
		FastEncoder_t887805019 * L_48 = __this->get_deflateEncoder_0();
		NullCheck(L_48);
		FastEncoder_FlushInput_m3321062779(L_48, /*hidden argument*/NULL);
		__this->set_processingState_4(5);
	}

IL_01ed:
	{
		goto IL_02d4;
	}

IL_01f2:
	{
		FastEncoder_t887805019 * L_49 = __this->get_deflateEncoder_0();
		NullCheck(L_49);
		int32_t L_50 = FastEncoder_get_BytesInHistory_m1388724732(L_49, /*hidden argument*/NULL);
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0), _stringLiteral2480550363, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_51 = __this->get_input_2();
		NullCheck(L_51);
		InputState_t2211247823  L_52 = DeflateInput_DumpState_m2539109590(L_51, /*hidden argument*/NULL);
		V_7 = L_52;
		OutputBuffer_t1331609326 * L_53 = __this->get_output_3();
		NullCheck(L_53);
		BufferState_t2134702710  L_54 = OutputBuffer_DumpState_m1895132228(L_53, /*hidden argument*/NULL);
		V_8 = L_54;
		FastEncoder_t887805019 * L_55 = __this->get_deflateEncoder_0();
		DeflateInput_t3892891873 * L_56 = __this->get_input_2();
		OutputBuffer_t1331609326 * L_57 = __this->get_output_3();
		NullCheck(L_55);
		FastEncoder_GetBlock_m2615023471(L_55, L_56, L_57, ((int32_t)8072), /*hidden argument*/NULL);
		FastEncoder_t887805019 * L_58 = __this->get_deflateEncoder_0();
		NullCheck(L_58);
		double L_59 = FastEncoder_get_LastCompressionRatio_m2098221370(L_58, /*hidden argument*/NULL);
		bool L_60 = DeflaterManaged_UseCompressed_m3795656069(__this, L_59, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_60) == ((int32_t)0))? 1 : 0);
		bool L_61 = V_9;
		if (!L_61)
		{
			goto IL_029b;
		}
	}
	{
		DeflateInput_t3892891873 * L_62 = __this->get_input_2();
		InputState_t2211247823  L_63 = V_7;
		NullCheck(L_62);
		DeflateInput_RestoreState_m2187935213(L_62, L_63, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_64 = __this->get_output_3();
		BufferState_t2134702710  L_65 = V_8;
		NullCheck(L_64);
		OutputBuffer_RestoreState_m1323056036(L_64, L_65, /*hidden argument*/NULL);
		CopyEncoder_t1719707359 * L_66 = __this->get_copyEncoder_1();
		DeflateInput_t3892891873 * L_67 = __this->get_input_2();
		OutputBuffer_t1331609326 * L_68 = __this->get_output_3();
		NullCheck(L_66);
		CopyEncoder_GetBlock_m2425766590(L_66, L_67, L_68, (bool)0, /*hidden argument*/NULL);
		DeflaterManaged_FlushInputWindows_m2906194308(__this, /*hidden argument*/NULL);
	}

IL_029b:
	{
		goto IL_02d4;
	}

IL_029d:
	{
		FastEncoder_t887805019 * L_69 = __this->get_deflateEncoder_0();
		OutputBuffer_t1331609326 * L_70 = __this->get_output_3();
		NullCheck(L_69);
		FastEncoder_GetBlockHeader_m3141324007(L_69, L_70, /*hidden argument*/NULL);
		__this->set_processingState_4(6);
		goto IL_02b9;
	}

IL_02b9:
	{
		FastEncoder_t887805019 * L_71 = __this->get_deflateEncoder_0();
		DeflateInput_t3892891873 * L_72 = __this->get_input_2();
		OutputBuffer_t1331609326 * L_73 = __this->get_output_3();
		NullCheck(L_71);
		FastEncoder_GetCompressedData_m4034807821(L_71, L_72, L_73, /*hidden argument*/NULL);
		goto IL_02d4;
	}

IL_02d4:
	{
		OutputBuffer_t1331609326 * L_74 = __this->get_output_3();
		NullCheck(L_74);
		int32_t L_75 = OutputBuffer_get_BytesWritten_m2114384365(L_74, /*hidden argument*/NULL);
		V_10 = L_75;
		goto IL_02e3;
	}

IL_02e3:
	{
		int32_t L_76 = V_10;
		return L_76;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::Mapbox.IO.Compression.IDeflater.Finish(System.Byte[],System.Int32&)
extern "C"  bool DeflaterManaged_Mapbox_IO_Compression_IDeflater_Finish_m1383555807 (DeflaterManaged_t1452220717 * __this, ByteU5BU5D_t4116647657* ___outputBuffer0, int32_t* ___bytesRead1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflaterManaged_Mapbox_IO_Compression_IDeflater_Finish_m1383555807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___outputBuffer0;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((!(((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), _stringLiteral3720061582, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_processingState_4();
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_2 = __this->get_processingState_4();
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = __this->get_processingState_4();
		if ((((int32_t)L_3) == ((int32_t)6)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = __this->get_processingState_4();
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = __this->get_processingState_4();
		G_B6_0 = ((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 1;
	}

IL_003f:
	{
		int32_t L_6 = __this->get_processingState_4();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(DeflaterState_t438385491_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3847688446, L_8, /*hidden argument*/NULL);
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)G_B6_0, L_9, /*hidden argument*/NULL);
		bool L_10 = DeflaterManaged_NeedsInput_m4287467524(__this, /*hidden argument*/NULL);
		Debug_Assert_m3785750761(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_processingState_4();
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		int32_t* L_13 = ___bytesRead1;
		*((int32_t*)(L_13)) = (int32_t)0;
		V_1 = (bool)1;
		goto IL_00d6;
	}

IL_007b:
	{
		OutputBuffer_t1331609326 * L_14 = __this->get_output_3();
		ByteU5BU5D_t4116647657* L_15 = ___outputBuffer0;
		NullCheck(L_14);
		OutputBuffer_UpdateBuffer_m543847246(L_14, L_15, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_processingState_4();
		if ((((int32_t)L_16) == ((int32_t)4)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_17 = __this->get_processingState_4();
		if ((((int32_t)L_17) == ((int32_t)6)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_18 = __this->get_processingState_4();
		G_B12_0 = ((((int32_t)L_18) == ((int32_t)1))? 1 : 0);
		goto IL_00a6;
	}

IL_00a5:
	{
		G_B12_0 = 1;
	}

IL_00a6:
	{
		V_2 = (bool)G_B12_0;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00be;
		}
	}
	{
		FastEncoder_t887805019 * L_20 = __this->get_deflateEncoder_0();
		OutputBuffer_t1331609326 * L_21 = __this->get_output_3();
		NullCheck(L_20);
		FastEncoder_GetBlockFooter_m31023344(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00be:
	{
		DeflaterManaged_WriteFinal_m3524059434(__this, /*hidden argument*/NULL);
		int32_t* L_22 = ___bytesRead1;
		OutputBuffer_t1331609326 * L_23 = __this->get_output_3();
		NullCheck(L_23);
		int32_t L_24 = OutputBuffer_get_BytesWritten_m2114384365(L_23, /*hidden argument*/NULL);
		*((int32_t*)(L_22)) = (int32_t)L_24;
		V_1 = (bool)1;
		goto IL_00d6;
	}

IL_00d6:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::System.IDisposable.Dispose()
extern "C"  void DeflaterManaged_System_IDisposable_Dispose_m3617246592 (DeflaterManaged_t1452220717 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflaterManaged::UseCompressed(System.Double)
extern "C"  bool DeflaterManaged_UseCompressed_m3795656069 (DeflaterManaged_t1452220717 * __this, double ___ratio0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		double L_0 = ___ratio0;
		V_0 = (bool)((((int32_t)((!(((double)L_0) <= ((double)(1.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::FlushInputWindows()
extern "C"  void DeflaterManaged_FlushInputWindows_m2906194308 (DeflaterManaged_t1452220717 * __this, const RuntimeMethod* method)
{
	{
		FastEncoder_t887805019 * L_0 = __this->get_deflateEncoder_0();
		NullCheck(L_0);
		FastEncoder_FlushInput_m3321062779(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflaterManaged::WriteFinal()
extern "C"  void DeflaterManaged_WriteFinal_m3524059434 (DeflaterManaged_t1452220717 * __this, const RuntimeMethod* method)
{
	{
		CopyEncoder_t1719707359 * L_0 = __this->get_copyEncoder_1();
		OutputBuffer_t1331609326 * L_1 = __this->get_output_3();
		NullCheck(L_0);
		CopyEncoder_GetBlock_m2425766590(L_0, (DeflateInput_t3892891873 *)NULL, L_1, (bool)1, /*hidden argument*/NULL);
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
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
extern "C"  void DeflateStream__ctor_m3247756683 (DeflateStream_t2796728099 * __this, Stream_t1273022909 * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream__ctor_m3247756683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Nullable_1_t640209804  V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		Stream__ctor_m3881936881(__this, /*hidden argument*/NULL);
		Stream_t1273022909 * L_0 = ___stream0;
		V_0 = (bool)((((RuntimeObject*)(Stream_t1273022909 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral3236680756, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_001b:
	{
		int32_t L_3 = ___mode1;
		if ((((int32_t)1) == ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = ___mode1;
		G_B5_0 = ((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = 0;
	}

IL_0026:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1463720672, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, L_6, _stringLiteral1985170617, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_003f:
	{
		Stream_t1273022909 * L_8 = ___stream0;
		__this->set__stream_1(L_8);
		int32_t L_9 = ___mode1;
		__this->set__mode_2(L_9);
		bool L_10 = ___leaveOpen2;
		__this->set__leaveOpen_3(L_10);
		int32_t L_11 = __this->get__mode_2();
		V_2 = L_11;
		int32_t L_12 = V_2;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		goto IL_0060;
	}

IL_0060:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_0115;
	}

IL_0069:
	{
		Stream_t1273022909 * L_14 = __this->get__stream_1();
		NullCheck(L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		bool L_15 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_14);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_17 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral2764959823, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_18 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_18, L_17, _stringLiteral3236680756, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18);
	}

IL_0091:
	{
		Inflater_t10910524 * L_19 = (Inflater_t10910524 *)il2cpp_codegen_object_new(Inflater_t10910524_il2cpp_TypeInfo_var);
		Inflater__ctor_m1495841814(L_19, /*hidden argument*/NULL);
		__this->set_inflater_4(L_19);
		intptr_t L_20 = (intptr_t)DeflateStream_ReadCallback_m1332467311_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_21 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_21, __this, L_20, /*hidden argument*/NULL);
		__this->set_m_CallBack_8(L_21);
		goto IL_0115;
	}

IL_00b0:
	{
		Stream_t1273022909 * L_22 = __this->get__stream_1();
		NullCheck(L_22);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		bool L_23 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_22);
		V_4 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_25 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1242941808, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_26 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_26, L_25, _stringLiteral3236680756, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26);
	}

IL_00da:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t640209804 ));
		Nullable_1_t640209804  L_27 = V_5;
		RuntimeObject* L_28 = DeflateStream_CreateDeflater_m3178245127(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		__this->set_deflater_5(L_28);
		intptr_t L_29 = (intptr_t)DeflateStream_InternalWrite_m3851430298_RuntimeMethod_var;
		AsyncWriteDelegate_t47908213 * L_30 = (AsyncWriteDelegate_t47908213 *)il2cpp_codegen_object_new(AsyncWriteDelegate_t47908213_il2cpp_TypeInfo_var);
		AsyncWriteDelegate__ctor_m3015085141(L_30, __this, L_29, /*hidden argument*/NULL);
		__this->set_m_AsyncWriterDelegate_9(L_30);
		intptr_t L_31 = (intptr_t)DeflateStream_WriteCallback_m3951505245_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_32 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_32, __this, L_31, /*hidden argument*/NULL);
		__this->set_m_CallBack_8(L_32);
		goto IL_0115;
	}

IL_0115:
	{
		__this->set_buffer_6(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192))));
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
extern "C"  void DeflateStream__ctor_m819287622 (DeflateStream_t2796728099 * __this, Stream_t1273022909 * ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream__ctor_m819287622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		Stream__ctor_m3881936881(__this, /*hidden argument*/NULL);
		Stream_t1273022909 * L_0 = ___stream0;
		V_0 = (bool)((((RuntimeObject*)(Stream_t1273022909 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral3236680756, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_001b:
	{
		Stream_t1273022909 * L_3 = ___stream0;
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_6 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1242941808, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_7, L_6, _stringLiteral3236680756, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_003d:
	{
		Stream_t1273022909 * L_8 = ___stream0;
		__this->set__stream_1(L_8);
		__this->set__mode_2(1);
		bool L_9 = ___leaveOpen2;
		__this->set__leaveOpen_3(L_9);
		int32_t L_10 = ___compressionLevel1;
		Nullable_1_t640209804  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Nullable_1__ctor_m349471792((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m349471792_RuntimeMethod_var);
		RuntimeObject* L_12 = DeflateStream_CreateDeflater_m3178245127(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->set_deflater_5(L_12);
		intptr_t L_13 = (intptr_t)DeflateStream_InternalWrite_m3851430298_RuntimeMethod_var;
		AsyncWriteDelegate_t47908213 * L_14 = (AsyncWriteDelegate_t47908213 *)il2cpp_codegen_object_new(AsyncWriteDelegate_t47908213_il2cpp_TypeInfo_var);
		AsyncWriteDelegate__ctor_m3015085141(L_14, __this, L_13, /*hidden argument*/NULL);
		__this->set_m_AsyncWriterDelegate_9(L_14);
		intptr_t L_15 = (intptr_t)DeflateStream_WriteCallback_m3951505245_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_16 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_16, __this, L_15, /*hidden argument*/NULL);
		__this->set_m_CallBack_8(L_16);
		__this->set_buffer_6(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8192))));
		return;
	}
}
// Mapbox.IO.Compression.IDeflater Mapbox.IO.Compression.DeflateStream::CreateDeflater(System.Nullable`1<Mapbox.IO.Compression.CompressionLevel>)
extern "C"  RuntimeObject* DeflateStream_CreateDeflater_m3178245127 (RuntimeObject * __this /* static, unused */, Nullable_1_t640209804  ___compressionLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_CreateDeflater_m3178245127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		uint8_t L_0 = DeflateStream_GetDeflaterType_m4092552442(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		DeflaterManaged_t1452220717 * L_2 = (DeflaterManaged_t1452220717 *)il2cpp_codegen_object_new(DeflaterManaged_t1452220717_il2cpp_TypeInfo_var);
		DeflaterManaged__ctor_m2617121756(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_001f;
	}

IL_0014:
	{
		SystemException_t176217640 * L_3 = (SystemException_t176217640 *)il2cpp_codegen_object_new(SystemException_t176217640_il2cpp_TypeInfo_var);
		SystemException__ctor_m3298527747(L_3, _stringLiteral3440455852, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// Mapbox.IO.Compression.DeflateStream/WorkerType Mapbox.IO.Compression.DeflateStream::GetDeflaterType()
extern "C"  uint8_t DeflateStream_GetDeflaterType_m4092552442 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		uint8_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
extern "C"  void DeflateStream_SetFileFormatReader_m891083011 (DeflateStream_t2796728099 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___reader0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Inflater_t10910524 * L_2 = __this->get_inflater_4();
		RuntimeObject* L_3 = ___reader0;
		NullCheck(L_2);
		Inflater_SetFileFormatReader_m1893636276(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::SetFileFormatWriter(Mapbox.IO.Compression.IFileFormatWriter)
extern "C"  void DeflateStream_SetFileFormatWriter_m3729627798 (DeflateStream_t2796728099 * __this, RuntimeObject* ___writer0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___writer0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_2 = ___writer0;
		__this->set_formatWriter_10(L_2);
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStream::get_CanRead()
extern "C"  bool DeflateStream_get_CanRead_m4212406249 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Stream_t1273022909 * L_0 = __this->get__stream_1();
		V_0 = (bool)((((RuntimeObject*)(Stream_t1273022909 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_0013:
	{
		int32_t L_2 = __this->get__mode_2();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Stream_t1273022909 * L_3 = __this->get__stream_1();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStream::get_CanWrite()
extern "C"  bool DeflateStream_get_CanWrite_m2273903677 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Stream_t1273022909 * L_0 = __this->get__stream_1();
		V_0 = (bool)((((RuntimeObject*)(Stream_t1273022909 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_002d;
	}

IL_0013:
	{
		int32_t L_2 = __this->get__mode_2();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		Stream_t1273022909 * L_3 = __this->get__stream_1();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
	}

IL_002a:
	{
		V_1 = (bool)G_B5_0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStream::get_CanSeek()
extern "C"  bool DeflateStream_get_CanSeek_m3683203060 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int64 Mapbox.IO.Compression.DeflateStream::get_Length()
extern "C"  int64_t DeflateStream_get_Length_m2702535552 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_get_Length_m2702535552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1060443247, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Int64 Mapbox.IO.Compression.DeflateStream::get_Position()
extern "C"  int64_t DeflateStream_get_Position_m3177456892 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_get_Position_m3177456892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1060443247, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::set_Position(System.Int64)
extern "C"  void DeflateStream_set_Position_m303765702 (DeflateStream_t2796728099 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_set_Position_m303765702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1060443247, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::Flush()
extern "C"  void DeflateStream_Flush_m1140270099 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method)
{
	{
		DeflateStream_EnsureNotDisposed_m432649309(__this, /*hidden argument*/NULL);
		goto IL_000a;
	}

IL_000a:
	{
		return;
	}
}
// System.Int64 Mapbox.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t DeflateStream_Seek_m15876477 (DeflateStream_t2796728099 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_Seek_m15876477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1060443247, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::SetLength(System.Int64)
extern "C"  void DeflateStream_SetLength_m2330444734 (DeflateStream_t2796728099 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_SetLength_m2330444734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1060443247, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_Read_m1952322750 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_Read_m1952322750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	{
		DeflateStream_EnsureDecompressionMode_m1738476851(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		DeflateStream_ValidateParameters_m3403660080(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		DeflateStream_EnsureNotDisposed_m432649309(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___offset1;
		V_1 = L_3;
		int32_t L_4 = ___count2;
		V_2 = L_4;
		goto IL_00ca;
	}

IL_0022:
	{
		Inflater_t10910524 * L_5 = __this->get_inflater_4();
		ByteU5BU5D_t4116647657* L_6 = ___array0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_5);
		int32_t L_9 = Inflater_Inflate_m3538837957(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13));
		int32_t L_14 = V_2;
		V_4 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_004a;
		}
	}
	{
		goto IL_00d2;
	}

IL_004a:
	{
		Inflater_t10910524 * L_16 = __this->get_inflater_4();
		NullCheck(L_16);
		bool L_17 = Inflater_Finished_m3651521745(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0077;
		}
	}
	{
		Inflater_t10910524 * L_19 = __this->get_inflater_4();
		NullCheck(L_19);
		int32_t L_20 = Inflater_get_AvailableOutput_m3686135412(L_19, /*hidden argument*/NULL);
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0), _stringLiteral3623385350, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_0077:
	{
		Inflater_t10910524 * L_21 = __this->get_inflater_4();
		NullCheck(L_21);
		bool L_22 = Inflater_NeedsInput_m1480127526(L_21, /*hidden argument*/NULL);
		Debug_Assert_m2013276412(NULL /*static, unused*/, L_22, _stringLiteral2998580661, /*hidden argument*/NULL);
		Stream_t1273022909 * L_23 = __this->get__stream_1();
		ByteU5BU5D_t4116647657* L_24 = __this->get_buffer_6();
		ByteU5BU5D_t4116647657* L_25 = __this->get_buffer_6();
		NullCheck(L_25);
		NullCheck(L_23);
		int32_t L_26 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(16 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))));
		V_3 = L_26;
		int32_t L_27 = V_3;
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00d2;
	}

IL_00b5:
	{
		Inflater_t10910524 * L_29 = __this->get_inflater_4();
		ByteU5BU5D_t4116647657* L_30 = __this->get_buffer_6();
		int32_t L_31 = V_3;
		NullCheck(L_29);
		Inflater_SetInput_m2072822639(L_29, L_30, 0, L_31, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		V_7 = (bool)1;
		goto IL_0022;
	}

IL_00d2:
	{
		int32_t L_32 = ___count2;
		int32_t L_33 = V_2;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33));
		goto IL_00d9;
	}

IL_00d9:
	{
		int32_t L_34 = V_8;
		return L_34;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::ValidateParameters(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_ValidateParameters_m3403660080 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_ValidateParameters_m3403660080_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_2 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_2, _stringLiteral4007973390, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0014:
	{
		int32_t L_3 = ___offset1;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_5, _stringLiteral1082126080, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0027:
	{
		int32_t L_6 = ___count2;
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_8, _stringLiteral2002595880, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_003a:
	{
		ByteU5BU5D_t4116647657* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		V_3 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_13 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral3360441599, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_14 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_0056:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureNotDisposed()
extern "C"  void DeflateStream_EnsureNotDisposed_m432649309 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_EnsureNotDisposed_m432649309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Stream_t1273022909 * L_0 = __this->get__stream_1();
		V_0 = (bool)((((RuntimeObject*)(Stream_t1273022909 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral4085905002, /*hidden argument*/NULL);
		ObjectDisposedException_t21392786 * L_3 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m1034312941(L_3, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureDecompressionMode()
extern "C"  void DeflateStream_EnsureDecompressionMode_m1738476851 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_EnsureDecompressionMode_m1738476851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = __this->get__mode_2();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral86810068, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EnsureCompressionMode()
extern "C"  void DeflateStream_EnsureCompressionMode_m2807519719 (DeflateStream_t2796728099 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_EnsureCompressionMode_m2807519719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = __this->get__mode_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral2815240392, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0021:
	{
		return;
	}
}
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* DeflateStream_BeginRead_m866602532 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3962456242 * ___asyncCallback3, RuntimeObject * ___asyncState4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_BeginRead_m866602532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DeflateStreamAsyncResult_t1893920535 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		DeflateStream_EnsureDecompressionMode_m1738476851(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_asyncOperations_7();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral4056782387, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0025:
	{
		ByteU5BU5D_t4116647657* L_4 = ___array0;
		int32_t L_5 = ___offset1;
		int32_t L_6 = ___count2;
		DeflateStream_ValidateParameters_m3403660080(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		DeflateStream_EnsureNotDisposed_m432649309(__this, /*hidden argument*/NULL);
		int32_t* L_7 = __this->get_address_of_asyncOperations_7();
		Interlocked_Increment_m3548166048(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_8 = ___asyncState4;
			AsyncCallback_t3962456242 * L_9 = ___asyncCallback3;
			ByteU5BU5D_t4116647657* L_10 = ___array0;
			int32_t L_11 = ___offset1;
			int32_t L_12 = ___count2;
			DeflateStreamAsyncResult_t1893920535 * L_13 = (DeflateStreamAsyncResult_t1893920535 *)il2cpp_codegen_object_new(DeflateStreamAsyncResult_t1893920535_il2cpp_TypeInfo_var);
			DeflateStreamAsyncResult__ctor_m3717146400(L_13, __this, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
			V_1 = L_13;
			DeflateStreamAsyncResult_t1893920535 * L_14 = V_1;
			NullCheck(L_14);
			L_14->set_isWrite_3((bool)0);
			Inflater_t10910524 * L_15 = __this->get_inflater_4();
			ByteU5BU5D_t4116647657* L_16 = ___array0;
			int32_t L_17 = ___offset1;
			int32_t L_18 = ___count2;
			NullCheck(L_15);
			int32_t L_19 = Inflater_Inflate_m3538837957(L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
			V_2 = L_19;
			int32_t L_20 = V_2;
			V_3 = (bool)((!(((uint32_t)L_20) <= ((uint32_t)0)))? 1 : 0);
			bool L_21 = V_3;
			if (!L_21)
			{
				goto IL_0083;
			}
		}

IL_006f:
		{
			DeflateStreamAsyncResult_t1893920535 * L_22 = V_1;
			int32_t L_23 = V_2;
			int32_t L_24 = L_23;
			RuntimeObject * L_25 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_24);
			NullCheck(L_22);
			DeflateStreamAsyncResult_InvokeCallback_m2215462768(L_22, (bool)1, L_25, /*hidden argument*/NULL);
			DeflateStreamAsyncResult_t1893920535 * L_26 = V_1;
			V_4 = L_26;
			goto IL_00f2;
		}

IL_0083:
		{
			Inflater_t10910524 * L_27 = __this->get_inflater_4();
			NullCheck(L_27);
			bool L_28 = Inflater_Finished_m3651521745(L_27, /*hidden argument*/NULL);
			V_5 = L_28;
			bool L_29 = V_5;
			if (!L_29)
			{
				goto IL_00a8;
			}
		}

IL_0094:
		{
			DeflateStreamAsyncResult_t1893920535 * L_30 = V_1;
			int32_t L_31 = 0;
			RuntimeObject * L_32 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_31);
			NullCheck(L_30);
			DeflateStreamAsyncResult_InvokeCallback_m2215462768(L_30, (bool)1, L_32, /*hidden argument*/NULL);
			DeflateStreamAsyncResult_t1893920535 * L_33 = V_1;
			V_4 = L_33;
			goto IL_00f2;
		}

IL_00a8:
		{
			Stream_t1273022909 * L_34 = __this->get__stream_1();
			ByteU5BU5D_t4116647657* L_35 = __this->get_buffer_6();
			ByteU5BU5D_t4116647657* L_36 = __this->get_buffer_6();
			NullCheck(L_36);
			AsyncCallback_t3962456242 * L_37 = __this->get_m_CallBack_8();
			DeflateStreamAsyncResult_t1893920535 * L_38 = V_1;
			NullCheck(L_34);
			VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_t4116647657*, int32_t, int32_t, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(22 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_34, L_35, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))), L_37, L_38);
			DeflateStreamAsyncResult_t1893920535 * L_39 = V_1;
			DeflateStreamAsyncResult_t1893920535 * L_40 = L_39;
			NullCheck(L_40);
			bool L_41 = L_40->get_m_CompletedSynchronously_8();
			DeflateStreamAsyncResult_t1893920535 * L_42 = V_1;
			NullCheck(L_42);
			bool L_43 = DeflateStreamAsyncResult_get_IsCompleted_m3980363705(L_42, /*hidden argument*/NULL);
			NullCheck(L_40);
			L_40->set_m_CompletedSynchronously_8((bool)((int32_t)((int32_t)L_41&(int32_t)L_43)));
			DeflateStreamAsyncResult_t1893920535 * L_44 = V_1;
			V_4 = L_44;
			goto IL_00f2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e2;
		throw e;
	}

CATCH_00e2:
	{ // begin catch(System.Object)
		int32_t* L_45 = __this->get_address_of_asyncOperations_7();
		Interlocked_Decrement_m899158053(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local);
	} // end catch (depth: 1)

IL_00f2:
	{
		RuntimeObject* L_46 = V_4;
		return L_46;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::ReadCallback(System.IAsyncResult)
extern "C"  void DeflateStream_ReadCallback_m1332467311 (DeflateStream_t2796728099 * __this, RuntimeObject* ___baseStreamResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_ReadCallback_m1332467311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t1893920535 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B6_0 = 0;
	{
		RuntimeObject* L_0 = ___baseStreamResult0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, L_0);
		V_0 = ((DeflateStreamAsyncResult_t1893920535 *)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t1893920535_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t1893920535 * L_2 = V_0;
		DeflateStreamAsyncResult_t1893920535 * L_3 = L_2;
		NullCheck(L_3);
		bool L_4 = L_3->get_m_CompletedSynchronously_8();
		RuntimeObject* L_5 = ___baseStreamResult0;
		NullCheck(L_5);
		bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		L_3->set_m_CompletedSynchronously_8((bool)((int32_t)((int32_t)L_4&(int32_t)L_6)));
		V_1 = 0;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			DeflateStream_EnsureNotDisposed_m432649309(__this, /*hidden argument*/NULL);
			Stream_t1273022909 * L_7 = __this->get__stream_1();
			RuntimeObject* L_8 = ___baseStreamResult0;
			NullCheck(L_7);
			int32_t L_9 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(24 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_7, L_8);
			V_1 = L_9;
			int32_t L_10 = V_1;
			V_2 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_0055;
			}
		}

IL_0042:
		{
			DeflateStreamAsyncResult_t1893920535 * L_12 = V_0;
			int32_t L_13 = 0;
			RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
			NullCheck(L_12);
			DeflateStreamAsyncResult_InvokeCallback_m2685276557(L_12, L_14, /*hidden argument*/NULL);
			goto IL_00e5;
		}

IL_0055:
		{
			Inflater_t10910524 * L_15 = __this->get_inflater_4();
			ByteU5BU5D_t4116647657* L_16 = __this->get_buffer_6();
			int32_t L_17 = V_1;
			NullCheck(L_15);
			Inflater_SetInput_m2072822639(L_15, L_16, 0, L_17, /*hidden argument*/NULL);
			Inflater_t10910524 * L_18 = __this->get_inflater_4();
			DeflateStreamAsyncResult_t1893920535 * L_19 = V_0;
			NullCheck(L_19);
			ByteU5BU5D_t4116647657* L_20 = L_19->get_buffer_0();
			DeflateStreamAsyncResult_t1893920535 * L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22 = L_21->get_offset_1();
			DeflateStreamAsyncResult_t1893920535 * L_23 = V_0;
			NullCheck(L_23);
			int32_t L_24 = L_23->get_count_2();
			NullCheck(L_18);
			int32_t L_25 = Inflater_Inflate_m3538837957(L_18, L_20, L_22, L_24, /*hidden argument*/NULL);
			V_1 = L_25;
			int32_t L_26 = V_1;
			if (L_26)
			{
				goto IL_009a;
			}
		}

IL_008a:
		{
			Inflater_t10910524 * L_27 = __this->get_inflater_4();
			NullCheck(L_27);
			bool L_28 = Inflater_Finished_m3651521745(L_27, /*hidden argument*/NULL);
			G_B6_0 = ((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
			goto IL_009b;
		}

IL_009a:
		{
			G_B6_0 = 0;
		}

IL_009b:
		{
			V_3 = (bool)G_B6_0;
			bool L_29 = V_3;
			if (!L_29)
			{
				goto IL_00c5;
			}
		}

IL_009f:
		{
			Stream_t1273022909 * L_30 = __this->get__stream_1();
			ByteU5BU5D_t4116647657* L_31 = __this->get_buffer_6();
			ByteU5BU5D_t4116647657* L_32 = __this->get_buffer_6();
			NullCheck(L_32);
			AsyncCallback_t3962456242 * L_33 = __this->get_m_CallBack_8();
			DeflateStreamAsyncResult_t1893920535 * L_34 = V_0;
			NullCheck(L_30);
			VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_t4116647657*, int32_t, int32_t, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(22 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_30, L_31, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))), L_33, L_34);
			goto IL_00d4;
		}

IL_00c5:
		{
			DeflateStreamAsyncResult_t1893920535 * L_35 = V_0;
			int32_t L_36 = V_1;
			int32_t L_37 = L_36;
			RuntimeObject * L_38 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_37);
			NullCheck(L_35);
			DeflateStreamAsyncResult_InvokeCallback_m2685276557(L_35, L_38, /*hidden argument*/NULL);
		}

IL_00d4:
		{
			goto IL_00e5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00d7;
		throw e;
	}

CATCH_00d7:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		DeflateStreamAsyncResult_t1893920535 * L_39 = V_0;
		Exception_t * L_40 = V_4;
		NullCheck(L_39);
		DeflateStreamAsyncResult_InvokeCallback_m2685276557(L_39, L_40, /*hidden argument*/NULL);
		goto IL_00e5;
	} // end catch (depth: 1)

IL_00e5:
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
extern "C"  int32_t DeflateStream_EndRead_m1954304421 (DeflateStream_t2796728099 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_EndRead_m1954304421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t1893920535 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		DeflateStream_EnsureDecompressionMode_m1738476851(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___asyncResult0;
		DeflateStream_CheckEndXxxxLegalStateAndParams_m1101183822(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___asyncResult0;
		V_0 = ((DeflateStreamAsyncResult_t1893920535 *)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t1893920535_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t1893920535 * L_2 = V_0;
		DeflateStream_AwaitAsyncResultCompletion_m2751674591(__this, L_2, /*hidden argument*/NULL);
		DeflateStreamAsyncResult_t1893920535 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = DeflateStreamAsyncResult_get_Result_m3399328877(L_3, /*hidden argument*/NULL);
		V_1 = ((Exception_t *)IsInstClass((RuntimeObject*)L_4, Exception_t_il2cpp_TypeInfo_var));
		Exception_t * L_5 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Exception_t * L_7 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0036:
	{
		DeflateStreamAsyncResult_t1893920535 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9 = DeflateStreamAsyncResult_get_Result_m3399328877(L_8, /*hidden argument*/NULL);
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_9, Int32_t2950945753_il2cpp_TypeInfo_var))));
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_10 = V_3;
		return L_10;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_Write_m1463240306 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		DeflateStream_EnsureCompressionMode_m2807519719(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		DeflateStream_ValidateParameters_m3403660080(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		DeflateStream_EnsureNotDisposed_m432649309(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_3 = ___array0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		DeflateStream_InternalWrite_m3851430298(__this, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::InternalWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateStream_InternalWrite_m3851430298 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_InternalWrite_m3851430298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		DeflateStream_DoMaintenance_m273657713(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		bool L_3 = ___isAsync3;
		DeflateStream_WriteDeflaterOutput_m411712746(__this, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = __this->get_deflater_5();
		ByteU5BU5D_t4116647657* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		InterfaceActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(1 /* System.Void Mapbox.IO.Compression.IDeflater::SetInput(System.Byte[],System.Int32,System.Int32) */, IDeflater_t2072509016_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
		bool L_8 = ___isAsync3;
		DeflateStream_WriteDeflaterOutput_m411712746(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::WriteDeflaterOutput(System.Boolean)
extern "C"  void DeflateStream_WriteDeflaterOutput_m411712746 (DeflateStream_t2796728099 * __this, bool ___isAsync0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_WriteDeflaterOutput_m411712746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_002f;
	}

IL_0003:
	{
		RuntimeObject* L_0 = __this->get_deflater_5();
		ByteU5BU5D_t4116647657* L_1 = __this->get_buffer_6();
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(2 /* System.Int32 Mapbox.IO.Compression.IDeflater::GetDeflateOutput(System.Byte[]) */, IDeflater_t2072509016_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_5 = __this->get_buffer_6();
		int32_t L_6 = V_0;
		bool L_7 = ___isAsync0;
		DeflateStream_DoWrite_m465878848(__this, L_5, 0, L_6, L_7, /*hidden argument*/NULL);
	}

IL_002e:
	{
	}

IL_002f:
	{
		RuntimeObject* L_8 = __this->get_deflater_5();
		NullCheck(L_8);
		bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Mapbox.IO.Compression.IDeflater::NeedsInput() */, IDeflater_t2072509016_il2cpp_TypeInfo_var, L_8);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0003;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::DoWrite(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void DeflateStream_DoWrite_m465878848 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		Debug_Assert_m3785750761(NULL /*static, unused*/, (bool)((!(((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_1 = ___count2;
		Debug_Assert_m3785750761(NULL /*static, unused*/, (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		bool L_2 = ___isAsync3;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Stream_t1273022909 * L_4 = __this->get__stream_1();
		ByteU5BU5D_t4116647657* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		RuntimeObject* L_8 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_t4116647657*, int32_t, int32_t, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(23 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_4, L_5, L_6, L_7, (AsyncCallback_t3962456242 *)NULL, NULL);
		V_1 = L_8;
		Stream_t1273022909 * L_9 = __this->get__stream_1();
		RuntimeObject* L_10 = V_1;
		NullCheck(L_9);
		VirtActionInvoker1< RuntimeObject* >::Invoke(25 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, L_9, L_10);
		goto IL_004e;
	}

IL_003d:
	{
		Stream_t1273022909 * L_11 = __this->get__stream_1();
		ByteU5BU5D_t4116647657* L_12 = ___array0;
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___count2;
		NullCheck(L_11);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, L_13, L_14);
	}

IL_004e:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::DoMaintenance(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_DoMaintenance_m273657713 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_DoMaintenance_m273657713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		int32_t L_0 = ___count2;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0066;
	}

IL_000e:
	{
		__this->set_wroteBytes_12((bool)1);
		RuntimeObject* L_2 = __this->get_formatWriter_10();
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0066;
	}

IL_0024:
	{
		bool L_4 = __this->get_wroteHeader_11();
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_formatWriter_10();
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = InterfaceFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(0 /* System.Byte[] Mapbox.IO.Compression.IFileFormatWriter::GetHeader() */, IFileFormatWriter_t4031231164_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
		Stream_t1273022909 * L_8 = __this->get__stream_1();
		ByteU5BU5D_t4116647657* L_9 = V_3;
		ByteU5BU5D_t4116647657* L_10 = V_3;
		NullCheck(L_10);
		NullCheck(L_8);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))));
		__this->set_wroteHeader_11((bool)1);
	}

IL_0057:
	{
		RuntimeObject* L_11 = __this->get_formatWriter_10();
		ByteU5BU5D_t4116647657* L_12 = ___array0;
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___count2;
		NullCheck(L_11);
		InterfaceActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(1 /* System.Void Mapbox.IO.Compression.IFileFormatWriter::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32) */, IFileFormatWriter_t4031231164_il2cpp_TypeInfo_var, L_11, L_12, L_13, L_14);
	}

IL_0066:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::PurgeBuffers(System.Boolean)
extern "C"  void DeflateStream_PurgeBuffers_m855131095 (DeflateStream_t2796728099 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_PurgeBuffers_m855131095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_t4116647657* V_9 = NULL;
	int32_t G_B15_0 = 0;
	{
		bool L_0 = ___disposing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_00c7;
	}

IL_000e:
	{
		Stream_t1273022909 * L_2 = __this->get__stream_1();
		V_1 = (bool)((((RuntimeObject*)(Stream_t1273022909 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_00c7;
	}

IL_0020:
	{
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, __this);
		int32_t L_4 = __this->get__mode_2();
		V_2 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_00c7;
	}

IL_003c:
	{
		bool L_6 = __this->get_wroteBytes_12();
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_008e;
		}
	}
	{
		DeflateStream_WriteDeflaterOutput_m411712746(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		RuntimeObject* L_8 = __this->get_deflater_5();
		ByteU5BU5D_t4116647657* L_9 = __this->get_buffer_6();
		NullCheck(L_8);
		bool L_10 = InterfaceFuncInvoker2< bool, ByteU5BU5D_t4116647657*, int32_t* >::Invoke(3 /* System.Boolean Mapbox.IO.Compression.IDeflater::Finish(System.Byte[],System.Int32&) */, IDeflater_t2072509016_il2cpp_TypeInfo_var, L_8, L_9, (&V_5));
		V_4 = L_10;
		int32_t L_11 = V_5;
		V_6 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0081;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_13 = __this->get_buffer_6();
		int32_t L_14 = V_5;
		DeflateStream_DoWrite_m465878848(__this, L_13, 0, L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0081:
	{
		bool L_15 = V_4;
		V_7 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (L_16)
		{
			goto IL_004f;
		}
	}
	{
	}

IL_008e:
	{
		RuntimeObject* L_17 = __this->get_formatWriter_10();
		if (!L_17)
		{
			goto IL_009e;
		}
	}
	{
		bool L_18 = __this->get_wroteHeader_11();
		G_B15_0 = ((int32_t)(L_18));
		goto IL_009f;
	}

IL_009e:
	{
		G_B15_0 = 0;
	}

IL_009f:
	{
		V_8 = (bool)G_B15_0;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject* L_20 = __this->get_formatWriter_10();
		NullCheck(L_20);
		ByteU5BU5D_t4116647657* L_21 = InterfaceFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(2 /* System.Byte[] Mapbox.IO.Compression.IFileFormatWriter::GetFooter() */, IFileFormatWriter_t4031231164_il2cpp_TypeInfo_var, L_20);
		V_9 = L_21;
		Stream_t1273022909 * L_22 = __this->get__stream_1();
		ByteU5BU5D_t4116647657* L_23 = V_9;
		ByteU5BU5D_t4116647657* L_24 = V_9;
		NullCheck(L_24);
		NullCheck(L_22);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))));
	}

IL_00c7:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::Dispose(System.Boolean)
extern "C"  void DeflateStream_Dispose_m4230687389 (DeflateStream_t2796728099 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_Dispose_m4230687389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B7_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		bool L_0 = ___disposing0;
		DeflateStream_PurgeBuffers_m855131095(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x74, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		{
		}

IL_000e:
		try
		{ // begin try (depth: 2)
			{
				bool L_1 = ___disposing0;
				if (!L_1)
				{
					goto IL_0025;
				}
			}

IL_0012:
			{
				bool L_2 = __this->get__leaveOpen_3();
				if (L_2)
				{
					goto IL_0025;
				}
			}

IL_001a:
			{
				Stream_t1273022909 * L_3 = __this->get__stream_1();
				G_B7_0 = ((!(((RuntimeObject*)(Stream_t1273022909 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				goto IL_0026;
			}

IL_0025:
			{
				G_B7_0 = 0;
			}

IL_0026:
			{
				V_0 = (bool)G_B7_0;
				bool L_4 = V_0;
				if (!L_4)
				{
					goto IL_0036;
				}
			}

IL_002a:
			{
				Stream_t1273022909 * L_5 = __this->get__stream_1();
				NullCheck(L_5);
				VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_5);
			}

IL_0036:
			{
				IL2CPP_LEAVE(0x72, FINALLY_0039);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0039;
		}

FINALLY_0039:
		{ // begin finally (depth: 2)
			{
				__this->set__stream_1((Stream_t1273022909 *)NULL);
			}

IL_0041:
			try
			{ // begin try (depth: 3)
				{
					RuntimeObject* L_6 = __this->get_deflater_5();
					V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
					bool L_7 = V_1;
					if (!L_7)
					{
						goto IL_005b;
					}
				}

IL_004f:
				{
					RuntimeObject* L_8 = __this->get_deflater_5();
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_8);
				}

IL_005b:
				{
					IL2CPP_LEAVE(0x70, FINALLY_005e);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_005e;
			}

FINALLY_005e:
			{ // begin finally (depth: 3)
				__this->set_deflater_5((RuntimeObject*)NULL);
				bool L_9 = ___disposing0;
				Stream_Dispose_m874059170(__this, L_9, /*hidden argument*/NULL);
				IL2CPP_END_FINALLY(94)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(94)
			{
				IL2CPP_JUMP_TBL(0x70, IL_0070)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0070:
			{
				IL2CPP_END_FINALLY(57)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(57)
		{
			IL2CPP_JUMP_TBL(0x72, IL_0072)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0072:
		{
			IL2CPP_END_FINALLY(13)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0074:
	{
		return;
	}
}
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* DeflateStream_BeginWrite_m2554098708 (DeflateStream_t2796728099 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3962456242 * ___asyncCallback3, RuntimeObject * ___asyncState4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_BeginWrite_m2554098708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DeflateStreamAsyncResult_t1893920535 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		DeflateStream_EnsureCompressionMode_m2807519719(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_asyncOperations_7();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral4056782387, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0025:
	{
		ByteU5BU5D_t4116647657* L_4 = ___array0;
		int32_t L_5 = ___offset1;
		int32_t L_6 = ___count2;
		DeflateStream_ValidateParameters_m3403660080(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		DeflateStream_EnsureNotDisposed_m432649309(__this, /*hidden argument*/NULL);
		int32_t* L_7 = __this->get_address_of_asyncOperations_7();
		Interlocked_Increment_m3548166048(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_8 = ___asyncState4;
		AsyncCallback_t3962456242 * L_9 = ___asyncCallback3;
		ByteU5BU5D_t4116647657* L_10 = ___array0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = ___count2;
		DeflateStreamAsyncResult_t1893920535 * L_13 = (DeflateStreamAsyncResult_t1893920535 *)il2cpp_codegen_object_new(DeflateStreamAsyncResult_t1893920535_il2cpp_TypeInfo_var);
		DeflateStreamAsyncResult__ctor_m3717146400(L_13, __this, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		DeflateStreamAsyncResult_t1893920535 * L_14 = V_1;
		NullCheck(L_14);
		L_14->set_isWrite_3((bool)1);
		AsyncWriteDelegate_t47908213 * L_15 = __this->get_m_AsyncWriterDelegate_9();
		ByteU5BU5D_t4116647657* L_16 = ___array0;
		int32_t L_17 = ___offset1;
		int32_t L_18 = ___count2;
		AsyncCallback_t3962456242 * L_19 = __this->get_m_CallBack_8();
		DeflateStreamAsyncResult_t1893920535 * L_20 = V_1;
		NullCheck(L_15);
		AsyncWriteDelegate_BeginInvoke_m1977843846(L_15, L_16, L_17, L_18, (bool)1, L_19, L_20, /*hidden argument*/NULL);
		DeflateStreamAsyncResult_t1893920535 * L_21 = V_1;
		DeflateStreamAsyncResult_t1893920535 * L_22 = L_21;
		NullCheck(L_22);
		bool L_23 = L_22->get_m_CompletedSynchronously_8();
		DeflateStreamAsyncResult_t1893920535 * L_24 = V_1;
		NullCheck(L_24);
		bool L_25 = DeflateStreamAsyncResult_get_IsCompleted_m3980363705(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_m_CompletedSynchronously_8((bool)((int32_t)((int32_t)L_23&(int32_t)L_25)));
		DeflateStreamAsyncResult_t1893920535 * L_26 = V_1;
		V_2 = L_26;
		goto IL_0096;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0086;
		throw e;
	}

CATCH_0086:
	{ // begin catch(System.Object)
		int32_t* L_27 = __this->get_address_of_asyncOperations_7();
		Interlocked_Decrement_m899158053(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local);
	} // end catch (depth: 1)

IL_0096:
	{
		RuntimeObject* L_28 = V_2;
		return L_28;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::WriteCallback(System.IAsyncResult)
extern "C"  void DeflateStream_WriteCallback_m3951505245 (DeflateStream_t2796728099 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_WriteCallback_m3951505245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t1893920535 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___asyncResult0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, L_0);
		V_0 = ((DeflateStreamAsyncResult_t1893920535 *)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t1893920535_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t1893920535 * L_2 = V_0;
		DeflateStreamAsyncResult_t1893920535 * L_3 = L_2;
		NullCheck(L_3);
		bool L_4 = L_3->get_m_CompletedSynchronously_8();
		RuntimeObject* L_5 = ___asyncResult0;
		NullCheck(L_5);
		bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean System.IAsyncResult::get_CompletedSynchronously() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		L_3->set_m_CompletedSynchronously_8((bool)((int32_t)((int32_t)L_4&(int32_t)L_6)));
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		AsyncWriteDelegate_t47908213 * L_7 = __this->get_m_AsyncWriterDelegate_9();
		RuntimeObject* L_8 = ___asyncResult0;
		NullCheck(L_7);
		AsyncWriteDelegate_EndInvoke_m858931942(L_7, L_8, /*hidden argument*/NULL);
		goto IL_003d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0031;
		throw e;
	}

CATCH_0031:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		DeflateStreamAsyncResult_t1893920535 * L_9 = V_0;
		Exception_t * L_10 = V_1;
		NullCheck(L_9);
		DeflateStreamAsyncResult_InvokeCallback_m2685276557(L_9, L_10, /*hidden argument*/NULL);
		goto IL_0045;
	} // end catch (depth: 1)

IL_003d:
	{
		DeflateStreamAsyncResult_t1893920535 * L_11 = V_0;
		NullCheck(L_11);
		DeflateStreamAsyncResult_InvokeCallback_m2685276557(L_11, NULL, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
extern "C"  void DeflateStream_EndWrite_m3819178005 (DeflateStream_t2796728099 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_EndWrite_m3819178005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t1893920535 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	{
		DeflateStream_EnsureCompressionMode_m2807519719(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___asyncResult0;
		DeflateStream_CheckEndXxxxLegalStateAndParams_m1101183822(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___asyncResult0;
		V_0 = ((DeflateStreamAsyncResult_t1893920535 *)CastclassClass((RuntimeObject*)L_1, DeflateStreamAsyncResult_t1893920535_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t1893920535 * L_2 = V_0;
		DeflateStream_AwaitAsyncResultCompletion_m2751674591(__this, L_2, /*hidden argument*/NULL);
		DeflateStreamAsyncResult_t1893920535 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = DeflateStreamAsyncResult_get_Result_m3399328877(L_3, /*hidden argument*/NULL);
		V_1 = ((Exception_t *)IsInstClass((RuntimeObject*)L_4, Exception_t_il2cpp_TypeInfo_var));
		Exception_t * L_5 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Exception_t * L_7 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0036:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::CheckEndXxxxLegalStateAndParams(System.IAsyncResult)
extern "C"  void DeflateStream_CheckEndXxxxLegalStateAndParams_m1101183822 (DeflateStream_t2796728099 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStream_CheckEndXxxxLegalStateAndParams_m1101183822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamAsyncResult_t1893920535 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_asyncOperations_7();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1512102152, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_6 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_6, _stringLiteral844061258, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0034:
	{
		DeflateStream_EnsureNotDisposed_m432649309(__this, /*hidden argument*/NULL);
		RuntimeObject* L_7 = ___asyncResult0;
		V_0 = ((DeflateStreamAsyncResult_t1893920535 *)IsInstClass((RuntimeObject*)L_7, DeflateStreamAsyncResult_t1893920535_il2cpp_TypeInfo_var));
		DeflateStreamAsyncResult_t1893920535 * L_8 = V_0;
		V_3 = (bool)((((RuntimeObject*)(DeflateStreamAsyncResult_t1893920535 *)L_8) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_10 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_10, _stringLiteral844061258, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_0055:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStream::AwaitAsyncResultCompletion(Mapbox.IO.Compression.DeflateStreamAsyncResult)
extern "C"  void DeflateStream_AwaitAsyncResultCompletion_m2751674591 (DeflateStream_t2796728099 * __this, DeflateStreamAsyncResult_t1893920535 * ___asyncResult0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			DeflateStreamAsyncResult_t1893920535 * L_0 = ___asyncResult0;
			NullCheck(L_0);
			bool L_1 = DeflateStreamAsyncResult_get_IsCompleted_m3980363705(L_0, /*hidden argument*/NULL);
			V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_001b;
			}
		}

IL_000f:
		{
			DeflateStreamAsyncResult_t1893920535 * L_3 = ___asyncResult0;
			NullCheck(L_3);
			WaitHandle_t1743403487 * L_4 = DeflateStreamAsyncResult_get_AsyncWaitHandle_m3302963922(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x34, FINALLY_001e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		int32_t* L_5 = __this->get_address_of_asyncOperations_7();
		Interlocked_Decrement_m899158053(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		DeflateStreamAsyncResult_t1893920535 * L_6 = ___asyncResult0;
		NullCheck(L_6);
		DeflateStreamAsyncResult_Close_m100442919(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
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
extern "C"  void DelegatePInvokeWrapper_AsyncWriteDelegate_t47908213 (AsyncWriteDelegate_t47908213 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(uint8_t*, int32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___array0' to native representation
	uint8_t* ____array0_marshaled = NULL;
	if (___array0 != NULL)
	{
		____array0_marshaled = reinterpret_cast<uint8_t*>((___array0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____array0_marshaled, ___offset1, ___count2, static_cast<int32_t>(___isAsync3));

}
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncWriteDelegate__ctor_m3015085141 (AsyncWriteDelegate_t47908213 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void AsyncWriteDelegate_Invoke_m4222946694 (AsyncWriteDelegate_t47908213 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AsyncWriteDelegate_Invoke_m4222946694((AsyncWriteDelegate_t47908213 *)__this->get_prev_9(), ___array0, ___offset1, ___count2, ___isAsync3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, ByteU5BU5D_t4116647657*, int32_t, int32_t, bool, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___array0, ___offset1, ___count2, ___isAsync3, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, ByteU5BU5D_t4116647657*, int32_t, int32_t, bool, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___array0, ___offset1, ___count2, ___isAsync3, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, ByteU5BU5D_t4116647657*, int32_t, int32_t, bool, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___array0, ___offset1, ___count2, ___isAsync3, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (ByteU5BU5D_t4116647657*, int32_t, int32_t, bool, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___array0, ___offset1, ___count2, ___isAsync3, targetMethod);
		}
	}
}
// System.IAsyncResult Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* AsyncWriteDelegate_BeginInvoke_m1977843846 (AsyncWriteDelegate_t47908213 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, bool ___isAsync3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncWriteDelegate_BeginInvoke_m1977843846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___array0;
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___count2);
	__d_args[3] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___isAsync3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Mapbox.IO.Compression.DeflateStream/AsyncWriteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncWriteDelegate_EndInvoke_m858931942 (AsyncWriteDelegate_t47908213 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::.ctor(System.Object,System.Object,System.AsyncCallback,System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStreamAsyncResult__ctor_m3717146400 (DeflateStreamAsyncResult_t1893920535 * __this, RuntimeObject * ___asyncObject0, RuntimeObject * ___asyncState1, AsyncCallback_t3962456242 * ___asyncCallback2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___offset4, int32_t ___count5, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___buffer3;
		__this->set_buffer_0(L_0);
		int32_t L_1 = ___offset4;
		__this->set_offset_1(L_1);
		int32_t L_2 = ___count5;
		__this->set_count_2(L_2);
		__this->set_m_CompletedSynchronously_8((bool)1);
		RuntimeObject * L_3 = ___asyncObject0;
		__this->set_m_AsyncObject_4(L_3);
		RuntimeObject * L_4 = ___asyncState1;
		__this->set_m_AsyncState_5(L_4);
		AsyncCallback_t3962456242 * L_5 = ___asyncCallback2;
		__this->set_m_AsyncCallback_6(L_5);
		return;
	}
}
// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::get_AsyncState()
extern "C"  RuntimeObject * DeflateStreamAsyncResult_get_AsyncState_m4099745955 (DeflateStreamAsyncResult_t1893920535 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_m_AsyncState_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Threading.WaitHandle Mapbox.IO.Compression.DeflateStreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1743403487 * DeflateStreamAsyncResult_get_AsyncWaitHandle_m3302963922 (DeflateStreamAsyncResult_t1893920535 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStreamAsyncResult_get_AsyncWaitHandle_m3302963922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ManualResetEvent_t451242010 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	WaitHandle_t1743403487 * V_4 = NULL;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->get_m_Completed_10();
		V_0 = L_0;
		RuntimeObject * L_1 = __this->get_m_Event_11();
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject ** L_3 = __this->get_address_of_m_Event_11();
		int32_t L_4 = V_0;
		ManualResetEvent_t451242010 * L_5 = (ManualResetEvent_t451242010 *)il2cpp_codegen_object_new(ManualResetEvent_t451242010_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m4010886457(L_5, (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		Interlocked_CompareExchange_m1590826108(NULL /*static, unused*/, L_3, L_5, NULL, /*hidden argument*/NULL);
	}

IL_002d:
	{
		RuntimeObject * L_6 = __this->get_m_Event_11();
		V_1 = ((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_6, ManualResetEvent_t451242010_il2cpp_TypeInfo_var));
		int32_t L_7 = V_0;
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = __this->get_m_Completed_10();
		G_B5_0 = ((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		V_3 = (bool)G_B5_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		ManualResetEvent_t451242010 * L_10 = V_1;
		NullCheck(L_10);
		EventWaitHandle_Set_m2445193251(L_10, /*hidden argument*/NULL);
	}

IL_0055:
	{
		ManualResetEvent_t451242010 * L_11 = V_1;
		V_4 = L_11;
		goto IL_005a;
	}

IL_005a:
	{
		WaitHandle_t1743403487 * L_12 = V_4;
		return L_12;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::get_CompletedSynchronously()
extern "C"  bool DeflateStreamAsyncResult_get_CompletedSynchronously_m1783733397 (DeflateStreamAsyncResult_t1893920535 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_CompletedSynchronously_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Mapbox.IO.Compression.DeflateStreamAsyncResult::get_IsCompleted()
extern "C"  bool DeflateStreamAsyncResult_get_IsCompleted_m3980363705 (DeflateStreamAsyncResult_t1893920535 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Completed_10();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Object Mapbox.IO.Compression.DeflateStreamAsyncResult::get_Result()
extern "C"  RuntimeObject * DeflateStreamAsyncResult_get_Result_m3399328877 (DeflateStreamAsyncResult_t1893920535 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_m_Result_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Close()
extern "C"  void DeflateStreamAsyncResult_Close_m100442919 (DeflateStreamAsyncResult_t1893920535 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStreamAsyncResult_Close_m100442919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = __this->get_m_Event_11();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject * L_2 = __this->get_m_Event_11();
		NullCheck(((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_2, ManualResetEvent_t451242010_il2cpp_TypeInfo_var)));
		VirtActionInvoker0::Invoke(7 /* System.Void System.Threading.WaitHandle::Close() */, ((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_2, ManualResetEvent_t451242010_il2cpp_TypeInfo_var)));
	}

IL_0021:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Boolean,System.Object)
extern "C"  void DeflateStreamAsyncResult_InvokeCallback_m2215462768 (DeflateStreamAsyncResult_t1893920535 * __this, bool ___completedSynchronously0, RuntimeObject * ___result1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___completedSynchronously0;
		RuntimeObject * L_1 = ___result1;
		DeflateStreamAsyncResult_Complete_m1339308755(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::InvokeCallback(System.Object)
extern "C"  void DeflateStreamAsyncResult_InvokeCallback_m2685276557 (DeflateStreamAsyncResult_t1893920535 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___result0;
		DeflateStreamAsyncResult_Complete_m815863199(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Boolean,System.Object)
extern "C"  void DeflateStreamAsyncResult_Complete_m1339308755 (DeflateStreamAsyncResult_t1893920535 * __this, bool ___completedSynchronously0, RuntimeObject * ___result1, const RuntimeMethod* method)
{
	{
		bool L_0 = ___completedSynchronously0;
		__this->set_m_CompletedSynchronously_8(L_0);
		RuntimeObject * L_1 = ___result1;
		DeflateStreamAsyncResult_Complete_m815863199(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.DeflateStreamAsyncResult::Complete(System.Object)
extern "C"  void DeflateStreamAsyncResult_Complete_m815863199 (DeflateStreamAsyncResult_t1893920535 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeflateStreamAsyncResult_Complete_m815863199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject * L_0 = ___result0;
		__this->set_m_Result_7(L_0);
		int32_t* L_1 = __this->get_address_of_m_Completed_10();
		Interlocked_Increment_m3548166048(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		RuntimeObject * L_2 = __this->get_m_Event_11();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject * L_4 = __this->get_m_Event_11();
		NullCheck(((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_4, ManualResetEvent_t451242010_il2cpp_TypeInfo_var)));
		EventWaitHandle_Set_m2445193251(((ManualResetEvent_t451242010 *)CastclassSealed((RuntimeObject*)L_4, ManualResetEvent_t451242010_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0034:
	{
		int32_t* L_5 = __this->get_address_of_m_InvokedCallback_9();
		int32_t L_6 = Interlocked_Increment_m3548166048(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		AsyncCallback_t3962456242 * L_8 = __this->get_m_AsyncCallback_6();
		V_2 = (bool)((!(((RuntimeObject*)(AsyncCallback_t3962456242 *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		AsyncCallback_t3962456242 * L_10 = __this->get_m_AsyncCallback_6();
		NullCheck(L_10);
		AsyncCallback_Invoke_m3156993048(L_10, __this, /*hidden argument*/NULL);
	}

IL_0063:
	{
	}

IL_0064:
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
// System.Void Mapbox.IO.Compression.FastEncoder::.ctor()
extern "C"  void FastEncoder__ctor_m3370242298 (FastEncoder_t887805019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoder__ctor_m3370242298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		FastEncoderWindow_t57591660 * L_0 = (FastEncoderWindow_t57591660 *)il2cpp_codegen_object_new(FastEncoderWindow_t57591660_il2cpp_TypeInfo_var);
		FastEncoderWindow__ctor_m1540513573(L_0, /*hidden argument*/NULL);
		__this->set_inputWindow_0(L_0);
		Match_t352475233 * L_1 = (Match_t352475233 *)il2cpp_codegen_object_new(Match_t352475233_il2cpp_TypeInfo_var);
		Match__ctor_m279832417(L_1, /*hidden argument*/NULL);
		__this->set_currentMatch_1(L_1);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoder::get_BytesInHistory()
extern "C"  int32_t FastEncoder_get_BytesInHistory_m1388724732 (FastEncoder_t887805019 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FastEncoderWindow_t57591660 * L_0 = __this->get_inputWindow_0();
		NullCheck(L_0);
		int32_t L_1 = FastEncoderWindow_get_BytesAvailable_m1185252922(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoder::get_UnprocessedInput()
extern "C"  DeflateInput_t3892891873 * FastEncoder_get_UnprocessedInput_m2042899902 (FastEncoder_t887805019 * __this, const RuntimeMethod* method)
{
	DeflateInput_t3892891873 * V_0 = NULL;
	{
		FastEncoderWindow_t57591660 * L_0 = __this->get_inputWindow_0();
		NullCheck(L_0);
		DeflateInput_t3892891873 * L_1 = FastEncoderWindow_get_UnprocessedInput_m1674119125(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		DeflateInput_t3892891873 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::FlushInput()
extern "C"  void FastEncoder_FlushInput_m3321062779 (FastEncoder_t887805019 * __this, const RuntimeMethod* method)
{
	{
		FastEncoderWindow_t57591660 * L_0 = __this->get_inputWindow_0();
		NullCheck(L_0);
		FastEncoderWindow_FlushWindow_m782448992(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Double Mapbox.IO.Compression.FastEncoder::get_LastCompressionRatio()
extern "C"  double FastEncoder_get_LastCompressionRatio_m2098221370 (FastEncoder_t887805019 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = __this->get_lastCompressionRatio_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlock(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
extern "C"  void FastEncoder_GetBlock_m2615023471 (FastEncoder_t887805019 * __this, DeflateInput_t3892891873 * ___input0, OutputBuffer_t1331609326 * ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoder_GetBlock_m2615023471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeflateInput_t3892891873 * L_0 = ___input0;
		bool L_1 = FastEncoder_InputAvailable_m3364481937(__this, L_0, /*hidden argument*/NULL);
		Debug_Assert_m2013276412(NULL /*static, unused*/, L_1, _stringLiteral1197627929, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_2 = ___output1;
		FastEncoder_WriteDeflatePreamble_m2514809501(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_3 = ___input0;
		OutputBuffer_t1331609326 * L_4 = ___output1;
		int32_t L_5 = ___maxBytesToCopy2;
		FastEncoder_GetCompressedOutput_m1574369706(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_6 = ___output1;
		FastEncoder_WriteEndOfBlock_m1363013709(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedData(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetCompressedData_m4034807821 (FastEncoder_t887805019 * __this, DeflateInput_t3892891873 * ___input0, OutputBuffer_t1331609326 * ___output1, const RuntimeMethod* method)
{
	{
		DeflateInput_t3892891873 * L_0 = ___input0;
		OutputBuffer_t1331609326 * L_1 = ___output1;
		FastEncoder_GetCompressedOutput_m1574369706(__this, L_0, L_1, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockHeader(Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetBlockHeader_m3141324007 (FastEncoder_t887805019 * __this, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method)
{
	{
		OutputBuffer_t1331609326 * L_0 = ___output0;
		FastEncoder_WriteDeflatePreamble_m2514809501(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetBlockFooter(Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetBlockFooter_m31023344 (FastEncoder_t887805019 * __this, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method)
{
	{
		OutputBuffer_t1331609326 * L_0 = ___output0;
		FastEncoder_WriteEndOfBlock_m1363013709(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.DeflateInput,Mapbox.IO.Compression.OutputBuffer,System.Int32)
extern "C"  void FastEncoder_GetCompressedOutput_m1574369706 (FastEncoder_t887805019 * __this, DeflateInput_t3892891873 * ___input0, OutputBuffer_t1331609326 * ___output1, int32_t ___maxBytesToCopy2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B15_0 = 0;
	{
		OutputBuffer_t1331609326 * L_0 = ___output1;
		NullCheck(L_0);
		int32_t L_1 = OutputBuffer_get_BytesWritten_m2114384365(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		int32_t L_2 = FastEncoder_get_BytesInHistory_m1388724732(__this, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4 = DeflateInput_get_Count_m4083463914(L_3, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4));
	}

IL_0018:
	{
		DeflateInput_t3892891873 * L_5 = ___input0;
		NullCheck(L_5);
		int32_t L_6 = DeflateInput_get_Count_m4083463914(L_5, /*hidden argument*/NULL);
		FastEncoderWindow_t57591660 * L_7 = __this->get_inputWindow_0();
		NullCheck(L_7);
		int32_t L_8 = FastEncoderWindow_get_FreeWindowSpace_m3065433127(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0039;
		}
	}
	{
		FastEncoderWindow_t57591660 * L_9 = __this->get_inputWindow_0();
		NullCheck(L_9);
		int32_t L_10 = FastEncoderWindow_get_FreeWindowSpace_m3065433127(L_9, /*hidden argument*/NULL);
		G_B4_0 = L_10;
		goto IL_003f;
	}

IL_0039:
	{
		DeflateInput_t3892891873 * L_11 = ___input0;
		NullCheck(L_11);
		int32_t L_12 = DeflateInput_get_Count_m4083463914(L_11, /*hidden argument*/NULL);
		G_B4_0 = L_12;
	}

IL_003f:
	{
		V_7 = G_B4_0;
		int32_t L_13 = ___maxBytesToCopy2;
		V_8 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_15 = V_7;
		int32_t L_16 = ___maxBytesToCopy2;
		int32_t L_17 = V_1;
		int32_t L_18 = Math_Min_m3468062251(NULL /*static, unused*/, L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		V_7 = L_18;
	}

IL_005c:
	{
		int32_t L_19 = V_7;
		V_9 = (bool)((((int32_t)L_19) > ((int32_t)0))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_0091;
		}
	}
	{
		FastEncoderWindow_t57591660 * L_21 = __this->get_inputWindow_0();
		DeflateInput_t3892891873 * L_22 = ___input0;
		NullCheck(L_22);
		ByteU5BU5D_t4116647657* L_23 = DeflateInput_get_Buffer_m1426431299(L_22, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_24 = ___input0;
		NullCheck(L_24);
		int32_t L_25 = DeflateInput_get_StartIndex_m1892746742(L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_7;
		NullCheck(L_21);
		FastEncoderWindow_CopyBytes_m3554926989(L_21, L_23, L_25, L_26, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_27 = ___input0;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		DeflateInput_ConsumeBytes_m1068564016(L_27, L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		int32_t L_30 = V_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
	}

IL_0091:
	{
		OutputBuffer_t1331609326 * L_31 = ___output1;
		FastEncoder_GetCompressedOutput_m3563384511(__this, L_31, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_32 = ___output1;
		bool L_33 = FastEncoder_SafeToWriteTo_m1936575802(__this, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		DeflateInput_t3892891873 * L_34 = ___input0;
		bool L_35 = FastEncoder_InputAvailable_m3364481937(__this, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_36 = ___maxBytesToCopy2;
		if ((((int32_t)L_36) < ((int32_t)1)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_37 = V_1;
		int32_t L_38 = ___maxBytesToCopy2;
		G_B13_0 = ((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B13_0 = 1;
	}

IL_00b7:
	{
		G_B15_0 = G_B13_0;
		goto IL_00ba;
	}

IL_00b9:
	{
		G_B15_0 = 0;
	}

IL_00ba:
	{
		V_10 = (bool)G_B15_0;
		bool L_39 = V_10;
		if (L_39)
		{
			goto IL_0018;
		}
	}
	{
		OutputBuffer_t1331609326 * L_40 = ___output1;
		NullCheck(L_40);
		int32_t L_41 = OutputBuffer_get_BytesWritten_m2114384365(L_40, /*hidden argument*/NULL);
		V_3 = L_41;
		int32_t L_42 = V_3;
		int32_t L_43 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43));
		int32_t L_44 = FastEncoder_get_BytesInHistory_m1388724732(__this, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_45 = ___input0;
		NullCheck(L_45);
		int32_t L_46 = DeflateInput_get_Count_m4083463914(L_45, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_46));
		int32_t L_47 = V_2;
		int32_t L_48 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)L_48));
		int32_t L_49 = V_4;
		V_11 = (bool)((!(((uint32_t)L_49) <= ((uint32_t)0)))? 1 : 0);
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_51 = V_4;
		int32_t L_52 = V_6;
		__this->set_lastCompressionRatio_2(((double)((double)(((double)((double)L_51)))/(double)(((double)((double)L_52))))));
	}

IL_00fe:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::GetCompressedOutput(Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_GetCompressedOutput_m3563384511 (FastEncoder_t887805019 * __this, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B10_0 = 0;
	{
		goto IL_00a6;
	}

IL_0006:
	{
		FastEncoderWindow_t57591660 * L_0 = __this->get_inputWindow_0();
		Match_t352475233 * L_1 = __this->get_currentMatch_1();
		NullCheck(L_0);
		FastEncoderWindow_GetNextSymbolOrMatch_m2835047593(L_0, L_1, /*hidden argument*/NULL);
		Match_t352475233 * L_2 = __this->get_currentMatch_1();
		NullCheck(L_2);
		int32_t L_3 = Match_get_State_m3115604967(L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		Match_t352475233 * L_5 = __this->get_currentMatch_1();
		NullCheck(L_5);
		uint8_t L_6 = Match_get_Symbol_m266856729(L_5, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_7 = ___output0;
		FastEncoder_WriteChar_m2865419403(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_0041:
	{
		Match_t352475233 * L_8 = __this->get_currentMatch_1();
		NullCheck(L_8);
		int32_t L_9 = Match_get_State_m3115604967(L_8, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		Match_t352475233 * L_11 = __this->get_currentMatch_1();
		NullCheck(L_11);
		int32_t L_12 = Match_get_Length_m574477859(L_11, /*hidden argument*/NULL);
		Match_t352475233 * L_13 = __this->get_currentMatch_1();
		NullCheck(L_13);
		int32_t L_14 = Match_get_Position_m750861285(L_13, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_15 = ___output0;
		FastEncoder_WriteMatch_m2384169271(NULL /*static, unused*/, L_12, L_14, L_15, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_0074:
	{
		Match_t352475233 * L_16 = __this->get_currentMatch_1();
		NullCheck(L_16);
		uint8_t L_17 = Match_get_Symbol_m266856729(L_16, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_18 = ___output0;
		FastEncoder_WriteChar_m2865419403(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		Match_t352475233 * L_19 = __this->get_currentMatch_1();
		NullCheck(L_19);
		int32_t L_20 = Match_get_Length_m574477859(L_19, /*hidden argument*/NULL);
		Match_t352475233 * L_21 = __this->get_currentMatch_1();
		NullCheck(L_21);
		int32_t L_22 = Match_get_Position_m750861285(L_21, /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_23 = ___output0;
		FastEncoder_WriteMatch_m2384169271(NULL /*static, unused*/, L_20, L_22, L_23, /*hidden argument*/NULL);
	}

IL_00a5:
	{
	}

IL_00a6:
	{
		FastEncoderWindow_t57591660 * L_24 = __this->get_inputWindow_0();
		NullCheck(L_24);
		int32_t L_25 = FastEncoderWindow_get_BytesAvailable_m1185252922(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		OutputBuffer_t1331609326 * L_26 = ___output0;
		bool L_27 = FastEncoder_SafeToWriteTo_m1936575802(__this, L_26, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_27));
		goto IL_00be;
	}

IL_00bd:
	{
		G_B10_0 = 0;
	}

IL_00be:
	{
		V_2 = (bool)G_B10_0;
		bool L_28 = V_2;
		if (L_28)
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.FastEncoder::InputAvailable(Mapbox.IO.Compression.DeflateInput)
extern "C"  bool FastEncoder_InputAvailable_m3364481937 (FastEncoder_t887805019 * __this, DeflateInput_t3892891873 * ___input0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		DeflateInput_t3892891873 * L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1 = DeflateInput_get_Count_m4083463914(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = FastEncoder_get_BytesInHistory_m1388724732(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Mapbox.IO.Compression.FastEncoder::SafeToWriteTo(Mapbox.IO.Compression.OutputBuffer)
extern "C"  bool FastEncoder_SafeToWriteTo_m1936575802 (FastEncoder_t887805019 * __this, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		OutputBuffer_t1331609326 * L_0 = ___output0;
		NullCheck(L_0);
		int32_t L_1 = OutputBuffer_get_FreeBytes_m679034642(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteEndOfBlock(Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteEndOfBlock_m1363013709 (FastEncoder_t887805019 * __this, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoder_WriteEndOfBlock_m1363013709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_0 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_FastEncoderLiteralCodeInfo_2();
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)256);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		uint32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)L_3&(int32_t)((int32_t)31)));
		OutputBuffer_t1331609326 * L_4 = ___output0;
		int32_t L_5 = V_1;
		uint32_t L_6 = V_0;
		NullCheck(L_4);
		OutputBuffer_WriteBits_m1241582760(L_4, L_5, ((int32_t)((uint32_t)L_6>>5)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteMatch(System.Int32,System.Int32,Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteMatch_m2384169271 (RuntimeObject * __this /* static, unused */, int32_t ___matchLen0, int32_t ___matchPos1, OutputBuffer_t1331609326 * ___output2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoder_WriteMatch_m2384169271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___matchLen0;
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___matchLen0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)258)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)G_B3_0, _stringLiteral3499559529, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_2 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_FastEncoderLiteralCodeInfo_2();
		int32_t L_3 = ___matchLen0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)254), (int32_t)L_3));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		uint32_t L_6 = V_0;
		V_1 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)));
		int32_t L_7 = V_1;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0), _stringLiteral924363382, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		OutputBuffer_t1331609326 * L_10 = ___output2;
		int32_t L_11 = V_1;
		uint32_t L_12 = V_0;
		NullCheck(L_10);
		OutputBuffer_WriteBits_m1241582760(L_10, L_11, ((int32_t)((uint32_t)L_12>>5)), /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_005b:
	{
		OutputBuffer_t1331609326 * L_13 = ___output2;
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		OutputBuffer_WriteBits_m1241582760(L_13, ((int32_t)16), ((int32_t)((int32_t)((int32_t)((uint32_t)L_14>>5))&(int32_t)((int32_t)65535))), /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_15 = ___output2;
		int32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		NullCheck(L_15);
		OutputBuffer_WriteBits_m1241582760(L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)16))), ((int32_t)((uint32_t)L_17>>((int32_t)21))), /*hidden argument*/NULL);
	}

IL_007e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_18 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_FastEncoderDistanceCodeInfo_3();
		int32_t L_19 = ___matchPos1;
		int32_t L_20 = FastEncoderStatics_GetSlot_m3628578944(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_21 = L_20;
		uint32_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = L_22;
		OutputBuffer_t1331609326 * L_23 = ___output2;
		uint32_t L_24 = V_0;
		uint32_t L_25 = V_0;
		NullCheck(L_23);
		OutputBuffer_WriteBits_m1241582760(L_23, ((int32_t)((int32_t)L_24&(int32_t)((int32_t)15))), ((int32_t)((uint32_t)L_25>>8)), /*hidden argument*/NULL);
		uint32_t L_26 = V_0;
		V_2 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_26>>4))&(int32_t)((int32_t)15)));
		int32_t L_27 = V_2;
		V_4 = (bool)((!(((uint32_t)L_27) <= ((uint32_t)0)))? 1 : 0);
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00bd;
		}
	}
	{
		OutputBuffer_t1331609326 * L_29 = ___output2;
		int32_t L_30 = V_2;
		int32_t L_31 = ___matchPos1;
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_32 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_BitMask_4();
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_29);
		OutputBuffer_WriteBits_m1241582760(L_29, L_30, ((int32_t)((int32_t)L_31&(int32_t)L_35)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteChar(System.Byte,Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteChar_m2865419403 (RuntimeObject * __this /* static, unused */, uint8_t ___b0, OutputBuffer_t1331609326 * ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoder_WriteChar_m2865419403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_0 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_FastEncoderLiteralCodeInfo_2();
		uint8_t L_1 = ___b0;
		NullCheck(L_0);
		uint8_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		OutputBuffer_t1331609326 * L_4 = ___output1;
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_0;
		NullCheck(L_4);
		OutputBuffer_WriteBits_m1241582760(L_4, ((int32_t)((int32_t)L_5&(int32_t)((int32_t)31))), ((int32_t)((uint32_t)L_6>>5)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoder::WriteDeflatePreamble(Mapbox.IO.Compression.OutputBuffer)
extern "C"  void FastEncoder_WriteDeflatePreamble_m2514809501 (RuntimeObject * __this /* static, unused */, OutputBuffer_t1331609326 * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoder_WriteDeflatePreamble_m2514809501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OutputBuffer_t1331609326 * L_0 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_FastEncoderTreeStructureData_0();
		ByteU5BU5D_t4116647657* L_2 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_FastEncoderTreeStructureData_0();
		NullCheck(L_2);
		NullCheck(L_0);
		OutputBuffer_WriteBytes_m2091034451(L_0, L_1, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), /*hidden argument*/NULL);
		OutputBuffer_t1331609326 * L_3 = ___output0;
		NullCheck(L_3);
		OutputBuffer_WriteBits_m1241582760(L_3, ((int32_t)9), ((int32_t)34), /*hidden argument*/NULL);
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
// System.Void Mapbox.IO.Compression.FastEncoderStatics::.cctor()
extern "C"  void FastEncoderStatics__cctor_m3772919552 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderStatics__cctor_m3772919552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)98)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____5001D1286D6CE39FFA3E67C66D5D68A487F49D0D_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->set_FastEncoderTreeStructureData_0(L_0);
		ByteU5BU5D_t4116647657* L_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)98)));
		RuntimeFieldHandle_t1871169219  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____345AD00C4B31ADE2765BCF63BC137F7F7E6819B8_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->set_BFinalFastEncoderTreeStructureData_1(L_2);
		UInt32U5BU5D_t2770800703* L_4 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)513)));
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____C0C10EC6AF4A4101F894B153E1CD493ADC01A67F_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->set_FastEncoderLiteralCodeInfo_2(L_4);
		UInt32U5BU5D_t2770800703* L_6 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32)));
		RuntimeFieldHandle_t1871169219  L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____6A94F0C3DCA389344CEDB99F171FA1E092E842E6_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->set_FastEncoderDistanceCodeInfo_3(L_6);
		UInt32U5BU5D_t2770800703* L_8 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16)));
		RuntimeFieldHandle_t1871169219  L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____8ED4E99B936B26A09EDFAB9E336CF75F4913B454_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->set_BitMask_4(L_8);
		ByteU5BU5D_t4116647657* L_10 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29)));
		RuntimeFieldHandle_t1871169219  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->set_ExtraLengthBits_5(L_10);
		ByteU5BU5D_t4116647657* L_12 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32)));
		RuntimeFieldHandle_t1871169219  L_13 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____2492606636F4A4666E0D617B51116A5A68539881_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_12, L_13, /*hidden argument*/NULL);
		((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->set_ExtraDistanceBits_6(L_12);
		((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->set_distLookup_7(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512))));
		V_0 = 0;
		V_1 = 0;
		goto IL_00e8;
	}

IL_00ba:
	{
		V_2 = 0;
		goto IL_00d0;
	}

IL_00bf:
	{
		ByteU5BU5D_t4116647657* L_14 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_distLookup_7();
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)L_17))));
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_00d0:
	{
		int32_t L_19 = V_2;
		ByteU5BU5D_t4116647657* L_20 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_ExtraDistanceBits_6();
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_23&(int32_t)((int32_t)31)))))))? 1 : 0);
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00e8:
	{
		int32_t L_26 = V_1;
		V_4 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_27 = V_4;
		if (L_27)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_28 = V_0;
		V_0 = ((int32_t)((int32_t)L_28>>(int32_t)7));
		goto IL_0135;
	}

IL_00f9:
	{
		V_5 = 0;
		goto IL_0118;
	}

IL_00ff:
	{
		ByteU5BU5D_t4116647657* L_29 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_distLookup_7();
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)256), (int32_t)L_31))), (uint8_t)(((int32_t)((uint8_t)L_32))));
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0118:
	{
		int32_t L_34 = V_5;
		ByteU5BU5D_t4116647657* L_35 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_ExtraDistanceBits_6();
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_6 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)7))&(int32_t)((int32_t)31)))))))? 1 : 0);
		bool L_39 = V_6;
		if (L_39)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_0135:
	{
		int32_t L_41 = V_1;
		V_7 = (bool)((((int32_t)L_41) < ((int32_t)((int32_t)30)))? 1 : 0);
		bool L_42 = V_7;
		if (L_42)
		{
			goto IL_00f9;
		}
	}
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderStatics::GetSlot(System.Int32)
extern "C"  int32_t FastEncoderStatics_GetSlot_m3628578944 (RuntimeObject * __this /* static, unused */, int32_t ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderStatics_GetSlot_m3628578944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* G_B2_0 = NULL;
	ByteU5BU5D_t4116647657* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_t4116647657* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_0 = ((FastEncoderStatics_t1128548993_StaticFields*)il2cpp_codegen_static_fields_for(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var))->get_distLookup_7();
		int32_t L_1 = ___pos0;
		G_B1_0 = L_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)256))))
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___pos0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)256), (int32_t)((int32_t)((int32_t)L_2>>(int32_t)7))));
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0019:
	{
		int32_t L_3 = ___pos0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		NullCheck(G_B3_1);
		int32_t L_4 = G_B3_0;
		uint8_t L_5 = (G_B3_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderStatics::BitReverse(System.UInt32,System.Int32)
extern "C"  uint32_t FastEncoderStatics_BitReverse_m4129531689 (RuntimeObject * __this /* static, unused */, uint32_t ___code0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderStatics_BitReverse_m4129531689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___length1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___length1;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)G_B3_0, _stringLiteral3062525967, /*hidden argument*/NULL);
	}

IL_001d:
	{
		uint32_t L_2 = V_0;
		uint32_t L_3 = ___code0;
		V_0 = ((int32_t)((int32_t)L_2|(int32_t)((int32_t)((int32_t)L_3&(int32_t)1))));
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4<<(int32_t)1));
		uint32_t L_5 = ___code0;
		___code0 = ((int32_t)((uint32_t)L_5>>1));
		int32_t L_6 = ___length1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		___length1 = L_7;
		V_1 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_001d;
		}
	}
	{
		uint32_t L_9 = V_0;
		V_2 = ((int32_t)((uint32_t)L_9>>1));
		goto IL_0041;
	}

IL_0041:
	{
		uint32_t L_10 = V_2;
		return L_10;
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
// System.Void Mapbox.IO.Compression.FastEncoderWindow::.ctor()
extern "C"  void FastEncoderWindow__ctor_m1540513573 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		FastEncoderWindow_ResetWindow_m3039115004(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_BytesAvailable()
extern "C"  int32_t FastEncoderWindow_get_BytesAvailable_m1185252922 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderWindow_get_BytesAvailable_m1185252922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bufEnd_2();
		int32_t L_1 = __this->get_bufPos_1();
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral1566591766, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_bufEnd_2();
		int32_t L_3 = __this->get_bufPos_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		goto IL_002f;
	}

IL_002f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Mapbox.IO.Compression.DeflateInput Mapbox.IO.Compression.FastEncoderWindow::get_UnprocessedInput()
extern "C"  DeflateInput_t3892891873 * FastEncoderWindow_get_UnprocessedInput_m1674119125 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderWindow_get_UnprocessedInput_m1674119125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DeflateInput_t3892891873 * V_0 = NULL;
	DeflateInput_t3892891873 * V_1 = NULL;
	{
		DeflateInput_t3892891873 * L_0 = (DeflateInput_t3892891873 *)il2cpp_codegen_object_new(DeflateInput_t3892891873_il2cpp_TypeInfo_var);
		DeflateInput__ctor_m1146015750(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DeflateInput_t3892891873 * L_1 = V_0;
		ByteU5BU5D_t4116647657* L_2 = __this->get_window_0();
		NullCheck(L_1);
		DeflateInput_set_Buffer_m1391783707(L_1, L_2, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_3 = V_0;
		int32_t L_4 = __this->get_bufPos_1();
		NullCheck(L_3);
		DeflateInput_set_StartIndex_m2705214531(L_3, L_4, /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_5 = V_0;
		int32_t L_6 = __this->get_bufEnd_2();
		int32_t L_7 = __this->get_bufPos_1();
		NullCheck(L_5);
		DeflateInput_set_Count_m1828264908(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), /*hidden argument*/NULL);
		DeflateInput_t3892891873 * L_8 = V_0;
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		DeflateInput_t3892891873 * L_9 = V_1;
		return L_9;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::FlushWindow()
extern "C"  void FastEncoderWindow_FlushWindow_m782448992 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method)
{
	{
		FastEncoderWindow_ResetWindow_m3039115004(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::ResetWindow()
extern "C"  void FastEncoderWindow_ResetWindow_m3039115004 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderWindow_ResetWindow_m3039115004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_window_0(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16646))));
		__this->set_prev_3(((UInt16U5BU5D_t3326319531*)SZArrayNew(UInt16U5BU5D_t3326319531_il2cpp_TypeInfo_var, (uint32_t)((int32_t)8450))));
		__this->set_lookup_4(((UInt16U5BU5D_t3326319531*)SZArrayNew(UInt16U5BU5D_t3326319531_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048))));
		__this->set_bufPos_1(((int32_t)8192));
		int32_t L_0 = __this->get_bufPos_1();
		__this->set_bufEnd_2(L_0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::get_FreeWindowSpace()
extern "C"  int32_t FastEncoderWindow_get_FreeWindowSpace_m3065433127 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bufEnd_2();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)16384), (int32_t)L_0));
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::CopyBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void FastEncoderWindow_CopyBytes_m3554926989 (FastEncoderWindow_t57591660 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___inputBuffer0;
		int32_t L_1 = ___startIndex1;
		ByteU5BU5D_t4116647657* L_2 = __this->get_window_0();
		int32_t L_3 = __this->get_bufEnd_2();
		int32_t L_4 = ___count2;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, (RuntimeArray *)(RuntimeArray *)L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_bufEnd_2();
		int32_t L_6 = ___count2;
		__this->set_bufEnd_2(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)));
		return;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::MoveWindows()
extern "C"  void FastEncoderWindow_MoveWindows_m194098449 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderWindow_MoveWindows_m194098449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->get_bufPos_1();
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_0) == ((int32_t)((int32_t)16384)))? 1 : 0), _stringLiteral4069598580, /*hidden argument*/NULL);
		FastEncoderWindow_VerifyHashes_m2706053389(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = __this->get_window_0();
		int32_t L_2 = __this->get_bufPos_1();
		ByteU5BU5D_t4116647657* L_3 = __this->get_window_0();
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)8192))), (RuntimeArray *)(RuntimeArray *)L_3, 0, ((int32_t)8192), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0081;
	}

IL_0048:
	{
		UInt16U5BU5D_t3326319531* L_4 = __this->get_lookup_4();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)8192)));
		int32_t L_8 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		UInt16U5BU5D_t3326319531* L_10 = __this->get_lookup_4();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint16_t)0);
		goto IL_007c;
	}

IL_0070:
	{
		UInt16U5BU5D_t3326319531* L_12 = __this->get_lookup_4();
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint16_t)(((int32_t)((uint16_t)L_14))));
	}

IL_007c:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0081:
	{
		int32_t L_16 = V_0;
		V_3 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)2048)))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_0048;
		}
	}
	{
		V_0 = 0;
		goto IL_00d2;
	}

IL_0091:
	{
		UInt16U5BU5D_t3326319531* L_18 = __this->get_prev_3();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint16_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((uint64_t)L_21))), (int64_t)(((int64_t)((int64_t)((int32_t)8192))))));
		int64_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int64_t)L_22) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00c0;
		}
	}
	{
		UInt16U5BU5D_t3326319531* L_24 = __this->get_prev_3();
		int32_t L_25 = V_0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint16_t)0);
		goto IL_00cd;
	}

IL_00c0:
	{
		UInt16U5BU5D_t3326319531* L_26 = __this->get_prev_3();
		int32_t L_27 = V_0;
		int64_t L_28 = V_4;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint16_t)(((int32_t)((uint16_t)L_28))));
	}

IL_00cd:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00d2:
	{
		int32_t L_30 = V_0;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)8192)))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0091;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_32 = __this->get_window_0();
		ByteU5BU5D_t4116647657* L_33 = __this->get_window_0();
		NullCheck(L_33);
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_32, ((int32_t)8192), ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))), (int32_t)((int32_t)8192))), /*hidden argument*/NULL);
		FastEncoderWindow_VerifyHashes_m2706053389(__this, /*hidden argument*/NULL);
		__this->set_bufPos_1(((int32_t)8192));
		int32_t L_34 = __this->get_bufPos_1();
		__this->set_bufEnd_2(L_34);
		return;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::HashValue(System.UInt32,System.Byte)
extern "C"  uint32_t FastEncoderWindow_HashValue_m371185832 (FastEncoderWindow_t57591660 * __this, uint32_t ___hash0, uint8_t ___b1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___hash0;
		uint8_t L_1 = ___b1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)4))^(int32_t)L_1));
		goto IL_0009;
	}

IL_0009:
	{
		uint32_t L_2 = V_0;
		return L_2;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::InsertString(System.UInt32&)
extern "C"  uint32_t FastEncoderWindow_InsertString_m3040954916 (FastEncoderWindow_t57591660 * __this, uint32_t* ___hash0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t* L_0 = ___hash0;
		uint32_t* L_1 = ___hash0;
		ByteU5BU5D_t4116647657* L_2 = __this->get_window_0();
		int32_t L_3 = __this->get_bufPos_1();
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2));
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		uint32_t L_6 = FastEncoderWindow_HashValue_m371185832(__this, (*((uint32_t*)L_1)), L_5, /*hidden argument*/NULL);
		*((int32_t*)(L_0)) = (int32_t)L_6;
		UInt16U5BU5D_t3326319531* L_7 = __this->get_lookup_4();
		uint32_t* L_8 = ___hash0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)((int32_t)(*((uint32_t*)L_8))&(int32_t)((int32_t)2047)));
		uint16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		UInt16U5BU5D_t3326319531* L_11 = __this->get_lookup_4();
		uint32_t* L_12 = ___hash0;
		int32_t L_13 = __this->get_bufPos_1();
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)(*((uint32_t*)L_12))&(int32_t)((int32_t)2047)))), (uint16_t)(((int32_t)((uint16_t)L_13))));
		UInt16U5BU5D_t3326319531* L_14 = __this->get_prev_3();
		int32_t L_15 = __this->get_bufPos_1();
		uint32_t L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_15&(int32_t)((int32_t)8191)))), (uint16_t)(((int32_t)((uint16_t)L_16))));
		uint32_t L_17 = V_0;
		V_1 = L_17;
		goto IL_0059;
	}

IL_0059:
	{
		uint32_t L_18 = V_1;
		return L_18;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::InsertStrings(System.UInt32&,System.Int32)
extern "C"  void FastEncoderWindow_InsertStrings_m1285311058 (FastEncoderWindow_t57591660 * __this, uint32_t* ___hash0, int32_t ___matchLen1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderWindow_InsertStrings_m1285311058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___matchLen1;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0), _stringLiteral3337446052, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_bufEnd_2();
		int32_t L_2 = __this->get_bufPos_1();
		int32_t L_3 = ___matchLen1;
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = __this->get_bufPos_1();
		int32_t L_6 = ___matchLen1;
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))));
		goto IL_0064;
	}

IL_003b:
	{
		goto IL_0056;
	}

IL_003e:
	{
		uint32_t* L_7 = ___hash0;
		FastEncoderWindow_InsertString_m3040954916(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_bufPos_1();
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
	}

IL_0056:
	{
		int32_t L_9 = ___matchLen1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
		___matchLen1 = L_10;
		V_1 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_003e;
		}
	}
	{
	}

IL_0064:
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.FastEncoderWindow::GetNextSymbolOrMatch(Mapbox.IO.Compression.Match)
extern "C"  bool FastEncoderWindow_GetNextSymbolOrMatch_m2835047593 (FastEncoderWindow_t57591660 * __this, Match_t352475233 * ___match0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderWindow_GetNextSymbolOrMatch_m2835047593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	FastEncoderWindow_t57591660 * G_B17_2 = NULL;
	int32_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	FastEncoderWindow_t57591660 * G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t* G_B18_1 = NULL;
	int32_t G_B18_2 = 0;
	FastEncoderWindow_t57591660 * G_B18_3 = NULL;
	{
		int32_t L_0 = __this->get_bufPos_1();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)8192))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->get_bufPos_1();
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)16384)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)G_B3_0, _stringLiteral860162242, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = __this->get_window_0();
		int32_t L_3 = __this->get_bufPos_1();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		uint32_t L_6 = FastEncoderWindow_HashValue_m371185832(__this, 0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		uint32_t L_7 = V_0;
		ByteU5BU5D_t4116647657* L_8 = __this->get_window_0();
		int32_t L_9 = __this->get_bufPos_1();
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		uint32_t L_12 = FastEncoderWindow_HashValue_m371185832(__this, L_7, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		V_2 = 0;
		FastEncoderWindow_VerifyHashes_m2706053389(__this, /*hidden argument*/NULL);
		int32_t L_13 = __this->get_bufEnd_2();
		int32_t L_14 = __this->get_bufPos_1();
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_14))) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		V_1 = 0;
		goto IL_00cd;
	}

IL_007b:
	{
		uint32_t L_16 = FastEncoderWindow_InsertString_m3040954916(__this, (&V_0), /*hidden argument*/NULL);
		V_4 = L_16;
		int32_t L_17 = V_4;
		V_5 = (bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_19 = V_4;
		int32_t L_20 = FastEncoderWindow_FindMatch_m1610996658(__this, L_19, (&V_2), ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = __this->get_bufPos_1();
		int32_t L_22 = V_1;
		int32_t L_23 = __this->get_bufEnd_2();
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22))) > ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_25 = __this->get_bufEnd_2();
		int32_t L_26 = __this->get_bufPos_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26));
	}

IL_00c5:
	{
		goto IL_00cc;
	}

IL_00c8:
	{
		V_1 = 0;
	}

IL_00cc:
	{
	}

IL_00cd:
	{
		int32_t L_27 = V_1;
		V_7 = (bool)((((int32_t)L_27) < ((int32_t)3))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0108;
		}
	}
	{
		Match_t352475233 * L_29 = ___match0;
		NullCheck(L_29);
		Match_set_State_m427330782(L_29, 1, /*hidden argument*/NULL);
		Match_t352475233 * L_30 = ___match0;
		ByteU5BU5D_t4116647657* L_31 = __this->get_window_0();
		int32_t L_32 = __this->get_bufPos_1();
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_30);
		Match_set_Symbol_m2642040290(L_30, L_34, /*hidden argument*/NULL);
		int32_t L_35 = __this->get_bufPos_1();
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
		goto IL_0240;
	}

IL_0108:
	{
		int32_t L_36 = __this->get_bufPos_1();
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		int32_t L_37 = V_1;
		V_8 = (bool)((((int32_t)((((int32_t)L_37) > ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_021b;
		}
	}
	{
		V_10 = 0;
		uint32_t L_39 = FastEncoderWindow_InsertString_m3040954916(__this, (&V_0), /*hidden argument*/NULL);
		V_11 = L_39;
		int32_t L_40 = V_11;
		V_12 = (bool)((!(((uint32_t)L_40) <= ((uint32_t)0)))? 1 : 0);
		bool L_41 = V_12;
		if (!L_41)
		{
			goto IL_0183;
		}
	}
	{
		int32_t L_42 = V_11;
		int32_t L_43 = V_1;
		G_B16_0 = (&V_10);
		G_B16_1 = L_42;
		G_B16_2 = __this;
		if ((((int32_t)L_43) < ((int32_t)4)))
		{
			G_B17_0 = (&V_10);
			G_B17_1 = L_42;
			G_B17_2 = __this;
			goto IL_014d;
		}
	}
	{
		G_B18_0 = 8;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_014f;
	}

IL_014d:
	{
		G_B18_0 = ((int32_t)32);
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_014f:
	{
		NullCheck(G_B18_3);
		int32_t L_44 = FastEncoderWindow_FindMatch_m1610996658(G_B18_3, G_B18_2, G_B18_1, G_B18_0, ((int32_t)32), /*hidden argument*/NULL);
		V_9 = L_44;
		int32_t L_45 = __this->get_bufPos_1();
		int32_t L_46 = V_9;
		int32_t L_47 = __this->get_bufEnd_2();
		V_13 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46))) > ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_49 = __this->get_bufEnd_2();
		int32_t L_50 = __this->get_bufPos_1();
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50));
	}

IL_0180:
	{
		goto IL_0188;
	}

IL_0183:
	{
		V_9 = 0;
	}

IL_0188:
	{
		int32_t L_51 = V_9;
		int32_t L_52 = V_1;
		V_14 = (bool)((((int32_t)L_51) > ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_14;
		if (!L_53)
		{
			goto IL_01e2;
		}
	}
	{
		Match_t352475233 * L_54 = ___match0;
		NullCheck(L_54);
		Match_set_State_m427330782(L_54, 3, /*hidden argument*/NULL);
		Match_t352475233 * L_55 = ___match0;
		ByteU5BU5D_t4116647657* L_56 = __this->get_window_0();
		int32_t L_57 = __this->get_bufPos_1();
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1));
		uint8_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_55);
		Match_set_Symbol_m2642040290(L_55, L_59, /*hidden argument*/NULL);
		Match_t352475233 * L_60 = ___match0;
		int32_t L_61 = V_10;
		NullCheck(L_60);
		Match_set_Position_m2298100821(L_60, L_61, /*hidden argument*/NULL);
		Match_t352475233 * L_62 = ___match0;
		int32_t L_63 = V_9;
		NullCheck(L_62);
		Match_set_Length_m4038612315(L_62, L_63, /*hidden argument*/NULL);
		int32_t L_64 = __this->get_bufPos_1();
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1)));
		int32_t L_65 = V_9;
		V_1 = L_65;
		int32_t L_66 = V_1;
		FastEncoderWindow_InsertStrings_m1285311058(__this, (&V_0), L_66, /*hidden argument*/NULL);
		goto IL_0218;
	}

IL_01e2:
	{
		Match_t352475233 * L_67 = ___match0;
		NullCheck(L_67);
		Match_set_State_m427330782(L_67, 2, /*hidden argument*/NULL);
		Match_t352475233 * L_68 = ___match0;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		Match_set_Position_m2298100821(L_68, L_69, /*hidden argument*/NULL);
		Match_t352475233 * L_70 = ___match0;
		int32_t L_71 = V_1;
		NullCheck(L_70);
		Match_set_Length_m4038612315(L_70, L_71, /*hidden argument*/NULL);
		int32_t L_72 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)1));
		int32_t L_73 = __this->get_bufPos_1();
		__this->set_bufPos_1(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1)));
		int32_t L_74 = V_1;
		FastEncoderWindow_InsertStrings_m1285311058(__this, (&V_0), L_74, /*hidden argument*/NULL);
	}

IL_0218:
	{
		goto IL_023f;
	}

IL_021b:
	{
		Match_t352475233 * L_75 = ___match0;
		NullCheck(L_75);
		Match_set_State_m427330782(L_75, 2, /*hidden argument*/NULL);
		Match_t352475233 * L_76 = ___match0;
		int32_t L_77 = V_2;
		NullCheck(L_76);
		Match_set_Position_m2298100821(L_76, L_77, /*hidden argument*/NULL);
		Match_t352475233 * L_78 = ___match0;
		int32_t L_79 = V_1;
		NullCheck(L_78);
		Match_set_Length_m4038612315(L_78, L_79, /*hidden argument*/NULL);
		int32_t L_80 = V_1;
		FastEncoderWindow_InsertStrings_m1285311058(__this, (&V_0), L_80, /*hidden argument*/NULL);
	}

IL_023f:
	{
	}

IL_0240:
	{
		int32_t L_81 = __this->get_bufPos_1();
		V_15 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)16384)))? 1 : 0);
		bool L_82 = V_15;
		if (!L_82)
		{
			goto IL_025c;
		}
	}
	{
		FastEncoderWindow_MoveWindows_m194098449(__this, /*hidden argument*/NULL);
	}

IL_025c:
	{
		V_16 = (bool)1;
		goto IL_0261;
	}

IL_0261:
	{
		bool L_83 = V_16;
		return L_83;
	}
}
// System.Int32 Mapbox.IO.Compression.FastEncoderWindow::FindMatch(System.Int32,System.Int32&,System.Int32,System.Int32)
extern "C"  int32_t FastEncoderWindow_FindMatch_m1610996658 (FastEncoderWindow_t57591660 * __this, int32_t ___search0, int32_t* ___matchPos1, int32_t ___searchDepth2, int32_t ___niceLength3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderWindow_FindMatch_m1610996658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B27_0 = 0;
	{
		int32_t L_0 = __this->get_bufPos_1();
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_bufPos_1();
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)((int32_t)16384)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)G_B3_0, _stringLiteral1101334722, /*hidden argument*/NULL);
		int32_t L_2 = ___search0;
		int32_t L_3 = __this->get_bufPos_1();
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0), _stringLiteral3424990266, /*hidden argument*/NULL);
		int32_t L_4 = ___search0;
		uint32_t L_5 = FastEncoderWindow_RecalculateHash_m1858464321(__this, L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_bufPos_1();
		uint32_t L_7 = FastEncoderWindow_RecalculateHash_m1858464321(__this, L_6, /*hidden argument*/NULL);
		Debug_Assert_m3785750761(NULL /*static, unused*/, (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0), /*hidden argument*/NULL);
		V_0 = 0;
		V_1 = 0;
		int32_t L_8 = __this->get_bufPos_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)8192)));
		int32_t L_9 = V_2;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2906733707, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_10 = __this->get_window_0();
		int32_t L_11 = __this->get_bufPos_1();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		goto IL_0174;
	}

IL_008a:
	{
		int32_t L_14 = ___search0;
		uint32_t L_15 = FastEncoderWindow_RecalculateHash_m1858464321(__this, L_14, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_bufPos_1();
		uint32_t L_17 = FastEncoderWindow_RecalculateHash_m1858464321(__this, L_16, /*hidden argument*/NULL);
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0), _stringLiteral3379915481, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_18 = __this->get_window_0();
		int32_t L_19 = ___search0;
		int32_t L_20 = V_0;
		NullCheck(L_18);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20));
		uint8_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		uint8_t L_23 = V_3;
		V_4 = (bool)((((int32_t)L_22) == ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_4;
		if (!L_24)
		{
			goto IL_0135;
		}
	}
	{
		V_5 = 0;
		goto IL_00f4;
	}

IL_00c4:
	{
		ByteU5BU5D_t4116647657* L_25 = __this->get_window_0();
		int32_t L_26 = __this->get_bufPos_1();
		int32_t L_27 = V_5;
		NullCheck(L_25);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27));
		uint8_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_t4116647657* L_30 = __this->get_window_0();
		int32_t L_31 = ___search0;
		int32_t L_32 = V_5;
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_6 = (bool)((((int32_t)((((int32_t)L_29) == ((int32_t)L_34))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0103;
	}

IL_00ed:
	{
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00f4:
	{
		int32_t L_37 = V_5;
		V_7 = (bool)((((int32_t)L_37) < ((int32_t)((int32_t)258)))? 1 : 0);
		bool L_38 = V_7;
		if (L_38)
		{
			goto IL_00c4;
		}
	}

IL_0103:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_0;
		V_8 = (bool)((((int32_t)L_39) > ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_8;
		if (!L_41)
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_42 = V_5;
		V_0 = L_42;
		int32_t L_43 = ___search0;
		V_1 = L_43;
		int32_t L_44 = V_5;
		V_9 = (bool)((((int32_t)L_44) > ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0122;
		}
	}
	{
		goto IL_0181;
	}

IL_0122:
	{
		ByteU5BU5D_t4116647657* L_46 = __this->get_window_0();
		int32_t L_47 = __this->get_bufPos_1();
		int32_t L_48 = V_5;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
		uint8_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_3 = L_50;
	}

IL_0134:
	{
	}

IL_0135:
	{
		int32_t L_51 = ___searchDepth2;
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		___searchDepth2 = L_52;
		V_10 = (bool)((((int32_t)L_52) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0147;
		}
	}
	{
		goto IL_0181;
	}

IL_0147:
	{
		UInt16U5BU5D_t3326319531* L_54 = __this->get_prev_3();
		int32_t L_55 = ___search0;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)((int32_t)L_55&(int32_t)((int32_t)8191)));
		uint16_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		int32_t L_58 = ___search0;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_57) < ((int32_t)L_58))? 1 : 0), _stringLiteral2339251013, /*hidden argument*/NULL);
		UInt16U5BU5D_t3326319531* L_59 = __this->get_prev_3();
		int32_t L_60 = ___search0;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)((int32_t)L_60&(int32_t)((int32_t)8191)));
		uint16_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		___search0 = L_62;
	}

IL_0174:
	{
		int32_t L_63 = ___search0;
		int32_t L_64 = V_2;
		V_11 = (bool)((((int32_t)L_63) > ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_11;
		if (L_65)
		{
			goto IL_008a;
		}
	}

IL_0181:
	{
		int32_t* L_66 = ___matchPos1;
		int32_t L_67 = __this->get_bufPos_1();
		int32_t L_68 = V_1;
		*((int32_t*)(L_66)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68)), (int32_t)1));
		int32_t L_69 = V_0;
		if ((!(((uint32_t)L_69) == ((uint32_t)3))))
		{
			goto IL_019f;
		}
	}
	{
		int32_t* L_70 = ___matchPos1;
		G_B22_0 = ((((int32_t)((((int32_t)(*((int32_t*)L_70))) < ((int32_t)((int32_t)16384)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01a0;
	}

IL_019f:
	{
		G_B22_0 = 0;
	}

IL_01a0:
	{
		V_12 = (bool)G_B22_0;
		bool L_71 = V_12;
		if (!L_71)
		{
			goto IL_01ac;
		}
	}
	{
		V_13 = 0;
		goto IL_01cc;
	}

IL_01ac:
	{
		int32_t L_72 = V_0;
		if ((((int32_t)L_72) < ((int32_t)3)))
		{
			goto IL_01bb;
		}
	}
	{
		int32_t* L_73 = ___matchPos1;
		G_B27_0 = ((((int32_t)(*((int32_t*)L_73))) < ((int32_t)((int32_t)8192)))? 1 : 0);
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B27_0 = 1;
	}

IL_01bc:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)G_B27_0, _stringLiteral2675743109, /*hidden argument*/NULL);
		int32_t L_74 = V_0;
		V_13 = L_74;
		goto IL_01cc;
	}

IL_01cc:
	{
		int32_t L_75 = V_13;
		return L_75;
	}
}
// System.Void Mapbox.IO.Compression.FastEncoderWindow::VerifyHashes()
extern "C"  void FastEncoderWindow_VerifyHashes_m2706053389 (FastEncoderWindow_t57591660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastEncoderWindow_VerifyHashes_m2706053389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		goto IL_0083;
	}

IL_0005:
	{
		UInt16U5BU5D_t3326319531* L_0 = __this->get_lookup_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		goto IL_0063;
	}

IL_0011:
	{
		uint16_t L_4 = V_1;
		uint32_t L_5 = FastEncoderWindow_RecalculateHash_m1858464321(__this, L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int64_t)(((int64_t)((uint64_t)L_5)))) == ((int64_t)(((int64_t)((int64_t)L_6)))))? 1 : 0), _stringLiteral1625256389, /*hidden argument*/NULL);
		UInt16U5BU5D_t3326319531* L_7 = __this->get_prev_3();
		uint16_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)((int32_t)L_8&(int32_t)((int32_t)8191)));
		uint16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		int32_t L_11 = __this->get_bufPos_1();
		uint16_t L_12 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12))) < ((int32_t)((int32_t)8192)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		goto IL_007e;
	}

IL_0051:
	{
		uint16_t L_14 = V_2;
		uint16_t L_15 = V_1;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0), _stringLiteral4250947240, /*hidden argument*/NULL);
		uint16_t L_16 = V_2;
		V_1 = L_16;
	}

IL_0063:
	{
		uint16_t L_17 = V_1;
		if (!L_17)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_18 = __this->get_bufPos_1();
		uint16_t L_19 = V_1;
		G_B8_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19))) < ((int32_t)((int32_t)8192)))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B8_0 = 0;
	}

IL_0078:
	{
		V_4 = (bool)G_B8_0;
		bool L_20 = V_4;
		if (L_20)
		{
			goto IL_0011;
		}
	}

IL_007e:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_22 = V_0;
		V_5 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)2048)))? 1 : 0);
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.UInt32 Mapbox.IO.Compression.FastEncoderWindow::RecalculateHash(System.Int32)
extern "C"  uint32_t FastEncoderWindow_RecalculateHash_m1858464321 (FastEncoderWindow_t57591660 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_window_0();
		int32_t L_1 = ___position0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_t4116647657* L_4 = __this->get_window_0();
		int32_t L_5 = ___position0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_t4116647657* L_8 = __this->get_window_0();
		int32_t L_9 = ___position0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)8))^(int32_t)((int32_t)((int32_t)L_7<<(int32_t)4))))^(int32_t)L_11))&(int32_t)((int32_t)2047)));
		goto IL_002c;
	}

IL_002c:
	{
		uint32_t L_12 = V_0;
		return L_12;
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
// System.Void Mapbox.IO.Compression.GZipDecoder::.ctor()
extern "C"  void GZipDecoder__ctor_m3364867135 (GZipDecoder_t3447631347 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		GZipDecoder_Reset_m2007478903(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipDecoder::Reset()
extern "C"  void GZipDecoder_Reset_m2007478903 (GZipDecoder_t3447631347 * __this, const RuntimeMethod* method)
{
	{
		__this->set_gzipHeaderSubstate_0(0);
		__this->set_gzipFooterSubstate_1(((int32_t)15));
		__this->set_expectedCrc32_4(0);
		__this->set_expectedOutputStreamSizeModulo_5(0);
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipDecoder::ReadHeader(Mapbox.IO.Compression.InputBuffer)
extern "C"  bool GZipDecoder_ReadHeader_m2430614649 (GZipDecoder_t3447631347 * __this, InputBuffer_t333709416 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipDecoder_ReadHeader_m2430614649_MetadataUsageId);
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
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	{
		goto IL_03d6;
	}

IL_0006:
	{
		int32_t L_0 = __this->get_gzipHeaderSubstate_0();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0095;
			}
			case 2:
			{
				goto IL_00da;
			}
			case 3:
			{
				goto IL_011c;
			}
			case 4:
			{
				goto IL_014d;
			}
			case 5:
			{
				goto IL_019a;
			}
			case 6:
			{
				goto IL_01bd;
			}
			case 7:
			{
				goto IL_01e0;
			}
			case 8:
			{
				goto IL_0221;
			}
			case 9:
			{
				goto IL_025c;
			}
			case 10:
			{
				goto IL_02af;
			}
			case 11:
			{
				goto IL_0303;
			}
			case 12:
			{
				goto IL_0358;
			}
			case 13:
			{
				goto IL_0395;
			}
			case 14:
			{
				goto IL_03b6;
			}
		}
	}
	{
		goto IL_03ba;
	}

IL_0055:
	{
		InputBuffer_t333709416 * L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3 = InputBuffer_GetBits_m521756373(L_2, 8, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_006d:
	{
		int32_t L_6 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)((int32_t)31)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_008c;
		}
	}
	{
		String_t* L_8 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral178773768, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_9 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_008c:
	{
		__this->set_gzipHeaderSubstate_0(1);
		goto IL_0095;
	}

IL_0095:
	{
		InputBuffer_t333709416 * L_10 = ___input0;
		NullCheck(L_10);
		int32_t L_11 = InputBuffer_GetBits_m521756373(L_10, 8, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		V_5 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00af;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_00af:
	{
		int32_t L_14 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)((int32_t)139)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00d1;
		}
	}
	{
		String_t* L_16 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral178773768, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_17 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_00d1:
	{
		__this->set_gzipHeaderSubstate_0(2);
		goto IL_00da;
	}

IL_00da:
	{
		InputBuffer_t333709416 * L_18 = ___input0;
		NullCheck(L_18);
		int32_t L_19 = InputBuffer_GetBits_m521756373(L_18, 8, /*hidden argument*/NULL);
		V_0 = L_19;
		int32_t L_20 = V_0;
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_00f4;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_00f4:
	{
		int32_t L_22 = V_0;
		V_8 = (bool)((((int32_t)((((int32_t)L_22) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_24 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral3160259006, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_25 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_25, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25);
	}

IL_0112:
	{
		__this->set_gzipHeaderSubstate_0(3);
		goto IL_011c;
	}

IL_011c:
	{
		InputBuffer_t333709416 * L_26 = ___input0;
		NullCheck(L_26);
		int32_t L_27 = InputBuffer_GetBits_m521756373(L_26, 8, /*hidden argument*/NULL);
		V_0 = L_27;
		int32_t L_28 = V_0;
		V_9 = (bool)((((int32_t)L_28) < ((int32_t)0))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_0136;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_0136:
	{
		int32_t L_30 = V_0;
		__this->set_gzip_header_flag_2(L_30);
		__this->set_gzipHeaderSubstate_0(4);
		__this->set_loopCounter_6(0);
		goto IL_014d;
	}

IL_014d:
	{
		V_0 = 0;
		goto IL_017b;
	}

IL_0151:
	{
		InputBuffer_t333709416 * L_31 = ___input0;
		NullCheck(L_31);
		int32_t L_32 = InputBuffer_GetBits_m521756373(L_31, 8, /*hidden argument*/NULL);
		V_0 = L_32;
		int32_t L_33 = V_0;
		V_10 = (bool)((((int32_t)L_33) < ((int32_t)0))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_016c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_016c:
	{
		int32_t L_35 = __this->get_loopCounter_6();
		__this->set_loopCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
	}

IL_017b:
	{
		int32_t L_36 = __this->get_loopCounter_6();
		V_11 = (bool)((((int32_t)L_36) < ((int32_t)4))? 1 : 0);
		bool L_37 = V_11;
		if (L_37)
		{
			goto IL_0151;
		}
	}
	{
		__this->set_gzipHeaderSubstate_0(5);
		__this->set_loopCounter_6(0);
		goto IL_019a;
	}

IL_019a:
	{
		InputBuffer_t333709416 * L_38 = ___input0;
		NullCheck(L_38);
		int32_t L_39 = InputBuffer_GetBits_m521756373(L_38, 8, /*hidden argument*/NULL);
		V_0 = L_39;
		int32_t L_40 = V_0;
		V_12 = (bool)((((int32_t)L_40) < ((int32_t)0))? 1 : 0);
		bool L_41 = V_12;
		if (!L_41)
		{
			goto IL_01b4;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_01b4:
	{
		__this->set_gzipHeaderSubstate_0(6);
		goto IL_01bd;
	}

IL_01bd:
	{
		InputBuffer_t333709416 * L_42 = ___input0;
		NullCheck(L_42);
		int32_t L_43 = InputBuffer_GetBits_m521756373(L_42, 8, /*hidden argument*/NULL);
		V_0 = L_43;
		int32_t L_44 = V_0;
		V_13 = (bool)((((int32_t)L_44) < ((int32_t)0))? 1 : 0);
		bool L_45 = V_13;
		if (!L_45)
		{
			goto IL_01d7;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_01d7:
	{
		__this->set_gzipHeaderSubstate_0(7);
		goto IL_01e0;
	}

IL_01e0:
	{
		int32_t L_46 = __this->get_gzip_header_flag_2();
		V_14 = (bool)((((int32_t)((int32_t)((int32_t)L_46&(int32_t)4))) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_14;
		if (!L_47)
		{
			goto IL_01f7;
		}
	}
	{
		goto IL_02af;
	}

IL_01f7:
	{
		InputBuffer_t333709416 * L_48 = ___input0;
		NullCheck(L_48);
		int32_t L_49 = InputBuffer_GetBits_m521756373(L_48, 8, /*hidden argument*/NULL);
		V_0 = L_49;
		int32_t L_50 = V_0;
		V_15 = (bool)((((int32_t)L_50) < ((int32_t)0))? 1 : 0);
		bool L_51 = V_15;
		if (!L_51)
		{
			goto IL_0211;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_0211:
	{
		int32_t L_52 = V_0;
		__this->set_gzip_header_xlen_3(L_52);
		__this->set_gzipHeaderSubstate_0(8);
		goto IL_0221;
	}

IL_0221:
	{
		InputBuffer_t333709416 * L_53 = ___input0;
		NullCheck(L_53);
		int32_t L_54 = InputBuffer_GetBits_m521756373(L_53, 8, /*hidden argument*/NULL);
		V_0 = L_54;
		int32_t L_55 = V_0;
		V_16 = (bool)((((int32_t)L_55) < ((int32_t)0))? 1 : 0);
		bool L_56 = V_16;
		if (!L_56)
		{
			goto IL_023b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_023b:
	{
		int32_t L_57 = __this->get_gzip_header_xlen_3();
		int32_t L_58 = V_0;
		__this->set_gzip_header_xlen_3(((int32_t)((int32_t)L_57|(int32_t)((int32_t)((int32_t)L_58<<(int32_t)8)))));
		__this->set_gzipHeaderSubstate_0(((int32_t)9));
		__this->set_loopCounter_6(0);
		goto IL_025c;
	}

IL_025c:
	{
		V_0 = 0;
		goto IL_028a;
	}

IL_0260:
	{
		InputBuffer_t333709416 * L_59 = ___input0;
		NullCheck(L_59);
		int32_t L_60 = InputBuffer_GetBits_m521756373(L_59, 8, /*hidden argument*/NULL);
		V_0 = L_60;
		int32_t L_61 = V_0;
		V_17 = (bool)((((int32_t)L_61) < ((int32_t)0))? 1 : 0);
		bool L_62 = V_17;
		if (!L_62)
		{
			goto IL_027b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_027b:
	{
		int32_t L_63 = __this->get_loopCounter_6();
		__this->set_loopCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1)));
	}

IL_028a:
	{
		int32_t L_64 = __this->get_loopCounter_6();
		int32_t L_65 = __this->get_gzip_header_xlen_3();
		V_18 = (bool)((((int32_t)L_64) < ((int32_t)L_65))? 1 : 0);
		bool L_66 = V_18;
		if (L_66)
		{
			goto IL_0260;
		}
	}
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)10));
		__this->set_loopCounter_6(0);
		goto IL_02af;
	}

IL_02af:
	{
		int32_t L_67 = __this->get_gzip_header_flag_2();
		V_19 = (bool)((((int32_t)((int32_t)((int32_t)L_67&(int32_t)8))) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_19;
		if (!L_68)
		{
			goto IL_02cb;
		}
	}
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)11));
		goto IL_0303;
	}

IL_02cb:
	{
		InputBuffer_t333709416 * L_69 = ___input0;
		NullCheck(L_69);
		int32_t L_70 = InputBuffer_GetBits_m521756373(L_69, 8, /*hidden argument*/NULL);
		V_0 = L_70;
		int32_t L_71 = V_0;
		V_20 = (bool)((((int32_t)L_71) < ((int32_t)0))? 1 : 0);
		bool L_72 = V_20;
		if (!L_72)
		{
			goto IL_02e6;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_02e6:
	{
		int32_t L_73 = V_0;
		V_21 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_21;
		if (!L_74)
		{
			goto IL_02f3;
		}
	}
	{
		goto IL_02f9;
	}

IL_02f3:
	{
		V_22 = (bool)1;
		goto IL_02cb;
	}

IL_02f9:
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)11));
		goto IL_0303;
	}

IL_0303:
	{
		int32_t L_75 = __this->get_gzip_header_flag_2();
		V_23 = (bool)((((int32_t)((int32_t)((int32_t)L_75&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_23;
		if (!L_76)
		{
			goto IL_0320;
		}
	}
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)12));
		goto IL_0358;
	}

IL_0320:
	{
		InputBuffer_t333709416 * L_77 = ___input0;
		NullCheck(L_77);
		int32_t L_78 = InputBuffer_GetBits_m521756373(L_77, 8, /*hidden argument*/NULL);
		V_0 = L_78;
		int32_t L_79 = V_0;
		V_24 = (bool)((((int32_t)L_79) < ((int32_t)0))? 1 : 0);
		bool L_80 = V_24;
		if (!L_80)
		{
			goto IL_033b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_033b:
	{
		int32_t L_81 = V_0;
		V_25 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_25;
		if (!L_82)
		{
			goto IL_0348;
		}
	}
	{
		goto IL_034e;
	}

IL_0348:
	{
		V_26 = (bool)1;
		goto IL_0320;
	}

IL_034e:
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)12));
		goto IL_0358;
	}

IL_0358:
	{
		int32_t L_83 = __this->get_gzip_header_flag_2();
		V_27 = (bool)((((int32_t)((int32_t)((int32_t)L_83&(int32_t)2))) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_27;
		if (!L_84)
		{
			goto IL_0374;
		}
	}
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)14));
		goto IL_03b6;
	}

IL_0374:
	{
		InputBuffer_t333709416 * L_85 = ___input0;
		NullCheck(L_85);
		int32_t L_86 = InputBuffer_GetBits_m521756373(L_85, 8, /*hidden argument*/NULL);
		V_0 = L_86;
		int32_t L_87 = V_0;
		V_28 = (bool)((((int32_t)L_87) < ((int32_t)0))? 1 : 0);
		bool L_88 = V_28;
		if (!L_88)
		{
			goto IL_038b;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_038b:
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)13));
		goto IL_0395;
	}

IL_0395:
	{
		InputBuffer_t333709416 * L_89 = ___input0;
		NullCheck(L_89);
		int32_t L_90 = InputBuffer_GetBits_m521756373(L_89, 8, /*hidden argument*/NULL);
		V_0 = L_90;
		int32_t L_91 = V_0;
		V_29 = (bool)((((int32_t)L_91) < ((int32_t)0))? 1 : 0);
		bool L_92 = V_29;
		if (!L_92)
		{
			goto IL_03ac;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_03de;
	}

IL_03ac:
	{
		__this->set_gzipHeaderSubstate_0(((int32_t)14));
		goto IL_03b6;
	}

IL_03b6:
	{
		V_3 = (bool)1;
		goto IL_03de;
	}

IL_03ba:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)0, _stringLiteral3592674616, /*hidden argument*/NULL);
		String_t* L_93 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral2974181263, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_94 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_94, L_93, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94);
	}

IL_03d6:
	{
		V_30 = (bool)1;
		goto IL_0006;
	}

IL_03de:
	{
		bool L_95 = V_3;
		return L_95;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipDecoder::ReadFooter(Mapbox.IO.Compression.InputBuffer)
extern "C"  bool GZipDecoder_ReadFooter_m1982911485 (GZipDecoder_t3447631347 * __this, InputBuffer_t333709416 * ___input0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	{
		InputBuffer_t333709416 * L_0 = ___input0;
		NullCheck(L_0);
		InputBuffer_SkipToByteBoundary_m3485783867(L_0, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_gzipFooterSubstate_1();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_005b;
	}

IL_0019:
	{
		InputBuffer_t333709416 * L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4 = InputBuffer_GetBits_m521756373(L_3, 8, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00fb;
	}

IL_0032:
	{
		uint32_t L_7 = __this->get_expectedCrc32_4();
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_loopCounter_6();
		__this->set_expectedCrc32_4(((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_9))&(int32_t)((int32_t)31))))))));
		int32_t L_10 = __this->get_loopCounter_6();
		__this->set_loopCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_005b:
	{
		int32_t L_11 = __this->get_loopCounter_6();
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)4))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0019;
		}
	}
	{
		__this->set_gzipFooterSubstate_1(((int32_t)16));
		__this->set_loopCounter_6(0);
	}

IL_007a:
	{
		int32_t L_13 = __this->get_gzipFooterSubstate_1();
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_15 = __this->get_loopCounter_6();
		V_6 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00a1;
		}
	}
	{
		__this->set_expectedOutputStreamSizeModulo_5(0);
	}

IL_00a1:
	{
		goto IL_00e7;
	}

IL_00a3:
	{
		InputBuffer_t333709416 * L_17 = ___input0;
		NullCheck(L_17);
		int32_t L_18 = InputBuffer_GetBits_m521756373(L_17, 8, /*hidden argument*/NULL);
		V_7 = L_18;
		int32_t L_19 = V_7;
		V_8 = (bool)((((int32_t)L_19) < ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00bd;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00fb;
	}

IL_00bd:
	{
		uint32_t L_21 = __this->get_expectedOutputStreamSizeModulo_5();
		int32_t L_22 = V_7;
		int32_t L_23 = __this->get_loopCounter_6();
		__this->set_expectedOutputStreamSizeModulo_5(((int32_t)((int32_t)L_21|(int32_t)((int32_t)((int32_t)L_22<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_23))&(int32_t)((int32_t)31))))))));
		int32_t L_24 = __this->get_loopCounter_6();
		__this->set_loopCounter_6(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_00e7:
	{
		int32_t L_25 = __this->get_loopCounter_6();
		V_9 = (bool)((((int32_t)L_25) < ((int32_t)4))? 1 : 0);
		bool L_26 = V_9;
		if (L_26)
		{
			goto IL_00a3;
		}
	}
	{
	}

IL_00f7:
	{
		V_3 = (bool)1;
		goto IL_00fb;
	}

IL_00fb:
	{
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Void Mapbox.IO.Compression.GZipDecoder::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipDecoder_UpdateWithBytesRead_m3091634456 (GZipDecoder_t3447631347 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___copied2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipDecoder_UpdateWithBytesRead_m3091634456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		uint32_t L_0 = __this->get_actualCrc32_7();
		ByteU5BU5D_t4116647657* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___copied2;
		IL2CPP_RUNTIME_CLASS_INIT(Crc32Helper_t2911080199_il2cpp_TypeInfo_var);
		uint32_t L_4 = Crc32Helper_UpdateCrc32_m3273398049(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_actualCrc32_7(L_4);
		int64_t L_5 = __this->get_actualStreamSizeModulo_8();
		int32_t L_6 = ___copied2;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)L_6))))))));
		int64_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((((int64_t)L_7) < ((int64_t)((int64_t)4294967296LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int64_t L_9 = V_0;
		V_0 = ((int64_t)((int64_t)L_9%(int64_t)((int64_t)4294967296LL)));
	}

IL_0040:
	{
		int64_t L_10 = V_0;
		__this->set_actualStreamSizeModulo_8(L_10);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipDecoder::Validate()
extern "C"  void GZipDecoder_Validate_m4289889972 (GZipDecoder_t3447631347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipDecoder_Validate_m4289889972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint32_t L_0 = __this->get_expectedCrc32_4();
		uint32_t L_1 = __this->get_actualCrc32_7();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1587601205, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_4 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0027:
	{
		int64_t L_5 = __this->get_actualStreamSizeModulo_8();
		uint32_t L_6 = __this->get_expectedOutputStreamSizeModulo_5();
		V_1 = (bool)((((int32_t)((((int64_t)L_5) == ((int64_t)(((int64_t)((uint64_t)L_6)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_8 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral3680897169, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_9 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_004e:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor()
extern "C"  void GZipFormatter__ctor_m805197618 (GZipFormatter_t4203637370 * __this, const RuntimeMethod* method)
{
	{
		GZipFormatter__ctor_m2553017424(__this, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipFormatter::.ctor(System.Int32)
extern "C"  void GZipFormatter__ctor_m2553017424 (GZipFormatter_t4203637370 * __this, int32_t ___compressionLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipFormatter__ctor_m2553017424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____C31FD54E9E8CFB2BC8835475B92A0D179827B581_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		__this->set_headerBytes_0(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_2 = ___compressionLevel0;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = __this->get_headerBytes_0();
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)2);
	}

IL_0034:
	{
		return;
	}
}
// System.Byte[] Mapbox.IO.Compression.GZipFormatter::GetHeader()
extern "C"  ByteU5BU5D_t4116647657* GZipFormatter_GetHeader_m850058982 (GZipFormatter_t4203637370 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_headerBytes_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_t4116647657* L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.GZipFormatter::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipFormatter_UpdateWithBytesRead_m3308253620 (GZipFormatter_t4203637370 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___bytesToCopy2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipFormatter_UpdateWithBytesRead_m3308253620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	{
		uint32_t L_0 = __this->get__crc32_1();
		ByteU5BU5D_t4116647657* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___bytesToCopy2;
		IL2CPP_RUNTIME_CLASS_INIT(Crc32Helper_t2911080199_il2cpp_TypeInfo_var);
		uint32_t L_4 = Crc32Helper_UpdateCrc32_m3273398049(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set__crc32_1(L_4);
		int64_t L_5 = __this->get__inputStreamSizeModulo_2();
		int32_t L_6 = ___bytesToCopy2;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)L_6))))))));
		int64_t L_7 = V_0;
		V_1 = (bool)((((int32_t)((((int64_t)L_7) < ((int64_t)((int64_t)4294967296LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int64_t L_9 = V_0;
		V_0 = ((int64_t)((int64_t)L_9%(int64_t)((int64_t)4294967296LL)));
	}

IL_0040:
	{
		int64_t L_10 = V_0;
		__this->set__inputStreamSizeModulo_2(L_10);
		return;
	}
}
// System.Byte[] Mapbox.IO.Compression.GZipFormatter::GetFooter()
extern "C"  ByteU5BU5D_t4116647657* GZipFormatter_GetFooter_m2690444950 (GZipFormatter_t4203637370 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipFormatter_GetFooter_m2690444950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		ByteU5BU5D_t4116647657* L_0 = V_0;
		uint32_t L_1 = __this->get__crc32_1();
		GZipFormatter_WriteUInt32_m1771264697(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = V_0;
		int64_t L_3 = __this->get__inputStreamSizeModulo_2();
		GZipFormatter_WriteUInt32_m1771264697(__this, L_2, (((int32_t)((uint32_t)L_3))), 4, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = V_0;
		V_1 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		ByteU5BU5D_t4116647657* L_5 = V_1;
		return L_5;
	}
}
// System.Void Mapbox.IO.Compression.GZipFormatter::WriteUInt32(System.Byte[],System.UInt32,System.Int32)
extern "C"  void GZipFormatter_WriteUInt32_m1771264697 (GZipFormatter_t4203637370 * __this, ByteU5BU5D_t4116647657* ___b0, uint32_t ___value1, int32_t ___startIndex2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___b0;
		int32_t L_1 = ___startIndex2;
		uint32_t L_2 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)(((int32_t)((uint8_t)L_2))));
		ByteU5BU5D_t4116647657* L_3 = ___b0;
		int32_t L_4 = ___startIndex2;
		uint32_t L_5 = ___value1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_5>>8))))));
		ByteU5BU5D_t4116647657* L_6 = ___b0;
		int32_t L_7 = ___startIndex2;
		uint32_t L_8 = ___value1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)16)))))));
		ByteU5BU5D_t4116647657* L_9 = ___b0;
		int32_t L_10 = ___startIndex2;
		uint32_t L_11 = ___value1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)3))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24)))))));
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
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode)
extern "C"  void GZipStream__ctor_m1066180614 (GZipStream_t1509501570 * __this, Stream_t1273022909 * ___stream0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		GZipStream__ctor_m2813672799(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionMode,System.Boolean)
extern "C"  void GZipStream__ctor_m2813672799 (GZipStream_t1509501570 * __this, Stream_t1273022909 * ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream__ctor_m2813672799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		Stream__ctor_m3881936881(__this, /*hidden argument*/NULL);
		Stream_t1273022909 * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream_t2796728099 * L_3 = (DeflateStream_t2796728099 *)il2cpp_codegen_object_new(DeflateStream_t2796728099_il2cpp_TypeInfo_var);
		DeflateStream__ctor_m3247756683(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_deflateStream_1(L_3);
		int32_t L_4 = ___mode1;
		GZipStream_SetDeflateStreamFileFormatter_m3709514482(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel)
extern "C"  void GZipStream__ctor_m1501904742 (GZipStream_t1509501570 * __this, Stream_t1273022909 * ___stream0, int32_t ___compressionLevel1, const RuntimeMethod* method)
{
	{
		Stream_t1273022909 * L_0 = ___stream0;
		int32_t L_1 = ___compressionLevel1;
		GZipStream__ctor_m329980630(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::.ctor(System.IO.Stream,Mapbox.IO.Compression.CompressionLevel,System.Boolean)
extern "C"  void GZipStream__ctor_m329980630 (GZipStream_t1509501570 * __this, Stream_t1273022909 * ___stream0, int32_t ___compressionLevel1, bool ___leaveOpen2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream__ctor_m329980630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1273022909_il2cpp_TypeInfo_var);
		Stream__ctor_m3881936881(__this, /*hidden argument*/NULL);
		Stream_t1273022909 * L_0 = ___stream0;
		int32_t L_1 = ___compressionLevel1;
		bool L_2 = ___leaveOpen2;
		DeflateStream_t2796728099 * L_3 = (DeflateStream_t2796728099 *)il2cpp_codegen_object_new(DeflateStream_t2796728099_il2cpp_TypeInfo_var);
		DeflateStream__ctor_m819287622(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_deflateStream_1(L_3);
		GZipStream_SetDeflateStreamFileFormatter_m3709514482(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::SetDeflateStreamFileFormatter(Mapbox.IO.Compression.CompressionMode)
extern "C"  void GZipStream_SetDeflateStreamFileFormatter_m3709514482 (GZipStream_t1509501570 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_SetDeflateStreamFileFormatter_m3709514482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = ___mode0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GZipFormatter_t4203637370 * L_2 = (GZipFormatter_t4203637370 *)il2cpp_codegen_object_new(GZipFormatter_t4203637370_il2cpp_TypeInfo_var);
		GZipFormatter__ctor_m805197618(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		DeflateStream_t2796728099 * L_3 = __this->get_deflateStream_1();
		RuntimeObject* L_4 = V_1;
		NullCheck(L_3);
		DeflateStream_SetFileFormatWriter_m3729627798(L_3, L_4, /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_0020:
	{
		GZipDecoder_t3447631347 * L_5 = (GZipDecoder_t3447631347 *)il2cpp_codegen_object_new(GZipDecoder_t3447631347_il2cpp_TypeInfo_var);
		GZipDecoder__ctor_m3364867135(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		DeflateStream_t2796728099 * L_6 = __this->get_deflateStream_1();
		RuntimeObject* L_7 = V_2;
		NullCheck(L_6);
		DeflateStream_SetFileFormatReader_m891083011(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipStream::get_CanRead()
extern "C"  bool GZipStream_get_CanRead_m1422217570 (GZipStream_t1509501570 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		DeflateStream_t2796728099 * L_0 = __this->get_deflateStream_1();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t2796728099 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0013:
	{
		DeflateStream_t2796728099 * L_2 = __this->get_deflateStream_1();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipStream::get_CanWrite()
extern "C"  bool GZipStream_get_CanWrite_m2356140560 (GZipStream_t1509501570 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		DeflateStream_t2796728099 * L_0 = __this->get_deflateStream_1();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t2796728099 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0013:
	{
		DeflateStream_t2796728099 * L_2 = __this->get_deflateStream_1();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Mapbox.IO.Compression.GZipStream::get_CanSeek()
extern "C"  bool GZipStream_get_CanSeek_m3008570027 (GZipStream_t1509501570 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		DeflateStream_t2796728099 * L_0 = __this->get_deflateStream_1();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t2796728099 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0021;
	}

IL_0013:
	{
		DeflateStream_t2796728099 * L_2 = __this->get_deflateStream_1();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_2);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Int64 Mapbox.IO.Compression.GZipStream::get_Length()
extern "C"  int64_t GZipStream_get_Length_m3049713947 (GZipStream_t1509501570 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_get_Length_m3049713947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1060443247, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Int64 Mapbox.IO.Compression.GZipStream::get_Position()
extern "C"  int64_t GZipStream_get_Position_m4069547057 (GZipStream_t1509501570 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_get_Position_m4069547057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1060443247, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::set_Position(System.Int64)
extern "C"  void GZipStream_set_Position_m3928954563 (GZipStream_t1509501570 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_set_Position_m3928954563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1060443247, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::Flush()
extern "C"  void GZipStream_Flush_m619962778 (GZipStream_t1509501570 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_Flush_m619962778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		DeflateStream_t2796728099 * L_0 = __this->get_deflateStream_1();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t2796728099 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral4085905002, /*hidden argument*/NULL);
		ObjectDisposedException_t21392786 * L_3 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m1034312941(L_3, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0020:
	{
		DeflateStream_t2796728099 * L_4 = __this->get_deflateStream_1();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Flush() */, L_4);
		goto IL_002e;
	}

IL_002e:
	{
		return;
	}
}
// System.Int64 Mapbox.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t GZipStream_Seek_m3908112443 (GZipStream_t1509501570 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_Seek_m3908112443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1060443247, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::SetLength(System.Int64)
extern "C"  void GZipStream_SetLength_m1773441765 (GZipStream_t1509501570 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_SetLength_m1773441765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1060443247, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.IAsyncResult Mapbox.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* GZipStream_BeginRead_m2827025962 (GZipStream_t1509501570 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3962456242 * ___asyncCallback3, RuntimeObject * ___asyncState4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_BeginRead_m2827025962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		DeflateStream_t2796728099 * L_0 = __this->get_deflateStream_1();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t2796728099 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral4085905002, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001f:
	{
		DeflateStream_t2796728099 * L_4 = __this->get_deflateStream_1();
		ByteU5BU5D_t4116647657* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		AsyncCallback_t3962456242 * L_8 = ___asyncCallback3;
		RuntimeObject * L_9 = ___asyncState4;
		NullCheck(L_4);
		RuntimeObject* L_10 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_t4116647657*, int32_t, int32_t, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(22 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_4, L_5, L_6, L_7, L_8, L_9);
		V_1 = L_10;
		goto IL_0034;
	}

IL_0034:
	{
		RuntimeObject* L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Mapbox.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
extern "C"  int32_t GZipStream_EndRead_m2787627340 (GZipStream_t1509501570 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_EndRead_m2787627340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		DeflateStream_t2796728099 * L_0 = __this->get_deflateStream_1();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t2796728099 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral4085905002, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001f:
	{
		DeflateStream_t2796728099 * L_4 = __this->get_deflateStream_1();
		RuntimeObject* L_5 = ___asyncResult0;
		NullCheck(L_4);
		int32_t L_6 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(24 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_4, L_5);
		V_1 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.IAsyncResult Mapbox.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* GZipStream_BeginWrite_m464065299 (GZipStream_t1509501570 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t3962456242 * ___asyncCallback3, RuntimeObject * ___asyncState4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_BeginWrite_m464065299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		DeflateStream_t2796728099 * L_0 = __this->get_deflateStream_1();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t2796728099 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral4085905002, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001f:
	{
		DeflateStream_t2796728099 * L_4 = __this->get_deflateStream_1();
		ByteU5BU5D_t4116647657* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		AsyncCallback_t3962456242 * L_8 = ___asyncCallback3;
		RuntimeObject * L_9 = ___asyncState4;
		NullCheck(L_4);
		RuntimeObject* L_10 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_t4116647657*, int32_t, int32_t, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(23 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_4, L_5, L_6, L_7, L_8, L_9);
		V_1 = L_10;
		goto IL_0034;
	}

IL_0034:
	{
		RuntimeObject* L_11 = V_1;
		return L_11;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
extern "C"  void GZipStream_EndWrite_m3857919008 (GZipStream_t1509501570 * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_EndWrite_m3857919008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		DeflateStream_t2796728099 * L_0 = __this->get_deflateStream_1();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t2796728099 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral4085905002, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001f:
	{
		DeflateStream_t2796728099 * L_4 = __this->get_deflateStream_1();
		RuntimeObject* L_5 = ___asyncResult0;
		NullCheck(L_4);
		VirtActionInvoker1< RuntimeObject* >::Invoke(25 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, L_4, L_5);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t GZipStream_Read_m2777190171 (GZipStream_t1509501570 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_Read_m2777190171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		DeflateStream_t2796728099 * L_0 = __this->get_deflateStream_1();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t2796728099 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral4085905002, /*hidden argument*/NULL);
		ObjectDisposedException_t21392786 * L_3 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m1034312941(L_3, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0020:
	{
		DeflateStream_t2796728099 * L_4 = __this->get_deflateStream_1();
		ByteU5BU5D_t4116647657* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		int32_t L_8 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(16 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, L_6, L_7);
		V_1 = L_8;
		goto IL_0031;
	}

IL_0031:
	{
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipStream_Write_m4235844697 (GZipStream_t1509501570 * __this, ByteU5BU5D_t4116647657* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GZipStream_Write_m4235844697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		DeflateStream_t2796728099 * L_0 = __this->get_deflateStream_1();
		V_0 = (bool)((((RuntimeObject*)(DeflateStream_t2796728099 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral4085905002, /*hidden argument*/NULL);
		ObjectDisposedException_t21392786 * L_3 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m1034312941(L_3, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0020:
	{
		DeflateStream_t2796728099 * L_4 = __this->get_deflateStream_1();
		ByteU5BU5D_t4116647657* L_5 = ___array0;
		int32_t L_6 = ___offset1;
		int32_t L_7 = ___count2;
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(20 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, L_6, L_7);
		return;
	}
}
// System.Void Mapbox.IO.Compression.GZipStream::Dispose(System.Boolean)
extern "C"  void GZipStream_Dispose_m4143143453 (GZipStream_t1509501570 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = ___disposing0;
			if (!L_0)
			{
				goto IL_0010;
			}
		}

IL_0005:
		{
			DeflateStream_t2796728099 * L_1 = __this->get_deflateStream_1();
			G_B4_0 = ((!(((RuntimeObject*)(DeflateStream_t2796728099 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_0011;
		}

IL_0010:
		{
			G_B4_0 = 0;
		}

IL_0011:
		{
			V_0 = (bool)G_B4_0;
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_0023;
			}
		}

IL_0015:
		{
			DeflateStream_t2796728099 * L_3 = __this->get_deflateStream_1();
			NullCheck(L_3);
			VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_3);
		}

IL_0023:
		{
			__this->set_deflateStream_1((DeflateStream_t2796728099 *)NULL);
			IL2CPP_LEAVE(0x38, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		bool L_4 = ___disposing0;
		Stream_Dispose_m874059170(__this, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0038:
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
// System.Void Mapbox.IO.Compression.HuffmanTree::.cctor()
extern "C"  void HuffmanTree__cctor_m3416801982 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HuffmanTree__cctor_m3416801982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = HuffmanTree_GetStaticLiteralTreeLength_m3370042063(NULL /*static, unused*/, /*hidden argument*/NULL);
		HuffmanTree_t857975559 * L_1 = (HuffmanTree_t857975559 *)il2cpp_codegen_object_new(HuffmanTree_t857975559_il2cpp_TypeInfo_var);
		HuffmanTree__ctor_m1239190810(L_1, L_0, /*hidden argument*/NULL);
		((HuffmanTree_t857975559_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t857975559_il2cpp_TypeInfo_var))->set_staticLiteralLengthTree_7(L_1);
		ByteU5BU5D_t4116647657* L_2 = HuffmanTree_GetStaticDistanceTreeLength_m1284918502(NULL /*static, unused*/, /*hidden argument*/NULL);
		HuffmanTree_t857975559 * L_3 = (HuffmanTree_t857975559 *)il2cpp_codegen_object_new(HuffmanTree_t857975559_il2cpp_TypeInfo_var);
		HuffmanTree__ctor_m1239190810(L_3, L_2, /*hidden argument*/NULL);
		((HuffmanTree_t857975559_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t857975559_il2cpp_TypeInfo_var))->set_staticDistanceTree_8(L_3);
		return;
	}
}
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticLiteralLengthTree()
extern "C"  HuffmanTree_t857975559 * HuffmanTree_get_StaticLiteralLengthTree_m3124791014 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HuffmanTree_get_StaticLiteralLengthTree_m3124791014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HuffmanTree_t857975559 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(HuffmanTree_t857975559_il2cpp_TypeInfo_var);
		HuffmanTree_t857975559 * L_0 = ((HuffmanTree_t857975559_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t857975559_il2cpp_TypeInfo_var))->get_staticLiteralLengthTree_7();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		HuffmanTree_t857975559 * L_1 = V_0;
		return L_1;
	}
}
// Mapbox.IO.Compression.HuffmanTree Mapbox.IO.Compression.HuffmanTree::get_StaticDistanceTree()
extern "C"  HuffmanTree_t857975559 * HuffmanTree_get_StaticDistanceTree_m3178788661 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HuffmanTree_get_StaticDistanceTree_m3178788661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HuffmanTree_t857975559 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(HuffmanTree_t857975559_il2cpp_TypeInfo_var);
		HuffmanTree_t857975559 * L_0 = ((HuffmanTree_t857975559_StaticFields*)il2cpp_codegen_static_fields_for(HuffmanTree_t857975559_il2cpp_TypeInfo_var))->get_staticDistanceTree_8();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		HuffmanTree_t857975559 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.HuffmanTree::.ctor(System.Byte[])
extern "C"  void HuffmanTree__ctor_m1239190810 (HuffmanTree_t857975559 * __this, ByteU5BU5D_t4116647657* ___codeLengths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HuffmanTree__ctor_m1239190810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___codeLengths0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)((int32_t)288))))
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___codeLengths0;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) == ((int32_t)((int32_t)32))))
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = ___codeLengths0;
		NullCheck(L_2);
		G_B4_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) == ((int32_t)((int32_t)19)))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 1;
	}

IL_0023:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)G_B4_0, _stringLiteral719884611, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_3 = ___codeLengths0;
		__this->set_codeLengthArray_4(L_3);
		ByteU5BU5D_t4116647657* L_4 = __this->get_codeLengthArray_4();
		NullCheck(L_4);
		V_0 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((int32_t)((int32_t)288)))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		__this->set_tableBits_0(((int32_t)9));
		goto IL_005d;
	}

IL_0054:
	{
		__this->set_tableBits_0(7);
	}

IL_005d:
	{
		int32_t L_6 = __this->get_tableBits_0();
		__this->set_tableMask_6(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31))))), (int32_t)1)));
		HuffmanTree_CreateTable_m2141668710(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticLiteralTreeLength()
extern "C"  ByteU5BU5D_t4116647657* HuffmanTree_GetStaticLiteralTreeLength_m3370042063 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HuffmanTree_GetStaticLiteralTreeLength_m3370042063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	ByteU5BU5D_t4116647657* V_9 = NULL;
	{
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288)));
		V_1 = 0;
		goto IL_0018;
	}

IL_0010:
	{
		ByteU5BU5D_t4116647657* L_0 = V_0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)8);
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0018:
	{
		int32_t L_3 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)143)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_0010;
		}
	}
	{
		V_3 = ((int32_t)144);
		goto IL_0038;
	}

IL_002f:
	{
		ByteU5BU5D_t4116647657* L_5 = V_0;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)9));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0038:
	{
		int32_t L_8 = V_3;
		V_4 = (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)((int32_t)255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		V_5 = ((int32_t)256);
		goto IL_005d;
	}

IL_0052:
	{
		ByteU5BU5D_t4116647657* L_10 = V_0;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)7);
		int32_t L_12 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_13 = V_5;
		V_6 = (bool)((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)279)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_6;
		if (L_14)
		{
			goto IL_0052;
		}
	}
	{
		V_7 = ((int32_t)280);
		goto IL_0083;
	}

IL_0078:
	{
		ByteU5BU5D_t4116647657* L_15 = V_0;
		int32_t L_16 = V_7;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)8);
		int32_t L_17 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_18 = V_7;
		V_8 = (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)((int32_t)287)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_8;
		if (L_19)
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_20 = V_0;
		V_9 = L_20;
		goto IL_009a;
	}

IL_009a:
	{
		ByteU5BU5D_t4116647657* L_21 = V_9;
		return L_21;
	}
}
// System.Byte[] Mapbox.IO.Compression.HuffmanTree::GetStaticDistanceTreeLength()
extern "C"  ByteU5BU5D_t4116647657* HuffmanTree_GetStaticDistanceTreeLength_m1284918502 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HuffmanTree_GetStaticDistanceTreeLength_m1284918502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32)));
		V_1 = 0;
		goto IL_0017;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_0 = V_0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)5);
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_3 = V_1;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_4 = V_2;
		if (L_4)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_5 = V_0;
		V_3 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		ByteU5BU5D_t4116647657* L_6 = V_3;
		return L_6;
	}
}
// System.UInt32[] Mapbox.IO.Compression.HuffmanTree::CalculateHuffmanCode()
extern "C"  UInt32U5BU5D_t2770800703* HuffmanTree_CalculateHuffmanCode_m3025073388 (HuffmanTree_t857975559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HuffmanTree_CalculateHuffmanCode_m3025073388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t2770800703* V_0 = NULL;
	UInt32U5BU5D_t2770800703* V_1 = NULL;
	uint32_t V_2 = 0;
	UInt32U5BU5D_t2770800703* V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	UInt32U5BU5D_t2770800703* V_13 = NULL;
	{
		V_0 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17)));
		ByteU5BU5D_t4116647657* L_0 = __this->get_codeLengthArray_4();
		V_4 = L_0;
		V_5 = 0;
		goto IL_0033;
	}

IL_0017:
	{
		ByteU5BU5D_t4116647657* L_1 = V_4;
		int32_t L_2 = V_5;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_6 = L_4;
		UInt32U5BU5D_t2770800703* L_5 = V_0;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		uint32_t* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		*((int32_t*)(L_7)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_7)), (int32_t)1));
		int32_t L_8 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_9 = V_5;
		ByteU5BU5D_t4116647657* L_10 = V_4;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_11 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		V_1 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17)));
		V_2 = 0;
		V_7 = 1;
		goto IL_0066;
	}

IL_004e:
	{
		uint32_t L_12 = V_2;
		UInt32U5BU5D_t2770800703* L_13 = V_0;
		int32_t L_14 = V_7;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_16))<<(int32_t)1));
		UInt32U5BU5D_t2770800703* L_17 = V_1;
		int32_t L_18 = V_7;
		uint32_t L_19 = V_2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)L_19);
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0066:
	{
		int32_t L_21 = V_7;
		V_8 = (bool)((((int32_t)((((int32_t)L_21) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_8;
		if (L_22)
		{
			goto IL_004e;
		}
	}
	{
		V_3 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288)));
		V_9 = 0;
		goto IL_00c1;
	}

IL_0085:
	{
		ByteU5BU5D_t4116647657* L_23 = __this->get_codeLengthArray_4();
		int32_t L_24 = V_9;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_10 = L_26;
		int32_t L_27 = V_10;
		V_11 = (bool)((((int32_t)L_27) > ((int32_t)0))? 1 : 0);
		bool L_28 = V_11;
		if (!L_28)
		{
			goto IL_00ba;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_29 = V_3;
		int32_t L_30 = V_9;
		UInt32U5BU5D_t2770800703* L_31 = V_1;
		int32_t L_32 = V_10;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(FastEncoderStatics_t1128548993_il2cpp_TypeInfo_var);
		uint32_t L_36 = FastEncoderStatics_BitReverse_m4129531689(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint32_t)L_36);
		UInt32U5BU5D_t2770800703* L_37 = V_1;
		int32_t L_38 = V_10;
		NullCheck(L_37);
		uint32_t* L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)));
		*((int32_t*)(L_39)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((uint32_t*)L_39)), (int32_t)1));
	}

IL_00ba:
	{
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00c1:
	{
		int32_t L_41 = V_9;
		ByteU5BU5D_t4116647657* L_42 = __this->get_codeLengthArray_4();
		NullCheck(L_42);
		V_12 = (bool)((((int32_t)L_41) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_42)->max_length))))))? 1 : 0);
		bool L_43 = V_12;
		if (L_43)
		{
			goto IL_0085;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_44 = V_3;
		V_13 = L_44;
		goto IL_00d8;
	}

IL_00d8:
	{
		UInt32U5BU5D_t2770800703* L_45 = V_13;
		return L_45;
	}
}
// System.Void Mapbox.IO.Compression.HuffmanTree::CreateTable()
extern "C"  void HuffmanTree_CreateTable_m2141668710 (HuffmanTree_t857975559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HuffmanTree_CreateTable_m2141668710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t2770800703* V_0 = NULL;
	int16_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Int16U5BU5D_t3686840178* V_15 = NULL;
	int16_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UInt32U5BU5D_t2770800703* L_0 = HuffmanTree_CalculateHuffmanCode_m3025073388(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = __this->get_tableBits_0();
		__this->set_table_1(((Int16U5BU5D_t3686840178*)SZArrayNew(Int16U5BU5D_t3686840178_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31))))))));
		UInt32U5BU5D_t2770800703* L_2 = V_0;
		__this->set_codeArrayDebug_5(L_2);
		ByteU5BU5D_t4116647657* L_3 = __this->get_codeLengthArray_4();
		NullCheck(L_3);
		__this->set_left_2(((Int16U5BU5D_t3686840178*)SZArrayNew(Int16U5BU5D_t3686840178_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))))));
		ByteU5BU5D_t4116647657* L_4 = __this->get_codeLengthArray_4();
		NullCheck(L_4);
		__this->set_right_3(((Int16U5BU5D_t3686840178*)SZArrayNew(Int16U5BU5D_t3686840178_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))));
		ByteU5BU5D_t4116647657* L_5 = __this->get_codeLengthArray_4();
		NullCheck(L_5);
		V_1 = (((int16_t)((int16_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))));
		V_2 = 0;
		goto IL_01cf;
	}

IL_0060:
	{
		ByteU5BU5D_t4116647657* L_6 = __this->get_codeLengthArray_4();
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		int32_t L_10 = V_3;
		V_4 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_01ca;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = L_15;
		int32_t L_16 = V_3;
		int32_t L_17 = __this->get_tableBits_0();
		V_6 = (bool)((((int32_t)((((int32_t)L_16) > ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_19 = V_3;
		V_7 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)31)))));
		int32_t L_20 = V_5;
		int32_t L_21 = V_7;
		V_9 = (bool)((((int32_t)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_23 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1399030644, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_24 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_24, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24);
	}

IL_00b8:
	{
		int32_t L_25 = __this->get_tableBits_0();
		int32_t L_26 = V_3;
		V_8 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26))&(int32_t)((int32_t)31)))));
		V_10 = 0;
		goto IL_00e6;
	}

IL_00cc:
	{
		Int16U5BU5D_t3686840178* L_27 = __this->get_table_1();
		int32_t L_28 = V_5;
		int32_t L_29 = V_2;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int16_t)(((int16_t)((int16_t)L_29))));
		int32_t L_30 = V_5;
		int32_t L_31 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31));
		int32_t L_32 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00e6:
	{
		int32_t L_33 = V_10;
		int32_t L_34 = V_8;
		V_11 = (bool)((((int32_t)L_33) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_11;
		if (L_35)
		{
			goto IL_00cc;
		}
	}
	{
		goto IL_01c9;
	}

IL_00f8:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = __this->get_tableBits_0();
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
		int32_t L_38 = __this->get_tableBits_0();
		V_13 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)31)))));
		int32_t L_39 = V_5;
		int32_t L_40 = __this->get_tableBits_0();
		V_14 = ((int32_t)((int32_t)L_39&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_40&(int32_t)((int32_t)31))))), (int32_t)1))));
		Int16U5BU5D_t3686840178* L_41 = __this->get_table_1();
		V_15 = L_41;
	}

IL_012a:
	{
		Int16U5BU5D_t3686840178* L_42 = V_15;
		int32_t L_43 = V_14;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int16_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_16 = L_45;
		int16_t L_46 = V_16;
		V_17 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_17;
		if (!L_47)
		{
			goto IL_0151;
		}
	}
	{
		Int16U5BU5D_t3686840178* L_48 = V_15;
		int32_t L_49 = V_14;
		int16_t L_50 = V_1;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (int16_t)(((int16_t)((int16_t)((-L_50))))));
		int16_t L_51 = V_1;
		V_16 = (((int16_t)((int16_t)((-L_51)))));
		int16_t L_52 = V_1;
		V_1 = (((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)))));
	}

IL_0151:
	{
		int16_t L_53 = V_16;
		V_18 = (bool)((((int32_t)L_53) > ((int32_t)0))? 1 : 0);
		bool L_54 = V_18;
		if (!L_54)
		{
			goto IL_016d;
		}
	}
	{
		String_t* L_55 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1399030644, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_56 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_56, L_55, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56);
	}

IL_016d:
	{
		int16_t L_57 = V_16;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_57) < ((int32_t)0))? 1 : 0), _stringLiteral1456394998, /*hidden argument*/NULL);
		int32_t L_58 = V_5;
		int32_t L_59 = V_13;
		V_19 = (bool)((((int32_t)((int32_t)((int32_t)L_58&(int32_t)L_59))) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_19;
		if (!L_60)
		{
			goto IL_0197;
		}
	}
	{
		Int16U5BU5D_t3686840178* L_61 = __this->get_left_2();
		V_15 = L_61;
		goto IL_01a1;
	}

IL_0197:
	{
		Int16U5BU5D_t3686840178* L_62 = __this->get_right_3();
		V_15 = L_62;
	}

IL_01a1:
	{
		int16_t L_63 = V_16;
		V_14 = ((-L_63));
		int32_t L_64 = V_13;
		V_13 = ((int32_t)((int32_t)L_64<<(int32_t)1));
		int32_t L_65 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
		int32_t L_66 = V_12;
		V_20 = (bool)((!(((uint32_t)L_66) <= ((uint32_t)0)))? 1 : 0);
		bool L_67 = V_20;
		if (L_67)
		{
			goto IL_012a;
		}
	}
	{
		Int16U5BU5D_t3686840178* L_68 = V_15;
		int32_t L_69 = V_14;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (int16_t)(((int16_t)((int16_t)L_70))));
	}

IL_01c9:
	{
	}

IL_01ca:
	{
		int32_t L_71 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_01cf:
	{
		int32_t L_72 = V_2;
		ByteU5BU5D_t4116647657* L_73 = __this->get_codeLengthArray_4();
		NullCheck(L_73);
		V_21 = (bool)((((int32_t)L_72) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_73)->max_length))))))? 1 : 0);
		bool L_74 = V_21;
		if (L_74)
		{
			goto IL_0060;
		}
	}
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.HuffmanTree::GetNextSymbol(Mapbox.IO.Compression.InputBuffer)
extern "C"  int32_t HuffmanTree_GetNextSymbol_m2267284928 (HuffmanTree_t857975559 * __this, InputBuffer_t333709416 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HuffmanTree_GetNextSymbol_m2267284928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	uint32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		InputBuffer_t333709416 * L_0 = ___input0;
		NullCheck(L_0);
		uint32_t L_1 = InputBuffer_TryLoad16Bits_m2347747057(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InputBuffer_t333709416 * L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3 = InputBuffer_get_AvailableBits_m3131842582(L_2, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		V_4 = (-1);
		goto IL_00c9;
	}

IL_001e:
	{
		Int16U5BU5D_t3686840178* L_5 = __this->get_table_1();
		uint32_t L_6 = V_0;
		int32_t L_7 = __this->get_tableMask_6();
		if ((int64_t)(((int64_t)((int64_t)(((int64_t)((uint64_t)L_6)))&(int64_t)(((int64_t)((int64_t)L_7)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		NullCheck(L_5);
		intptr_t L_8 = (((intptr_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_6)))&(int64_t)(((int64_t)((int64_t)L_7)))))));
		int16_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		int32_t L_10 = V_1;
		V_5 = (bool)((((int32_t)L_10) < ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_12 = __this->get_tableBits_0();
		V_6 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)31)))));
	}

IL_0049:
	{
		int32_t L_13 = V_1;
		V_1 = ((-L_13));
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_6;
		V_7 = (bool)((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		Int16U5BU5D_t3686840178* L_17 = __this->get_left_2();
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int16_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_1 = L_20;
		goto IL_006e;
	}

IL_0065:
	{
		Int16U5BU5D_t3686840178* L_21 = __this->get_right_3();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int16_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_1 = L_24;
	}

IL_006e:
	{
		uint32_t L_25 = V_6;
		V_6 = ((int32_t)((int32_t)L_25<<(int32_t)1));
		int32_t L_26 = V_1;
		V_8 = (bool)((((int32_t)L_26) < ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_0049;
		}
	}
	{
	}

IL_0080:
	{
		ByteU5BU5D_t4116647657* L_28 = __this->get_codeLengthArray_4();
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_2 = L_31;
		int32_t L_32 = V_2;
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_34 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1399030644, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_35 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_35, L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35);
	}

IL_00a7:
	{
		int32_t L_36 = V_2;
		InputBuffer_t333709416 * L_37 = ___input0;
		NullCheck(L_37);
		int32_t L_38 = InputBuffer_get_AvailableBits_m3131842582(L_37, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_36) > ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_00bc;
		}
	}
	{
		V_4 = (-1);
		goto IL_00c9;
	}

IL_00bc:
	{
		InputBuffer_t333709416 * L_40 = ___input0;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		InputBuffer_SkipBits_m2751677346(L_40, L_41, /*hidden argument*/NULL);
		int32_t L_42 = V_1;
		V_4 = L_42;
		goto IL_00c9;
	}

IL_00c9:
	{
		int32_t L_43 = V_4;
		return L_43;
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
// System.Void Mapbox.IO.Compression.Inflater::.ctor()
extern "C"  void Inflater__ctor_m1495841814 (Inflater_t10910524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflater__ctor_m1495841814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_blockLengthBuffer_13(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)4)));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		OutputWindow_t1296654655 * L_0 = (OutputWindow_t1296654655 *)il2cpp_codegen_object_new(OutputWindow_t1296654655_il2cpp_TypeInfo_var);
		OutputWindow__ctor_m4028030521(L_0, /*hidden argument*/NULL);
		__this->set_output_5(L_0);
		InputBuffer_t333709416 * L_1 = (InputBuffer_t333709416 *)il2cpp_codegen_object_new(InputBuffer_t333709416_il2cpp_TypeInfo_var);
		InputBuffer__ctor_m2565725442(L_1, /*hidden argument*/NULL);
		__this->set_input_6(L_1);
		__this->set_codeList_24(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)320))));
		__this->set_codeLengthTreeCodeLength_25(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19))));
		Inflater_Reset_m1271875191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::SetFileFormatReader(Mapbox.IO.Compression.IFileFormatReader)
extern "C"  void Inflater_SetFileFormatReader_m1893636276 (Inflater_t10910524 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___reader0;
		__this->set_formatReader_27(L_0);
		__this->set_hasFormatReader_10((bool)1);
		Inflater_Reset_m1271875191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::Reset()
extern "C"  void Inflater_Reset_m1271875191 (Inflater_t10910524 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_hasFormatReader_10();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		__this->set_state_9(0);
		goto IL_001f;
	}

IL_0016:
	{
		__this->set_state_9(2);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void Inflater_SetInput_m2072822639 (Inflater_t10910524 * __this, ByteU5BU5D_t4116647657* ___inputBytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		InputBuffer_t333709416 * L_0 = __this->get_input_6();
		ByteU5BU5D_t4116647657* L_1 = ___inputBytes0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		InputBuffer_SetInput_m2532930549(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::Finished()
extern "C"  bool Inflater_Finished_m3651521745 (Inflater_t10910524 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_state_9();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)24))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_state_9();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)((int32_t)23)))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Mapbox.IO.Compression.Inflater::get_AvailableOutput()
extern "C"  int32_t Inflater_get_AvailableOutput_m3686135412 (Inflater_t10910524 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		OutputWindow_t1296654655 * L_0 = __this->get_output_5();
		NullCheck(L_0);
		int32_t L_1 = OutputWindow_get_AvailableBytes_m3359822819(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::NeedsInput()
extern "C"  bool Inflater_NeedsInput_m1480127526 (Inflater_t10910524 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		InputBuffer_t333709416 * L_0 = __this->get_input_6();
		NullCheck(L_0);
		bool L_1 = InputBuffer_NeedsInput_m1866310186(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Mapbox.IO.Compression.Inflater::Inflate(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t Inflater_Inflate_m3538837957 (Inflater_t10910524 * __this, ByteU5BU5D_t4116647657* ___bytes0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflater_Inflate_m3538837957_MetadataUsageId);
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
	int32_t V_8 = 0;
	int32_t G_B10_0 = 0;
	{
		V_0 = 0;
	}

IL_0003:
	{
		OutputWindow_t1296654655 * L_0 = __this->get_output_5();
		ByteU5BU5D_t4116647657* L_1 = ___bytes0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		int32_t L_4 = OutputWindow_CopyTo_m2475356236(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		bool L_7 = __this->get_hasFormatReader_10();
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_9 = __this->get_formatReader_27();
		ByteU5BU5D_t4116647657* L_10 = ___bytes0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(2 /* System.Void Mapbox.IO.Compression.IFileFormatReader::UpdateWithBytesRead(System.Byte[],System.Int32,System.Int32) */, IFileFormatReader_t1171368011_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
	}

IL_0037:
	{
		int32_t L_13 = ___offset1;
		int32_t L_14 = V_1;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		int32_t L_17 = ___length2;
		int32_t L_18 = V_1;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18));
	}

IL_0046:
	{
		int32_t L_19 = ___length2;
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_006b;
	}

IL_0053:
	{
		bool L_21 = Inflater_Finished_m3651521745(__this, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0064;
		}
	}
	{
		bool L_22 = Inflater_Decode_m267901025(__this, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_22));
		goto IL_0065;
	}

IL_0064:
	{
		G_B10_0 = 0;
	}

IL_0065:
	{
		V_5 = (bool)G_B10_0;
		bool L_23 = V_5;
		if (L_23)
		{
			goto IL_0003;
		}
	}

IL_006b:
	{
		int32_t L_24 = __this->get_state_9();
		V_6 = (bool)((((int32_t)L_24) == ((int32_t)((int32_t)23)))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_009f;
		}
	}
	{
		OutputWindow_t1296654655 * L_26 = __this->get_output_5();
		NullCheck(L_26);
		int32_t L_27 = OutputWindow_get_AvailableBytes_m3359822819(L_26, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject* L_29 = __this->get_formatReader_27();
		NullCheck(L_29);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Mapbox.IO.Compression.IFileFormatReader::Validate() */, IFileFormatReader_t1171368011_il2cpp_TypeInfo_var, L_29);
	}

IL_009e:
	{
	}

IL_009f:
	{
		int32_t L_30 = V_0;
		V_8 = L_30;
		goto IL_00a4;
	}

IL_00a4:
	{
		int32_t L_31 = V_8;
		return L_31;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::Decode()
extern "C"  bool Inflater_Decode_m267901025 (Inflater_t10910524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflater_Decode_m267901025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
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
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B43_0 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		bool L_0 = Inflater_Finished_m3651521745(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0274;
	}

IL_0017:
	{
		bool L_2 = __this->get_hasFormatReader_10();
		V_4 = L_2;
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_4 = __this->get_state_9();
		V_5 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_formatReader_27();
		InputBuffer_t333709416 * L_7 = __this->get_input_6();
		NullCheck(L_6);
		bool L_8 = InterfaceFuncInvoker1< bool, InputBuffer_t333709416 * >::Invoke(0 /* System.Boolean Mapbox.IO.Compression.IFileFormatReader::ReadHeader(Mapbox.IO.Compression.InputBuffer) */, IFileFormatReader_t1171368011_il2cpp_TypeInfo_var, L_6, L_7);
		V_6 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_0059:
	{
		__this->set_state_9(2);
		goto IL_00b1;
	}

IL_0063:
	{
		int32_t L_10 = __this->get_state_9();
		if ((((int32_t)L_10) == ((int32_t)((int32_t)21))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_11 = __this->get_state_9();
		G_B10_0 = ((((int32_t)L_11) == ((int32_t)((int32_t)22)))? 1 : 0);
		goto IL_007a;
	}

IL_0079:
	{
		G_B10_0 = 1;
	}

IL_007a:
	{
		V_7 = (bool)G_B10_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject* L_13 = __this->get_formatReader_27();
		InputBuffer_t333709416 * L_14 = __this->get_input_6();
		NullCheck(L_13);
		bool L_15 = InterfaceFuncInvoker1< bool, InputBuffer_t333709416 * >::Invoke(1 /* System.Boolean Mapbox.IO.Compression.IFileFormatReader::ReadFooter(Mapbox.IO.Compression.InputBuffer) */, IFileFormatReader_t1171368011_il2cpp_TypeInfo_var, L_13, L_14);
		V_8 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_00a2;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_00a2:
	{
		__this->set_state_9(((int32_t)23));
		V_3 = (bool)1;
		goto IL_0274;
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		int32_t L_17 = __this->get_state_9();
		V_9 = (bool)((((int32_t)L_17) == ((int32_t)2))? 1 : 0);
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_00f8;
		}
	}
	{
		InputBuffer_t333709416 * L_19 = __this->get_input_6();
		NullCheck(L_19);
		bool L_20 = InputBuffer_EnsureBitsAvailable_m1253303813(L_19, 1, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_10;
		if (!L_21)
		{
			goto IL_00de;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_00de:
	{
		InputBuffer_t333709416 * L_22 = __this->get_input_6();
		NullCheck(L_22);
		int32_t L_23 = InputBuffer_GetBits_m521756373(L_22, 1, /*hidden argument*/NULL);
		__this->set_bfinal_11(L_23);
		__this->set_state_9(3);
	}

IL_00f8:
	{
		int32_t L_24 = __this->get_state_9();
		V_11 = (bool)((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		bool L_25 = V_11;
		if (!L_25)
		{
			goto IL_01b9;
		}
	}
	{
		InputBuffer_t333709416 * L_26 = __this->get_input_6();
		NullCheck(L_26);
		bool L_27 = InputBuffer_EnsureBitsAvailable_m1253303813(L_26, 2, /*hidden argument*/NULL);
		V_12 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_12;
		if (!L_28)
		{
			goto IL_012f;
		}
	}
	{
		__this->set_state_9(3);
		V_3 = (bool)0;
		goto IL_0274;
	}

IL_012f:
	{
		InputBuffer_t333709416 * L_29 = __this->get_input_6();
		NullCheck(L_29);
		int32_t L_30 = InputBuffer_GetBits_m521756373(L_29, 2, /*hidden argument*/NULL);
		__this->set_blockType_12(L_30);
		int32_t L_31 = __this->get_blockType_12();
		V_13 = (bool)((((int32_t)L_31) == ((int32_t)2))? 1 : 0);
		bool L_32 = V_13;
		if (!L_32)
		{
			goto IL_015b;
		}
	}
	{
		__this->set_state_9(4);
		goto IL_01b8;
	}

IL_015b:
	{
		int32_t L_33 = __this->get_blockType_12();
		V_14 = (bool)((((int32_t)L_33) == ((int32_t)1))? 1 : 0);
		bool L_34 = V_14;
		if (!L_34)
		{
			goto IL_018c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HuffmanTree_t857975559_il2cpp_TypeInfo_var);
		HuffmanTree_t857975559 * L_35 = HuffmanTree_get_StaticLiteralLengthTree_m3124791014(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_literalLengthTree_7(L_35);
		HuffmanTree_t857975559 * L_36 = HuffmanTree_get_StaticDistanceTree_m3178788661(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_distanceTree_8(L_36);
		__this->set_state_9(((int32_t)10));
		goto IL_01b8;
	}

IL_018c:
	{
		int32_t L_37 = __this->get_blockType_12();
		V_15 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_15;
		if (!L_38)
		{
			goto IL_01a7;
		}
	}
	{
		__this->set_state_9(((int32_t)15));
		goto IL_01b8;
	}

IL_01a7:
	{
		String_t* L_39 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral2188930209, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_40 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40);
	}

IL_01b8:
	{
	}

IL_01b9:
	{
		int32_t L_41 = __this->get_blockType_12();
		V_16 = (bool)((((int32_t)L_41) == ((int32_t)2))? 1 : 0);
		bool L_42 = V_16;
		if (!L_42)
		{
			goto IL_01f2;
		}
	}
	{
		int32_t L_43 = __this->get_state_9();
		V_17 = (bool)((((int32_t)L_43) < ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_44 = V_17;
		if (!L_44)
		{
			goto IL_01e4;
		}
	}
	{
		bool L_45 = Inflater_DecodeDynamicBlockHeader_m3821747797(__this, /*hidden argument*/NULL);
		V_1 = L_45;
		goto IL_01ef;
	}

IL_01e4:
	{
		bool L_46 = Inflater_DecodeBlock_m3298394737(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_46;
	}

IL_01ef:
	{
		goto IL_023b;
	}

IL_01f2:
	{
		int32_t L_47 = __this->get_blockType_12();
		V_18 = (bool)((((int32_t)L_47) == ((int32_t)1))? 1 : 0);
		bool L_48 = V_18;
		if (!L_48)
		{
			goto IL_020e;
		}
	}
	{
		bool L_49 = Inflater_DecodeBlock_m3298394737(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_49;
		goto IL_023b;
	}

IL_020e:
	{
		int32_t L_50 = __this->get_blockType_12();
		V_19 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_19;
		if (!L_51)
		{
			goto IL_022a;
		}
	}
	{
		bool L_52 = Inflater_DecodeUncompressedBlock_m1436780137(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_52;
		goto IL_023b;
	}

IL_022a:
	{
		String_t* L_53 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral2188930209, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_54 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_54, L_53, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54);
	}

IL_023b:
	{
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_0249;
		}
	}
	{
		int32_t L_56 = __this->get_bfinal_11();
		G_B43_0 = ((!(((uint32_t)L_56) <= ((uint32_t)0)))? 1 : 0);
		goto IL_024a;
	}

IL_0249:
	{
		G_B43_0 = 0;
	}

IL_024a:
	{
		V_20 = (bool)G_B43_0;
		bool L_57 = V_20;
		if (!L_57)
		{
			goto IL_0270;
		}
	}
	{
		bool L_58 = __this->get_hasFormatReader_10();
		V_21 = L_58;
		bool L_59 = V_21;
		if (!L_59)
		{
			goto IL_0267;
		}
	}
	{
		__this->set_state_9(((int32_t)21));
		goto IL_026f;
	}

IL_0267:
	{
		__this->set_state_9(((int32_t)24));
	}

IL_026f:
	{
	}

IL_0270:
	{
		bool L_60 = V_1;
		V_3 = L_60;
		goto IL_0274;
	}

IL_0274:
	{
		bool L_61 = V_3;
		return L_61;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeUncompressedBlock(System.Boolean&)
extern "C"  bool Inflater_DecodeUncompressedBlock_m1436780137 (Inflater_t10910524 * __this, bool* ___end_of_block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflater_DecodeUncompressedBlock_m1436780137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		bool* L_0 = ___end_of_block0;
		*((int8_t*)(L_0)) = (int8_t)0;
		goto IL_0180;
	}

IL_0009:
	{
		int32_t L_1 = __this->get_state_9();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)15))))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_004d;
			}
			case 5:
			{
				goto IL_00ff;
			}
		}
	}
	{
		goto IL_0163;
	}

IL_0037:
	{
		InputBuffer_t333709416 * L_3 = __this->get_input_6();
		NullCheck(L_3);
		InputBuffer_SkipToByteBoundary_m3485783867(L_3, /*hidden argument*/NULL);
		__this->set_state_9(((int32_t)16));
		goto IL_004d;
	}

IL_004d:
	{
		InputBuffer_t333709416 * L_4 = __this->get_input_6();
		NullCheck(L_4);
		int32_t L_5 = InputBuffer_GetBits_m521756373(L_4, 8, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0188;
	}

IL_006b:
	{
		ByteU5BU5D_t4116647657* L_8 = __this->get_blockLengthBuffer_13();
		int32_t L_9 = __this->get_state_9();
		int32_t L_10 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)16)))), (uint8_t)(((int32_t)((uint8_t)L_10))));
		int32_t L_11 = __this->get_state_9();
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)((int32_t)19)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00ec;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_13 = __this->get_blockLengthBuffer_13();
		NullCheck(L_13);
		int32_t L_14 = 0;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_t4116647657* L_16 = __this->get_blockLengthBuffer_13();
		NullCheck(L_16);
		int32_t L_17 = 1;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->set_blockLength_14(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)((int32_t)256))))));
		ByteU5BU5D_t4116647657* L_19 = __this->get_blockLengthBuffer_13();
		NullCheck(L_19);
		int32_t L_20 = 2;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_t4116647657* L_22 = __this->get_blockLengthBuffer_13();
		NullCheck(L_22);
		int32_t L_23 = 3;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)((int32_t)256)))));
		int32_t L_25 = __this->get_blockLength_14();
		int32_t L_26 = V_6;
		V_7 = (bool)((((int32_t)((((int32_t)(((int32_t)((uint16_t)L_25)))) == ((int32_t)(((int32_t)((uint16_t)((~L_26)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00eb;
		}
	}
	{
		String_t* L_28 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral3295002465, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_29 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29);
	}

IL_00eb:
	{
	}

IL_00ec:
	{
		int32_t L_30 = __this->get_state_9();
		__this->set_state_9(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		goto IL_017f;
	}

IL_00ff:
	{
		OutputWindow_t1296654655 * L_31 = __this->get_output_5();
		InputBuffer_t333709416 * L_32 = __this->get_input_6();
		int32_t L_33 = __this->get_blockLength_14();
		NullCheck(L_31);
		int32_t L_34 = OutputWindow_CopyFrom_m1927387289(L_31, L_32, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		int32_t L_35 = __this->get_blockLength_14();
		int32_t L_36 = V_2;
		__this->set_blockLength_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)));
		int32_t L_37 = __this->get_blockLength_14();
		V_8 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_0144;
		}
	}
	{
		__this->set_state_9(2);
		bool* L_39 = ___end_of_block0;
		*((int8_t*)(L_39)) = (int8_t)1;
		V_4 = (bool)1;
		goto IL_0188;
	}

IL_0144:
	{
		OutputWindow_t1296654655 * L_40 = __this->get_output_5();
		NullCheck(L_40);
		int32_t L_41 = OutputWindow_get_FreeBytes_m172522004(L_40, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_015e;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_0188;
	}

IL_015e:
	{
		V_4 = (bool)0;
		goto IL_0188;
	}

IL_0163:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)0, _stringLiteral2265238322, /*hidden argument*/NULL);
		String_t* L_43 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral2974181263, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_44 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_44, L_43, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44);
	}

IL_017f:
	{
	}

IL_0180:
	{
		V_10 = (bool)1;
		goto IL_0009;
	}

IL_0188:
	{
		bool L_45 = V_4;
		return L_45;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeBlock(System.Boolean&)
extern "C"  bool Inflater_DecodeBlock_m3298394737 (Inflater_t10910524 * __this, bool* ___end_of_block_code_seen0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflater_DecodeBlock_m3298394737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B27_0 = 0;
	{
		bool* L_0 = ___end_of_block_code_seen0;
		*((int8_t*)(L_0)) = (int8_t)0;
		OutputWindow_t1296654655 * L_1 = __this->get_output_5();
		NullCheck(L_1);
		int32_t L_2 = OutputWindow_get_FreeBytes_m172522004(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_031a;
	}

IL_0015:
	{
		int32_t L_3 = __this->get_state_9();
		V_2 = L_3;
		int32_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0142;
			}
			case 2:
			{
				goto IL_01d6;
			}
			case 3:
			{
				goto IL_025c;
			}
		}
	}
	{
		goto IL_02fd;
	}

IL_003b:
	{
		HuffmanTree_t857975559 * L_5 = __this->get_literalLengthTree_7();
		InputBuffer_t333709416 * L_6 = __this->get_input_6();
		NullCheck(L_5);
		int32_t L_7 = HuffmanTree_GetNextSymbol_m2267284928(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_0060:
	{
		int32_t L_10 = V_1;
		V_6 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		OutputWindow_t1296654655 * L_12 = __this->get_output_5();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		OutputWindow_Write_m4205025380(L_12, (uint8_t)(((int32_t)((uint8_t)L_13))), /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		goto IL_013d;
	}

IL_0087:
	{
		int32_t L_15 = V_1;
		V_7 = (bool)((((int32_t)L_15) == ((int32_t)((int32_t)256)))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00a8;
		}
	}
	{
		bool* L_17 = ___end_of_block_code_seen0;
		*((int8_t*)(L_17)) = (int8_t)1;
		__this->set_state_9(2);
		V_5 = (bool)1;
		goto IL_0330;
	}

IL_00a8:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)257)));
		int32_t L_19 = V_1;
		V_8 = (bool)((((int32_t)L_19) < ((int32_t)8))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)3));
		__this->set_extraBits_17(0);
		goto IL_0134;
	}

IL_00ca:
	{
		int32_t L_22 = V_1;
		V_9 = (bool)((((int32_t)L_22) == ((int32_t)((int32_t)28)))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00e6;
		}
	}
	{
		V_1 = ((int32_t)258);
		__this->set_extraBits_17(0);
		goto IL_0134;
	}

IL_00e6:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t10910524_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_26 = ((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->get_extraLengthBits_0();
		NullCheck(L_26);
		G_B16_0 = ((((int32_t)((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B16_0 = 1;
	}

IL_00fb:
	{
		V_10 = (bool)G_B16_0;
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_28 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1783318469, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_29 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29);
	}

IL_0112:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t10910524_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_30 = ((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->get_extraLengthBits_0();
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		__this->set_extraBits_17(L_33);
		int32_t L_34 = __this->get_extraBits_17();
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((!(((uint32_t)L_34) <= ((uint32_t)0)))? 1 : 0), _stringLiteral2413066215, /*hidden argument*/NULL);
	}

IL_0134:
	{
		int32_t L_35 = V_1;
		__this->set_length_15(L_35);
		goto IL_0142;
	}

IL_013d:
	{
		goto IL_0319;
	}

IL_0142:
	{
		int32_t L_36 = __this->get_extraBits_17();
		V_11 = (bool)((((int32_t)L_36) > ((int32_t)0))? 1 : 0);
		bool L_37 = V_11;
		if (!L_37)
		{
			goto IL_01cc;
		}
	}
	{
		__this->set_state_9(((int32_t)11));
		InputBuffer_t333709416 * L_38 = __this->get_input_6();
		int32_t L_39 = __this->get_extraBits_17();
		NullCheck(L_38);
		int32_t L_40 = InputBuffer_GetBits_m521756373(L_38, L_39, /*hidden argument*/NULL);
		V_12 = L_40;
		int32_t L_41 = V_12;
		V_13 = (bool)((((int32_t)L_41) < ((int32_t)0))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_0181;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_0181:
	{
		int32_t L_43 = __this->get_length_15();
		if ((((int32_t)L_43) < ((int32_t)0)))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_44 = __this->get_length_15();
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t10910524_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_45 = ((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->get_lengthBase_1();
		NullCheck(L_45);
		G_B27_0 = ((((int32_t)((((int32_t)L_44) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_45)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_019f;
	}

IL_019e:
	{
		G_B27_0 = 1;
	}

IL_019f:
	{
		V_14 = (bool)G_B27_0;
		bool L_46 = V_14;
		if (!L_46)
		{
			goto IL_01b6;
		}
	}
	{
		String_t* L_47 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1783318469, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_48 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_48, L_47, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48);
	}

IL_01b6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t10910524_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_49 = ((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->get_lengthBase_1();
		int32_t L_50 = __this->get_length_15();
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = V_12;
		__this->set_length_15(((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)L_53)));
	}

IL_01cc:
	{
		__this->set_state_9(((int32_t)12));
		goto IL_01d6;
	}

IL_01d6:
	{
		int32_t L_54 = __this->get_blockType_12();
		V_15 = (bool)((((int32_t)L_54) == ((int32_t)2))? 1 : 0);
		bool L_55 = V_15;
		if (!L_55)
		{
			goto IL_0200;
		}
	}
	{
		HuffmanTree_t857975559 * L_56 = __this->get_distanceTree_8();
		InputBuffer_t333709416 * L_57 = __this->get_input_6();
		NullCheck(L_56);
		int32_t L_58 = HuffmanTree_GetNextSymbol_m2267284928(L_56, L_57, /*hidden argument*/NULL);
		__this->set_distanceCode_16(L_58);
		goto IL_023a;
	}

IL_0200:
	{
		InputBuffer_t333709416 * L_59 = __this->get_input_6();
		NullCheck(L_59);
		int32_t L_60 = InputBuffer_GetBits_m521756373(L_59, 5, /*hidden argument*/NULL);
		__this->set_distanceCode_16(L_60);
		int32_t L_61 = __this->get_distanceCode_16();
		V_16 = (bool)((((int32_t)((((int32_t)L_61) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_16;
		if (!L_62)
		{
			goto IL_0239;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t10910524_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_63 = ((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->get_staticDistanceTreeTable_4();
		int32_t L_64 = __this->get_distanceCode_16();
		NullCheck(L_63);
		int32_t L_65 = L_64;
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		__this->set_distanceCode_16(L_66);
	}

IL_0239:
	{
	}

IL_023a:
	{
		int32_t L_67 = __this->get_distanceCode_16();
		V_17 = (bool)((((int32_t)L_67) < ((int32_t)0))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_0252;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_0252:
	{
		__this->set_state_9(((int32_t)13));
		goto IL_025c;
	}

IL_025c:
	{
		int32_t L_69 = __this->get_distanceCode_16();
		V_18 = (bool)((((int32_t)L_69) > ((int32_t)3))? 1 : 0);
		bool L_70 = V_18;
		if (!L_70)
		{
			goto IL_02b6;
		}
	}
	{
		int32_t L_71 = __this->get_distanceCode_16();
		__this->set_extraBits_17(((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)2))>>(int32_t)1)));
		InputBuffer_t333709416 * L_72 = __this->get_input_6();
		int32_t L_73 = __this->get_extraBits_17();
		NullCheck(L_72);
		int32_t L_74 = InputBuffer_GetBits_m521756373(L_72, L_73, /*hidden argument*/NULL);
		V_19 = L_74;
		int32_t L_75 = V_19;
		V_20 = (bool)((((int32_t)L_75) < ((int32_t)0))? 1 : 0);
		bool L_76 = V_20;
		if (!L_76)
		{
			goto IL_02a3;
		}
	}
	{
		V_5 = (bool)0;
		goto IL_0330;
	}

IL_02a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t10910524_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_77 = ((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->get_distanceBasePosition_2();
		int32_t L_78 = __this->get_distanceCode_16();
		NullCheck(L_77);
		int32_t L_79 = L_78;
		int32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = V_19;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_81));
		goto IL_02c1;
	}

IL_02b6:
	{
		int32_t L_82 = __this->get_distanceCode_16();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_02c1:
	{
		int32_t L_83 = V_0;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)((int32_t)258)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral78954813, /*hidden argument*/NULL);
		OutputWindow_t1296654655 * L_84 = __this->get_output_5();
		int32_t L_85 = __this->get_length_15();
		int32_t L_86 = V_3;
		NullCheck(L_84);
		OutputWindow_WriteLengthDistance_m98394582(L_84, L_85, L_86, /*hidden argument*/NULL);
		int32_t L_87 = V_0;
		int32_t L_88 = __this->get_length_15();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_87, (int32_t)L_88));
		__this->set_state_9(((int32_t)10));
		goto IL_0319;
	}

IL_02fd:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)0, _stringLiteral2265238322, /*hidden argument*/NULL);
		String_t* L_89 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral2974181263, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_90 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_90, L_89, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90);
	}

IL_0319:
	{
	}

IL_031a:
	{
		int32_t L_91 = V_0;
		V_21 = (bool)((((int32_t)L_91) > ((int32_t)((int32_t)258)))? 1 : 0);
		bool L_92 = V_21;
		if (L_92)
		{
			goto IL_0015;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_0330;
	}

IL_0330:
	{
		bool L_93 = V_5;
		return L_93;
	}
}
// System.Boolean Mapbox.IO.Compression.Inflater::DecodeDynamicBlockHeader()
extern "C"  bool Inflater_DecodeDynamicBlockHeader_m3821747797 (Inflater_t10910524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflater_DecodeDynamicBlockHeader_m3821747797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	uint8_t V_19 = 0x0;
	bool V_20 = false;
	bool V_21 = false;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	int32_t V_26 = 0;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	{
		int32_t L_0 = __this->get_state_9();
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)4)))
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0070;
			}
			case 2:
			{
				goto IL_00b1;
			}
			case 3:
			{
				goto IL_00f9;
			}
			case 4:
			{
				goto IL_01be;
			}
			case 5:
			{
				goto IL_01be;
			}
		}
	}
	{
		goto IL_040a;
	}

IL_002d:
	{
		InputBuffer_t333709416 * L_2 = __this->get_input_6();
		NullCheck(L_2);
		int32_t L_3 = InputBuffer_GetBits_m521756373(L_2, 5, /*hidden argument*/NULL);
		__this->set_literalLengthCodeCount_19(L_3);
		int32_t L_4 = __this->get_literalLengthCodeCount_19();
		V_3 = (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_0055:
	{
		int32_t L_6 = __this->get_literalLengthCodeCount_19();
		__this->set_literalLengthCodeCount_19(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)257))));
		__this->set_state_9(5);
		goto IL_0070;
	}

IL_0070:
	{
		InputBuffer_t333709416 * L_7 = __this->get_input_6();
		NullCheck(L_7);
		int32_t L_8 = InputBuffer_GetBits_m521756373(L_7, 5, /*hidden argument*/NULL);
		__this->set_distanceCodeCount_20(L_8);
		int32_t L_9 = __this->get_distanceCodeCount_20();
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_009a;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_009a:
	{
		int32_t L_11 = __this->get_distanceCodeCount_20();
		__this->set_distanceCodeCount_20(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		__this->set_state_9(6);
		goto IL_00b1;
	}

IL_00b1:
	{
		InputBuffer_t333709416 * L_12 = __this->get_input_6();
		NullCheck(L_12);
		int32_t L_13 = InputBuffer_GetBits_m521756373(L_12, 4, /*hidden argument*/NULL);
		__this->set_codeLengthCodeCount_21(L_13);
		int32_t L_14 = __this->get_codeLengthCodeCount_21();
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00db;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_00db:
	{
		int32_t L_16 = __this->get_codeLengthCodeCount_21();
		__this->set_codeLengthCodeCount_21(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)4)));
		__this->set_loopCounter_18(0);
		__this->set_state_9(7);
		goto IL_00f9;
	}

IL_00f9:
	{
		goto IL_0143;
	}

IL_00fb:
	{
		InputBuffer_t333709416 * L_17 = __this->get_input_6();
		NullCheck(L_17);
		int32_t L_18 = InputBuffer_GetBits_m521756373(L_17, 3, /*hidden argument*/NULL);
		V_7 = L_18;
		int32_t L_19 = V_7;
		V_8 = (bool)((((int32_t)L_19) < ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_011e;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_011e:
	{
		ByteU5BU5D_t4116647657* L_21 = __this->get_codeLengthTreeCodeLength_25();
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t10910524_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_22 = ((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->get_codeOrder_3();
		int32_t L_23 = __this->get_loopCounter_18();
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_7;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)(((int32_t)((uint8_t)L_26))));
		int32_t L_27 = __this->get_loopCounter_18();
		__this->set_loopCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
	}

IL_0143:
	{
		int32_t L_28 = __this->get_loopCounter_18();
		int32_t L_29 = __this->get_codeLengthCodeCount_21();
		V_9 = (bool)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_9;
		if (L_30)
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_31 = __this->get_codeLengthCodeCount_21();
		V_10 = L_31;
		goto IL_0179;
	}

IL_0161:
	{
		ByteU5BU5D_t4116647657* L_32 = __this->get_codeLengthTreeCodeLength_25();
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t10910524_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_33 = ((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->get_codeOrder_3();
		int32_t L_34 = V_10;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)0);
		int32_t L_37 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0179:
	{
		int32_t L_38 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Inflater_t10910524_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_39 = ((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->get_codeOrder_3();
		NullCheck(L_39);
		V_11 = (bool)((((int32_t)L_38) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length))))))? 1 : 0);
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_0161;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_41 = __this->get_codeLengthTreeCodeLength_25();
		HuffmanTree_t857975559 * L_42 = (HuffmanTree_t857975559 *)il2cpp_codegen_object_new(HuffmanTree_t857975559_il2cpp_TypeInfo_var);
		HuffmanTree__ctor_m1239190810(L_42, L_41, /*hidden argument*/NULL);
		__this->set_codeLengthTree_26(L_42);
		int32_t L_43 = __this->get_literalLengthCodeCount_19();
		int32_t L_44 = __this->get_distanceCodeCount_20();
		__this->set_codeArraySize_22(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44)));
		__this->set_loopCounter_18(0);
		__this->set_state_9(8);
		goto IL_01be;
	}

IL_01be:
	{
		goto IL_03f1;
	}

IL_01c3:
	{
		int32_t L_45 = __this->get_state_9();
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)8))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_0203;
		}
	}
	{
		HuffmanTree_t857975559 * L_47 = __this->get_codeLengthTree_26();
		InputBuffer_t333709416 * L_48 = __this->get_input_6();
		NullCheck(L_47);
		int32_t L_49 = HuffmanTree_GetNextSymbol_m2267284928(L_47, L_48, /*hidden argument*/NULL);
		int32_t L_50 = L_49;
		V_14 = L_50;
		__this->set_lengthCode_23(L_50);
		int32_t L_51 = V_14;
		V_13 = (bool)((((int32_t)L_51) < ((int32_t)0))? 1 : 0);
		bool L_52 = V_13;
		if (!L_52)
		{
			goto IL_0202;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_0202:
	{
	}

IL_0203:
	{
		int32_t L_53 = __this->get_lengthCode_23();
		V_15 = (bool)((((int32_t)((((int32_t)L_53) > ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_15;
		if (!L_54)
		{
			goto IL_023f;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_55 = __this->get_codeList_24();
		int32_t L_56 = __this->get_loopCounter_18();
		V_14 = L_56;
		int32_t L_57 = V_14;
		__this->set_loopCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1)));
		int32_t L_58 = V_14;
		int32_t L_59 = __this->get_lengthCode_23();
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (uint8_t)(((int32_t)((uint8_t)L_59))));
		goto IL_03e9;
	}

IL_023f:
	{
		InputBuffer_t333709416 * L_60 = __this->get_input_6();
		NullCheck(L_60);
		bool L_61 = InputBuffer_EnsureBitsAvailable_m1253303813(L_60, 7, /*hidden argument*/NULL);
		V_17 = (bool)((((int32_t)L_61) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_17;
		if (!L_62)
		{
			goto IL_0266;
		}
	}
	{
		__this->set_state_9(((int32_t)9));
		V_4 = (bool)0;
		goto IL_04a2;
	}

IL_0266:
	{
		int32_t L_63 = __this->get_lengthCode_23();
		V_18 = (bool)((((int32_t)L_63) == ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_64 = V_18;
		if (!L_64)
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_65 = __this->get_loopCounter_18();
		V_20 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_20;
		if (!L_66)
		{
			goto IL_0290;
		}
	}
	{
		InvalidDataException_t4045251031 * L_67 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m3515379960(L_67, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67);
	}

IL_0290:
	{
		ByteU5BU5D_t4116647657* L_68 = __this->get_codeList_24();
		int32_t L_69 = __this->get_loopCounter_18();
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1));
		uint8_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_19 = L_71;
		InputBuffer_t333709416 * L_72 = __this->get_input_6();
		NullCheck(L_72);
		int32_t L_73 = InputBuffer_GetBits_m521756373(L_72, 2, /*hidden argument*/NULL);
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)3));
		int32_t L_74 = __this->get_loopCounter_18();
		int32_t L_75 = V_16;
		int32_t L_76 = __this->get_codeArraySize_22();
		V_21 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_75))) > ((int32_t)L_76))? 1 : 0);
		bool L_77 = V_21;
		if (!L_77)
		{
			goto IL_02cf;
		}
	}
	{
		InvalidDataException_t4045251031 * L_78 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m3515379960(L_78, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78);
	}

IL_02cf:
	{
		V_22 = 0;
		goto IL_02f9;
	}

IL_02d4:
	{
		ByteU5BU5D_t4116647657* L_79 = __this->get_codeList_24();
		int32_t L_80 = __this->get_loopCounter_18();
		V_14 = L_80;
		int32_t L_81 = V_14;
		__this->set_loopCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1)));
		int32_t L_82 = V_14;
		uint8_t L_83 = V_19;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (uint8_t)L_83);
		int32_t L_84 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
	}

IL_02f9:
	{
		int32_t L_85 = V_22;
		int32_t L_86 = V_16;
		V_23 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		bool L_87 = V_23;
		if (L_87)
		{
			goto IL_02d4;
		}
	}
	{
		goto IL_03e8;
	}

IL_030b:
	{
		int32_t L_88 = __this->get_lengthCode_23();
		V_24 = (bool)((((int32_t)L_88) == ((int32_t)((int32_t)17)))? 1 : 0);
		bool L_89 = V_24;
		if (!L_89)
		{
			goto IL_0382;
		}
	}
	{
		InputBuffer_t333709416 * L_90 = __this->get_input_6();
		NullCheck(L_90);
		int32_t L_91 = InputBuffer_GetBits_m521756373(L_90, 3, /*hidden argument*/NULL);
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)3));
		int32_t L_92 = __this->get_loopCounter_18();
		int32_t L_93 = V_16;
		int32_t L_94 = __this->get_codeArraySize_22();
		V_25 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)L_93))) > ((int32_t)L_94))? 1 : 0);
		bool L_95 = V_25;
		if (!L_95)
		{
			goto IL_034a;
		}
	}
	{
		InvalidDataException_t4045251031 * L_96 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m3515379960(L_96, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_96);
	}

IL_034a:
	{
		V_26 = 0;
		goto IL_0373;
	}

IL_034f:
	{
		ByteU5BU5D_t4116647657* L_97 = __this->get_codeList_24();
		int32_t L_98 = __this->get_loopCounter_18();
		V_14 = L_98;
		int32_t L_99 = V_14;
		__this->set_loopCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1)));
		int32_t L_100 = V_14;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (uint8_t)0);
		int32_t L_101 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_0373:
	{
		int32_t L_102 = V_26;
		int32_t L_103 = V_16;
		V_27 = (bool)((((int32_t)L_102) < ((int32_t)L_103))? 1 : 0);
		bool L_104 = V_27;
		if (L_104)
		{
			goto IL_034f;
		}
	}
	{
		goto IL_03e8;
	}

IL_0382:
	{
		InputBuffer_t333709416 * L_105 = __this->get_input_6();
		NullCheck(L_105);
		int32_t L_106 = InputBuffer_GetBits_m521756373(L_105, 7, /*hidden argument*/NULL);
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)((int32_t)11)));
		int32_t L_107 = __this->get_loopCounter_18();
		int32_t L_108 = V_16;
		int32_t L_109 = __this->get_codeArraySize_22();
		V_28 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)L_108))) > ((int32_t)L_109))? 1 : 0);
		bool L_110 = V_28;
		if (!L_110)
		{
			goto IL_03b2;
		}
	}
	{
		InvalidDataException_t4045251031 * L_111 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m3515379960(L_111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_111);
	}

IL_03b2:
	{
		V_29 = 0;
		goto IL_03db;
	}

IL_03b7:
	{
		ByteU5BU5D_t4116647657* L_112 = __this->get_codeList_24();
		int32_t L_113 = __this->get_loopCounter_18();
		V_14 = L_113;
		int32_t L_114 = V_14;
		__this->set_loopCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1)));
		int32_t L_115 = V_14;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_115), (uint8_t)0);
		int32_t L_116 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
	}

IL_03db:
	{
		int32_t L_117 = V_29;
		int32_t L_118 = V_16;
		V_30 = (bool)((((int32_t)L_117) < ((int32_t)L_118))? 1 : 0);
		bool L_119 = V_30;
		if (L_119)
		{
			goto IL_03b7;
		}
	}
	{
	}

IL_03e8:
	{
	}

IL_03e9:
	{
		__this->set_state_9(8);
	}

IL_03f1:
	{
		int32_t L_120 = __this->get_loopCounter_18();
		int32_t L_121 = __this->get_codeArraySize_22();
		V_31 = (bool)((((int32_t)L_120) < ((int32_t)L_121))? 1 : 0);
		bool L_122 = V_31;
		if (L_122)
		{
			goto IL_01c3;
		}
	}
	{
		goto IL_0426;
	}

IL_040a:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)0, _stringLiteral2265238322, /*hidden argument*/NULL);
		String_t* L_123 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral2974181263, /*hidden argument*/NULL);
		InvalidDataException_t4045251031 * L_124 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m1905262010(L_124, L_123, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_124);
	}

IL_0426:
	{
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)288)));
		V_1 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32)));
		ByteU5BU5D_t4116647657* L_125 = __this->get_codeList_24();
		ByteU5BU5D_t4116647657* L_126 = V_0;
		int32_t L_127 = __this->get_literalLengthCodeCount_19();
		Array_Copy_m1988217701(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_125, (RuntimeArray *)(RuntimeArray *)L_126, L_127, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_128 = __this->get_codeList_24();
		int32_t L_129 = __this->get_literalLengthCodeCount_19();
		ByteU5BU5D_t4116647657* L_130 = V_1;
		int32_t L_131 = __this->get_distanceCodeCount_20();
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_128, L_129, (RuntimeArray *)(RuntimeArray *)L_130, 0, L_131, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_132 = V_0;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)256);
		uint8_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		V_32 = (bool)((((int32_t)L_134) == ((int32_t)0))? 1 : 0);
		bool L_135 = V_32;
		if (!L_135)
		{
			goto IL_047d;
		}
	}
	{
		InvalidDataException_t4045251031 * L_136 = (InvalidDataException_t4045251031 *)il2cpp_codegen_object_new(InvalidDataException_t4045251031_il2cpp_TypeInfo_var);
		InvalidDataException__ctor_m3515379960(L_136, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_136);
	}

IL_047d:
	{
		ByteU5BU5D_t4116647657* L_137 = V_0;
		HuffmanTree_t857975559 * L_138 = (HuffmanTree_t857975559 *)il2cpp_codegen_object_new(HuffmanTree_t857975559_il2cpp_TypeInfo_var);
		HuffmanTree__ctor_m1239190810(L_138, L_137, /*hidden argument*/NULL);
		__this->set_literalLengthTree_7(L_138);
		ByteU5BU5D_t4116647657* L_139 = V_1;
		HuffmanTree_t857975559 * L_140 = (HuffmanTree_t857975559 *)il2cpp_codegen_object_new(HuffmanTree_t857975559_il2cpp_TypeInfo_var);
		HuffmanTree__ctor_m1239190810(L_140, L_139, /*hidden argument*/NULL);
		__this->set_distanceTree_8(L_140);
		__this->set_state_9(((int32_t)10));
		V_4 = (bool)1;
		goto IL_04a2;
	}

IL_04a2:
	{
		bool L_141 = V_4;
		return L_141;
	}
}
// System.Void Mapbox.IO.Compression.Inflater::.cctor()
extern "C"  void Inflater__cctor_m3585428057 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inflater__cctor_m3585428057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____2DAF59AD82CBE58E893B0C025E68180B6C4037B4_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->set_extraLengthBits_0(L_0);
		Int32U5BU5D_t385246372* L_2 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29)));
		RuntimeFieldHandle_t1871169219  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->set_lengthBase_1(L_2);
		Int32U5BU5D_t385246372* L_4 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32)));
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____FD5BE77C4372533D7C16BF67D58A3ABBE604ED81_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->set_distanceBasePosition_2(L_4);
		ByteU5BU5D_t4116647657* L_6 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19)));
		RuntimeFieldHandle_t1871169219  L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->set_codeOrder_3(L_6);
		ByteU5BU5D_t4116647657* L_8 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32)));
		RuntimeFieldHandle_t1871169219  L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		((Inflater_t10910524_StaticFields*)il2cpp_codegen_static_fields_for(Inflater_t10910524_il2cpp_TypeInfo_var))->set_staticDistanceTreeTable_4(L_8);
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
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBits()
extern "C"  int32_t InputBuffer_get_AvailableBits_m3131842582 (InputBuffer_t333709416 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bitsInBuffer_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.InputBuffer::get_AvailableBytes()
extern "C"  int32_t InputBuffer_get_AvailableBytes_m2405312377 (InputBuffer_t333709416 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_end_2();
		int32_t L_1 = __this->get_start_1();
		int32_t L_2 = __this->get_bitsInBuffer_4();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)((int32_t)((int32_t)L_2/(int32_t)8))));
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Mapbox.IO.Compression.InputBuffer::EnsureBitsAvailable(System.Int32)
extern "C"  bool InputBuffer_EnsureBitsAvailable_m1253303813 (InputBuffer_t333709416 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputBuffer_EnsureBitsAvailable_m1253303813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___count0;
		if ((((int32_t)0) >= ((int32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___count0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)G_B3_0, _stringLiteral2867231120, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_bitsInBuffer_4();
		int32_t L_3 = ___count0;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00db;
		}
	}
	{
		bool L_5 = InputBuffer_NeedsInput_m1866310186(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00df;
	}

IL_003e:
	{
		uint32_t L_7 = __this->get_bitBuffer_3();
		ByteU5BU5D_t4116647657* L_8 = __this->get_buffer_0();
		int32_t L_9 = __this->get_start_1();
		V_3 = L_9;
		int32_t L_10 = V_3;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		int32_t L_11 = V_3;
		NullCheck(L_8);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)L_13<<(int32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)31))))))));
		int32_t L_15 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)8)));
		int32_t L_16 = __this->get_bitsInBuffer_4();
		int32_t L_17 = ___count0;
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00da;
		}
	}
	{
		bool L_19 = InputBuffer_NeedsInput_m1866310186(__this, /*hidden argument*/NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_009c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_00df;
	}

IL_009c:
	{
		uint32_t L_21 = __this->get_bitBuffer_3();
		ByteU5BU5D_t4116647657* L_22 = __this->get_buffer_0();
		int32_t L_23 = __this->get_start_1();
		V_3 = L_23;
		int32_t L_24 = V_3;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		int32_t L_25 = V_3;
		NullCheck(L_22);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((int32_t)L_21|(int32_t)((int32_t)((int32_t)L_27<<(int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)31))))))));
		int32_t L_29 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)8)));
	}

IL_00da:
	{
	}

IL_00db:
	{
		V_2 = (bool)1;
		goto IL_00df;
	}

IL_00df:
	{
		bool L_30 = V_2;
		return L_30;
	}
}
// System.UInt32 Mapbox.IO.Compression.InputBuffer::TryLoad16Bits()
extern "C"  uint32_t InputBuffer_TryLoad16Bits_m2347747057 (InputBuffer_t333709416 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	uint32_t V_6 = 0;
	{
		int32_t L_0 = __this->get_bitsInBuffer_4();
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)8))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_2 = __this->get_start_1();
		int32_t L_3 = __this->get_end_2();
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		uint32_t L_5 = __this->get_bitBuffer_3();
		ByteU5BU5D_t4116647657* L_6 = __this->get_buffer_0();
		int32_t L_7 = __this->get_start_1();
		V_2 = L_7;
		int32_t L_8 = V_2;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_2;
		NullCheck(L_6);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((int32_t)L_5|(int32_t)((int32_t)((int32_t)L_11<<(int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)31))))))));
		int32_t L_13 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)8)));
	}

IL_0063:
	{
		int32_t L_14 = __this->get_start_1();
		int32_t L_15 = __this->get_end_2();
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		uint32_t L_17 = __this->get_bitBuffer_3();
		ByteU5BU5D_t4116647657* L_18 = __this->get_buffer_0();
		int32_t L_19 = __this->get_start_1();
		V_2 = L_19;
		int32_t L_20 = V_2;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		int32_t L_21 = V_2;
		NullCheck(L_18);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((int32_t)L_17|(int32_t)((int32_t)((int32_t)L_23<<(int32_t)((int32_t)((int32_t)L_24&(int32_t)((int32_t)31))))))));
		int32_t L_25 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)8)));
	}

IL_00b4:
	{
		goto IL_011c;
	}

IL_00b7:
	{
		int32_t L_26 = __this->get_bitsInBuffer_4();
		V_4 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_28 = __this->get_start_1();
		int32_t L_29 = __this->get_end_2();
		V_5 = (bool)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_011b;
		}
	}
	{
		uint32_t L_31 = __this->get_bitBuffer_3();
		ByteU5BU5D_t4116647657* L_32 = __this->get_buffer_0();
		int32_t L_33 = __this->get_start_1();
		V_2 = L_33;
		int32_t L_34 = V_2;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)));
		int32_t L_35 = V_2;
		NullCheck(L_32);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((int32_t)L_31|(int32_t)((int32_t)((int32_t)L_37<<(int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)31))))))));
		int32_t L_39 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)8)));
	}

IL_011b:
	{
	}

IL_011c:
	{
		uint32_t L_40 = __this->get_bitBuffer_3();
		V_6 = L_40;
		goto IL_0126;
	}

IL_0126:
	{
		uint32_t L_41 = V_6;
		return L_41;
	}
}
// System.UInt32 Mapbox.IO.Compression.InputBuffer::GetBitMask(System.Int32)
extern "C"  uint32_t InputBuffer_GetBitMask_m3399342754 (InputBuffer_t333709416 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___count0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31))))), (int32_t)1));
		goto IL_000c;
	}

IL_000c:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.InputBuffer::GetBits(System.Int32)
extern "C"  int32_t InputBuffer_GetBits_m521756373 (InputBuffer_t333709416 * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputBuffer_GetBits_m521756373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___count0;
		if ((((int32_t)0) >= ((int32_t)L_0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___count0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)G_B3_0, _stringLiteral2867231120, /*hidden argument*/NULL);
		int32_t L_2 = ___count0;
		bool L_3 = InputBuffer_EnsureBitsAvailable_m1253303813(__this, L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		V_2 = (-1);
		goto IL_0060;
	}

IL_002e:
	{
		uint32_t L_5 = __this->get_bitBuffer_3();
		int32_t L_6 = ___count0;
		uint32_t L_7 = InputBuffer_GetBitMask_m3399342754(__this, L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_5&(int32_t)L_7));
		uint32_t L_8 = __this->get_bitBuffer_3();
		int32_t L_9 = ___count0;
		__this->set_bitBuffer_3(((int32_t)((uint32_t)L_8>>((int32_t)((int32_t)L_9&(int32_t)((int32_t)31))))));
		int32_t L_10 = __this->get_bitsInBuffer_4();
		int32_t L_11 = ___count0;
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)));
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_0060;
	}

IL_0060:
	{
		int32_t L_13 = V_2;
		return L_13;
	}
}
// System.Int32 Mapbox.IO.Compression.InputBuffer::CopyTo(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t InputBuffer_CopyTo_m1507984879 (InputBuffer_t333709416 * __this, ByteU5BU5D_t4116647657* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputBuffer_CopyTo_m1507984879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___output0;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((!(((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), _stringLiteral757602046, /*hidden argument*/NULL);
		int32_t L_1 = ___offset1;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral757602046, /*hidden argument*/NULL);
		int32_t L_2 = ___length2;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral757602046, /*hidden argument*/NULL);
		int32_t L_3 = ___offset1;
		ByteU5BU5D_t4116647657* L_4 = ___output0;
		NullCheck(L_4);
		int32_t L_5 = ___length2;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), (int32_t)L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral757602046, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_bitsInBuffer_4();
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((int32_t)((int32_t)L_6%(int32_t)8))) == ((int32_t)0))? 1 : 0), _stringLiteral757602046, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_009a;
	}

IL_0064:
	{
		ByteU5BU5D_t4116647657* L_7 = ___output0;
		int32_t L_8 = ___offset1;
		int32_t L_9 = L_8;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		uint32_t L_10 = __this->get_bitBuffer_3();
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)(((int32_t)((uint8_t)L_10))));
		uint32_t L_11 = __this->get_bitBuffer_3();
		__this->set_bitBuffer_3(((int32_t)((uint32_t)L_11>>8)));
		int32_t L_12 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)8)));
		int32_t L_13 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_009a:
	{
		int32_t L_15 = __this->get_bitsInBuffer_4();
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_16 = ___length2;
		G_B5_0 = ((((int32_t)L_16) > ((int32_t)0))? 1 : 0);
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B5_0 = 0;
	}

IL_00aa:
	{
		V_2 = (bool)G_B5_0;
		bool L_17 = V_2;
		if (L_17)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_18 = ___length2;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_20 = V_0;
		V_4 = L_20;
		goto IL_0103;
	}

IL_00bc:
	{
		int32_t L_21 = __this->get_end_2();
		int32_t L_22 = __this->get_start_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22));
		int32_t L_23 = ___length2;
		int32_t L_24 = V_1;
		V_5 = (bool)((((int32_t)L_23) > ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_26 = V_1;
		___length2 = L_26;
	}

IL_00d9:
	{
		ByteU5BU5D_t4116647657* L_27 = __this->get_buffer_0();
		int32_t L_28 = __this->get_start_1();
		ByteU5BU5D_t4116647657* L_29 = ___output0;
		int32_t L_30 = ___offset1;
		int32_t L_31 = ___length2;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_27, L_28, (RuntimeArray *)(RuntimeArray *)L_29, L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = __this->get_start_1();
		int32_t L_33 = ___length2;
		__this->set_start_1(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)));
		int32_t L_34 = V_0;
		int32_t L_35 = ___length2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35));
		goto IL_0103;
	}

IL_0103:
	{
		int32_t L_36 = V_4;
		return L_36;
	}
}
// System.Boolean Mapbox.IO.Compression.InputBuffer::NeedsInput()
extern "C"  bool InputBuffer_NeedsInput_m1866310186 (InputBuffer_t333709416 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_start_1();
		int32_t L_1 = __this->get_end_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::SetInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void InputBuffer_SetInput_m2532930549 (InputBuffer_t333709416 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputBuffer_SetInput_m2532930549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((!(((RuntimeObject*)(ByteU5BU5D_t4116647657*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), _stringLiteral757602046, /*hidden argument*/NULL);
		int32_t L_1 = ___offset1;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral757602046, /*hidden argument*/NULL);
		int32_t L_2 = ___length2;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral757602046, /*hidden argument*/NULL);
		int32_t L_3 = ___offset1;
		ByteU5BU5D_t4116647657* L_4 = ___buffer0;
		NullCheck(L_4);
		int32_t L_5 = ___length2;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), (int32_t)L_5))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral757602046, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_start_1();
		int32_t L_7 = __this->get_end_2();
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), _stringLiteral757602046, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_8 = ___buffer0;
		__this->set_buffer_0(L_8);
		int32_t L_9 = ___offset1;
		__this->set_start_1(L_9);
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___length2;
		__this->set_end_2(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)));
		return;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::SkipBits(System.Int32)
extern "C"  void InputBuffer_SkipBits_m2751677346 (InputBuffer_t333709416 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputBuffer_SkipBits_m2751677346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_bitsInBuffer_4();
		int32_t L_1 = ___n0;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral3305376611, /*hidden argument*/NULL);
		uint32_t L_2 = __this->get_bitBuffer_3();
		int32_t L_3 = ___n0;
		__this->set_bitBuffer_3(((int32_t)((uint32_t)L_2>>((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))));
		int32_t L_4 = __this->get_bitsInBuffer_4();
		int32_t L_5 = ___n0;
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)));
		return;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::SkipToByteBoundary()
extern "C"  void InputBuffer_SkipToByteBoundary_m3485783867 (InputBuffer_t333709416 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_bitBuffer_3();
		int32_t L_1 = __this->get_bitsInBuffer_4();
		__this->set_bitBuffer_3(((int32_t)((uint32_t)L_0>>((int32_t)((int32_t)((int32_t)((int32_t)L_1%(int32_t)8))&(int32_t)((int32_t)31))))));
		int32_t L_2 = __this->get_bitsInBuffer_4();
		int32_t L_3 = __this->get_bitsInBuffer_4();
		__this->set_bitsInBuffer_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)((int32_t)L_3%(int32_t)8)))));
		return;
	}
}
// System.Void Mapbox.IO.Compression.InputBuffer::.ctor()
extern "C"  void InputBuffer__ctor_m2565725442 (InputBuffer_t333709416 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bitBuffer_3(0);
		__this->set_bitsInBuffer_4(0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor()
extern "C"  void InvalidDataException__ctor_m3515379960 (InvalidDataException_t4045251031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidDataException__ctor_m3515379960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SR_GetString_m916456937(NULL /*static, unused*/, _stringLiteral1783318469, /*hidden argument*/NULL);
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor(System.String)
extern "C"  void InvalidDataException__ctor_m1905262010 (InvalidDataException_t4045251031 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mapbox.IO.Compression.InvalidDataException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void InvalidDataException__ctor_m840970042 (InvalidDataException_t4045251031 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
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
// MatchState Mapbox.IO.Compression.Match::get_State()
extern "C"  int32_t Match_get_State_m3115604967 (Match_t352475233 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_State(MatchState)
extern "C"  void Match_set_State_m427330782 (Match_t352475233 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_state_0(L_0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.Match::get_Position()
extern "C"  int32_t Match_get_Position_m750861285 (Match_t352475233 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_Position(System.Int32)
extern "C"  void Match_set_Position_m2298100821 (Match_t352475233 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_pos_1(L_0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.Match::get_Length()
extern "C"  int32_t Match_get_Length_m574477859 (Match_t352475233 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_len_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_Length(System.Int32)
extern "C"  void Match_set_Length_m4038612315 (Match_t352475233 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_len_2(L_0);
		return;
	}
}
// System.Byte Mapbox.IO.Compression.Match::get_Symbol()
extern "C"  uint8_t Match_get_Symbol_m266856729 (Match_t352475233 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_symbol_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Mapbox.IO.Compression.Match::set_Symbol(System.Byte)
extern "C"  void Match_set_Symbol_m2642040290 (Match_t352475233 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_symbol_3(L_0);
		return;
	}
}
// System.Void Mapbox.IO.Compression.Match::.ctor()
extern "C"  void Match__ctor_m279832417 (Match_t352475233 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Mapbox.IO.Compression.OutputBuffer::UpdateBuffer(System.Byte[])
extern "C"  void OutputBuffer_UpdateBuffer_m543847246 (OutputBuffer_t1331609326 * __this, ByteU5BU5D_t4116647657* ___output0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___output0;
		__this->set_byteBuffer_0(L_0);
		__this->set_pos_1(0);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BytesWritten()
extern "C"  int32_t OutputBuffer_get_BytesWritten_m2114384365 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_pos_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_FreeBytes()
extern "C"  int32_t OutputBuffer_get_FreeBytes_m679034642 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_byteBuffer_0();
		NullCheck(L_0);
		int32_t L_1 = __this->get_pos_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1));
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteUInt16(System.UInt16)
extern "C"  void OutputBuffer_WriteUInt16_m967747097 (OutputBuffer_t1331609326 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutputBuffer_WriteUInt16_m967747097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = OutputBuffer_get_FreeBytes_m679034642(__this, /*hidden argument*/NULL);
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral750194001, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = __this->get_byteBuffer_0();
		int32_t L_2 = __this->get_pos_1();
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		uint16_t L_5 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)(((int32_t)((uint8_t)L_5))));
		ByteU5BU5D_t4116647657* L_6 = __this->get_byteBuffer_0();
		int32_t L_7 = __this->get_pos_1();
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_0;
		uint16_t L_10 = ___value0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_10>>(int32_t)8))))));
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBits(System.Int32,System.UInt32)
extern "C"  void OutputBuffer_WriteBits_m1241582760 (OutputBuffer_t1331609326 * __this, int32_t ___n0, uint32_t ___bits1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutputBuffer_WriteBits_m1241582760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___n0;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral3718438015, /*hidden argument*/NULL);
		uint32_t L_1 = __this->get_bitBuf_2();
		uint32_t L_2 = ___bits1;
		int32_t L_3 = __this->get_bitCount_3();
		__this->set_bitBuf_2(((int32_t)((int32_t)L_1|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))))));
		int32_t L_4 = __this->get_bitCount_3();
		int32_t L_5 = ___n0;
		__this->set_bitCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		int32_t L_6 = __this->get_bitCount_3();
		V_0 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ce;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_8 = __this->get_byteBuffer_0();
		NullCheck(L_8);
		int32_t L_9 = __this->get_pos_1();
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))), (int32_t)L_9))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral750194001, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_10 = __this->get_byteBuffer_0();
		int32_t L_11 = __this->get_pos_1();
		V_1 = L_11;
		int32_t L_12 = V_1;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		int32_t L_13 = V_1;
		uint32_t L_14 = __this->get_bitBuf_2();
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)(((int32_t)((uint8_t)L_14))));
		ByteU5BU5D_t4116647657* L_15 = __this->get_byteBuffer_0();
		int32_t L_16 = __this->get_pos_1();
		V_1 = L_16;
		int32_t L_17 = V_1;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		int32_t L_18 = V_1;
		uint32_t L_19 = __this->get_bitBuf_2();
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_19>>8))))));
		int32_t L_20 = __this->get_bitCount_3();
		__this->set_bitCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)16))));
		uint32_t L_21 = __this->get_bitBuf_2();
		__this->set_bitBuf_2(((int32_t)((uint32_t)L_21>>((int32_t)16))));
	}

IL_00ce:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::FlushBits()
extern "C"  void OutputBuffer_FlushBits_m960086120 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_0040;
	}

IL_0003:
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_byteBuffer_0();
		int32_t L_1 = __this->get_pos_1();
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		uint32_t L_4 = __this->get_bitBuf_2();
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)(((int32_t)((uint8_t)L_4))));
		int32_t L_5 = __this->get_bitCount_3();
		__this->set_bitCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)8)));
		uint32_t L_6 = __this->get_bitBuf_2();
		__this->set_bitBuf_2(((int32_t)((uint32_t)L_6>>8)));
	}

IL_0040:
	{
		int32_t L_7 = __this->get_bitCount_3();
		V_1 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0003;
		}
	}
	{
		int32_t L_9 = __this->get_bitCount_3();
		V_2 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_008c;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_11 = __this->get_byteBuffer_0();
		int32_t L_12 = __this->get_pos_1();
		V_0 = L_12;
		int32_t L_13 = V_0;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_0;
		uint32_t L_15 = __this->get_bitBuf_2();
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)(((int32_t)((uint8_t)L_15))));
		__this->set_bitBuf_2(0);
		__this->set_bitCount_3(0);
	}

IL_008c:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void OutputBuffer_WriteBytes_m2091034451 (OutputBuffer_t1331609326 * __this, ByteU5BU5D_t4116647657* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutputBuffer_WriteBytes_m2091034451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = OutputBuffer_get_FreeBytes_m679034642(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___count2;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral1410917147, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_bitCount_3();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = ___byteArray0;
		int32_t L_5 = ___offset1;
		ByteU5BU5D_t4116647657* L_6 = __this->get_byteBuffer_0();
		int32_t L_7 = __this->get_pos_1();
		int32_t L_8 = ___count2;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, (RuntimeArray *)(RuntimeArray *)L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_pos_1();
		int32_t L_10 = ___count2;
		__this->set_pos_1(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)));
		goto IL_0058;
	}

IL_004c:
	{
		ByteU5BU5D_t4116647657* L_11 = ___byteArray0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		OutputBuffer_WriteBytesUnaligned_m3829570848(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteBytesUnaligned(System.Byte[],System.Int32,System.Int32)
extern "C"  void OutputBuffer_WriteBytesUnaligned_m3829570848 (OutputBuffer_t1331609326 * __this, ByteU5BU5D_t4116647657* ___byteArray0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0005:
	{
		ByteU5BU5D_t4116647657* L_0 = ___byteArray0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		uint8_t L_5 = V_1;
		OutputBuffer_WriteByteUnaligned_m646836464(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___count2;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::WriteByteUnaligned(System.Byte)
extern "C"  void OutputBuffer_WriteByteUnaligned_m646836464 (OutputBuffer_t1331609326 * __this, uint8_t ___b0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___b0;
		OutputBuffer_WriteBits_m1241582760(__this, 8, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputBuffer::get_BitsInBuffer()
extern "C"  int32_t OutputBuffer_get_BitsInBuffer_m926119116 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bitCount_3();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_0/(int32_t)8)), (int32_t)1));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Mapbox.IO.Compression.OutputBuffer/BufferState Mapbox.IO.Compression.OutputBuffer::DumpState()
extern "C"  BufferState_t2134702710  OutputBuffer_DumpState_m1895132228 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method)
{
	BufferState_t2134702710  V_0;
	memset(&V_0, 0, sizeof(V_0));
	BufferState_t2134702710  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_pos_1();
		(&V_0)->set_pos_0(L_0);
		uint32_t L_1 = __this->get_bitBuf_2();
		(&V_0)->set_bitBuf_1(L_1);
		int32_t L_2 = __this->get_bitCount_3();
		(&V_0)->set_bitCount_2(L_2);
		BufferState_t2134702710  L_3 = V_0;
		V_1 = L_3;
		goto IL_002c;
	}

IL_002c:
	{
		BufferState_t2134702710  L_4 = V_1;
		return L_4;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::RestoreState(Mapbox.IO.Compression.OutputBuffer/BufferState)
extern "C"  void OutputBuffer_RestoreState_m1323056036 (OutputBuffer_t1331609326 * __this, BufferState_t2134702710  ___state0, const RuntimeMethod* method)
{
	{
		BufferState_t2134702710  L_0 = ___state0;
		int32_t L_1 = L_0.get_pos_0();
		__this->set_pos_1(L_1);
		BufferState_t2134702710  L_2 = ___state0;
		uint32_t L_3 = L_2.get_bitBuf_1();
		__this->set_bitBuf_2(L_3);
		BufferState_t2134702710  L_4 = ___state0;
		int32_t L_5 = L_4.get_bitCount_2();
		__this->set_bitCount_3(L_5);
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputBuffer::.ctor()
extern "C"  void OutputBuffer__ctor_m1098497119 (OutputBuffer_t1331609326 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Mapbox.IO.Compression.OutputWindow::Write(System.Byte)
extern "C"  void OutputWindow_Write_m4205025380 (OutputWindow_t1296654655 * __this, uint8_t ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutputWindow_Write_m4205025380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bytesUsed_2();
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)L_0) < ((int32_t)((int32_t)32768)))? 1 : 0), _stringLiteral4250229837, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = __this->get_window_0();
		int32_t L_2 = __this->get_end_1();
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->set_end_1(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		uint8_t L_5 = ___b0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)L_5);
		int32_t L_6 = __this->get_end_1();
		__this->set_end_1(((int32_t)((int32_t)L_6&(int32_t)((int32_t)32767))));
		int32_t L_7 = __this->get_bytesUsed_2();
		__this->set_bytesUsed_2(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		return;
	}
}
// System.Void Mapbox.IO.Compression.OutputWindow::WriteLengthDistance(System.Int32,System.Int32)
extern "C"  void OutputWindow_WriteLengthDistance_m98394582 (OutputWindow_t1296654655 * __this, int32_t ___length0, int32_t ___distance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutputWindow_WriteLengthDistance_m98394582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_bytesUsed_2();
		int32_t L_1 = ___length0;
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) > ((int32_t)((int32_t)32768)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral1448386625, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_bytesUsed_2();
		int32_t L_3 = ___length0;
		__this->set_bytesUsed_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		int32_t L_4 = __this->get_end_1();
		int32_t L_5 = ___distance1;
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))&(int32_t)((int32_t)32767)));
		int32_t L_6 = ___length0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_6));
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_9 = __this->get_end_1();
		int32_t L_10 = V_1;
		G_B3_0 = ((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B3_0 = 0;
	}

IL_0053:
	{
		V_2 = (bool)G_B3_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_12 = ___length0;
		int32_t L_13 = ___distance1;
		V_3 = (bool)((((int32_t)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_15 = __this->get_window_0();
		int32_t L_16 = V_0;
		ByteU5BU5D_t4116647657* L_17 = __this->get_window_0();
		int32_t L_18 = __this->get_end_1();
		int32_t L_19 = ___length0;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_15, L_16, (RuntimeArray *)(RuntimeArray *)L_17, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_end_1();
		int32_t L_21 = ___length0;
		__this->set_end_1(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)));
		goto IL_00cb;
	}

IL_008f:
	{
		goto IL_00bb;
	}

IL_0092:
	{
		ByteU5BU5D_t4116647657* L_22 = __this->get_window_0();
		int32_t L_23 = __this->get_end_1();
		V_4 = L_23;
		int32_t L_24 = V_4;
		__this->set_end_1(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		int32_t L_25 = V_4;
		ByteU5BU5D_t4116647657* L_26 = __this->get_window_0();
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		NullCheck(L_26);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)L_30);
	}

IL_00bb:
	{
		int32_t L_31 = ___length0;
		int32_t L_32 = L_31;
		___length0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1));
		V_5 = (bool)((((int32_t)L_32) > ((int32_t)0))? 1 : 0);
		bool L_33 = V_5;
		if (L_33)
		{
			goto IL_0092;
		}
	}
	{
	}

IL_00cb:
	{
		goto IL_0124;
	}

IL_00ce:
	{
		goto IL_0114;
	}

IL_00d1:
	{
		ByteU5BU5D_t4116647657* L_34 = __this->get_window_0();
		int32_t L_35 = __this->get_end_1();
		V_4 = L_35;
		int32_t L_36 = V_4;
		__this->set_end_1(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		int32_t L_37 = V_4;
		ByteU5BU5D_t4116647657* L_38 = __this->get_window_0();
		int32_t L_39 = V_0;
		int32_t L_40 = L_39;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		NullCheck(L_38);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)L_42);
		int32_t L_43 = __this->get_end_1();
		__this->set_end_1(((int32_t)((int32_t)L_43&(int32_t)((int32_t)32767))));
		int32_t L_44 = V_0;
		V_0 = ((int32_t)((int32_t)L_44&(int32_t)((int32_t)32767)));
	}

IL_0114:
	{
		int32_t L_45 = ___length0;
		int32_t L_46 = L_45;
		___length0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1));
		V_6 = (bool)((((int32_t)L_46) > ((int32_t)0))? 1 : 0);
		bool L_47 = V_6;
		if (L_47)
		{
			goto IL_00d1;
		}
	}
	{
	}

IL_0124:
	{
		return;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyFrom(Mapbox.IO.Compression.InputBuffer,System.Int32)
extern "C"  int32_t OutputWindow_CopyFrom_m1927387289 (OutputWindow_t1296654655 * __this, InputBuffer_t333709416 * ___input0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___length1;
		int32_t L_1 = __this->get_bytesUsed_2();
		int32_t L_2 = Math_Min_m3468062251(NULL /*static, unused*/, L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_1)), /*hidden argument*/NULL);
		InputBuffer_t333709416 * L_3 = ___input0;
		NullCheck(L_3);
		int32_t L_4 = InputBuffer_get_AvailableBytes_m2405312377(L_3, /*hidden argument*/NULL);
		int32_t L_5 = Math_Min_m3468062251(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		___length1 = L_5;
		int32_t L_6 = __this->get_end_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_6));
		int32_t L_7 = ___length1;
		int32_t L_8 = V_1;
		V_2 = (bool)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		InputBuffer_t333709416 * L_10 = ___input0;
		ByteU5BU5D_t4116647657* L_11 = __this->get_window_0();
		int32_t L_12 = __this->get_end_1();
		int32_t L_13 = V_1;
		NullCheck(L_10);
		int32_t L_14 = InputBuffer_CopyTo_m1507984879(L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_18 = V_0;
		InputBuffer_t333709416 * L_19 = ___input0;
		ByteU5BU5D_t4116647657* L_20 = __this->get_window_0();
		int32_t L_21 = ___length1;
		int32_t L_22 = V_1;
		NullCheck(L_19);
		int32_t L_23 = InputBuffer_CopyTo_m1507984879(L_19, L_20, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_23));
	}

IL_0067:
	{
		goto IL_0080;
	}

IL_006a:
	{
		InputBuffer_t333709416 * L_24 = ___input0;
		ByteU5BU5D_t4116647657* L_25 = __this->get_window_0();
		int32_t L_26 = __this->get_end_1();
		int32_t L_27 = ___length1;
		NullCheck(L_24);
		int32_t L_28 = InputBuffer_CopyTo_m1507984879(L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
	}

IL_0080:
	{
		int32_t L_29 = __this->get_end_1();
		int32_t L_30 = V_0;
		__this->set_end_1(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30))&(int32_t)((int32_t)32767))));
		int32_t L_31 = __this->get_bytesUsed_2();
		int32_t L_32 = V_0;
		__this->set_bytesUsed_2(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32)));
		int32_t L_33 = V_0;
		V_4 = L_33;
		goto IL_00a7;
	}

IL_00a7:
	{
		int32_t L_34 = V_4;
		return L_34;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_FreeBytes()
extern "C"  int32_t OutputWindow_get_FreeBytes_m172522004 (OutputWindow_t1296654655 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bytesUsed_2();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_0));
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::get_AvailableBytes()
extern "C"  int32_t OutputWindow_get_AvailableBytes_m3359822819 (OutputWindow_t1296654655 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bytesUsed_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Mapbox.IO.Compression.OutputWindow::CopyTo(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t OutputWindow_CopyTo_m2475356236 (OutputWindow_t1296654655 * __this, ByteU5BU5D_t4116647657* ___output0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutputWindow_CopyTo_m2475356236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___length2;
		int32_t L_1 = __this->get_bytesUsed_2();
		V_3 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = __this->get_end_1();
		V_0 = L_3;
		int32_t L_4 = __this->get_bytesUsed_2();
		___length2 = L_4;
		goto IL_0039;
	}

IL_0021:
	{
		int32_t L_5 = __this->get_end_1();
		int32_t L_6 = __this->get_bytesUsed_2();
		int32_t L_7 = ___length2;
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), (int32_t)L_7))&(int32_t)((int32_t)32767)));
	}

IL_0039:
	{
		int32_t L_8 = ___length2;
		V_1 = L_8;
		int32_t L_9 = ___length2;
		int32_t L_10 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10));
		int32_t L_11 = V_2;
		V_4 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_13 = __this->get_window_0();
		int32_t L_14 = V_2;
		ByteU5BU5D_t4116647657* L_15 = ___output0;
		int32_t L_16 = ___offset1;
		int32_t L_17 = V_2;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32768), (int32_t)L_14)), (RuntimeArray *)(RuntimeArray *)L_15, L_16, L_17, /*hidden argument*/NULL);
		int32_t L_18 = ___offset1;
		int32_t L_19 = V_2;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19));
		int32_t L_20 = V_0;
		___length2 = L_20;
	}

IL_0069:
	{
		ByteU5BU5D_t4116647657* L_21 = __this->get_window_0();
		int32_t L_22 = V_0;
		int32_t L_23 = ___length2;
		ByteU5BU5D_t4116647657* L_24 = ___output0;
		int32_t L_25 = ___offset1;
		int32_t L_26 = ___length2;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), (RuntimeArray *)(RuntimeArray *)L_24, L_25, L_26, /*hidden argument*/NULL);
		int32_t L_27 = __this->get_bytesUsed_2();
		int32_t L_28 = V_1;
		__this->set_bytesUsed_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28)));
		int32_t L_29 = __this->get_bytesUsed_2();
		Debug_Assert_m2013276412(NULL /*static, unused*/, (bool)((((int32_t)((((int32_t)L_29) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral2684151561, /*hidden argument*/NULL);
		int32_t L_30 = V_1;
		V_5 = L_30;
		goto IL_00a5;
	}

IL_00a5:
	{
		int32_t L_31 = V_5;
		return L_31;
	}
}
// System.Void Mapbox.IO.Compression.OutputWindow::.ctor()
extern "C"  void OutputWindow__ctor_m4028030521 (OutputWindow_t1296654655 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutputWindow__ctor_m4028030521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_window_0(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32768))));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.String Mapbox.IO.Compression.SR::GetString(System.String)
extern "C"  String_t* SR_GetString_m916456937 (RuntimeObject * __this /* static, unused */, String_t* ___p0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___p0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
